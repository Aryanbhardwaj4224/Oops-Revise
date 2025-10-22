#include <iostream>
using namespace std;

class Student {
private:
    int marks;       // only inside class
public:
    string name;     // accessible anywhere

protected:
    int rollNo;      // accessible in derived class
};

int main() {
    Student s1;
    s1.name = "Aryan";   // ✅ allowed (public)
    // s1.marks = 90;     // ❌ not allowed (private)
    // s1.rollNo = 12;    // ❌ not allowed (protected)
    cout<<s1.name;
}