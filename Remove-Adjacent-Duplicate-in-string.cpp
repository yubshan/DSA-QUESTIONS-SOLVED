#include<iostream>
#include<string>
using namespace std;
string removeDuplicates(string s) {
        for (int i =0 ; i < s.length() ; i++){
            if (s[i] == s[i+1]){
                cout<<i<< endl<<"entered" << endl << s << endl;
                s.erase(i,i+1);
                cout<<"erased" << endl << s << endl;
                i--;
                cout<<i<<endl;
            }
            else if(s[i] == s[i-1]){
                cout <<endl;
                cout<<i<< endl << "entered non" << endl << s << endl;
                s.erase(i-1, i+1);
                cout<<"erased2" << endl << s << endl;
            }

            
        }
        return s;
    }
int main(){
    string s;
    cin >>s;
    cout << s.erase(0,1);
    // cout << "Your final answer is : " << removeDuplicates(s)<< endl; 
    return 0;
}