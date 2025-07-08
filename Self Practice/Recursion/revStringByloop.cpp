#include<iostream>
#include<string>
using namespace std;


int main(){
    string name = "hasan";

    for(int i = name.length(); i >= 0; i--){
        cout << name[i-1]; // as the first value in i will be 5, but there is no index 5 so it will print nothing
    }
    cout << endl;
    cout << name.length() << endl;
    cout << name.size() << endl;
}