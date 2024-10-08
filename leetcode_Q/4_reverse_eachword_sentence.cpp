#include<iostream>
using namespace std;
void reverse(string &str,int s,int e){
    while(s<=e){
        swap(str[s++],str[e--]);

    }
}
void reverse_sentence(string &str){
    int i =0;
    int j=0;
    int end=0;
    while(i<str.length()){
        if(str[j]==' '||(j==str.length()-1)){
            end=j-1;
            // function to reverse
            reverse(str,i,end);
            i=j+1;
            j=j+1;

        }
        j++;



    }
}
int main(){
    string str="Ganesh Goroba Bhutekar";
    reverse_sentence(str);
    cout<<str<<endl;

}