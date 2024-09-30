#include<iostream>

   using namespace std;
    
    class first
    {
          protected:
            int age;

      public:
            void getinfo(int age)
            {
                this->age=age;
            }

             void putinfo()
             {
                 cout<<age<<endl;

             }
    };

     class second : public first 
     {
          protected:

           string name;


           public:

            void getdata(string name,int age)
            {
                 this->name=name;
                 this->age=age;
            }
              
              void putdata()
              {
                  cout<<name<<endl;
                  cout<<age<<endl;
              }
     };


       int main()
       {
         second s1;
         s1.getdata("kishor",18);
         s1.putdata();
       }