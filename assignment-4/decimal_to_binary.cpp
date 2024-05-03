#include<iostream>
#include<vector>
using namespace std;
vector<int> decimal_to_binary(int n){
    vector<int>binary;
    if(n==0){
        binary.push_back(0);
    }
    while(n>0){
        int reminder = n%2;
        binary.push_back(reminder);
        n/=2;
    }
     reverse(binary.begin(), binary.end());
     return binary;
}
int main(){
    int decimal;
    cout<<"enter the decimal number to convert into binary";
    cin>>decimal;
    vector<int>binary = decimal_to_binary(decimal);

    cout << "Binary representation: ";
    for (int digit : binary) {
        cout << digit;
    }
    cout << endl;
    
    return 0;


}