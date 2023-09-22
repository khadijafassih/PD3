#include<iostream>
using namespace std;
main()
{
	string name;
	int w,i,days;
	cout<<"Enter the Name of the Person: ";
	cin>>name;
	cout<<"Enter the target weight loss in kilograms: ";
	cin>>w;
	days=w*15;
	cout<<name<<" will need "<<days<<" days to lose "<<w<<" kg of weight by following the doctor's suggestions";
	
}
