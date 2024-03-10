#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of rows :";
    cin>>n;
    int m;
    cout<<"enter the number of cols :";
    cin>>m;
    int arr[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }
    // printing diagonals of a square matrix
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if((i+j==n-1) or (i==j)) cout<<arr[i][j]<<" ";
            else cout<<" ";
        }
        cout<<endl;
    }
    
       
    

}