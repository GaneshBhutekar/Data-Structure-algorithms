#include<iostream>
using namespace std;
void input_array(int arr[],int size){
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}

int first_occurance(int arr[],int start,int end,int key,int first){
    // done by me
    if(start>end){
        return first;
    }
    int mid=start+(end-start)/2;
    if (arr[mid]==key){
        int first =mid;
        first=first_occurance(arr,start,mid-1,key,first);
        return first;
    }
    if(arr[mid]<key){
        return first_occurance(arr,mid+1,end,key,first);
        
    }
    else{
        return first_occurance(arr,start,mid-1,key,first);
        
    }

}

int last_occurance(int arr[],int start,int end,int key){
    if (start>end){
        return -1;
    }

    int mid =start+(end-start)/2;
    if ((arr[mid]==key) && (arr[mid+1]>arr[mid] || mid==end)){
        return mid;
    }

    if (key>=arr[mid]){
        return last_occurance(arr,mid+1,end,key);
    }
    else{
        return last_occurance(arr,start,mid-1,key);
    }
    
}

int main(){
    // first and last position of the array using binary search and recursion.
    int n;
    cin>>n;
    int *arr=new int[n];
    cout<<"enter the element :"<<endl;
    input_array(arr,n);
    int key;
    cout<<"enter the key: "<<endl;
    cin>>key;
    int start=0;
    int end=n-1;
    int first=-1;
    int ans1=first_occurance(arr,start,end,key,first);
    cout<<"first occurance of the element is "<<ans1<<endl;
    int ans2 = last_occurance(arr,start,end,key);
    cout<<"and last occurance is "<<ans2<<endl;

    cout<<"And Total occurance is "<<ans2-ans1+1<<endl;

}