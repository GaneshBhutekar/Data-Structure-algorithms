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


void Merge(int arr[],int start,int mid,int end){
    // int temp_size=end-start+1;

    // int temp[temp_size];
    // int low1=start; // starting point of left array
    // int low2=mid+1; // starting point of right array
    // int demo=0;
    // while(low1<=mid && low2<=end){
    //     if (arr[low1]<=arr[low2]){
    //         temp[demo]=arr[low1];
    //         low1++;
    //         demo++;

    //     }
    //     else{
    //         temp[demo]=arr[low2];
    //         low2++;
    //         demo++;
    //     }
    // }

    // // if there any left...
    // while(low1<=mid){
    //     temp[demo]=arr[low1];
    //     low1++;
    //     demo++;
    // }

    // while(low2<=end){
    //     temp[demo]=arr[low2];
    //     low2++;
    //     demo++;
    // }

    // // copy this again into the array...
    // for(int i=0;i<temp_size;i++){
    //     arr[start+i]=temp[i];
    // }






    // sorting array via insertion sorting .. no need to create array.
    for(int i=mid+1;i<end+1;i++){
        int minimum=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>minimum){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=minimum;
    }

}


void MergeSort(int arr[],int start,int end){
    if (start==end){
        return;
    }
    int mid = start+(end-start)/2;
    
    MergeSort(arr,start,mid); // for the left array ...
    MergeSort(arr,mid+1,end); // for the right array.....
    Merge(arr,start,mid,end);  
    // this is not part of the recursion this is for merge the array with sorting.
    // actually when both MergeSort function return here it's merged already just needed to sort it. by Merge function.





}
int main(){
    int n;
    cin>>n;
    int *arr=new int[n];
    input_array(arr,n);
    int start=0;
    int end=n-1;
    MergeSort(arr,start,end);
    cout<<"sorted array is "<<endl;
    print_array(arr,n);

}