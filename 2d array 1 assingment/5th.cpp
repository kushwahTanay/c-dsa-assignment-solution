#include<iostream>
#include<climits>
using namespace std;
int main(){
   int n;
   cout<<"enter the no. of rows :";
   cin>>n;
   int m;
   cout<<"enter the numbers of columns :";
   cin>>m;
   int arr[n][m];
   for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        cin>>arr[i][j];
    }
   }
  int maxSum = INT_MIN;
  int maxRow = -1;
  for(int i=0; i<n; i++){
    int sum = 0;
    for(int j=0; j<m; j++){
        sum+=arr[i][j];
    }
    if(sum>maxSum) {
        maxSum = sum;
        maxRow = i;
    }
  
  }
  cout<<maxSum<<" "<<maxRow;
  




}