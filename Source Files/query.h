#include<iostream>
using namespace std;
void query()
{
	ofstream fout("Query.txt",ios::app);
	if(!fout.is_open())
	{
		cout<<"\n\nCannot open file.....!\n\n";
		exit(0);
	}
	string str;
	cout<<"\n\n\tPlease write your query here : ";
	fflush(stdin);
	getline(cin,str);
	fout<<str<<endl;
	cout<<"\n\n\n\nThankyou for submitting your query. We will try to resolve it as soon as possible.";
	fout.close();
	cout<<"\n\n\nPlease press any key to continue....";
	getch();
}
