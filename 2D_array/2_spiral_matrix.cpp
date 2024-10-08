#include<iostream>
#include<vector>
using namespace std;
void input_array(int arr[][3],int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>> arr[i][j];
        }
    }
}
void print_array(int arr[][3],int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";

        }
        cout<<endl;
    }
}
void spiral_matrix(int arr[][3],int row,int col){
    int startingRow=0;
    int startingCol=0;
    int endingRow=row-1;
    int endingCol=col-1;
    int count=0;
    int total=row*col;
    while(count<total){
        // first row traverse
        for(int i=startingCol;i<=endingCol && count<total;i++){
            cout<<arr[startingRow][i]<<" ";
            count++;
        }
        startingRow++;
        
        
        // last column traverse
        for(int i=startingRow;i<=endingRow && count<total;i++){
            cout<<arr[i][endingCol]<<" ";
            count++;
        }
        endingCol--;
        
        
        // print ending row
        for(int i=endingCol;i>=startingCol && count<total;i--){
            cout<<arr[endingRow][i]<<" ";
            count++;
        }
        endingRow--;
        
        
        // print starting column
        for(int i=endingRow;i>=startingRow && count<=total;i--){
            cout<<arr[i][startingCol]<<" ";
            count++;
        }
        startingCol++;

    }
}
int main(){
    int arr[3][3];
    input_array(arr,3,3);
    print_array(arr,3,3);
    spiral_matrix(arr,3,3);
}