/*DISPLAYING LARGEST COMMON DIVISOR OF TWO NUMBERS*/

#include<iostream>
using namespace std;


int main(){
    int n1 = 0, n2 = 0, hcf = 0;
    cin >> n1;
    cin >> n2;
    for(int i = 1; i <= n1 || i <= n2; i++){
        if(n1%i == 0 && n2%i == 0){
            hcf = i;
        }
    }
    cout << hcf;

}
