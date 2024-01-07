#include <iostream>
using namespace std;

class Rectangle {
    int length;
    int width;

public:
    Rectangle(int l, int w) {
        length = l;
        width = w;
    }

    int Area() {
        return length * width;
    }

    void display_Dimension() {
        cout << "Length: " << length << " Width: " << width << endl;
    }

    Rectangle Other_Rect() {
        Rectangle doubledRect(length * 2, width * 2);
        return doubledRect;
    }
};

int main() {
    Rectangle Rect1(12, 14);
    Rectangle Rect2(12, 15);

    cout << "Original Rectangle 1:\n";
    Rect1.display_Dimension();

    cout << "\nOriginal Rectangle 2:\n";
    Rect2.display_Dimension();

    Rectangle doubledRect1 = Rect1.Other_Rect();
    Rectangle doubledRect2 = Rect2.Other_Rect();

    cout << "\nDoubled Rectangle 1:\n";
    doubledRect1.display_Dimension();
    cout << "Area of Doubled Rectangle 1: " << doubledRect1.Area() << endl;

    cout << "\nDoubled Rectangle 2:\n";
    doubledRect2.display_Dimension();
    cout << "Area of Doubled Rectangle 2: " << doubledRect2.Area() << endl;

    return 0;
}
