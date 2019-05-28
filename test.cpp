#include<iostream>
#include<iomanip>
#include<cmath>
#include<fstream>
using namespace std;

int main()
{
	ifstream in;
	in.open("params.dat");
	int n=0;
	in >> n;
	cout<<n<<endl;
	in.close();
	return 0;
}

