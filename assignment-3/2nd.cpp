#include <bits/stdc++.h>
using namespace std;
void printSequence(int n, int k, vector<int>&sequence, int start){
    if(sequence.size()==k){

    for (int num : sequence) {
            cout << num << " ";
        }
        cout<<endl;
        return;
     }
}
    for(int i=start; i<=n; i++){
        sequence.push_back(i);
        printSequence(n,k,sequence,start+1);
        sequence.pop_back();
    }
}
int main(){
    int n = 5; //first 5 natural numbers
    int k=3; // lenght of sequence
    vector<int>sequence;
    printSequence(n,k,sequence,1);
    return 0;

}