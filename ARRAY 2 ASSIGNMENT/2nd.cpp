#include<iostream>
#include<climits>
using namespace std;
int main(){
  int a[6];
  int first,second,third;
  cout<<"enter elements :";
  cin>>a;
  for(int i=0; i<6; i++){
    cout<<a[i];
  }
  cout<<endl;
 third = second = first = INT_MIN;

  for(int i=0; i<6; i++){
    if(a[i]>first){
        third = second;
        second = first;
        first = a[i];
    }
    else if(a[i]>second){
        third = second;
        second = a[i];
    }
    else if(a[i]>third){
        third = a[i];
    }

  }
  cout<<first<<" "<<second<<" "<<third<<endl;
  return 0;


}