// here every col is in increasing order and every row is also increasng order;
#include<iostream>
#include<vector>
using namespace std;
void input_array(vector<vector<int>> &matrix,int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>matrix[i][j];
        }

    }
}

void print_array(vector<vector<int>> &matrix,int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<matrix[i][j]<<" ";
    }
    cout<<endl;
    }
}

bool search_2Dmatrix(vector<vector<int>> &matrix,int target){
    int row=matrix.size();
    int col=matrix[0].size();

    int rowindex=0;
    int colindex=col-1;
    while(rowindex<row && colindex>=0){
        int element = matrix[rowindex][colindex];
        if (element == target){
            return 1;
        }
        if (element>target){
            colindex--;
        }
        else{
            rowindex++;
        }
    }
    return 0;

}
int main(){
    int row;
    int col;
    cout<<"Row:"<<endl;
    cin>>row;
    cout<<"col:"<<endl;
    cin>>col;
    vector<vector<int>> matrix(row,vector<int>(col));
    input_array(matrix,row,col);
    print_array(matrix,row,col);
    int target;
    cout<<"enter the target value"<<endl;
    cin>>target;
    if (search_2Dmatrix(matrix,target)){
        cout<<target << " element is present in the 2D array"<<endl;
    }
    else{
        cout<<target<<" element is not present in the 2D array"<<endl;
    }
}