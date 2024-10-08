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

void insertion_sort(int arr[],int n){
    for(int i=1;i<n;i++){
        if (arr[i]<arr[i-1]){
            int j=i-1;
            int minimum = arr[i];
            while(j>=0 && minimum<arr[j]){
                arr[j+1]=arr[j];
                j--;
            }
            arr[j+1]=minimum;
        }
    }
}

void recusrsive__InserstionSort(int arr[],int n,int i=1){
    if (i==n){
        return;
    }
    int j = i-1;
    int minimum=arr[i];
    while(j>=0 && minimum<arr[j]){
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=minimum;
    recusrsive__InserstionSort(arr,n,i+1);  
    // agar thoda dimag lagata aur thoda sochta toh return main kuch karne se bhi ho jata




}
int main(){
    int n;
    cin>>n;
    int *arr=new int[n];
    input_array(arr,n);
    // insertion_sort(arr,n);
    recusrsive__InserstionSort(arr,n);
    print_array(arr,n);


}