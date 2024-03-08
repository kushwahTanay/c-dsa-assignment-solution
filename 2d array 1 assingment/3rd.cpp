#include<iostream>
using namespace std;
int main(){
   int m;
   cout<<"enter the no. of rows :";
   cin>>m;
   int n;
   cout<<"enter the numbers of columns :";
   cin>>n;
   int arr[m][n];
   for(int i=0; i<m; i++){
    for(int j=0; j<n; j++){
        cin>>arr[i][j];
    }
   }
   cout<<endl;
  int l1,r1,l2,r2;
  cout<<"enter 1st coordinate value :";
  cin>>l1>>r1;
  cout<<endl;
  cout<<"enter 2nd coordinate value :";
  cin>>l2>>r2;
  cout<<endl;

  int sum=0;
  for(int i=l1; i<=l2; i++){
    for(int j=r1; j<=r2; j++){
        sum += arr[i][j];
    }
  }
  cout<<sum;




  
  





  




}