 //we cannot access private memebers directly outside the class
// getter and setters(member functions) are used to access private member inside the class and outside the class; 


#include <iostream>
using namespace std;

class abc{
private:
    int x;
    int y;

public:
    int getx(){    //getter
    return x;
    }

    int gety()      //getter
    {
        return y;
    }

//setter
    void setx(int a){
        x=a;
    }

    void sety(int b){
        y=b;
    }


};

int main(){
    abc obj1;
   
    
    cout<<obj1.getx()<<endl;
    cout<<obj1.gety()<<endl;
    
    obj1.setx(10);
    obj1.sety(20);
    
    cout<<obj1.getx()<<endl;
    cout<<obj1.gety()<<endl;
    

    return 0;
}
