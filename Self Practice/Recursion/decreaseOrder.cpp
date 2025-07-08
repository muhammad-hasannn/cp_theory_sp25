/*printing number in decreasing order*/

#include<iostream>
using namespace std;

void decreasingOrder(int n){
    if(n == 0 || n == 1){
        cout << n;
        return;
    }
    cout << n << " ";
    decreasingOrder(n-1);
}

int main(){
    int n = 0;
    cout << "Enter till which you want to numbers in decreasing order: ";
    cin >> n;
    decreasingOrder(n);
}