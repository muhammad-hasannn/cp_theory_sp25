#include<iostream>
using namespace std;

int fib(int n){
    if(n == 0 || n == 1) return n;
    return fib(n - 1) + fib(n - 2);
}

int main(){
    int term = 0;
    cout << "Enter how many terms you want to print in fibonacci sequence: ";
    cin >> term;

    for(int i = 0; i < term; i++){
        cout << fib(i) << " ";
    }
    cout << endl;

    /*if want to show the nth term*/
    cout << fib(term - 1); // -1 because, our function is also entertaining zero....
}