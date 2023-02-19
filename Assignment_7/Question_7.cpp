#include<iostream>
using namespace std;
class Time
{
	int h,m;
	  public:
	  	Time(int h,int m):h(h),m(m)
	  	 { }
	  	 void display()
	  	  {	cout<<"Hour: "<<h<<" Min: "<<m<<endl;}
	  	int getH()
	  	{
	  		return h;
        }
        int getM()
        {
        	return m;
		}
	  	 	
};
class Minute
{
	int m;
	 public:
	 	Minute()
	 	{
	 		m=0;
		}
	 	void display()
	 	 { cout<<"Minutes: "<<m<<endl; }
	 	Minute(Time t)
	 	 {
	 	 	m=t.getH()*60+t.getM();
		 }
};
int main()
{
   Time t1(2,30);
   t1.display();
   Minute m1;
   m1.display();
   m1=t1;
   t1.display();
   m1.display();
 return 0;
}
