#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string x ;
    getline(cin,x);
    int count = 0;
    int i=0;
    while(x[i]!='\0'){
        if(x[i]=='a'||x[i]=='e'||x[i]=='i'||x[i]=='o'||x[i]=='u'){
            count++;
        }
        i++;
    }
    cout<<count;
    

}