//Piyush Pawar
//24070123145
//B3

#include <iostream>
#include <string>
using namespace std;

class vehicle
{
    public:
    string company = "Ford";
    void type()
    {
        cout << "Mustang \n";
    }
};

class specs
{
    public:
    string mileage = "8 kmpl";
    void colour()
    {
        cout << "Grey" << endl;
    }
};

class car: public vehicle, public specs
{
    public:
    string seater = "4 seater";
};

int main()
{
    car f2;
    f2.colour();
    cout << f2.company << " ";
    f2.type();
    cout << "(" << f2.seater << ")" << endl << "MILEAGE: " << f2.mileage << endl;

}
class vehicle
{
    public:
    string company = "Ford";
    void type()
    {
        cout << "Mustang \n";
    }
};

class specs
{
    public:
    string mileage = "8 kmpl";
    void colour()
    {
        cout << "Grey" << endl;
    }
};

class car: public vehicle, public specs
{
    public:
    string seater = "4 seater";
};

int main()
{
    car f2;
    f2.colour();
    cout << f2.company << " ";
    f2.type();
    cout << "(" << f2.seater << ")" << endl << "MILEAGE: " << f2.mileage << endl;
   
}

/*
Output:
Grey
Ford
Mustang
(4 seater)
MILEAGE: 8 kmpl
*/