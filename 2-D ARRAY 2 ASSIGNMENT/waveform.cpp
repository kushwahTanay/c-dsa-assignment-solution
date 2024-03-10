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
   //printing the wave form
   for(int j=0; j<n; j++){
    if(j%2==0){
        for(int i=n-1; i>=0; i--){
            cout<<arr[i][j]<<" ";
        }
    }
    else{
        for(int i=0; i<n; i++){
            cout<<arr[i][j]<<" ";
        }
    }
   }

      
}