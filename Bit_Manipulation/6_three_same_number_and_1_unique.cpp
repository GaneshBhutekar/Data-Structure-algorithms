#include<iostream>
using namespace std;


// single and 3 number find 1 unique number..



int unique_number(int arr[],int n){
    // this is not that much optimized ....
    int ans=0;
    for(int bits = 0;bits<=31;bits++){
        int count=0;
        for(int element=0;element<n;element++){
            if ((1<<bits)&arr[element]){
                count++;
            }
        }
        if (count%3==1){
            ans=ans | (1<<bits); // add the 1 at the position of bits if count is not multiple of 3.
        }
    }
    return ans;
}

void merge(int arr[],int start , int mid,int end){
    for(int i=mid+1;i<end;i++){
        int value = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>value){
            arr[j+1]=arr[j];
        }
        arr[j+1]=value;
    }


}


void merge_sort(int arr[],int start,int end){
    if (start>=end){
        return;
    }

    int mid=start+(end-start)/2;

    // left array portion
    merge_sort(arr,start,mid);

    //right array portion
    merge_sort(arr,mid+1,end);

    //sort the array
    merge(arr,start,mid,end);


}

int optimized_unique_number(int arr[],int n){
    for(int i=1;i<n;i=i+3){
        if (arr[i]!=arr[i-1]){
            return arr[i-1];
        }
    }
    return arr[n-1];

}


int more_optimized_unique_number(int arr[],int n){
    int ones=0;
    int twos=0;
    for(int i=0;i<n;i++){
        ones=(ones^arr[i]) & (~twos);
        twos=(twos^arr[i]) & (~ones);
    }
    return ones;
}

int main(){
    // array where i is unique number and others are 3 same number
    int n=4;
    int arr[n]={4,4,2,4};
    int ans = unique_number(arr,n);
    cout<<"answer is "<<ans<<endl;
    merge(arr,0,6,n);
    cout<<"answer from optimized way is ";
    ans = optimized_unique_number(arr,n);
    cout<<ans <<endl;
    cout<<"Most optimized way answer will "<<endl;
    ans=more_optimized_unique_number(arr,n);
    cout<<ans<<endl;
}