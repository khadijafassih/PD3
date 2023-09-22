#include<iostream>
using namespace std;
main()
{
	float ivelocity,acceleration,time,fvelocity;
	cout<<"Enter Initial Velocity (m/s): ";
	cin>>ivelocity;
	cout<<"Enter Acceleration (m/s^2): ";
	cin>>acceleration;
	cout<<"Enter Time (s): ";
	cin>>time;
	fvelocity= time*acceleration+ivelocity;     
	cout<<"Final Velocity (m/s): "<<fvelocity;
	return 0;
}
