#include<iostream>
using namespace std;
void input_array(int arr[][4],int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>> arr[i][j];
        }
    }
}
void print_array(int arr[][4],int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";

        }
        cout<<endl;
    }
}

bool check_element_binary_search(int arr[][4],int row,int col,int target){
    int start=0;
    int end=row*col-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        int element=arr[mid/col][mid%col];
        if (element == target){
            return 1;
        }
        else if (element>target){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return 0;
}

int main(){
    int row=3;
    int col=4;
    int arr[3][4];
    input_array(arr,row,col);
    print_array(arr,row,col);
    int target;
    cout<<"Target value is ...."<<endl;
    cin >> target;
    if (check_element_binary_search(arr,row,col,target)){
        cout<<"Yes it is present"<<endl;
    }
    else{
        cout<<"no it is not present"<<endl;
    }
}