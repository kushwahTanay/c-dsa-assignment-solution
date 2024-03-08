#include <iostream>
using namespace std;
int printtriplate(int a[], int n, int x){
    int count  = 0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            for(int k=j+1; k<n; k++){
                if(a[i]+a[j]+a[k]==x) 
                cout<<a[i]" "a[j]" "a[k];
            }
        }
           
    }
   
}
int main(){
    int a[] = {2,3,4,1,6,2,7};
     int n = sizeof(a)/sizeof(a[0]);
    int x = 4;
   
    printtriplate(a,x,n);
    return 0;
}