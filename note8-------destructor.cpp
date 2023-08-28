#include <iostream>
using namespace std;

class ABC{
    private:
          int x;
          int y;
    public:
          ABC()
          {
            cout<<"constructor called"<<endl;     
          }  

          ~ABC(){                 // automatic destructor for static allocaction ie,obj1;
            cout<<"destructor called"<<endl;
          }      
};



int main(){
    //static alloc
      ABC obj1;        //destructor automatically called  for static

  //dynamic alloc
     ABC *obj2=new ABC();            //no automatic destructor invoked need to destroy memory by using delete
     delete obj2;                    //destructor for dynamic allocation

    return 0;
                  //before endind of main() detructor invoked automatically
 }
