#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "i was a badminton player";
    int n = s.size();
    string word="";
    string maxword = "";
    for(int  i=0; i<n; i++){
           if(s[i] == ' '){
            maxword = max(word , maxword);
            word = "";
           }
           else word += s[i];

    }
     maxword = max(word , maxword);    
    cout<<maxword;
}