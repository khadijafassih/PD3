#include<iostream>
using namespace std;
main()
{
	float M,w,l,Total,a;
	cout<<"Number of square meters you can paint: ";
	cin>>M;
	cout<<"Width of a single wall (in meters): ";
	cin>>w;
	cout<<"Height of a single wall (in meters): ";
	cin>>l;
	a=w*l;
	Total=M/a;
	cout<<"Number of walls you can paint: "<<Total;
}
