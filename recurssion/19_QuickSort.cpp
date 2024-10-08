#include<iostream>
#include<vector>
using namespace std;


// relax yourself and then make comfort and then start coding .


void print_array(vector<int> arr){
    for(int i : arr){
        cout<<i<<" ";
    }
    cout<<endl;
}
void partition(vector<int> &arr, int low,int high,int pivot){
    int i =low;
    int j = high;
    while(i < pivot && j > pivot && i < j){
        if (arr[i] <= arr[pivot]){
            i++;
        }

        if(arr[j] > arr[pivot]){
            j--;
        }

        if (arr[j] <= arr[pivot] && arr[i] > arr[pivot]){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }

}


void quickSort(vector<int> &arr, int low, int high){
    if (low >= high ){
        return;
    }


    //find the position of the pivot 
    int cnt= 0;
    // pivot is initial one

    for(int i = 1+low;i<= high;i++){

        if (arr[low] >= arr[i]){
            cnt++;
        }

    }

    // swap the pivot one to the right position
    int pivot = low + cnt;
    swap(arr[low],arr[pivot]);

    // after putting the pivot at right position now move smaller element to left and bigger element to right .
    partition(arr,low,high,pivot);

    // now recurrsion for left one 
    quickSort(arr,low,pivot-1);

    // recussion for right one.
    quickSort(arr,pivot+1,high);


}

using namespace std;
int main(){
    vector<int> arr = {3,5,1,8,2,4};
    // now sort it 
    int n = arr.size();
    int low = 0;
    int high = n-1;
    cout<<"before sorting "<<endl;
    print_array(arr);

    quickSort(arr,low,high);
    cout<<"after sorting "<<endl;
    print_array(arr);




}