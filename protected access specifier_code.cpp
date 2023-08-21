#include <iostream>
using namespace std;

class parentclass{
  protected:
        int x;
		int y;
};

class childclass:public parentclass                   //inheritance
{
	public:
     void setvalue(int a,int b){
         x=a;
		 y=b;
	 }

	 void printvalue(){
		cout<<x<<endl;
		cout<<y<<endl;
	 }
};

int main(){
	childclass obj1;

	obj1.setvalue(10,20);
	obj1.printvalue();

	return 0;
}
