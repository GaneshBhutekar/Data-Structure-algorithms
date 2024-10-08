#include<iostream>
using namespace std;

int main(){
    int num=35;
    void *ptr=&num;
    cout<< ptr<<endl;
    cout<<&num<<endl;
    // cout<<*ptr<<endl;  This will not run because it is specified which object is this.


    // we know that num is integer there then ....
    // ptr=static_cast<int*>(ptr); Not possible because ptr is void and converse it into int is not possible.
    // but we can converse other data type it into void* because it is generic
    int *new_ptr=static_cast<int*>(ptr);
    cout<<"address stored "<<new_ptr<<" value stored "<<*new_ptr<<endl;

    // cout<<*ptr<<endl;


    // we can change it into the char value if number exist in ascii value.
    cout<<"turning the number into the xharacter by ascii table"<<endl;
    cout<<"the xharacter at num variabl is : "<<*((char*)ptr)<<endl;




    char word='A';
    // we can not convert it into the int but we can convert int into char.
    void *pt=&word;
    // cout<<*((int*)pt)<<endl;
    


    // void to char by static_cast() function.

    char *ch_ptr=static_cast<char*>(pt) ;
    cout<<"value of the variable word is : "<<*ch_ptr<<endl;
    // since pt can't able to print the value insude the word but it can print the address.


    //char--> int
    
    // below code is not possibe becoz we can't do char -> int
    // char character='B';
    // char *p=&character;
    // int value=*(static_cast<int*>(p));
    // cout<<value<<endl;


    // float to int.
    
    // not possible because bit pattern of the float and int is not same
    // float value=134.991;
    // float *p=&value;
    // cout<<*((int*)p)<<endl; <--- gives garbage value
    // cout<<*(static_cast<int*>(p))<<endl; <----invalid



    //int to float.
    


    // not possible -->diff bit pattern !
    // int value = 178;
    // int *p=&value;
    // cout<<*(static_cast<float*>(p))<<endl;



    




}