/*priting numbers till give number*/

#include<iostream>
using namespace std;

void printNumber(int n){
    if(n == 0){
        return;
    }
    cout <<n<<" ";
    printNumber(n-1);
}

int main(){
    int num = 0;
    cout << "Enter a number until which you want to print series: ";
    cin >> num;
    printNumber(num);
}