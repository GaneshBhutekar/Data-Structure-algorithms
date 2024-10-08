#include<iostream>
using namespace std;
void input_array(int arr[],int size){
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}


int peak_element(int arr[],int start,int end){
    if (start>end){
        return -1;
    }
    int mid =start+(end-start)/2;
    if (arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1] ){
        cout<<"where mid index is "<<mid<<endl;
        return arr[mid];
    }
    if (arr[mid]<arr[mid-1] && arr[mid]>arr[mid+1]){
        return peak_element(arr,start,mid-1);
    }
    else{
        return peak_element(arr,mid+1,end);
    }
}
int main(){
    int n;
    cin>>n;
    int *arr=new int[n];
    cout<<"enter the element :"<<endl;
    input_array(arr,n);
    int start=0;
    int end=n-1;
    int ans = peak_element(arr,start,end);
    cout<< ans <<endl;

}