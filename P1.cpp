// Alisha is conscious about her health and wants to have a strict number of calories per day. But being a foodie, she loves eating Dahi Bhallay from Hafiz, sometimes multiple times a day. Now 1 bowl of Dahi Bhallay has 25 calories each and sometimes having Dahi Bhallay all day can exceed her calorie limit. And to compensate, Alisha decides to eat Tomato that have 5 calories each and broccoli that have 1 calorie each. She buys a certain amount of Dahi Bhallay, Tomatoes and Broccolis in the morning and she wants to know whether she can keep up with her daily amount of calories.
// Your job is to follow Alisha’s priority and allow her to have maximum amount of Dahi Bhallay followed by Tomatoes, Broccolis or Nothing. Ask Alisha what is her diet plan and how much Dahi Bhallay, Tomatoes and Broccoli she bought. Once you have all the information, compute how many Dahi Bhallay, Tomatoes and Broccoli she can eat. If her diet plan cannot be fulfilled, display it as an impossibility.

#include <iostream>
using namespace std;

int main(){
    int calories, dahi, tomato, boroccoli;
    cout << "Enter the daily calorie limit: ";
    cin >> calories;
    cout << "Enter the number of Dahi Bhallay bought: ";
    cin >> dahi;
    cout << "Enter the number of Tomatoes bought: ";
    cin >> tomato;
    cout << "Enter the number of Broccolis bought: ";
    cin >> boroccoli;

    int total_calories = 0;
    int dahi_eaten = 0, tomato_eaten = 0, boroccoli_eaten = 0;

    // Prioritize Dahi Bhallay
    while(dahi > 0 && total_calories + 25 <= calories) {
        total_calories += 25;
        dahi--;
        dahi_eaten++;
    }

    // Then prioritize Tomatoes
    while(tomato > 0 && total_calories + 5 <= calories) {
        total_calories += 5;
        tomato--;
        tomato_eaten++;
    }

    // Final boroccoli priority
    while(boroccoli > 0 && total_calories + 1 <= calories) {
        total_calories += 1;
        boroccoli--;
        boroccoli_eaten++;
    }


    if(total_calories != calories){
        cout << "It is impossible to meet the calorie limit with the given food items." << endl;
            
    }else{
        cout << "Alisha can eat: " << endl;
        cout << "Dahi Bhallay: " << dahi_eaten << endl;
        cout << "Tomatoes: " << tomato_eaten << endl;
        cout << "Broccolis: " << boroccoli_eaten << endl;
        cout << "Total Calories: " << total_calories << endl;
    }
    

    return 0;

}