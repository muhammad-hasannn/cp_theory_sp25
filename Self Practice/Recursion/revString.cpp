#include<iostream>
#include<string>
using namespace std;

string rev(string name, int length){
    string reverse = "";
    if(length < 0) return "";

    // reverse += name[length] + rev(name, length-1); // this is also correct

    /*but let's convert that one character in string also*/
    reverse += string(1, name[length]) + rev(name, length-1);
    return reverse;
}

int main(){
    string name;
    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Reverse is: " << rev(name, name.length()-1);
}