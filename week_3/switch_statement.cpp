#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Enter a number between 1 and 5: ";
    cin >> num;
    switch (num)
    {
        case 1:
        cout << "1 is I";
        break;

        case 2:
        cout << "2 is II";
        break;

        case 3:
        cout << "3 is III";
        break;

        case 4:
        cout << "4 is IV";
        break;

        case 5:
        cout << "5 is V";
        break;

        default:
        cout << "Number out of range.";
    }
}