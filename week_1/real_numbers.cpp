#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double x=10.123;
    double y=25.456;
    double z=x+y;

    cout << fixed << showpoint << setprecision(2);
    cout<<"Sum of x+y = " << z;
}