#include<iostream>
using namespace std;
main()
{
	int Minutes,frames,Total;
	cout<<"Number of Minutes: ";
	cin>>Minutes;
	cout<<"Frames per Second: ";
	cin>>frames;
	Total=(Minutes*frames)*60;
	cout<<"Total Number of Frames: "<<Total;
	return 0;
}
