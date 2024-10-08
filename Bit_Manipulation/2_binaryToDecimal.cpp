#include<iostream>
#include<cmath>
using namespace std;



int integer(string num){
    cout<<num<<endl;
    int number=0;
    int len=num.size();
    for(int i=0;i<len-1;i++){
        if(num[i]=='1'){
            number+= (1<<(len-1-i));
        }
    }
    return number;
}

int main(){
    string num;
    cin>>num;
    int ans=integer(num);
    cout<<ans<<endl;
}