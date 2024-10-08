#include<iostream>
#include<vector>
using namespace std;
void input_array(int arr[][3],int row){
    int col=3;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
}
void print_array(int arr[][3],int row){
    int col=3;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }    
}

void wave_print(int arr[][3],int row){
    int col=3;
    cout<<"wave print :::"<<endl<<endl;
    for(int j=0;j<col;j++){
            if (j%2==0){
                for(int i =0;i<row;i++){
                    cout<<arr[i][j]<<" ";
                }
            }
            else{
                for(int i=row-1;i>=0;i--){
                    cout<<arr[i][j]<<" ";
                }
            }
            cout<<endl;
        }

    }
int main(){
    int row;
    cout<<"enter the row: "<<endl;
    cin>>row;
    int arr[row][3];
    input_array(arr,row);
    print_array(arr,row);
    wave_print(arr,row);

}