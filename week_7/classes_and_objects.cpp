#include <iostream>

#include <string>

using namespace std;

// car class declaration
class car {
  private: int year;
  string make;
  int speed;

  public:
    // constructor with default parameters
    car(int y = 2000, string m = "unknown") {
      year = y;
      make = m;
      speed = 0;
    }

  // Accessors ( The get functions)

  int getYear() {
    return year;
  }

  string getMake() {
    return make;
  }

  int getSpeed() {
    return speed;
  }

  // Mutators
  void accelerate() {
    speed += 10;
  }

  void brake() {

    if (speed >= 10)
      speed -= 10;
    else
      speed = 0;
  }

};

int main() {
  car impreza(2018, "Subaru");
  cout << " I'm in my " << impreza.getYear() << " " <<
    impreza.getMake() << " Impreza.\n\n";
  // Now stop
  cout << "Accelerating...\n\n";
  for (int run = 0; run < 5; run++) {

    impreza.accelerate();
    cout << " current speed: " << impreza.getSpeed() << "mph.\n";
  }
  cout << endl;

  // now breaking
  cout << "Now breaking... " << endl;
  for (int brk = 0; brk < 5; brk++) {
    impreza.brake();
    cout << "  Current speed: " << impreza.getSpeed() << "mph.\n";
    if (impreza.getSpeed() == 0) {
      cout << endl << impreza.getMake() << "(" << impreza.getYear() << ")" << " has now stopped\n";
    }
  }

  return 0;
}