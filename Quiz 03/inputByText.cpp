#include<iostream>
#include<string>
using namespace std;

int main(){
    //hardcoded blood types
    string acceptableBlood[8] = {"O-","O+","A-","A+","B-","B+","AB-","AB+"};
    string donorBlood[8][8] = {
        {"O-"},
        {"O-","O+"},
        {"O-","A-"},
        {"O-","O+","A-","A+"},
        {"O-","B-"},
        {"O-","O+","B-","B+"},
        {"O-","A-","B-","AB-"},
        {"O-","O+","A-","A+","B-","B+","AB-","AB+"}
    };

    cout << "------------------------"<<endl;
    cout << "***Blood Match System***"<<endl;
    cout << "------------------------"<<endl;
    cout << endl;

    string userBlood;
    int row = -1; //row number to show compatible blood types
    int choice = 0;

    do{
        //displaying list of acceptable blood types
        cout << "List of Acceptable Blood Types"<< endl;
        cout << endl;
        for(int i = 0, sNo = 1; i < 8; i++, sNo++){
            cout <<sNo<<". "<<acceptableBlood[i]<<endl;
        }
            
        //asking user to enter blood type
        do{
            cout << "Enter your blood type: ";
            getline(cin, userBlood);
    
            for(int i = 0; i < 8; i++){
                if(userBlood == acceptableBlood[i]){
                    row = i;
                    break;
                }
                else if(i < 7){
                    continue; //preventing to execute else block, bcuz all value have not check yet... 
                }
                else{
                    cout << "Invalid blood type!"<<endl;
                }
            }
    
        }while(row == -1);
    
        //displaying compatible blood
    
        //we have to display only one row (which is compatible)
        for(int j = 0; j < 8; j++){
            cout << donorBlood[row][j] << " "; //row already know
        }
        row = -1; //resetting row after displaying compatible bloods
    
        cout << endl;
        cout << "Check another blood type? Enter 1 for Yes, 0 for No: ";
        cin >> choice;
        cout << endl;
        cin.ignore();

    }while(choice != 0);
    
}