#include <iostream>
#include <stdlib.h>

using namespace std;

class Modifier{
    private:
        string name;
    public:
        void setName(string name){
            this->name=name;
        }
        string getName(){
            return name;
        }
};

int main() {
    system("cls");
    Modifier a ;
    a.setName("Aryan");
    cout<<a.getName()<<endl;
    return 0;
}