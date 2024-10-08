#include<iostream>
using namespace std;
int main(){
/*
int arr[10]={6,2,3,4,5,6,7,8,9,0}; 
cout<<"accessing array by just name of the array "<<arr<< endl;
cout<<"accessing array by just address of the first array "<< &arr[0] << endl;
cout<<"just accessing the first array "<<arr[1]<<endl;
cout<<"let's see what 's output when we do *arr---> " <<*arr<<endl;
cout<<"adress of the next element "<< arr+1<<endl;
cout<<"another way to access  the next element address "<<&arr[1]<<endl;
cout<<"accessing the value of the next element "<< *(arr+1)<<endl;
cout<<"or just arr[1] "<<arr[1]<<endl;
cout<<"if i do *arr + 1  ="<<*arr + 1<<endl;

cout<<"we can move index outside and array name name inside to access the element for that index "<< 4[arr]<<endl;
int *pt=&arr[0];
cout << "Size of the array :"<<sizeof(arr)<<endl;
cout<<"size of the each element by the pointer "<<sizeof(&arr[0])<<endl;
cout<<"size of the elment if we do *pt size is "<<sizeof(*pt)<<"  size of the element in the array"<<endl;
cout<<*arr<<endl;

cout<<"common outputs when \nprinting arr "<<arr<<endl<<"second when &arr "<<&arr<<endl<<"third time when &arr[0]"<<&arr[0]<<endl;

int *ptr=&arr[3];
cout<<"address of the arr[3] is "<< pt<<endl;
cout<<"address of the pt is "<< &pt <<endl;
cout<<"value inside the address of the ptr is "<<*(&ptr)<<endl;
cout<<"next address will be "<<(ptr+1)<<" and element is : "<< *(ptr+1)<<endl;
*/


// character arrays case
int arr[3]={1,2,3};
char char_arr[5]="abcd";

cout<<"when we directly call int array:  "<<arr<<endl;
cout<<"When we directly call char array: "<<char_arr<<endl;

cout<<"when we want address of the first element in int array :"<<&arr[0]<<endl;
cout<<"if we do just like int to obtain address cout will direct give value: "<<&char_arr[0]<<endl;

char value='w';
char *p=&value;
cout<<endl<<endl;
cout<<"address of value character is :"<<p<<" \nthis is because it will not print address \ncoz it is char 's class cout implemented diffrent way\nso it will print it till it will find the terminate squence at last \n but at time of char aray it will stop at last element \nbecause char array end+1 has always a terminate sequence there."<<endl;


// there is different way to get address of the char array;
cout<<"right way to obtain address of the char array,This for arr[0] "<<static_cast<void*>(char_arr)<<endl;
cout<<"address of the second element of the array:     \t\t"<<static_cast<void*>(char_arr+1)<<endl;
char *point=&char_arr[2];
cout<<"address of third element will be (accessing by the pointer ): "<<static_cast<void*>(point)<<endl;


}