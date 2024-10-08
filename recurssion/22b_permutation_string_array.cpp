#include<iostream>
#include<vector>
using namespace std;

void print_2D(const vector<vector<int>>& ans){
    for(const auto&  i:ans){
        for(const auto& j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}


void possibilities(vector<int> num,int index,vector<vector<int>>& ans){
    if (index==num.size()){
        ans.push_back(num);
        return;
    }


    for(int j=index;j<num.size();j++){
        swap(num[index],num[j]);
        possibilities(num,index+1,ans);
        swap(num[index],num[j]);

    }
}


vector<vector<int>> permute(vector<int> num){
    int index=0;
    vector<vector<int>> ans;
    possibilities(num,index,ans);
    return ans;
}


int main(){
    vector<int> num={1,2,3};
    vector<vector<int>> ans = permute(num);
    print_2D(ans);


}