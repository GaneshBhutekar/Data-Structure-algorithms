#include<iostream>
using namespace std;

// void print(int *ptr){
//     cout<<"address ptr: "<< ptr<<endl;
//     cout<<"value of stored address by ptr "<<*ptr<<endl;
// }
// void update_value(int *ptr){
//     // ptr=ptr+1; this can't changes after the passing it again to the main
//     // cout<<"changes in inside the function address: "<<ptr<<endl;
//     *ptr=*ptr+1;
//     cout<<"value changes "<<*ptr<<endl;

// }


// void update_address(int **ptr){
//     *ptr=*ptr+1;
// }
// int main(){
//     int value =107;
//     int *ptr=&value;
//     cout<<"before changes address: "<<ptr<<" value "<<*ptr<<endl;
//     update_address(&ptr);
//     cout<<"after changes address: "<<ptr<<" value "<<*ptr<<endl;

// }


// case of array pass to the Function.

int adding_funct(int *arr,int n){
    // cou<<"size of the array inside the function "<<sizeof(arr)<<endl;
    // the above line of code is error because arr here is not whole array 
    // it's just a pointer to the first elment of the first element ,that's why we need to specify size differently.
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=i[arr];
    }
    return sum;
}

void fun(int *pt){
    int a=10;
    cout<<"inside function a address is "<<&a<<endl;
    pt=&a;
    *pt=(*pt)*(*pt);

}

int main(){
    // int arr[10]={2,3,4,5,6,7,8,9,10,1};
    // cout<<"size of the array inside the main function: "<<sizeof(arr)<<endl;
    // cout<<adding_funct(arr+3,7)<<endl;

    int a =10;
    cout<<"outside a address "<<&a<<endl;
    fun(&a);
    cout<<"outside a address "<<&a<<endl;
    cout<<a<<endl;
} 