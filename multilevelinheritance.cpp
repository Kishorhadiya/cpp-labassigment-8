#include<iostream>
#include<string>
   using namespace std;

   class first
   {
      protected:
       int sub1;

       public:
          
           void getmarks1(int s)
           {
                this->sub1=s;
           }

             void putmarks1()
             {
                  cout<<sub1<<endl;
             }
   };


     class second : public first
     {

          protected:
            int sub2;

             public:
               
                 void getmarks2(int sub2)
                 {
                    this->sub2=sub2;
                 }

                   void putmarks2()
                   {
                      cout<<sub2<<endl;
                   }
     };

       class third : public second
       {
          private:
           int sub3;

             public:

                void getmarks3(int s,int sub, int su)
                {

                    this->sub3=s;
                    this->sub2=sub;
                    this->sub1=su;
                }

                  void putmarks3()
                  {
                      cout<<sub3<<endl;
                      cout<<sub2<<endl;
                      cout<<sub1<<endl;
                  }
       };


         int main()
         {
             third d1;
             d1.getmarks3(45,50,55);
             d1.putmarks3(); 
         }