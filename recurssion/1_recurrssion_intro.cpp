#include<iostream>
using namespace std;


int factorial(int n){
    if (n==0){
        return 1;
    }
    // cout<<n<<endl; print at the time when reaching towords base condition :- 4 3 2 1
    int value = n*factorial(n-1);
    // cout<<n<<endl; print at the time when returning every value : - 1,2,3,4
    return value;
}


int powerof(int base,int pow){
    if (pow == 1){
        return base;
    }

    int smallerproblem= powerof(base,pow-1);
    int biggerproblem = base * smallerproblem;
    return biggerproblem;
    // or 
    // return base * powerof(base,pow-1);
}


void descending(int n){
    if (n==0){
        return ;
    }
    cout<<n<<" ";
    descending(n-1);
    // return; it's execute by default at the end....
    // here by default  return is written in terms of void 
}


int ascending(int n){
    if (n==1){
        cout<<n<<" ";
        return 1;
    }
    int value= ascending(n-1);
    cout<<n<<" ";
    // cout<<" returning value : "<<value<<endl; always 1 
    return value;
}
int main(){
    int n;
    cin>>n;
    int ans=factorial(n);
    cout<<ans<<endl;


    // for power of n

    int base;
    cout<<"enter the value of base "<<endl;
    cin>>base;
    int pow;
    cout<<"enter the pow value "<<endl;
    cin>>pow;

    ans=powerof(base,pow);
    cout<<ans<<endl;


    // print descendin order.....
    cout<<"Given above n will print descending order till 1"<<endl;
    descending(n);
    cout<<endl;


    // print ascending order.....
    cout<<"Given above n will print ascending order till 1"<<endl;
    ascending(n);
    cout<<endl;

    



}