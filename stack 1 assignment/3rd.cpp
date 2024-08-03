// What does this function do ?
//     Prints binary representation of n in reverse order
//     Prints binary representation of n
//     Print the value of Log n
//     Print the value of Log n in reverse order

#include<iostream>
#include<stack>
using namespace std;
void fun(int n){
stack<int> s;
while (n > 0){
s.push(n%2);
n = n/2;
}
while (!s.empty()){
cout<<s.top();
s.pop();
}
}
int main(){
    fun(10);
}

// ans =  Prints binary representation of n