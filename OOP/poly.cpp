#include <iostream>

using namespace std;

class Instrument
{
public:
    virtual void play()
    {
        cout << "Playing instrument" << endl;
    }

    Instrument()
    {
        cout << "Instrument created" << endl;
    }

    Instrument(int &a)
    {
        age = a;
        a = 9;
        cout << "Instrument created" << endl;
    }

    virtual ~Instrument()
    {

        cout << "Instrument destroyed" << endl;
    }
};

class Guitar : public Instrument
{
public:
    void play() override
    {
        cout << "Playing guitar" << endl;
    }

    ~Guitar() override
    {
        cout << "Guitar destroyed" << endl;
    }
};

class Piano : public Instrument
{
public:
    void play() override
    {
        cout << "Playing piano" << endl;
    }

    ~Piano() override
    {
        cout << "Piano destroyed" << endl;
    }
};

int main()
{

    // with polymorphism
    // Instrument *instr1 = new Instrument();
    Instrument *instr1;

    Guitar guitar1;
    instr1 = &guitar1;
    instr1->play();

    Piano piano1;
    instr1 = &piano1;
    instr1->play();

    // Calls Instrument's play

    Instrument *instr2 = new Piano();
    instr2->play(); // Calls Piano's play

    // delete instr1;
    delete instr2;

    return 0;
}
