#include<iostream>
using namespace std;
void suggestion()
{
	ofstream fout("Suggestion.txt",ios::app);
	if(!fout.is_open())
	{
		cout<<"\n\nCannot open file.....!\n\n";
		exit(0);
	}
	string str;
	cout<<"\n\n\tPlease write your suggestion here : ";
	fflush(stdin);
	getline(cin,str);
	fout<<str<<endl;
	cout<<"\n\n\n\nThankyou for submitting your suggestion. We will surely work on it.";
	fout.close();
	cout<<"\n\n\nPlease press any key to continue....";
	getch();
}

