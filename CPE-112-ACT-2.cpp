#include<iostream>
using namespace std;

class derek
{
	public:
		long x,y,z;
		void twovariables();
		void threevariables();
};

int main()
{
	derek call;
	call.twovariables();
	call.threevariables();
	return 0;
}

void derek::twovariables()
{
	//Swapping Two Varibles
	cout<<"SWAPPING OF 2 VARIABLES"<<endl;
	cout<<"Input X: ";
	cin>>x;
	cout<<"Input Y: ";
	cin>>y;
	
	y=x+y;
	x=y-x;
	y=y-x;
	
	cout<<endl<<"SWAPPED 2 VARIABLES : "<<endl<<"X = "<<x<<endl;
	cout<<"Y = "<<y<<endl;
}

void derek::threevariables()
{
	//Swapping Three Varibles
	cout<<endl<<"SWAPPING OF 3 VARIABLES"<<endl;
	cout<<"Input X: ";
	cin>>x;
	cout<<"Input Y: ";
	cin>>y;
	cout<<"Input Z: ";
	cin>>z;
	
	x=x+y;
	y=x-y;
	x=x-y; 
	z=z+x;
	x=z-x;
	z=z-x;
	
	cout<<endl<<"SWAPPED 3 VARIABLES: "<<endl<<"X = "<<x<<endl;
	cout<<"Y = "<<y<<endl;
	cout<<"Z = "<<z<<endl;
}
