#include<iostream>
using namespace std;


int XOROF(int n){
    if (n%4==1){
        return 1;
    }
    else if (n%4==2){
        return n+1;
    }
    else if (n%4==3){
        return 0;
    }
    else if (n%4==0){
        return n;
    }
    return -1;
}


int main(){
    cout<<"enter the start"<<endl;
    int start;
    cin>>start;
    cout<<"enter the end"<<endl;
    int end;
    cin>>end;
    int start_XOR=XOROF(start-1);

    int end_XOR=XOROF(end);

    cout<<"Answer is "<<(start_XOR^end_XOR)<<endl;


}