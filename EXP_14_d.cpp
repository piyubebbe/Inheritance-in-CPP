//Piyush Pawar
//24070123145
//B3

#include <iostream>
#include <string>
using namespace std;

class jeans
{
    public:
    string type[3] = {"Botcut", "Wide Leg", "Skinny"};
    void brand()
    {
        cout << "H&M - Denim" << endl;
    }
};

class bootcut: public jeans
{
    public:
    string colour = "Dark Blue";
};

class WL: public jeans
{
    public:
    string colour = "Black";
};

class skinny: public jeans
{
    public:
    string colour = "Grey";
};

int main()
{
    bootcut b1;
    b1.brand();
    cout << b1.type[0] << ":" << b1.colour << endl;
   
    WL w1;
    w1.brand();
    cout << w1.type[1] << ":" << w1.colour << endl;
   
    skinny s1;
    s1.brand();
    cout << s1.type[2] << ":" << s1.colour << endl;
   
}

/*
Output:
H&M - Denim
Botcut: Dark Blue
H&M - Denim
Wide Leg: Black
H&M - Denim
Skinny: Grey
*/