#include<iostream>
using namespace std;
class Invent1
{
	int x,y;
	  public:
	  	Invent1(int a,int b)
	  	 {
	  	 	x=a; 
			y=b;
		 }
      int getx()
      {
      	return x;
	  }
	  int gety()
	  {
	  	return y;
	  }
      operator float()
        {
          return (x+y);
	    }
};
class Invent2
{
	int a;
	  public:
	  	Invent2()
	  	{ }
	void Display()
	  	{
	  	  cout<<"Invent2 = "<<a<<endl;	
		}
		Invent2(Invent1 in)
		 {
		 	a=in.getx()+in.gety();
		 }
};
int main()
{
    Invent1 x(4,5);
    Invent2 y;
    float z;
    z = x;
    y = x;
    y.Display();
    cout<<"z = "<<z;
  return 0;
}

