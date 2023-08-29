#include <iostream>
using namespace  std;

class ABC{                                              //----->encapsulation is wrapping of class member and member function in a single unit ie, class

    private:
      int a;
      int b;

    public:
     void setvalue(int a,int b)
     {
        this->a=a;
        this->b=b;
     }    

     int printvalue()
     {
        cout<<this->a<<endl;
        cout<<this->b<<endl;
     }
};


int main()
{
    ABC obj1;
    obj1.setvalue(20,40);
    obj1.printvalue();
    return 0;
}
