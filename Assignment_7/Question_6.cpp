#include<iostream>
using namespace std;
class Time
{
	int hour,min;
	public:
		Time(int m)
	    { 
		  	hour=m/3600;
		  	min=(m%3600)/60;
		}
		void display()
		 {
		 	cout<<"Hour: "<<hour<<" Min: "<<min<<endl;
		 }
};
int main()
{
    int duration;
    cout<<"Enter time duration in seconds"<<endl;
    cin>>duration;
    Time t1 = duration;
    t1.display();
  return 0;
}
