#include<iostream>
#include<vector>
using namespace std;

void print_2D(const vector<vector<int>> & ans){
    for(const auto & i : ans){
        for(const auto& j: i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
void print_array(vector<int> arr){
    for (auto i:arr){
        cout<<i<<" ";
    }
    cout<<endl;
}

void possibilities(vector<int> num,vector<vector<int>>& ans,vector<int>& output,vector<int>& map){
    if (output.size()==num.size()){
        ans.push_back(output);
        return;
    }

    for(int i=0;i<num.size();i++){
        if (map[i]==0){
            map[i]=1;
            // print_array(map);
            output.push_back(num[i]);
            possibilities(num,ans,output,map);
            map[i]=0;
            output.pop_back();
        }
    }
}

vector<vector<int>> permute(vector<int> num){
    vector<int> map(num.size(),0);
    vector<vector<int>> ans;
    vector<int> output;
    possibilities(num,ans,output,map);
    return ans;

}

int main(){
    vector<int> num={1,8,4};
    vector<vector<int>> ans = permute(num);
    print_2D(ans);
    


}