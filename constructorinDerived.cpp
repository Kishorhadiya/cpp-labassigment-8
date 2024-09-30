#include<iostream>

  using namespace std;

    class base
    {
          protected:
            
             int x;
             int y;


             public:

               base(int a, int b):x(a),y(b){}

    };

      class child : public base
      {
           public:

           child(int a, int b):base(a,b){}

             void display()
             {
                  cout<<x<<endl;
                  cout<<y<<endl;
             }
      };


       int main()
       {
          child c1(45,28);
          c1.display();
       }