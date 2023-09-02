#include <iostream>
using namespace std;

class human{
    public:
    int age;
    int height;
    int weight;

   void setweight(int w){
        this->weight=w;
   }
   void setage(int a){
        this->age=a;
   }
   void setheight(int h){
        this->height=h;
   }
  
  int getage()
  {
    return this->age;
  }

  int getweight()
  {
    return this->weight;
  }
  int getheight()
  {
    return this->height;
  }
    
};

class male: public human
{
    public:
    string color;

    void setcolor(string c)
    {
      this->color=c;
    }

    string getcolor()
    {
        return this->color;
    }

};

int main(){
    male obj1;
    obj1.setheight(7);
    obj1.setage(34);
    obj1.setweight(78);
    obj1.setcolor("brown");
    cout<<obj1.getage()<<endl;
    cout<<obj1.getheight()<<endl;
    cout<<obj1.getweight()<<endl;
    cout<<obj1.getcolor();
    return 0;
}
