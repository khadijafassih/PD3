#include<iostream>
using namespace std;
main()
{
	int age,n,a,b;
	cout<<"Enter the person's age: ";
	cin>>age;
	cout<<"Enter the number of times they've moved: ";
	cin>>n;
	b=n+1;
	a=age/b;
	cout<<"Average number of years lived in the same house: "<<a;
	return 0;
}
