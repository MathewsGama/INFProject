#include <iostream>

using namespace std;

// Function prototypes
double calculateTriangleArea(double base, double height);
double calculateRectangleArea(double length, double width);
double calculateSquareArea(double side);

int main() {
    int choice;
    double base, height, length, width, side;
    char quit;

    do {
        cout << "Select the shape to calculate the area:" << endl;
        cout << "1. Triangle" << endl;
        cout << "2. Rectangle" << endl;
        cout << "3. Square" << endl;
        cout << "Enter your choice (1, 2, or 3): ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the base and height of the triangle: ";
                cin >> base >> height;
                cout << "Area of the triangle: " << calculateTriangleArea(base, height) << endl;
                break;
            case 2:
                cout << "Enter the length and width of the rectangle: ";
                cin >> length >> width;
                cout << "Area of the rectangle: " << calculateRectangleArea(length, width) << endl;
                break;
            case 3:
                cout << "Enter the side length of the square: ";
                cin >> side;
                cout << "Area of the square: " << calculateSquareArea(side) << endl;
                break;
            default:
                cout << "Invalid choice. Please enter 1, 2, or 3." << endl;
                continue;
        }

        cout << "Do you want to calculate the area of another shape? (Y/N): ";
        cin >> quit;
    } while (quit == 'Y' || quit == 'y');

    return 0;
}

// Function to calculate the area of a triangle
double calculateTriangleArea(double base, double height) {
    return 0.5 * base * height;
}

// Function to calculate the area of a rectangle
double calculateRectangleArea(double length, double width) {
    return length * width;
}

// Function to calculate the area of a square
double calculateSquareArea(double side) {
    return side * side;
}
