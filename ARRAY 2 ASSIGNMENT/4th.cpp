#include<iostream>
using namespace std;
int main(){
    int arr[5] = {2,3,4,5,5,};
    int sumeven=0;
    int sumodd = 0;
    for(int i=0; i<5; i++){
        if(i%2==0){
            sumeven+=arr[i];
        }
        else
           sumodd+=arr[i];
    }
    cout<<"difference between sum of even idices and sum of odd indices is"<<" "<<(sumeven-sumodd)<<endl;
    return 0;
}