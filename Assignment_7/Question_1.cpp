#include<iostream>
using namespace std;
class Complex
{
	int r,i;
	   public:
	   	 Complex(int a,int b)
	   	  {
	   	  	r=a;
	   	  	i=b;
		  }
		 void Display()
		 {
		 	cout<<r<<"+"<<i<<"i"<<endl;
		 }
		 Complex(int n)
		  {
		    r=i=n;
		  }
};
int main()
{
  Complex c1(4,7);
  c1.Display();
  int x=5;
  c1=x;
  c1.Display();
 return 0;

}

