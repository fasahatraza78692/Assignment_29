#include<iostream>
using namespace std;
class Complex
{
	int r,i;
	  public:
	    void setData(int a,int b)
		 {
		 	r=a;
		 	i=b;
	     }
	    operator int()
	     {
	     	return (r+i);
		 }
		void Display()
		 {
		 	cout<<r<<"+"<<i<<"i"<<endl;
		 }
};
int main()
{
   Complex c1;
   c1.setData(3,4);
   int x;
   x=c1;
   cout<<"X = "<<x<<endl;
   c1.Display();
  return 0;
}
