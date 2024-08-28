#include <iostream>

using namespace std;

class Rectangle {
private:
    static int count;
    int length;
    int width;

public:
    Rectangle() {
        count++;
    }

    static int getCount() {
        return count;
    }

    void setDimensions(int l, int w) {
        length = l;
        width = w;
    }

    int getArea() {
        return length * width;
    }
};

int Rectangle::count = 0;

int main() {
    int n;
    cout << "Enter the number of rectangles: ";
    cin >> n;

    Rectangle rectangles[n];

    for (int i = 0; i < n; i++) {
        int l, w;
        cout << "Enter length and width for rectangle " << i + 1 << ": ";
        cin >> l >> w;
        rectangles[i].setDimensions(l, w);
    }

    cout << "\nTotal number of rectangles: " << Rectangle::getCount() << endl;
    cout << "Area of each rectangle:\n";

    for (int i = 0; i < n; i++) {
        cout << "Rectangle " << i + 1 << ": " << rectangles[i].getArea() << endl;
    }

    return 0;
}