#include<iostream>
using namespace std;
bool powerof2(int n){
    if(n==1) return true;
    if(n%2 != 0) return false;
    return powerof2(n/2);
}
int main(){
    int n;
    cin>>n;
   bool result = powerof2(n);
   if(result){
    cout<<"yes it is a power of 2";
   }
   else cout<<"not a power of 2";
}