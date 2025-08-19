// Abhinav Rakhunde
// 24070123001

#include <iostream>
using namespace std;

class Cube {
private:
    int side;
    int volume;

public:
    void input() {
        cout<<"Enter the side of Cube: ";
        cin >> side;
    }

    void calculateVolume() {
        volume = side * side * side;
    }

    void output() {
        cout <<"Volume:<< volume << endl;
    }
};

int main() {
    Cube c1;
    c1.input();
    c1.calculateVolume();
    c1.output();
    return 0;
}

/* OUTPUT
 Enter the side of Cube: 10
 Volume:1000 
*/
