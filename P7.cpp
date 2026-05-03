// The Last Stop Boutique is having a five-day sale. Each day, starting on Monday, the price will drop 10% of the previous day’s price. For example, if the original price of a product is $20.00, the sale price on Monday would be $18.00 (10% less than the original price). On Tuesday the sale price would be $16.20 (10% less than Monday). On Wednesday the sale price would be $14.58; on Thursday the sale price would be $13.12; and on Friday the sale price would be $11.81. Develop a solution that will calculate the price of an item for each of the five days, given the original price.

#include <iostream>
#include <iomanip> // for setprecision  
#include <cmath>
using namespace std;

int main(){
    double original_price;
    cout << "Enter the original price of the item: ";
    cin >> original_price;

    cout << fixed << setprecision(2); // Set precision to 2 decimal places

    for(int day = 1; day <= 5; day++ ){
        double sale_price = original_price * pow(0.9, day); // Calculate the sale price for the current day
        cout << "Day " << day << ": $" << sale_price << endl; // Display the sale price for the current day
    }
    return 0;

}