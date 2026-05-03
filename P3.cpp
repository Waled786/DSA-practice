// You are driving a little too fast, and a police officer stops you. Write pseudocode to display the result, encoded as a number value: 0=no ticket, 1=small ticket, 2=big ticket. If speed is 60 or less, the result is “no ticket”. If speed is between 61 and 80 inclusive, the result is “small ticket”. If speed is 81 or more, the result is “big ticket”. Unless it is your birthday -- on that day, your speed can be 5 higher in all cases.



#include <iostream>
using namespace std;

int main(){
    int speed;
    bool isBirthday;
    cout << "Enter your speed: ";
    cin >> speed;
    cout << "Is it your birthday? (1 for yes, 0 for no): ";
    cin >> isBirthday;
    if(isBirthday){
        speed -= 5; // Allow 5 more speed on birthday
    }
    if(speed <= 60){
        cout << "0 = No ticket" << endl;
    }else if(speed >= 61 && speed <= 80){
        cout << "1 = Small ticket" << endl;
    }else{
        cout << "2 = Big ticket" << endl;
    }
    return 0;

}