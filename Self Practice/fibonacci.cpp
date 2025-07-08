/*PRINTING FIBONACI NUMBERS*/

#include<iostream>
using namespace std;

int main(){
    int num = 0;
    int a = 0, b = 1, result = 0;
    
    cout << "Enter: ";
    cin >> num;

    cout <<a<<" "<<b<<" ";
    for(int i = 2; i < num; i++){ // i is intialized to 2, becuz we have already printed two numbers.
        result = a + b;
        cout << result <<" ";
        a = b;
        b = result;
    }
}

/*Print Fibonacci numbers up to a given number x (like stop printing if it crosses x).*/

// #include<iostream>
// using namespace std;

// int main(){
//     int num = 0, a = 0, b = 1, result = 0;
//     cout << "Enter: ";
//     cin >> num;

//     cout <<a<<" "<<b<<" ";
//     for(int i = 2; ; i++){
//         result = a + b;
//         if(result >= num){
//             break;
//         }
//         cout << result << " ";
//         a = b;
//         b = result;
//     }
// }

/*Find the nth Fibonacci number (just the one number).*/

// #include<iostream>
// using namespace std;

// int main(){
//     int num = 0, a = 0, b = 1, result = 0;
//     cout << "Enter: ";
//     cin >> num;

//     if(num == 1){
//         cout << a;
//     }
//     else if(num == 2){
//         cout << b;
//     }
//     else{
//         for(int i = 2; i < num; i++){
//             result = a + b;
//             a = b;
//             b = result;
//         }
//         cout << result;
//     }

// }

/*Check if a given number is a Fibonacci number or not.*/

// #include<iostream>
// using namespace std;

// int main(){
//     int num = 0, a = 0, b = 1, result = 0;
//     bool found = false;

//     cout << "Enter: ";
//     cin >> num;

//     if(num == 0){
//         found = true;
//     }
//     else if(num == 1){
//         found = true;
//     }
//     else{
//         for(int i = 1; ; i++){
//             result = a + b;
//             a = b;
//             b = result;
//             if(result == num){
//                 found = true;
//             }
//             if(result > num){
//                 break;
//             }
//         }
//     }
//     if(found){
//         cout << "It is a Fibonacci number"<<endl;
//     }
//     else{
//         cout << "It is not an Fibonacci number."<<endl;
//     }
// }