#include<iostream>
using namespace std;
main()
{
	string name;
	float p,percentage,child,total,Donation;
	int a,c;
	cout<<"Enter the movie name: ";
	cin>>name;
	cout<<"Enter the adult ticket price: $";
	cin>>p;
	cout<<"Enter the child ticket price: $";
	cin>>child;
	cout<<"Enter the number of adult tickets sold: ";
	cin>>a;
	cout<<"Enter the number of child tickets sold: ";
	cin>>c;
	cout<<"Enter the percentage of the amount to be donated to charity: ";
	cin>>percentage;
	cout<<"                                                     \n";
	cout<<"Movie: "<<name<<endl;
	total=(p*a)+(child*c);
	cout<<"Total amount generated from ticket sales: $"<<total<<endl;
	Donation=total/percentage;
	cout<<"Donation to the charity (" <<percentage<< "%): $"<<Donation<<endl;
	cout<<"Remaining amount after donation: $"<<total-Donation<<endl;
	
	
	

	
}
