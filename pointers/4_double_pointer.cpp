#include<iostream>
using namespace std;
void fun(int **ptr1){
    **ptr1=**ptr1+1;

}

int main(){
    // int value=9;
    // int *p_1=&value;
    // int **p_2=&p_1;
    // cout<<"address of the value by p_1: "<<p_1<<" and "<<&value<<endl;
    // cout<<"address of the p_1 by p_2(double pointer): "<<p_2<<" and "<<&p_1<<endl;
    // cout<<"value's value by p_1: "<< *p_1<<endl;
    // cout<<"value inside the p_2: "<< *p_2 << endl;
    // cout<<"value of the value by p_2: "<< **p_2<<endl;

    // cout<<"value inside the p_1 "<<&value<<endl;
    

    // function and pointers
    int demo=101;
    int *ptr=&demo;
    int **ptr1=&ptr;
    cout<<"before the function: "<<demo<<endl;
    fun(ptr1);
     cout<<"after the function: "<<demo<<endl;



    // pointers in  function.


}