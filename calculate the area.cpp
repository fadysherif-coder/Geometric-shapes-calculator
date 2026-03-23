#include <iostream>
#include <cmath>   // for M_PI

using namespace std;

int main() {
    int choice;
    cout << "Choose a shape:\n";
    cout << "1. Circle\n";
    cout << "2. Square\n";
    cout << "3. Triangle\n";
    cout << "Enter your choice: ";
    cin >> choice;

    double length, width, area, perimeter;

    switch(choice) {
        case 1: { // Circle
            double radius;
            cout << "Enter the radius of the circle: ";
            cin >> radius;
            area = M_PI * radius * radius;
            perimeter = 2 * M_PI * radius;
            cout << "Area = " << area << endl;
            cout << "Perimeter = " << perimeter << endl;
            break;
        }
        case 2: { // Square
            cout << "Enter the side length of the square: ";
            cin >> length;
            area = length * length;
            perimeter = 4 * length;
            cout << "Area = " << area << endl;
            cout << "Perimeter = " << perimeter << endl;
            break;
        }
        case 3: { // Triangle
            double base, height, side1, side2;
            cout << "Enter the base length: ";
            cin >> base;
            cout << "Enter the height: ";
            cin >> height;
            cout << "Enter the other two sides: ";
            cin >> side1 >> side2;
            area = 0.5 * base * height;
            perimeter = base + side1 + side2;
            cout << "Area = " << area << endl;
            cout << "Perimeter = " << perimeter << endl;
            break;
        }
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}