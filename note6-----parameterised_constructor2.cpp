//constructor
#include <iostream>
using namespace std;

class ABC{
    private:
    int x;
    int y;

   public:

    ABC(int x1,int y1)             //parameterised constructor
    {
        this->x=x1;
        this->y=y1; 
    }
        

    int getx()
    {
     return x;
    }    

    int gety()
    {
     return y;
    }    
    
};

int main(){

    cout<<"no constructor"<<endl;
    ABC obj1(10,20);                 //constructor called

    
     cout<<obj1.getx()<<endl;    
     cout<<obj1.gety();    
    return 0;
}
