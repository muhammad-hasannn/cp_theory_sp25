#include<iostream>
using namespace std;


int main(){
    int const totalSeats = 200;
    int availableSeats = totalSeats;
    int reservedSeats = 0, toReserve = 0, toCancel = 0;
    int choice = 0;

    cout << endl;
    cout << "***Welcome To My Class***"<<endl;
    cout << "Available seats are: "<<totalSeats<<endl;
    do{
        cout << endl;
        cout << "---MENU---"<<endl;
        cout << "To reserve seats, Press '1'"<<endl;
        cout << "To cancel seats, Press '2'"<<endl;
        cout << "To check available seats, Press '3'"<<endl;
        cout << "To exit, Press '4'"<<endl;
        cout << "Enter choice: ";
        cin >> choice;
        cout << endl;

        if(choice == 1){
            cout << "Enter the number of seat(s) you want to reserve: ";
            cin >> toReserve;
            if(toReserve > availableSeats){
                cout << "No enough seat(s) are not avaiable."<<endl;
            }
            else{
                cout << "Seat(s) reserved succesfully!"<<endl;
                reservedSeats += toReserve;
                availableSeats -= toReserve;
            }
        }
        else if(choice == 2){
            cout << "Enter how many seat(s) you want to cancel: ";
            cin >> toCancel;
            if(toCancel > reservedSeats){
                cout << "No enough seat(s) are available."<<endl;
            }
            else{
                cout << "Seat(s) cancelled succesfully!"<<endl;
                reservedSeats -= toCancel;
                availableSeats += toCancel;
            }
        }
        else if(choice == 3){
            cout << "Avaiable seat(s) are: "<<availableSeats<<endl;
        }
        else if(choice == 4){
            cout << "Terminating program with \'"<<availableSeats<<"\' available seat(s)."<<endl;
        }
        else{
            cout << "Invalid choice!"<<endl;
        }
      
    }while(choice != 4);

}
