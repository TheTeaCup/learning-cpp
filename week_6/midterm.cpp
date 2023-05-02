#include <iostream>

using namespace std;

int area(int length, int width) {
  return length * width;
}

int main() {
  int length, width;

  cout << "Enter length: ";
  cin >> length;

  cout << "Enter width: ";
  cin >> width;

  int result = area(length, width);

  cout << "The area is: " << result << endl;
}