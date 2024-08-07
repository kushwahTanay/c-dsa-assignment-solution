#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>&arr, int low, int mid, int high ){
    vector<int>temp;
    int left = low;
    int right = mid+1;
    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
 }
  while(left<=mid){
            temp.push_back(arr[left]);
              left++;
        }
        while(right<=high){
            temp.push_back(arr[right]);
               right++;
        }
        for(int i=low; i<=high; i++){
            arr[i] = temp[i-low];
        }

}
int countInverse(vector<int> &arr, int low, int mid, int high ){
         int count = 0;
         int right = mid+1;
         for(int i=low; i<=mid; i++){
            while(right <= high && arr[i] > 2*arr[right]) right++;
            count = count+(right-(mid+1));
         }
         return count;
}
int mergeS(vector<int>&arr,int low, int high){
     int count = 0;
     if(low==high) return count;
     int mid = (low+high)/2;
     count += mergeS(arr,low,mid);
    count += mergeS(arr,mid+1,high);
     count += countInverse(arr,low,mid,high);
     merge(arr,low,mid,high);
     return count;
}
int mergeSort(vector<int>&arr){
    int n = arr.size();
   
  return mergeS(arr,0,n-1);
   
    
}

   int main() {
    vector<int> arr = {2,4,3,5,1};
    int n = arr.size();
   int count = mergeSort(arr);
   cout<<"number of reverse pairs is"<<" "<<count<<" ";
   return 0;
    
    
}