#include<iostream>
using namespace std;
bool valid_character(char element){
    if ((element>='a' && element<='z')||(element>='0' && element<='9')||(element>='A' && element<='Z')){
        return false;
    }
    else{
        return true;
    }
}
char lower_case(char element){
    if ((element>='a' && element<='z')||(element>='0' && element<='9')){
        return element;
    }
    else{
        char temp=element-'A'+'a';
        return temp;
    }
}
bool valid_palindrome(string s){
    int start=0;
    int end=s.length();
    while(start<end){
        if (valid_character(s[start])||valid_character(s[end])){
        if (valid_character(s[start])){
            start++;
        }
        if (valid_character(s[end])){
            end--;
        }
        }

        else if  (lower_case(s[start])!=lower_case(s[end])){
            return false;
        }
        else{
        start++;
        end--;
        }

    }
    return true;
}
int main(){
    string s;
    cout<<"Enter the string"<<endl;
    // cin>>s;
    s="A man, a plan, a canal: Panama";
    cout<<s<<endl;
    cout<<"-----CHECKING THE STRING IS PALINDROME OR NOT---"<<endl;
    bool answer=valid_palindrome(s);
    if (answer){
        cout<<"YES THE GIVEN STRING IS PALINDROME"<<endl;
    }
    else{
        cout<<"NO, GIVEN STRING IS NOT PALINDROME"<<endl;
    }

}