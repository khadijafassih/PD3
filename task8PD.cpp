#include<iostream>
using namespace std;
main()
{
	float veg,fru,t1,t2,total;
	cout<<"Enter vegetable price per kilogram (in coins): ";
	cin>>veg;
	cout<<"Enter fruit price per kilogram (in coins): ";
	cin>>fru;
	cout<<"Enter total kilograms of vegetables: ";
	cin>>t1;
	cout<<"Enter total kilograms of fruits: ";
	cin>>t2;
	total=((veg*t1)+(fru*t2))/1.94;     
	cout<<"Total earnings in Rupees (Rps): "<<total;
	return 0;
}
