#include<iostream>
using namespace std;


int main(){
    int num = 0, lastDigit = 0, rev = 0, org = 0;
    cout << "Enter: ";
    cin >> num;
    org = num;  // bcuz number will ultimately become zero

    while(num > 0){
        lastDigit = num%10;
        rev = (rev*10) + lastDigit;
        num /= 10;
    }
    if(org == rev){
        cout << "It is Palindromic number."<<endl;
    }
    else{
        cout << "it is a non-palindromic number."<<endl;
    }

}
