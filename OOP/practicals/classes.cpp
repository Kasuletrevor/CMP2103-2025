#include <iostream>
#include <string>

using namespace std;

class Car
{
private:
    string make;
    string model;
    int year;

public:
    Car() : make("Unknown"), model("Unknown"), year(0) {} // Default constructor

    Car(string mk, string mod, int yr) : make(mk), model(mod), year(yr) {} // Parameterized constructor

    void displayInfo()
    {
        cout << year << " " << make << " " << model << endl;
    }

    void setmake(string m)
    {
        make = m;
    }

    void setyear(int y)
    {
        year = y;
    }

    // int getyear()
    // {
    //     return year;
    // }
    void getYear(int &y)
    {
        y = year;
    }

    string getmake()
    {
        return make;
    }
};

int main()
{
    Car mycar;
    Car yourcar("Honda", "Civic", 2020);
    mycar.displayInfo();
    yourcar.displayInfo();

    // mycar.make = "Toyota";
    mycar.setmake("Toyota");
    mycar.setyear(2022);

    int yr;
    mycar.getYear(yr);
    cout << "My car is a " << yr << " " << mycar.getmake() << endl;
    mycar.displayInfo();
}