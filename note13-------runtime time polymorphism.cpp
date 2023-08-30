// code 1--------------------->for function overriding
#include <iostream>
using namespace std;

class parent{

    public:
    void print()
    {
        cout<<"parent class"<<endl;
    }
};

class child:public parent{
 public:   
void print()
    {
        cout<<"child class"<<endl;
    }

};

int main(){
    parent obj1;
    child obj2;
    obj1.print();
    obj2.print();
    return 0;
}

// output--parent class
//         child class

/////////////////////////////////////////////////////////////////////////////////////////////////
//code2--------------------->data member overloading

  #include <iostream>
using namespace std;

class parent{

    public:
   string color="black";
};

class child:public parent{
 public:   
string color="red";

};

int main(){
    parent obj1;
    child obj2;
    cout<<"parent::"<<obj1.color<<endl;
    cout<<"child::"<<obj2.color;
    return 0;
}


// output---parent::black
//          child::red

----------------------------------------------------------------------------------------------------------------------------------------------
// 2------->virtual functions

  #include <iostream>
using namespace std;

class parent{

    public:
    virtual void print()
    {
        cout<<"parent class"<<endl;
    }
};

class child:public parent{
 public:   
void print()
    {
        cout<<"child class"<<endl;
    }

};

int main(){
    child obj1;
  
    //// pointer of parent class that points to obj1
    parent *parentptr=&obj1;

    parentptr->print();


    return 0;
}



// output--->child class


  

