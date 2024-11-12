#include <iostream>
using namespace std;

// клас квадрат
class Square {
public:
    void draw(int squareSide) {
        for (int i = 0; i < squareSide; i++) {
            for (int j = 0; j < squareSide; j++) {
                cout << "* ";
            }
            cout << endl;
        }
    }
};

// клас прямокутник
class Rectangle {
public:
    void draw(int width, int height) {
        for (int i = 0; i < height; i++) {
            for (int j = 0; j < width; j++) {
                cout << "* ";
            }
            cout << endl;
        }
    }
};

// клас трикутник
class Triangle {
public:
void draw(int sideLength) {
        for (int i = 1; i <= sideLength; i++) {
            for (int j = 0; j < i; j++) {
                cout << "* ";
            }
            cout << endl;
        }
    }
};

int main() {
    int squareSide, rectWidth, rectHeight, triangleSide;

    cout << "Enter square side: ";
    cin >> squareSide;
    Square square;
    square.draw(squareSide);

    cout << "\nEnter width and hight of rectangle: ";
    cin >> rectWidth >> rectHeight;
    Rectangle rectangle;
    rectangle.draw(rectWidth, rectHeight);

    cout << "\nEnter triangle side: ";
    cin >> triangleSide;
    Triangle triangle;
    triangle.draw(triangleSide);
}
