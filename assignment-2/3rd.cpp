#include<iostream>
#include<vector>
using namespace std;
int countAndsay(int n){
    if(n==1) return 1;
    return countAndsay(n-1);
}
int main(){
   int n;
   cin>>n;
   cout<<countAndsay(n);
}