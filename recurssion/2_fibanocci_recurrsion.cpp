#include<iostream>
using namespace std;
int fibanocci(int posi){
    if(posi==0){
        return 0;
    }
    if (posi==1){
        return 1;
    }

    int ans=fibanocci(posi-1)+fibanocci(posi-2);
    return ans;
}



int main(){
    int posi;
    cout<<"enter the position : "<<endl;
    cin>>posi;
    int ans=fibanocci(posi);
    cout<<ans<<endl;
}