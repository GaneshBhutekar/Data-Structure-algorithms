#include<iostream>
using namespace std;
int main(){
    int n = 234;
     int count=0;
     int multiply=1;
     while (n>0){
        count+=n%10;
        multiply*=n%10;
        n=n/10;
     }
     cout<<count<<endl;
     cout << multiply<<endl;
}