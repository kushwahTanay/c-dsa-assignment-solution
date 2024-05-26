#include<iostream>
using namespace std;
int partition(int arr[], int si , int ei){
     int pivotElement = arr[(si+ei)/2];
    int count = 0;
    for(int i = si; i<=ei ; i++){
        if(i==(si+ei)/2) continue;
        if(arr[i]<=pivotElement) count++;
    }
    int pivotIdx = count+si;
    swap(arr[(si+ei)/2],arr[pivotIdx]);
    int i = si;
    int j = ei;
    while(i<pivotIdx && j>pivotIdx){
        if(arr[i]<=pivotElement) i++;
        if(arr[j]>pivotElement) j--;
        else if(arr[i]>pivotElement && arr[j]<=pivotElement){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return pivotIdx;
}
void quickSort(int arr[] , int si , int ei){
    if(si >= ei) return;
    int pIdx = partition(arr,si,ei);
    quickSort(arr,si,pIdx-1);
    quickSort(arr,pIdx+1,ei);
}
int main(){
    int arr[] = {3,8,6,7,5,9,10};
    int n = sizeof(arr)/sizeof(arr[0]);

//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
//   cout<<endl;
    quickSort(arr, 0 , n-1);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}