#include<iostream>
#include<string>
using namespace std;
string removeDuplicates(string s) {
    int i = 0 ;
    while ( i < s.length()){
        if (i<s.length()-1 && s[i] == s[i+1]){
                s.erase(i,2);
                i--;
            }
            else{
            i++;
            }
    }
        return s;
    }
int main(){
    string s;
    cin >>s;
    cout << "Your final answer is : " << removeDuplicates(s)<< endl; 
    return 0;
}