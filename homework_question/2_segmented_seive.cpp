#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
std::vector<int> sieve(int limit){
    vector<bool> init_prime(limit+1,true);
    init_prime[0]=false;
    init_prime[1]=false;
    int count=0;
    for(int i = 2; i<=limit; i++){
        if(init_prime[i]){
            count++;
            for(int j = i*2; j<=limit; j+=i){
                init_prime[j]=false;
            }
        }
    }

    cout<<count<<endl;
    vector<int> prime_numbers(0);
    prime_numbers.push_back(count);
    for(int i=0;i<=limit;i++){
        if (init_prime[i]){
            prime_numbers.push_back(i);
        }
    }

    return prime_numbers;
}
bool find_prime(vector<int> init_prime,int value){
    for(int i=1;i<=init_prime[0];i++){
        if (value%init_prime[i]==0){
            return false;
        }
    }
    return true;
}


int prime(int n){
    int limit=sqrt(n);
    int segments=n/10;
    vector<int> init_prime=sieve(limit);
    cout<< endl;
    int count=init_prime[0];
    for(int i=limit+1; i<=n; i+=segments){
        for (int j = i; j<=n && j<(i+segments); j++){
            if(find_prime(init_prime,j)){
                count++;
            }
        }
    }
    cout<<endl;
    return count;
    for(auto i:init_prime){
        cout<<i<<" ";
    }
    cout<<endl;
    return -1;

}


int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    int total_prime=prime(n);
    cout<< "Total prime are number:----"<< total_prime<<endl;
}