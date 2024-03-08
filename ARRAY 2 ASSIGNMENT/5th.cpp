#include<iostream>
using namespace std;
int main(){
    int arr[6] = {1,2,3,4,5,6};
    for(int i=0; i<6; i++){
        if(i%2==0){
            arr[i]+=10;
        }
        else
        arr[i]*=2;
     cout<<arr[i]<<" ";
    }
   
    return 0;
}