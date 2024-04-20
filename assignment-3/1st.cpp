#include<iostream>
using namespace std;
int reversedNum(int num, int reversed_num){
 // base case
 if(num==0) {
    return reversed_num;
 }
 int last_digit = num%10;
 reversed_num = reversed_num*10+last_digit;
 return reversedNum(num/10 , reversed_num);
}
int main(){
    int num;
    cout<<"enter the number to reverse :";
    cin>>num;
    int reversed_num = 0;
    cout<<reversedNum(num,reversed_num);
}
    