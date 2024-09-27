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
    int arr[26]={0};
  
   
    for (int i = 0 ; i < s.length()-1 ; i++ ){
        char ch = s[i];
        int number = 0;
        number = ch -'a';
        arr[number]++;
    }
    int max = -1 , ans = 0;
    for (int i = 0 ; i < 26 ; i++){
        if (max < arr[i]){
            ans = i;
            max=arr[i];
        }
    }
    char finalans = 'a' + ans;
    return finalans;

}
int main (){
    string s;
    cin >> s;
    cout << s.length()<< endl<<maxOccCharacter(s) <<endl ;
    return 0;

}