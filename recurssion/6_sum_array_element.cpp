#include<iostream>
using namespace std;
void input_array(int arr[],int n){
    cout<<"enter the value of the array"<<endl;
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
}


int total_sum(int arr[],int n){
    if(n==0){
        return 0;
    }
    int total=total_sum(arr,n-1);
    total=total+arr[n-1];
    return total;

}
int main(){
    int n;
    cout<<"size of the array"<<endl;
    cin>>n;
    int *arr=new int[n];
    input_array(arr,n);
    int ans=total_sum(arr,n);
    cout<<"addition of the array's element is " <<ans<<endl;



}