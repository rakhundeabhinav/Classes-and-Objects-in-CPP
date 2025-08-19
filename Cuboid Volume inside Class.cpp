// Abhinav Rakhunde
// 24070123001

#include<iostream>
using namespace std;

class Cubiod{
    public:
    int length , breadth , height , volume;
    void input()
    {
        cout << "Enter the length : ";
        cin >> length;
        cout << "Enter the breadth : ";
        cin >> breadth;
        cout << "Enter the height : ";
        cin >> height;
    } 
    void Volume()
    {
        volume = length * breadth * height ;
    }
      void Output()
    {
        cout << "The volume of the given Cubiod is : " << volume << endl;
    }
    };

       int main(){
        Cubiod v1;
        v1.input();
        v1.Volume();
        v1.Output();

    return 0;
}

 /*  OUTPUT
   Enter the length : 10
   Enter the breadth : 10
   Enter the height : 10
   The volume of the given Cubiod is : 1000
*/
