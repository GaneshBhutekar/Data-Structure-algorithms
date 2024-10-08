#include<iostream>
using namespace std;



// check the bit is set.

// int main(){
//     int a = 11; // 1011
//     int posi=2;
//     a=a>>posi;
//     if (a%2==0){
//         cout<<"it is not set"<<endl;
//     }
//     else{
//         cout<<"it is set"<<endl;
//     }


// }


// set the bit
/*
int main(){
    int value=9;
    // change the bit of 2nd position.
    int posi=2;
    cout<<(value | (1<<posi))<<endl;


}
*/



// clear the bit.
// int main(){
    // int num=13;
    // int posi=2;
    // cout<<(num & (~(1<<posi)))<<endl;
// }


// toggle(change ) the bit.

/*
int main(){
    int value = 13;
    int posi1=1;
    int posi2 = 2;
    cout<<(value ^ (1<<posi1))<<endl;
    cout<<(value ^ (1<<posi2))<<endl;
} 
*/


//remove the right most set number(convert it into the 0)
// int main(){
    // int num=40;
    // cout<<(num&(num-1))<<endl;
// }


// check that number is pow of two.

// int main(){
    // int num1=64; // power if 2
    // int num2=40; // not power of 2
    // if ((num1&(num1-1))==0){
        // cout<<"yes it is power of 2."<<endl;
    // }
    // else{
        // cout<<"nope"<<endl;
    // }
// 
    // if ((num2&(num2-1))==0){
        // cout<<"yes it is power of 2."<<endl;
    // }
    // else{
        // cout<<"nope"<<endl;
    // }
// }
// 


// count the set bit. brut force is the only solution here..


// int main(){
    // int value;
    // cin>>value;
    // int count=0;
    // while(value>0){
        // count+=(value&1); // this return 1 or 0 to the count no need to if condition
        // value=value>>1;
    // }
    // cout<<"total number of set bit is "<<count<<endl;
// }


// or 

int main(){
    int value;
    cin>>value;
    int count=0;
    while(value!=0){
        value=value&value-1;
        count++;
    }
    cout<<count<<endl;
}