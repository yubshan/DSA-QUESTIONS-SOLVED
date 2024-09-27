/*
PERMUTATION IN STRING 

Given two strings s1 and s2, return true if s2 contains a 
permutation
 of s1, or false otherwise.

In other words, return true if one of s1's permutations is the substring of s2.

 

Example 1:

Input: s1 = "ab", s2 = "eidbaooo"
Output: true
Explanation: s2 contains one permutation of s1 ("ba").
Example 2:

Input: s1 = "ab", s2 = "eidboaoo"
Output: false
 

Constraints:

1 <= s1.length, s2.length <= 104
s1 and s2 consist of lowercase English letters.*/



#include<iostream>
#include<string>
using namespace std;

/*checking permutation by interger array here how for example s1 = ab s2 = eidbaoo
1 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 (arr's array)
count array and value of i in s2
0 0 0 0 1 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
2

0 0 0 1 0 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
3

0 1 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
4

0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0 0 0
5

1 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0

*/


bool checkEqual(int arr[26], int count[26]){
    for (int i = 0 ; i< 26 ; i++){
        if (arr[i] != count[i]){
            return 0;
        }
    }
    return 1;
}


bool checkInclusion(string s1 , string s2){
    int arr[26] ={0};
     //marking all character of s1 with interger array and incrementing array according to character marks (by index marking)
    for (int i = 0 ; i<s1.length() ; i++){
        int number = s1[i] - 'a';
        arr[number]++;
    }

    // process of marking character of s2 with intereger array by diving into windown of size equal to s1.length() and
    //incrementing windown one by one until match found or s2 string ends . 
    int i = 0;
    int pair = s1.length();
    int count[26]={0};
    //code for first window and incrementing arrray 
    while(i<pair && i<s2.length()){
        int number = s2[i] - 'a';
        count[number]++;
        i++;
       }
       //checking if it's equal
        if (checkEqual(arr , count)){
            return 1;
        }
        //if not equal then checking for next windows incrementing and decrementing windown element one by one in array
        while (i<s2.length()){
            int newchar = s2[i];
            int number = s2[i] - 'a';
            count[number]++;
            
             int oldchar = s2[i-pair];
             number = s2[i-pair] - 'a';
             count[number]--;
             i++;
        //returns true when matches with s1
            if(checkEqual(arr, count)){
                return 1;
             }
        
        }
   // returns false when mismatch 
    return 0;
}
int main(){
    string s1, s2;
    cout <<" Enter your string s1 :";
    getline(cin, s1);
    cout <<" Enter your string s2 :";
    getline(cin, s2);
    cout << "String s2 contains permutation of s1 : "<< ((checkInclusion(s1,s2) == 1) ? "yes" : "no" )<< endl;
    return 0;

}