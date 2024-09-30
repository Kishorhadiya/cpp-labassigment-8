// #include<iostream>

//    using  namespace std;
     
//       class base
//       {
//            protected:
//             int age;

//              public:

//                void getage(int age1)
//                {
//                    this->age=age1;
//                }

//                  void putage()
//                  {
//                        cout<<age<<endl;
//                  }
//       };

//         class derive : virtual public base
//         {
//               protected:
//                int marks1;

//                 public:

//                   void getmarks1(int marks1)
//                   {
//                       this->marks=marks1;
//                   }

//                     void putmarks1()
//                     {
//                           cout<<marks1<<endl;
//                     }
//         };


//           class derive2 : virtual public derive
//           {
//                protected:
                  
//                    int sub1;

//                    public:

//                      void getmarks2(int sub,int marks,int age)
//                      {
//                            this->sub=sub1;
//                            this->marks=marks1;
//                            this->age=age1;
//                      }

//                        void putmarks2()
//                        {
//                            cout<<sub<<endl;
//                            cout<<marks<<endl;
//                            cout<<age<<endl;

//                        }
//           };

//               int main()
//               {
//                 derive2 d1;
//                 d1.getmarks2(45,888,18);
//                 d1.putmarks2();
//               }




#include<iostream>

using namespace std;

class base {
protected:
    int age;

public:
    void getage(int age1) {
        this->age = age1;
    }

    void putage() {
        cout << "Age: " << age << endl;
    }
};

class derive : virtual public base {
protected:
    int marks1;

public:
    void getmarks1(int marks1) {
        this->marks1 = marks1;
    }

    void putmarks1() {
        cout << "Marks1: " << marks1 << endl;
    }
};

class derive2 : virtual public derive {
protected:
    int sub1;

public:
    void getmarks2(int sub, int marks, int age) {
        this->sub1 = sub;
        this->marks1 = marks;
        this->age = age;
    }

    void putmarks2() {
        cout << "Subject 1 Marks: " << sub1 << endl;
        cout << "Total Marks: " << marks1 << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    derive2 d1;
    d1.getmarks2(45, 888, 18);  // Setting sub1, marks1, and age
    d1.putmarks2();  // Displaying the values
    return 0;
}
