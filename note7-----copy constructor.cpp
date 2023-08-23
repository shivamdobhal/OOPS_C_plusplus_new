//constructor
#include <iostream>
using namespace std;

class ABC{
    private:
    int x;
    int y;

   public:
    
   
    
        // copy constructor    
       // only work while we creating copy of the constructor ie,obj2 and  not work for first object i.e,obj1  
        ABC (ABC &temp)
        {
            cout<<"copy constructor called"<<endl;
            this->x=temp.x;
            this->y =temp.x + temp.y;
        }

        ABC(int x1,int y1)     //parameterised constructor
    {
     this->x=x1;
     this->y=y1;
    
    }

    void display()
    {
        cout<<this->x<<endl;
        cout<<this->y<<endl;
    }


    
};

int main(){

    cout<<"no constructor"<<endl;
    ABC obj1(10,20);                 //constructor called
    obj1.display();

    ABC obj2(obj1);     //----------------------------->copy constructor
    obj2.display();
    //  cout<<obj1.getx()<<endl;    
    //  cout<<obj1.gety()<<endl;    
    //  cout<<obj2.getx()<<endl;    
    //  cout<<obj2.gety();    
    return 0;
}
