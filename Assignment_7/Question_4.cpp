#include<iostream>
using namespace std;
class Item
{
      public:
      	int i;
      	Item()
      	{}
      	void Display()
      	 {
      	 	cout<<"Item i = "<<i<<endl;
		 }
};
class Product
{
   int a,b;
      public:
      void setData(int x, int y)
      	 {
      	 	a=x;
      	 	b=y;
	     }
	  void display()
	   {
	   	 cout<<"Product = "<<a<<","<<b<<endl;
	   }
	operator Item()
	 {
	 	Item temp;
	 	temp.i=a+b;
	 	return temp;
	 }

};

int main()
{
   Item i1;
   Product p1;
   p1.setData(3,4);
   i1=p1;
   i1.Display();
 return 0;
}
