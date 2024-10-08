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

void bubble_sort(int arr[],int size){
    int temp;
    for(int i = 0;i<size-1;i++){
        int swapped=true;
        for(int j=0;j<size-i-1;j++){
            if (arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                swapped=false;
            }

            
        }
        if (swapped){
            return;
        }
    }
}


void recursive_bubbleSort(int arr[],int size,int i=0){
    if (size==1){
        return;
    }

    if(i==size-1){
        // recursive_bubbleSort(arr,size-1,0);
        // return; 
        // or 
        i=0;
        size--;
    }

    if (arr[i]>arr[i+1]){
        swap(arr[i],arr[i+1]);
    }
    recursive_bubbleSort(arr,size,i+1);
}
int main(){
    int n;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    int *arr=new int[n];
    input_array(arr,n);
    cout<<"sorted arrray is "<<endl;
    // bubble_sort(arr,n);
    recursive_bubbleSort(arr,n);
    print_array(arr,n);



}