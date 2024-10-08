#include<iostream>
#include<vector>
using namespace std;

void subsequences_of_string(string str,string output,int i){
    if (i>=str.size()){
        cout<<output<<endl;
        return ;
    }
    // for exclude case
    subsequences_of_string(str,output,i+1);
    // for include case
    output+=str[i];
    subsequences_of_string(str,output,i+1); 
}
int main(){
    string str;
    cout<<"Enter the size of the string"<<endl;
    cin>>str;

    string output="";
    int i =0;
    subsequences_of_string(str,output,i);
           
}