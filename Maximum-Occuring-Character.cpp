/*
Maximum Occuring Character


Given a string str of lowercase alphabets. The task is to find the maximum occurring character in the string str. 
If more than one character occurs the maximum number of time then print the lexicographically smaller character.

Example 1:
Input:
str = testsample
Output: e
Explanation: e is the character which
is having the highest frequency.


Example 2:
Input:
str = output
Output: t
Explanation:  t and u are the characters
with the same frequency, but t is
lexicographically smaller.


Your Task:
The task is to complete the function getMaxOccuringChar() which returns the character which is most occurring.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(Number of distinct characters).
Note: N = |s|

Constraints:
1 ≤ |s| ≤ 100


*/
#include<iostream>
#include<string>
using namespace std;
char maxOccCharacter(string s){
    int arr[26]={0}; //make an array to mark alphabets (making according to index and initilizing with all data 0 )
  
   
    for (int i = 0 ; i < s.length() ; i++ ){
        char ch = s[i];      
        int number = 0;
        number = ch -'a';    //converting character into integer for marking
        arr[number]++;       // updating the integer array according to occuring of character 
    }

    //calculating the maximum number in array
    int max = -1 , ans = 0;
    for (int i = 0 ; i < 26 ; i++){
        if (max < arr[i]){
            ans = i;
            max=arr[i];
        }
    }

    //calculating the marked character by the index of array with maximum value
    char finalans = 'a' + ans;
    return finalans;

}
int main (){
    string s;
    cout << "Enter the string : ";
    cin >> s;
    cout <<"The maximum Occurance of letter is : "<<maxOccCharacter(s) <<endl ;
    return 0;

}