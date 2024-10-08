#include<iostream>
#include<vector>
using namespace std;
void input_array(vector<int>& arr,int n){
    cout<<"enter the elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}

void print_array_2D(vector<vector<int>> ans){
    for(auto row : ans){
        cout<<"element [";
        for(auto col : row){
            cout<< col <<" ";
        }

        cout<<"]"<<endl;
    }
}

void subsets(vector<int> arr,vector<int> output,int index,int size,vector<vector<int>>& ans){
    if (index>=size){
        ans.push_back(output);
        return;
    }

    // for the exclude
    subsets(arr,output,index+1,size,ans);

    // for the include.
    output.push_back(arr[index]); // adding the element
    subsets(arr,output,index+1,size,ans);
}

int main(){
    int size;
    cin>>size;
    vector<int> arr(size);
    input_array(arr,size);
    // for storing the output we have to create 2D array.
    vector<vector <int>> ans;
    // and index to iterates over the arr.
    int index=0;
    // for storing the element for each possibilities.
    vector<int> output;
    // calll the function.
    subsets(arr,output,index,size,ans);
    //print the array.
    print_array_2D(ans);






}