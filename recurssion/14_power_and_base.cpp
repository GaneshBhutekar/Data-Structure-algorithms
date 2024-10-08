#include<iostream>
using namespace std;
int power(int a,int b){
    if (b==0){
        return 1;
    }
    if (b==1){
        return a;
    }
    int ans=power(a,b/2);
    if (b%2==0){
        // when b is even
        return  ans * ans; 
    }

    else{
        // when b is odd
        return a * ans * ans; 
    }
}
int main(){
    int a;
    int b;
    cout<<"enter base and power value"<<endl;
    cin>>a;
    cin>>b;
    int ans = power(a,b);
    cout<<"power of the number is "<<ans<<endl;

}