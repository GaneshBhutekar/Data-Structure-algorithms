#include<iostream>
using namespace std;

void input_array(int arr[],int n){
    cout<<"enter the value of the array"<<endl;
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
}

bool binary_search(int arr[],int size,int element){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==element){
            return true;
        }
        if (arr[mid]>element){
            end=mid-1;
        }
        if (arr[mid]<element){
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return false;
}


bool recursive_binarSearch(int arr[],int start,int end,int element){
    int mid=start+(end-start)/2;
    if(start>end){
        return false;
    }
    if(arr[mid]==element){
        return true;
    }

    if (arr[mid]>element){
        return recursive_binarSearch(arr,start,mid-1,element);
    }
    return recursive_binarSearch(arr,mid+1,end,element);
    //  one return statement should be in else condition or without any condition.


}
int main(){
    int n;
    cout<<"size of the array"<<endl;
    cin>>n;
    int *arr=new int[n];
    input_array(arr,n);
    cout<<"enter the element: "<<endl;
    int element;
    cin>>element;
    if(binary_search(arr,n,element)){
        cout<<"present"<<endl;
    }
    else{
        cout<<"not present"<<endl;
    }

    int start=0;
    int end=n-1;
    if (recursive_binarSearch(arr,start,end,element)){
        cout<<"yes it is present"<<endl;
    }
    else{
        cout<<"not present"<<endl;
    }

}