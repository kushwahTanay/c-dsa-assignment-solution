#include<iostream>
#include<vector>
using namespace std;
int printIdx(vector<int>&arr,int ele,int idx,int n){
   if(idx == n){
    return -1;
   }
   if(arr[idx]==ele){
    return idx;
   }
   return printIdx(arr,ele,idx+1,n);
}   
int main(){
int n;
cout<<"enter size of array :";
cin>>n;
vector<int>arr(n);
for(int i=0; i<n; i++){
    cin>>arr[i];
}
int ele;
cout<<"enter key :";
cin>>ele;
cout<<"ele present at "<<" "<<printIdx(arr,ele,0,n)<<" "<<"idx";
}