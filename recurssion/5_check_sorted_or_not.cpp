#include<iostream>
using namespace std;


void input_array(int arr[],int n){
    cout<<"enter the array"<<endl;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
}

bool sorted(int arr[],int n){
    if (n==1||n==0){ // n==0 because if input is 0 size array then it should be sorted right?
        return true;
    }
    if (arr[n-1]<arr[n-2]){
        return false;
    }
    return sorted(arr,n-1);
}

// with the help of pointer recusrsion function will be.

bool issorted(int arr[],int n){
    if (n==1||n==0){ // n==0 because if input is 0 size array then it should be sorted right?
        return true;
    }
    if (arr[0]>arr[1]){
        return false;
    }
    return issorted(arr+1,n-1); // here starting element of the array will increase.
}


int main(){
    int n;
    cout<<"size of array"<<endl;
    cin>>n;
    int* arr=new int[n];
    input_array(arr,n);
    // use of pointer ....
    if(issorted(arr,n)){
        cout<<"yes it is sorted"<<endl;
    }
    else{
        cout<<"no it is not sorted"<<endl;
    }
    

    // without using pointer..
    if(sorted(arr,n)){
        cout<<"yes it is sorted"<<endl;
    }
    else{
        cout<<"no it is not sorted"<<endl;
    }

}