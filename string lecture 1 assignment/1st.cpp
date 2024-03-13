#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string x ;
    getline(cin,x);
    cout<<x<<endl;
    int n = x.length();
    int i=0;
    while(x[i]!='\0'){
        if(i%2 != 0) x[i]='#';
        i++;
    }
    cout<<x;
    

}