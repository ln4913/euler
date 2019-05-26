#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
	double x0,t0,x,t,dt,n,z;
	
	x0 = 1;
	t0 = 0;
	//TEST VALUES
	n = 50;
	t = 9;
	
	dt = (t-t0) / n;

	cout<<"t"<<setw(19)<<"x";
	while((t-t0)> dt / 2.0)
	{
		z=x0+(dt * -3.0 * x0);
		x0=z;
		t0=t0+dt;
		cout<<t0<<setw(16)<<x0;
	}
	cout<<"x="<<z<<endl;
	return 0;
}
