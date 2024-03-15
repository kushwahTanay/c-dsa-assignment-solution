#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
bool isAnagram(string s, string t){
    if(s.size()!=t.size()) return false;

    int cnt[26] = {0};
    for(int i=0; i<s.size(); i++){
        cnt[s[i]-'a']++;
        cnt[t[i]-'a']--;
    }
    for(int i=0; i<26; i++){
        if(cnt[i] != 0){
            return false;
        }
    }
    return true;
}
int main(){
 string s,t;
 cin>>s>>t;
 isAnagram(s,t)?cout<<"yes":cout<<"no";
  
}