#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"enter no of rows and cols :";
    cin>>n;
    int arr[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    //transpose of matrix
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
           swap(arr[i][j] , arr[j][i]);
        }
        cout<<endl;
    }
    //reversing each column
    for(int j=0;j<n;j++){
for(int i=0;i<n/2;i++){
swap(arr[i][j] , arr[n-i-1][j]);
}
}
//ptinting 
  for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
           cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    

      
}