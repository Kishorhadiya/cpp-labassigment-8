#include <iostream>

using namespace std;

class A
{
protected:
     int rollno;

public:
     void getroll(int roll)
     {
          this->rollno = roll;
     }

     void putrol()
     {
          cout << rollno;
     }
};

class B : public A
{
protected:
     string name;

public:
     void getname(string n)
     {
          this->name = n;
     }

     void putname()
     {
          cout << name << endl;
     }
};

class C : public B
{
protected:
     int marks;

public:
     void getmarks1(int marks, string n, int roll1)
     {
          this->marks = marks;
          this->name = n;
          this->rollno = roll1;
     }

     void putmarks1()
     {
          cout << marks << endl;
          cout << name << endl;
          cout << rollno << endl;
     }
     
};

int main()
{
     C c1;
     c1.getmarks1(45, "kishor", 5);
     c1.putmarks1();
}
