#include<iostream>
#include<vector>
using namespace std;



void dialer(string digits,int index,vector<string>& ans,string output,string dial_no[]){
    if (index==digits.length()){
        ans.push_back(output);
        return ;
    }
    int number = digits[index]-'0';
    string choose=dial_no[number];

    for(int i=0;i<choose.length();i++){
        output.push_back(choose[i]);
        dialer(digits,index+1,ans,output,dial_no);
        output.pop_back();
    }

}

vector<string> lettercombination(string digits){
    string dial_no[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    int index=0;
    string output="";
    vector<string> ans;
    dialer(digits,index,ans,output,dial_no);
    return ans;



}

int main(){
    string number;
    cout<<"enter the number"<<endl;
    cin>>number;

    vector<string> ans=lettercombination(number);
    for(auto i:ans){
        cout<<i<<endl;
    }


    
}