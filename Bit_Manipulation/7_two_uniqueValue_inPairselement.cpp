#include<iostream>
using namespace std;

// find the 2 unique value in the set of pair numbers 
int main(){
    int n=8;
    int arr[n]={2,4,2,14,3,7,7,3};

    // find the XOR value.
    int value=0;
    for(int i =0;i<n;i++){
        value = value ^ arr[i];
    }
    int rightmost_set=(value&value-1) ^ value;

    int buc1=0; // store which have 1 at rightmost_set position
    int buc2=0; // store which have not set at rightmost_set position.

    for(int i =0;i<n;i++){
        if (arr[i]&rightmost_set){ // to check it contain 1 at rightmost_set position or not.
        buc1=buc1^arr[i];
        }
        else{
            buc2=buc2^arr[i];
        }
    }

    cout<<"value which is duplicates are "<<buc1<<" and "<<buc2<<endl;


}