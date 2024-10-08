#include<iostream>
using namespace std;
void input_array(int arr[],int n){
    cout<<"enter the value of the array"<<endl;
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
}

bool linearSearch(int arr[],int n,int element){ // without pointer
    if (n==0){
        return false;
    }
    if (arr[n-1]==element){
        return true;
    }
    return linearSearch(arr,n-1,element);
}

bool linearSearch_pointer(int arr[],int n,int element){ // wirth pointer
    if (n==0){
        return false;
    }
    if (arr[0]==element){
        return true;
    }
    return linearSearch_pointer(arr+1,n-1,element);
}

int main(){
    int n;
    cout<<"size of the array"<<endl;
    cin>>n;
    int *arr=new int[n];
    input_array(arr,n);
    cout<<"enter the element you want to find"<<endl;
    int element;
    cin>>element;
    if(linearSearch(arr,n,element)){
        cout<<"yes it is present in the arr"<<endl;
    }
    else{
        cout<<"no it is not present in the array"<<endl;
    }

    if(linearSearch_pointer(arr,n,element)){
        cout<<"yes it is present in the arr"<<endl;
    }
    else{
        cout<<"no it is not present in the array"<<endl;
    }

}
