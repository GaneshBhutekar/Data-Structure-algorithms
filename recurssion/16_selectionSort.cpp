#include<iostream>
using namespace std;
void input_array(int arr[],int size){
    cout<<"enter the element"<<endl;

    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}
void print_array(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


void recursive_selectionSort(int arr[],int size,int i=1,int j=0,int minimum=0){
    if (size==1||size==0){
        return;
    }
    if (j==size-1){
        return ;
    }
    if(i==size){
        swap(arr[j],arr[minimum]);
        j++;
        i=j+1;
        minimum=j;
    }
    if(arr[minimum]>arr[i]){
        minimum=i;
    }
    recursive_selectionSort(arr,size,i+1,j,minimum);



}
int main(){
    int n;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    int *arr=new int[n];
    input_array(arr,n);
    recursive_selectionSort(arr,n);
    cout<<"your sorted array : "<<endl;
    print_array(arr,n);

}