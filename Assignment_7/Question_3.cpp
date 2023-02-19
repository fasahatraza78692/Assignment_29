#include<iostream>
using namespace std;
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
	  int geta()
	   { return a; }
	  int getb()
	   { return b; }

};
class Item
{
    int i;
      public:
      	Item()
      	{
		  }
      	void Display()
      	 {
      	 	cout<<"Item i = "<<i<<endl;
		 }
		 Item(Product p)
		 {
		 	i=p.geta()+p.getb();
		 }
};

int main()
{
   Item i1;
   Product p1;
   p1.setData(3,4);
   i1=p1;
   p1.display();
   i1.Display();
 return 0;
}

