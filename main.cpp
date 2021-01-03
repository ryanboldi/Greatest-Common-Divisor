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
            cout << "Not a number! Please try again";
            cin.clear();
            cin.ignore(10000, \n);
        }
    }while(a != 0 && b!= 0);


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
