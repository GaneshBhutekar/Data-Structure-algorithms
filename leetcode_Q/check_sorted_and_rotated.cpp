#include<iostream>
using namespace std;
void input_array(int arr[],int size){
    cout<<"Value Should be Ascending or descending"<<endl;
    
    for(int i=0;i<size;i++){
        cout<<"Enter the "<<i+1<<" Array"<<endl;
        cin>>arr[i];
    }
}
void print_array(int arr[],int size){
    for(int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
bool check_rotated(int arr[],int size){
    int status=0;
    for(int i =1;i<size;i++){
        if (arr[i-1]>arr[i]){
            if (status==1){
                return false;
            }
            status=1;
        }
    }

    if ((status==0)||(arr[size-1]<=arr[0])){
    return true;
    }
    return false;
}
int main(){
    int size;
    cout<<"Enter the size"<<endl;
    cin>>size;
    int arr[size];
    input_array(arr,size);

    print_array(arr,size);
    bool answer=check_rotated(arr,size);
    if (answer==true){
        cout<<"Yes it is rotated and sorted"<<endl;

    }
    else{
        cout<<"this array is not rotated and kind of not sorted"<<endl;
    }


}