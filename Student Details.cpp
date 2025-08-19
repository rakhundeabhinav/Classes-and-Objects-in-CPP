// Abhinav Rakhunde
// 24070123001

#include<iostream>
using namespace std;

class Student {
    public:
    string name;
    string branch;
    string subject;
    string year;
    float result;
};

int main(){
    Student S1;
    S1.name="Abhinav Rakhunde";
    S1.branch="E&TC";
    S1.subject="C++";
    S1.year="Second";
    S1.result=7.73;

    Student S2;
    S2.name="Abhisar Behera";
    S2.branch="E&TC";
    S2.subject="C++";
    S2.year="Second";
    S2.result=8.00;

    Student S3;
    S3.name="Abir Seth";
    S3.branch="E&TC";
    S3.subject="C++";
    S3.year="Second";
    S3.result=9.00;

    cout<<S1.name<<endl;

    return 0;
}

/* OUTPUT:
Abhinav Rakhunde
*/
