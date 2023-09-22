#include<iostream>
using namespace std;
main()
{
	int n,a,b,c,d,e,f;
	cout<<"Enter a 4-digit number: ";
	cin>>n;
	a=n%10;
	b=n/10;
	c=b%10;
	d=b/10;
	e=d%10;
	f=d/10;
	cout<<"Sum of the individual digits: "<<a+c+e+f;
	return 0;
}
