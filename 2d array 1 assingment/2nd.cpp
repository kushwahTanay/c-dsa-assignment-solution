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
  
   int b[m][n];
   cout<<"enter the value of second matrix ->";
   for(int i=0; i<m; i++){
    for(int j=0; j<n; j++){
        cin>>b[i][j];
    }
   }
   cout<<endl;
   for(int i=0; i<m; i++){
    for(int j=0; j<n; j++){
      b[i][j] += arr[i][j];
    }
   }
     for(int i=0; i<m; i++){
    for(int j=0; j<n; j++){
        cout<<b[i][j]<<" ";
    }
    cout<<endl;
   }




}