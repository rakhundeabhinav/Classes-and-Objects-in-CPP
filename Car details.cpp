// Abhinav Rakhunde
// 24070123001

#include <iostream>
using namespace std;

class Car {
public:
    string brand;
    int year;

    void input() {
        cout << "Enter car brand: ";
        cin >> brand;
        cout << "Enter manufacturing year: ";
        cin >> year;
    }

    void display() {
        cout << "Car Brand: " << brand << endl;
        cout << "Manufacturing Year: " << year << endl;
    }
};

int main() {
    Car c1;
    c1.input();
    c1.display();
    return 0;
}

/* OUTPUT
 Enter car brand: Audi
 Enter manufacturing year: 2014
 Car Brand: Audi
 Manufacturing Year: 2014
*/
