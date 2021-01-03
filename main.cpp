//trying to use euclidean algorithm for this

#include <iostream>

using namespace std;

//function declaration
int gcd(int a, int b);

int main()
{
    cout << "Welcome to the GCD Calculator" << endl;

    int a = 0;
    int b = 0;

    do{
        cout << "Enter number 1: ";
        if (!(cin >> a)){
            cout << "Not a number! Please try again" << endl;
            cin.clear();
            cin.ignore(10000, '\n');
        } else if (a < 1){
            cout << "Please ensure your numbers are positive and non-zero! Please try again" << endl;
            cin.clear();
            cin.ignore(10000, '\n');
        } else {
            cout << "a = " << a << endl;
        }
    }while(a == 0);

    do{
        cout << "Enter number 2: ";
        if (!(cin >> b)){
            cout << "Not a number! Please try again" << endl;
            cin.clear();
            cin.ignore(10000, '\n');
        } else if (b < 1){
            cout << "Please ensure your numbers are positive and non-zero! Please try again" << endl;
            cin.clear();
            cin.ignore(10000, '\n');
        } else {
            cout << "b = " << b << endl;
        }
    }while(b == 0);

    cout << "the greatest common divisor of " << a << " and " << b << " is " << gcd(a,b) << endl;
    return 0;
}


int gcd(int a, int b){
    if (a == b){
        return a;
    } else if (a > b){
        return gcd(b, a-b);
    } else if (b > a) {
        return gcd(a, b-a);
    } else {
        return -1;
    }
}
