#include<iostream>
using namespace std;
int partition(int arr[] , int si, int ei){
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
int kthSmallest(int arr[] , int si , int ei , int k){
    int Pidx = partition(arr,si,ei);
    if(Pidx+1 == k) return arr[Pidx];
    else if(Pidx+1 < k) return kthSmallest(arr,Pidx+1,ei,k);
    else return kthSmallest(arr,si,Pidx-1,k);
   
   
}
int main(){
    int arr[] = {51,12,8,2,7,6,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int k = 5;
    cout<<kthSmallest(arr,0,n-1,k);

}