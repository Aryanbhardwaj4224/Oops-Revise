#include <iostream>
#include <stdlib.h>
using namespace std;

class Car{
    public:
    string brand;
    string name;

    void greet(){
        cout<<"hello "<< name << " who own a "<<brand <<endl;
    }

};

int main() {
    system("cls");
    Car model1;
    model1.brand="bmw";
    model1.name="Aryan";
    model1.greet();

    return 0;
}