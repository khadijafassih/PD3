#include<iostream>
using namespace std;
main()
{
	float ic,pc,i;
	cout<<"Enter Imposter Count: ";
	cin>>ic;
	cout<<"Enter Player Count: ";
	cin>>pc;
	i =(ic/pc)*100;
	cout<<"Chance of being an imposter: "<<i<<"%";
	
}
