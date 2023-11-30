#include<iostream>
using namespace std;

class Demo   
{
    public:   // Access Specifier
       int i;  // characterstic
       int j;  //characterstic

       Demo()   // Default Constructor
       {
            cout<<"Inside Default Constructor\n";
            i = 0;
            j = 0;
       }

       Demo(int A,int B)  // parameterised Constructor
       {
            cout<<"Inside Parameterised Constructor\n";
            i = A;
            j = B;
       }

       Demo(Demo &ref)  // Copy Constructor
       {
            cout<<"Inside Copy Constructor\n";
            i = ref.i;
            j = ref.j;
       }

       ~Demo()
       {
            cout<<"Inside Destructor\n";
       }

};

int main()
{
    Demo obj1;
    Demo obj2(11,21);
    Demo obj3(obj2);    
    
    return 0;
}