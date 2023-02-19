#include<iostream>
using namespace std;
class Rupee
{
	int r;
	 public:
	 	Rupee()
	 	{ }
	 	Rupee(int x)
	 	 {
	 	 	r=x;
		 }
		void display()
		 {
		 	cout<<"Rupee = "<<r<<endl;
	     }
	    int getr()
	    {
	    	return r;
		}
		void setr(int a)
		 {
		 	r=a;
		 }
};
class Dollar
{
	int d;
	 public:
		void display()
		 {
		 	cout<<"Dollar = "<<d<<endl;
		 }
		Dollar(Rupee r)
		 {
		 	d=r.getr();
		 }
		operator Rupee()
		 {
            Rupee temp;
            temp.setr(d);
            return temp;
		 }
};
int main()
{
   Rupee r = 23;
   Dollar d = r; // Rupee to Dollar conversion
   d.display();
   r.display();
   r = d;       // Dollar to Rupee Conversion
   d.display();
   r.display();
 return 0;
}
