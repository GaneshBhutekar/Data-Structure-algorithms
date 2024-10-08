
// how many bit need to change for target 
#include<iostream>

using namespace std;
int main(){
    int value=13;
    int target=12;
    int count=0;
    // how many chnages we have to do...
    value=value^target;
    // count the bit..
    while(value!=0){
// how many bit need to change for target 
#include<iostream>

using namespace std;
int main(){
    int value=13;
    int target=12;
    int count=0;
    // how many chnages we have to do...
    value=value^target;
    // count the bit..
    while(value!=0){
        value=value&value-1;
        count++;
    }
    cout<<count<<endl;
}
        value=value&value-1;
        count++;
    }
    cout<<count<<endl;
}