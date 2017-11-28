#include <iostream>

using namespace std;

int main() {
    const float pi = 3.14315926536;
    float r;
    float h=15;
    float Area;
    float Line;
    float Cylider;

    cout << "please enter radius : ";
    cin >> r;
    Area = pi * r * r;
    cout << "Area of circle : " << Area << endl;

    Line = 2 * pi * r;
    cout << "Line of circle : " << Line << endl;

    Cylider = pi * r * h
    cout << "Cylider of circle : " << Cylider << endl;

  return 0;
}
