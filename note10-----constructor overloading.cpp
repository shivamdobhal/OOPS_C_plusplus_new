#include <iostream>
using namespace std;

class ABC{
    private:
          int x;
          int y;
    public:      
    ABC()                       //---------------------->contructor 1
    {
        x=10;
        cout<<"value of x is "<<x<<endl;
    }   

     ABC(int x,int y)   //---------------------------->constructor 2
    {
    this->x=x;
    this->y=y;
        cout<<" new value of x is "<<this->x<<endl;
        cout<<" new value of y is "<<this->y<<endl;
    }    
    
            
};



int main(){
   ABC obj1;  
   ABC obj2(20,40);     
}

///////////////////////////////////////////////////////////////////
output-- value of x is 10
     new value of x is 20
      new value of y is 40

