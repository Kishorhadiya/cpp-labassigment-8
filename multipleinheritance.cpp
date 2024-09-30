#include <iostream>

using namespace std;

class A
{
protected:
    string name;

public:
    void getname(string name)
    {
        this->name = name;
    }

    void putname()
    {
        cout << name << endl;
    }
};

class B
{
protected:
    int age;

public:
    void getage(int age)
    {
        this->age = age;
    }

    void putage()
    {
        cout << age << endl;
    }
};

class c : public B, public A
{
private:
    int result;

public:
    void getresult(int result, int age,string n)
    {
        this->result = result;
        this->age = age;
        this->name = n;
    }

    void putresult()
    {
        cout << result << endl;
        cout << age << endl;
        cout << name << endl;
    }
};

int main()
{
    c c1;
    c1.getresult(80, 18,"kishor");
    c1.putresult();
    return 0;
}