#include <iostream>
#include <string>
using namespace std;

void saydigit1(string arr[], int num) {
    if (num==0){
        return;
    }

    int total=num%10;
    num=num/10;
    saydigit1(arr,num);// total is not passed so for each function value will different.
    cout<<arr[total]<<" ";

}

int main() {
    int num;
    cin >> num;
    if (num == 0) {
        cout << "zero";
        return 0;
    }
    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    saydigit1(arr, num);
    cout << endl;
    return 0;
}
