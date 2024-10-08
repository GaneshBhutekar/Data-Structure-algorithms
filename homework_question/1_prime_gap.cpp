#include<iostream>
using namespace std;
#include<vector>
int prime_gap(int n){
    vector<bool> prime(n+1,true);
    prime[0]=false;
    prime[1]=false;
    int gap=0;
    int prev_prime=2;
    int count=0;
    for(int i=2;i<=n;i++){
        if (prime[i]){
            count++;
            if (i-prev_prime>gap){
                gap=i-prev_prime;
            }
            prev_prime=i;
            for(int j = i*2; j<=n; j+=i){
                prime[j]=false;
            }
        }
    }
    cout<<"total prime numbers "<< count<<endl;
    return gap-1;

}
int main(){
    // prime gaps 
    int n;
    cout<<"enter the number : "<< endl;
    cin>>n;
    int answer=prime_gap(n);
    cout<<"larget gap between prime number is :"<<answer<<" numbers"<<endl;

}