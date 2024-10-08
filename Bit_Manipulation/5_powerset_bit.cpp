#include<iostream>
#include<vector>
using namespace std ;
void input_array(int *arr , int n){
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
}
void print_array(const vector<vector<int>>& output){
    for(const auto& row : output){
        cout<<"[ ";
        for(const auto& value: row){
            cout<<value<<" ";
        }
        cout<<"]"<<endl;
    }
}

vector<vector <int>> powerset(int arr[],int n){
    int subsets=1<<n;
    vector<vector <int>> output;
    for(int i = 0;i<subsets;i++){
        vector<int> demo;
        for(int j =0;j<n;j++){
            if ((1<<j)&i){
                demo.push_back(arr[j]);
            }
        }
        output.push_back(demo);
        

    }
    return output;

}
int main(){
    int n;
    cout<<"enter the size"<<endl;
    cin>>n;
    int *arr = new int[n];
    input_array(arr,n);
    vector<vector<int>> output = powerset(arr,n);
    print_array(output);
    delete [] arr;

}
