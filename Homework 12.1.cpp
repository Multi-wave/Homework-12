#include <iostream>
#include <string>
using namespace std;

int main() {
    string lastNames[10];
    int number;

    for (int i = 0 ; i < 10 ; ++i){
        cout << "Enter the last name of the tenant from the apartment " << i+1 << ": ";
        cin >> lastNames[i];
    }
    for (int i = 0; i < 3 ; ++i){
        cout << "Enter a number of apartment: ";
        cin >> number;
        if (number > 10) cout << "Incorrect number!";
        else cout << lastNames[number - 1] << endl;
    }

}
