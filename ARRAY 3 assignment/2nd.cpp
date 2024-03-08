#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number to find factorial :";
    cin>>n;
    int fact = 1;
    if(n<0){
        cout<<"could not find factorial ";
    }
    else{
        for(int i=1;i<=n; i++){
            fact = fact*i;
        }
        cout<<fact;
    }
    cout<<endl;
}