#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
int main(){
    // int value=10;
    int value1=1000;
    double value2=1.0;
    int value3=10;
    int value4=101;

    int *t=&value1;
    cout<<"old integer address :"<<t<<endl;
    cout<<"old integer value "<<*t<<endl;
    t=t+1;
    cout<<"new integer address :"<<t<<endl;
    cout<<"new integer value: "<<*t<<endl;
    t=t+1;  
    cout<<"new integer address :"<<t<<endl;
    cout<<"new integer value: "<<*t<<endl;


}