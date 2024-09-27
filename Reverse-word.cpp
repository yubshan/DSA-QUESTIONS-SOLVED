/*
Reverse word in a string |||

Given a character array s , reverse the order of the words
A word is defined as a sequence of non-space character. The wrods in s will be sepersated by a single space
Your code must solve the problem in-place, i.e : without alloacting extra space

Example 1
Intput s = "the sky is blue"
Output : blue is sky the
*/ 


#include<iostream>
#include <string>
using namespace std;
void reverseWord (string s ,int initial, int count){
    int st = initial;
    int e = count-1;
     while (st <= e){
            swap(s[st], s[e]);
            st++;
            e--;
     }
}
void findWord (string s){
    int  j =0 ;
    for ( int i = 0 ; i < s[i] != '\0' ; i++ ){
        if (s[i] == ' ' || s[i] == '\0'){
            reverseWord(s , j , i );
            j = i + 1 ;     
        }
    }
}
int main(){
  string s = "";
  cout << "Enter the string." << endl;
  cin >> s;
  findWord(s);
  cout << "The reversed string is : " << s << endl;
  return 0; 

}
