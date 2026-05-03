// Given 3 int values, A, B and C, return their sum. However, if any of the values is a teen -- in the range 13-19 inclusive -- then that value counts as 0, except 15 and 16 do not count as a teens.


#include <iostream>
using namespace std;


int fixTeen(int a, int b, int c);

int main(){
    int A, B, C;
    cout << "Enter three integer values: ";
    cin >> A >> B >> C;

    int result = fixTeen(A, B, C);
    cout << "The sum of the values is: " << result << endl;

    return 0;

}


int fixTeen(int a, int b, int c){
        if((a >= 13 && a <= 19) && a != 15 && a != 16){
            a = 0;
        }
        if((b >= 13 && b <= 19) && b != 15 && b != 16){
            b = 0;
        }
        if((c >= 13 && c <= 19) && c != 15 && c != 16){
            c = 0;
        }

        return a + b + c;
}