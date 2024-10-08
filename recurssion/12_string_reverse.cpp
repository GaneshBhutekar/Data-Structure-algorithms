#include<iostream>
using namespace std;
void reverse_string(string& word,int i,int j){
    if (i>j){
        return;
    }
    swap(word[i],word[j]);
    reverse_string(word,++i,--j);
}

void reverse_string_2(string& word,int i){
    int j = word.length()-i-1;
    if (i>j){
        return;
    }
    swap(word[i],word[j]);
    reverse_string_2(word,++i);
}


void reverse_string_3(char* start , char* end){
    if (start>end){
        return ;
    }
    swap(*start,*end);
    reverse_string_3(start+1,end-1);

}


int main(){
    string word;
    getline(cin,word);
    cout<<"Before the reverse function "<<word<<endl;
    reverse_string(word,0,word.length()-1);
    cout<<"After the reverse "<<word<<endl;
    reverse_string_2(word,0);
    cout<<"Agian reverse by other function "<<word<<endl;
    reverse_string_3(&word[0],&word[word.length()-1]);
    cout<<"again reveresed "<<word<<endl;

    

}