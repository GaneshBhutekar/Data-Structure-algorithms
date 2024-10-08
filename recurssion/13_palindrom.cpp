#include<iostream>
using namespace std;
bool palindrome(char *start,char* end){  
    // because of the char data type of start and end here it only takes first input 
    if (start>end){
        return true;
    }

    if (*start!=*end){
        return false;
    }
    return palindrome(start+1,end-1); // increase the address and decrease also.

}
int main(){
    string word;
    getline(cin,word);
    cout<<word<<endl;
    if (palindrome(&word[0],&word[word.length()-1])){
        cout<<"yes it is palindrome"<<endl;
    }
    else{
        cout<<"No it is not palindrome"<<endl;
    }


}