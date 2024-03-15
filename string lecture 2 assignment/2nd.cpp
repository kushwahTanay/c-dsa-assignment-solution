#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
 string str;
 cin>>str;
 char largest = '!';
 char secondlargest = '!';
 for(int i=0; i<str.length(); i++){
    if(str[i]>largest){
          secondlargest = largest;
           largest = str[i];
    }
    else if(str[i]>secondlargest && str[i]!=largest){
             secondlargest = str[i];
    }
 }
 if(secondlargest == '!')cout<<"no second largest element found";
 cout<<secondlargest;



    
}