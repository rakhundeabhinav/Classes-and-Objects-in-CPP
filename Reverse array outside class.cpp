// Abhinav Rakhunde
// 24070123001

#include <iostream>
using namespace std;

class ArrayOps {
public:
    void reverseArray(int arr[], int size);
};

void ArrayOps::reverseArray(int arr[], int size) {
    cout << "Reversed Array: ";
    for (int i = size - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);

    ArrayOps obj;
    obj.reverseArray(arr, size);

    return 0;
}

/*
OUTPUT
Reversed Array: 50 40 30 20 10
  */
