#include<iostream>
using namespace std;


int main(){
    int n = 0, count = 0;
    cin >> n;
    for(int i = 1; i <= n; i++){
        if(n%i == 0){
            count++;
        }
    }

    if(count == 2){
        cout << "prime"<<endl;
    }
    else{
        cout << "non"<<endl;
    }
}