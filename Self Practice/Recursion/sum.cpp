/*sum upto n numbers*/

#include<iostream>
using namespace std;

int sum(int n){
    int ans = 0;
    if(n == 0 || n == 1){
        return n;
    }
    ans += (n + sum(n-1)); // you can return it directly also....
    return ans;
}

int main(){
    cout << sum(5);
}