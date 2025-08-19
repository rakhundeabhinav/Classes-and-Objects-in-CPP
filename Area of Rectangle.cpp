// Abhinav Rakhunde
// 24070123001

#include <iostream>
using namespace std;

class Rectangle {
public:
    double length;
    double width;

    void area() {
        double result = length * width;
        cout << "Area of Rectangle: " << result << endl;
    }
};

int main() {
    Rectangle r;
    cout << "Enter length: ";
    cin >> r.length;
    cout << "Enter width: ";
    cin >> r.width;

    r.area();
    return 0;
}

   /* OUTPUT
   Enter length: 10
   Enter width: 10
   Area of Rectangle: 100
*/
