#include<iostream>
#include<iomanip>
#include<cmath>
#include<fstream>
using namespace std;

int main()
{
	double x0,t0,x,t,dt,z;
	
	x0 = 1;
	t0 = 0;
	t = 9;

	ifstream in;
	in.open("params.dat");
	in >> dt;
	in.close();

//	cout<<"t"<<setw(19)<<"x"<<endl;
	while((t-t0)> dt / 2.0)
	{
		z=x0+(dt * -3.0 * x0);
		x0=z;
		t0=t0+dt;
		cout<<t0<<setw(16)<<x0<<endl;
	}
	
//	cout<<endl;
//	cout<<"x   =   "<<z<<endl;
//	cout<<"dt   =   "<<dt<<endl;
	return 0;
}
