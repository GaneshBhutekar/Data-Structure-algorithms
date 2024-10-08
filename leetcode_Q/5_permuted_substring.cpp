#include<iostream>
using namespace std;

bool my_permutation_string(string s1,string s2){ // here just s1 is big and s2 is small one 
    // not perfect code 'ooolleoooleh' 'hello'.
    int s1_size=s1.length();
    int s2_size=s2.length();
    int temp=s2_size;
    int j=0;
    for(int i=0;i<s1_size;i++){
        if (s2.find(s1[i])<s2_size+1){
            temp--;
        }
        if (temp==0){
            return true;   
        }
        if(s2.find(s1[i])>s2_size+1){
            temp=s2_size;
        }
    }
    return false;
}
bool equalornot(int arr1[],int arr2[]){
    for(int i=0;i<26;i++){
        if (arr1[i]!=arr2[i]){
            return false;
        }
        
    }
    return true;
}


bool permutation_string(string s1,string s2){
    // string 1 is smaller and string 2 is bigger.

    int arr1[26]={0};
    for(int i=0;i<s1.length();i++){
        int index=s1[i]-'a';
        arr1[index]++;

    }
    int mysize=s1.size();
    int i =0;
    int arr2[26]={0};
    while(i<mysize && i<s2.length()){
        int index=s2[i]-'a';
        arr2[index]++;
        i++;
    }
    if (equalornot(arr1,arr2)){
        return true;
    }
    int j=0;
    int s2_size=s2.length();
    
    
    
    while(i<s2_size){
        int index=s2[i]-'a';
        arr2[index]++;
        index=s2[j]-'a';
        arr2[index]--;
        if (equalornot(arr1,arr2)){
            return true;
        }
        j++;
        i++;

    }
    return false;
    

}




int main(){
    string s1;
    string s2;
    cout<<"Enter the string 1"<< endl;
    getline(cin,s1);
    cout<<"Enter the string 2"<< endl;
    getline(cin,s2);
    bool answer=permutation_string(s1,s2);
    if (answer){
        cout<<"Yes it is permuted there"<<endl;

    }
    else{
        cout<<"No permuted substring there"<<endl;
    }

}