// Remove kth element from top in a given stack.
// Hint : Use another stack, just like insertion question.

#include<iostream>
#include<stack>
using namespace std;
int main(){
   stack<int>st;
   stack<int>tt;
   st.push(10);
   st.push(20);
   st.push(23);
   st.push(44);
   st.push(11); // kth element
   st.push(38);
   st.push(33);

   int k = 3;
   for(int i=1; i<k; i++){
    tt.push(st.top());
    st.pop();
   }

   st.pop();
   while(!tt.empty()){
    st.push(tt.top());
    tt.pop();
   }

   while(!st.empty()){
    cout<<st.top()<<endl;
    st.pop();
   }
   
   
}