#include<iostream>
#include<climits>
using namespace std;

int divide(int dividend , int divisor){
    if (dividend==divisor){
        return 1;
    }
    bool sign = true;
    if (divisor<0 && dividend>=0) sign=false;  // if denominator is -ve
    else if(divisor>0 && dividend<=0) sign=false; // numerator is -ve

    long ans=0; // stores how many divisor needed to get closet to dividend(quotient)
    long n = abs(dividend); // for +ve
    long d=abs(divisor); // for+ve
    while(n>=d){  // if divisor is bigger than dividend then leave
        int count=0; // count the maximum 2 power can be to reach the n
        while(n>=d*(1<<count+1)){ // check where next 2 power multiply with divisor makes bigger than n
            count+=1;
        }
        ans+=1<<count;
        n-=d*(1<<count);
    }

    if (ans == (1<<31) && sign){
        return INT_MAX;
    }
    else if (ans == (1<<31) && !sign){
        return INT_MIN;
    }
    return sign?ans : -ans;
}



int main(){
    int dividend;
    int divisor;
    cout<<"enter the dividend"<<endl;
    cin>>dividend;
    cout<<"enter the divisor"<<endl;
    cin>>divisor;
    int ans = divide(dividend,divisor);
    cout<<ans<<endl;

}