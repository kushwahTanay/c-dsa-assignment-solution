// You have two stack and 1,2,3,4,5 values and you have pushed all these values to S1 (in the order
// 1,2,3,4,5) and then you took 2 elements from top and inserted into S2 , then pop 1 element from S1
// and then take top of S2 and insert into S1. What is the second top element in S1.
#include<iostream>
#include<stack>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5};
    stack<int>s1;
    stack<int>s2;
    for(int i=0; i<5; i++){
        s1.push(arr[i]);
    }
    
    while(s1.size()>3){
        s2.push(s1.top());
        s1.pop();
    }
    
    // while(!s2.empty()){
    //     cout<<s2.top()<<endl;
    //     s2.pop();
    // }

    s1.pop();
    s1.push(s2.top());

    s1.pop();
    cout<<"2nd top ele is "<<s1.top()<<endl;
   
}