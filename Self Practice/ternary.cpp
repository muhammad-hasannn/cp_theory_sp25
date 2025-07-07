/*TERNARY OPERATOR*/

#include<iostream>
using namespace std;

int main(){
    int number;
    string result;
    cout<<"Enter num: ";
    cin>> number;
    result = (number > 0) ? "Positive Number!" : "Negative Number!";
    cout << result << endl;
}
