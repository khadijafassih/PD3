#include<iostream>
using namespace std;
main()
{
	int sides,ans;
	cout<<"Enter the number of sides of the polygon: ";
	cin>>sides;
	ans=(sides - 2)*180;
	cout<<"The sum of internal angles of a "<<sides<<"-sided polygon is: "<<ans<<" degrees";
	return 0;
}
