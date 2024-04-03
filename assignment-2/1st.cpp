#include<iostream>
#include<vector>
using namespace std;
void printReverse(vector<int>& arr, int currentidx, int n){
    if(currentidx == n) return;
    printReverse(arr,currentidx+1,n);
    cout<<arr[currentidx]<<" ";
}
int main(){
   int n;
   cin>>n;
   vector<int>arr(n);
   for(int i=0; i<n; i++){
       cin>>arr[i];
   }
  printReverse(arr,0,n);
  return 0;
}