//Piyush Pawar
//24070123145
//B3

#include <iostream>
#include <string>
using namespace std;

class food
{
    public:
    string cuisine = "Indian ";
    void type()
    {
        cout <<"Asian" << endl;
    }
};

class dish: public food
{
    public:
    string dish = "Biryani";
};

class restaurant: public dish
{
    public:
    string name = "Spice Kitchen";
};

int main()
{
    restaurant f3;
    f3.type();
    cout << f3.cuisine << ":" << f3.dish << endl;
    cout << "Restaurant: " << f3.name;
}
class food
{
    public:
    string cuisine = "Indian ";
    void type()
    {
        cout <<"Asian" << endl;
    }
};

class dish: public food
{
    public:
    string dish = "Biryani";
};

class restaurant: public dish
{
    public:
    string name = "Spice Kitchen";
};

int main()
{
    restaurant f3;
    f3.type();
    cout << f3.cuisine << ":" << f3.dish << endl;
    cout << "Restaurant: " << f3.name;
}

/*
Output:
Asian
Indian: Biryani
Restaurant: Spice Kitchen
*/