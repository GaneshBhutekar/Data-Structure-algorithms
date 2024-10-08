#include<iostream>
using namespace std;
void input_array(int arr[],int size){
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}


int find_element(int arr[],int start,int end,int key){
    if (start>end){
        return -1;
    }
    int mid = start+(end-start)/2;
    if (arr[mid]==key){
        return mid;
    }
    if (arr[mid]>key){
        end=mid-1;
        return find_element(arr,start,end,key);
    }
    else{
        return find_element(arr,mid+1,end,key);
    }
}



int find_pivot(int arr[],int start,int end,int key,int n){

    if (start>end)
        return 0;

    int mid=start+(end-start)/2;

    if (arr[mid]<arr[mid+1] && arr[mid]<arr[mid-1]){
        cout<<"mid vakue SENT is : "<<mid<<endl;
        if (key>arr[0]){
            return find_element(arr,0,mid-1,key);
        }
        else{
            return find_element(arr,mid,n-1,key);
        }
    }
    if (arr[mid]>arr[0]){
        return find_pivot(arr,mid+1,end,key,n);
    
    }
    else{
    return find_pivot(arr,start,mid,key,n);
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
    cout<<"enter the key that you want to find"<<endl;
    int key;
    cin>>key;
    int position = find_pivot(arr,start,end,key,n);
    if (position == -1){
        cout<<"your value is not found "<<endl;
    }
    else{
        cout<<"your value is found at -->"<<position<<"<-- position"<<endl;
    }


}