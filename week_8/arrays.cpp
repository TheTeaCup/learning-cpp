#include <iostream>
#include <cmath>

using namespace std;


int main() {
    
  int gradebook[3][3] = {
      {80, 95, 65},
      {99, 75, 80},
      {65, 80, 90}
  };
    
  cout << "Gr1 Gr2 Gr3 Avg" << endl;

  double sum = 0;
  double average[3];
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      sum = sum + gradebook[i][j];
      cout << gradebook[i][j] << "  ";

    }
    average[i] = sum / 3;
    sum = 0;
    cout << round(average[i]) << endl;

  }
}