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

void rotate_2Darray(int arr[][4],int row,int col){
    cout<< " rotated array result -----------"<<endl;
    for(int i = 0;i<col;i++){
        for(int j=row-1;j>=0;j--){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int row=4;
    int col=4;
    int arr[4][4];
    input_array(arr,row,col);
    print_array(arr,row,col);
    rotate_2Darray(arr,row,col);
}