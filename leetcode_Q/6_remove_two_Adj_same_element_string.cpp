#include<iostream>
using namespace std;
void remover(string &s,int i){
    while(i<s.length()-2 && s.length()>2){
        s[i]=s[i+2];
        i++;
    }
    s.pop_back();
    s.pop_back();
}
void remover2(string &s,int i){
    s.erase(i,2);
}
void remove_adj(string &s){  // done by mee.............!!!!!!!!!!!!!!!!!
    // int mysize=s.length();
    int i=0;
    while(i<s.length()-1 && s.length()>0){
        if (s[i]==s[i+1]){
            // remover(s,i);
            remover2(s,1);
            i=0;
        }
        else{
            i++;
        }
    }
}




void remove_adj_2(string &s){
    int i=0;
    while(i<s.length()-2){
        if (s[i]==s[i+1]){
            s.erase(i,2);
            if (i==0){
                i=0;
        }
            else{
                i=i-1;
            }
        }
        else{
            i++;
        }
    }
}
int main(){
    string s;
    cout<<"enter the string"<<endl;
    cin>>s;
    remove_adj_2(s);
    cout<<s<<endl;
}