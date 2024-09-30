#include <iostream>
using namespace std;

class A
{
protected:
    int rollno;

public:
    A(int rollno1)
    {
        this->rollno = rollno1;
    }

    void display()
    {
        cout << rollno << endl;
    }
};

class B
{
private:
    int marks;
    //      A  a1(45);
    //    a1.display();
public:
    B(int marks1)
    {
        A a1(45);
        a1.display();
        this->marks = marks1;
    }
};

int main()
{
    B b1(48);
    // b1.display();
}

// a1.B::display()
// {
//     return a1.();
// }
