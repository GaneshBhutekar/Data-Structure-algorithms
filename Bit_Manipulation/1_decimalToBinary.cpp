#include<iostream>
using namespace std;

void reverseit(string &res){
    int Size=res.size();
    for(int i=0;i<res.size()/2;i++){
        swap(res[i],res[Size-1-i]);

    }
}
string binary(int n){
    string res="";
    while(n>0){
        cout<<(n%2)<<endl;
        res+=to_string(n%2);
        n=n/2;

    }
    reverseit(res);
    return res;
}
int main(){
    int n;
    cout<<"Enter the number :"<<endl;
    cin>>n;
    string res=binary(n);
    cout<<"result is "<<res<<endl;
}