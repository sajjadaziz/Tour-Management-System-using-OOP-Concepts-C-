#include<iostream>
#include<string.h> 
#include<stdlib.h>
#include<fstream>
#include<conio.h>
#include"calender.h"
#include"query.h"
#include"suggestion.h"
using namespace std;
enum state{menu,loggedin};
enum state currentstate=menu;
class login
{
	private:
		string username;
		string password;
		friend class login_id_password;
};
class login_id_password
{
	login obj1[100],obj2;
	public:
		login_id_password()
		{
			while(1)
			{
				if(currentstate==menu)
				{
					int ask;
					system("cls");
					system("color F5");
					cout<<" \t\t1)ADD USER  : "<<endl;
		    		cout<<" \t\t2)LOGIN USER: "<<endl;
		    		cout<<" \t\t3)exit      : "<<endl;
		    		cout<<"Enter correspoding number : ";
					cin>>ask;
					system("cls");
					switch(ask)
					{
						case 1:
							{
								adduser();
								break;
							}
						case 2:
							{
								login();
								break;
							}
						case 3:
							{
								exit(0);
								break;
							}
						default:
							cout<<"\n\nPlease enter correct number....!"<<endl;
					}
				}
				else if(currentstate==loggedin)
				{
					string str;
	                fstream file_obj;
			        file_obj.open("Instruction.txt");
	                if(!file_obj)
                    {
		                cout<<"Error in opening file...!"<<endl;
		                exit(0);
	                }
	                if(file_obj.is_open())
			        {
			        	while(getline(file_obj,str))
			        	cout<<str<<"\n";
			        }
	                file_obj.close();
	                cout<<"\n\nPlease press any key to return to menu...!";
	                getch();
	                system("cls");
	                break;
				}
			}
		}
		private:
		void adduser()
		{
			int i,flag=1;
			
			cout<<"Enter user name or email : ";
			cin>>obj2.username;
			cout<<"Enter your password      : ";
			cin>>obj2.password;
			
			ifstream in;
			ofstream fout;
			
			in.open("data.txt");
			
			for(i=0;i<100;i++)
			{
				in>>obj1[i].username>>obj1[i].password;
			}
			
			for(i=0;i<100;i++)
			{
				if(obj1[i].username==obj2.username&&obj1[i].password==obj2.password)
				{
					cout<<"That email already exists\n"<<endl;
					flag=0;
					break;
				}
			}
			
			if(flag==1)
			{
				fout.open("data.txt",ios::app);
				fout<<obj2.username<<" "<<obj2.password<<endl;
			}
		
			in.close();
			fout.close();
		}
		void login()
		{
			string id,pass;
	  	    int i;
	  	    
	  	    cout<<"Enter user name or email : ";
			cin>>id;
			cout<<"Enter your password      : ";
			cin>>pass;
			
			ifstream in;
			ofstream fout;
			
			in.open("data.txt");
			fout.open("Customer_Data.txt",ios::app);
			
			for(i=0;i<100;i++)
			{
				in>>obj1[i].username>>obj1[i].password;
			}
			
			for(i=0;i<100;i++)
			{
			    if(id==obj1[i].username && pass==obj1[i].password)
			    {
			    	fout<<id<<" ";
			        fout<<pass<<" ";
	  	    	    cout<<"Login Sucessfull!"<<endl;
	  	    	    cout<<"\n\nPlease press any key to continue...!";
	                getch();
	  	    	    currentstate=loggedin;
	  	    	    system("cls");
			    }
			}
		    in.close();
		    fout.close();
		}
};
class tour_information
{
	protected:
		string name;
		int age;
		string nic;
	private:
		virtual void asking_choice()=0;
		virtual void contries_name()=0;
		virtual void package_selection()=0;
		virtual void show_list()=0;
};
class tour_countries_files : virtual public tour_information
{
	protected:
		void UAE()
        {
	        string str;
	        fstream file_obj;
			file_obj.open("UAE.txt");
	        if(!file_obj)
            {
		        cout<<"Error in opening file...!"<<endl;
		        exit(0);
	        }
	        if(file_obj.is_open())
			{
				while(getline(file_obj,str))
				cout<<str<<"\n";
			}
	        file_obj.close();
	        cout<<"\n\nPlease press any key to return to menu...!";
	        getch();
	        system("cls");
        }
        void france()
        {
	        string str;
	        fstream file_obj;
			file_obj.open("France.txt");
	        if(!file_obj)
            {
		        cout<<"Error in opening file...!"<<endl;
		        exit(0);
	        }
	        if(file_obj.is_open())
			{
				while(getline(file_obj,str))
				cout<<str<<"\n";
			}
	        file_obj.close();
	        cout<<"\n\nPlease press any key to return to menu...!";
	        getch();
	        system("cls");
        }
        void spain()
        {
	        string str;
	        fstream file_obj;
			file_obj.open("Spain.txt");
	        if(!file_obj)
            {
		        cout<<"Error in opening file...!"<<endl;
		        exit(0);
	        }
	        if(file_obj.is_open())
			{
				while(getline(file_obj,str))
				cout<<str<<"\n";
			}
	        file_obj.close();
	        cout<<"\n\nPlease press any key to return to menu...!";
	        getch();
	        system("cls");
        }
        void pakistan()
        {
	        string str;
	        fstream file_obj;
			file_obj.open("Pakistan.txt");
	        if(!file_obj)
            {
		        cout<<"Error in opening file...!"<<endl;
		        exit(0);
	        }
	        if(file_obj.is_open())
			{
				while(getline(file_obj,str))
				cout<<str<<"\n";
			}
	        file_obj.close();
	        cout<<"\n\nPlease press any key to return to menu...!";
	        getch();
	        system("cls");
        }
        void turkey()
        {
	        string str;
	        fstream file_obj;
			file_obj.open("Turkey.txt");
	        if(!file_obj)
            {
		        cout<<"Error in opening file...!"<<endl;
		        exit(0);
	        }
	        if(file_obj.is_open())
			{
				while(getline(file_obj,str))
				cout<<str<<"\n";
			}
	        file_obj.close();
	        cout<<"\n\nPlease press any key to return to menu...!";
	        getch();
	        system("cls");
        }
        void USA()
        {
	        string str;
	        fstream file_obj;
			file_obj.open("USA.txt");
	        if(!file_obj)
            {
		        cout<<"Error in opening file...!"<<endl;
		        exit(0);
	        }
	        if(file_obj.is_open())
			{
				while(getline(file_obj,str))
				cout<<str<<"\n";
			}
	        file_obj.close();
	        cout<<"\n\nPlease press any key to return to menu...!";
	        getch();
	        system("cls");
        }
        void UK()
        {
	        string str;
	        fstream file_obj;
			file_obj.open("UK.txt");
	        if(!file_obj)
            {
		        cout<<"Error in opening file...!"<<endl;
		        exit(0);
	        }
	        if(file_obj.is_open())
			{
				while(getline(file_obj,str))
				cout<<str<<"\n";
			}
	        file_obj.close();
	        cout<<"\n\nPlease press any key to return to menu...!";
	        getch();
	        system("cls");
        }
        void italy()
        {
	        string str;
	        fstream file_obj;
			file_obj.open("Italy.txt");
	        if(!file_obj)
            {
		        cout<<"Error in opening file...!"<<endl;
		        exit(0);
	        }
	        if(file_obj.is_open())
			{
				while(getline(file_obj,str))
				cout<<str<<"\n";
			}
	        file_obj.close();
	        cout<<"\n\nPlease press any key to return to menu...!";
	        getch();
	        system("cls");
        }
        void australia()
        {
	        string str;
	        fstream file_obj;
			file_obj.open("Australia.txt");
	        if(!file_obj)
            {
		        cout<<"Error in opening file...!"<<endl;
		        exit(0);
	        }
	        if(file_obj.is_open())
			{
				while(getline(file_obj,str))
				cout<<str<<"\n";
			}
	        file_obj.close();
	        cout<<"\n\nPlease press any key to return to menu...!";
	        getch();
	        system("cls");
        }
        void canada()
        {
	        string str;
	        fstream file_obj;
			file_obj.open("Canada.txt");
	        if(!file_obj)
            {
		        cout<<"Error in opening file...!"<<endl;
		        exit(0);
	        }
	        if(file_obj.is_open())
			{
				while(getline(file_obj,str))
				cout<<str<<"\n";
			}
	        file_obj.close();
	        cout<<"\n\nPlease press any key to return to menu...!";
	        getch();
	        system("cls");
        }
        void hong_kong()
        {
        	string str;
	        fstream file_obj;
			file_obj.open("HongKong.txt");
	        if(!file_obj)
            {
		        cout<<"Error in opening file...!"<<endl;
		        exit(0);
	        }
	        if(file_obj.is_open())
			{
				while(getline(file_obj,str))
				cout<<str<<"\n";
			}
	        file_obj.close();
	        cout<<"\n\nPlease press any key to return to menu...!";
	        getch();
	        system("cls");
		}
        void germany()
        {
	        string str;
	        fstream file_obj;
			file_obj.open("Germany.txt");
	        if(!file_obj)
            {
		        cout<<"Error in opening file...!"<<endl;
		        exit(0);
	        }
	        if(file_obj.is_open())
			{
				while(getline(file_obj,str))
				cout<<str<<"\n";
			}
	        file_obj.close();
	        cout<<"\n\nPlease press any key to return to menu...!";
	        getch();
	        system("cls");
        }
};
class tour_packages_files : virtual public tour_information
{
	protected:
		void UAEPack()
        {
	        string str;
	        fstream file_obj;
			file_obj.open("UAEPack.txt");
	        if(!file_obj)
            {
		        cout<<"Error in opening file...!"<<endl;
		        exit(0);
	        }
	        if(file_obj.is_open())
			{
				while(getline(file_obj,str))
				cout<<str<<"\n";
			}
	        file_obj.close();
	        cout<<"\n\nPlease press any key to return to menu...!";
	        getch();
	        system("cls");
        }
        void FranPack()
        {
	        string str;
	        fstream file_obj;
			file_obj.open("FranPack.txt");
	        if(!file_obj)
            {
		        cout<<"Error in opening file...!"<<endl;
		        exit(0);
	        }
	        if(file_obj.is_open())
			{
				while(getline(file_obj,str))
				cout<<str<<"\n";
			}
	        file_obj.close();
	        cout<<"\n\nPlease press any key to return to menu...!";
	        getch();
	        system("cls");
        }
        void SpaPack()
        {
	        string str;
	        fstream file_obj;
			file_obj.open("SpaPack.txt");
	        if(!file_obj)
            {
		        cout<<"Error in opening file...!"<<endl;
		        exit(0);
	        }
	        if(file_obj.is_open())
			{
				while(getline(file_obj,str))
				cout<<str<<"\n";
			}
	        file_obj.close();
	        cout<<"\n\nPlease press any key to return to menu...!";
	        getch();
	        system("cls");
        }
        void PakPack()
        {
	        string str;
	        fstream file_obj;
			file_obj.open("PakPack.txt");
	        if(!file_obj)
            {
		        cout<<"Error in opening file...!"<<endl;
		        exit(0);
	        }
	        if(file_obj.is_open())
			{
				while(getline(file_obj,str))
				cout<<str<<"\n";
			}
	        file_obj.close();
	        cout<<"\n\nPlease press any key to return to menu...!";
	        getch();
	        system("cls");
        }
        void TurPack()
        {
	        string str;
	        fstream file_obj;
			file_obj.open("TurPack.txt");
	        if(!file_obj)
            {
		        cout<<"Error in opening file...!"<<endl;
		        exit(0);
	        }
	        if(file_obj.is_open())
			{
				while(getline(file_obj,str))
				cout<<str<<"\n";
			}
	        file_obj.close();
	        cout<<"\n\nPlease press any key to return to menu...!";
	        getch();
	        system("cls");
        }
        void USAPack()
        {
	        string str;
	        fstream file_obj;
			file_obj.open("USAPack.txt");
	        if(!file_obj)
            {
		        cout<<"Error in opening file...!"<<endl;
		        exit(0);
	        }
	        if(file_obj.is_open())
			{
				while(getline(file_obj,str))
				cout<<str<<"\n";
			}
	        file_obj.close();
	        cout<<"\n\nPlease press any key to return to menu...!";
	        getch();
	        system("cls");
        }
        void UKPack()
        {
	        string str;
	        fstream file_obj;
			file_obj.open("UKPack.txt");
	        if(!file_obj)
            {
		        cout<<"Error in opening file...!"<<endl;
		        exit(0);
	        }
	        if(file_obj.is_open())
			{
				while(getline(file_obj,str))
				cout<<str<<"\n";
			}
	        file_obj.close();
	        cout<<"\n\nPlease press any key to return to menu...!";
	        getch();
	        system("cls");
        }
        void ItPack()
        {
	        string str;
	        fstream file_obj;
			file_obj.open("ItPack.txt");
	        if(!file_obj)
            {
		        cout<<"Error in opening file...!"<<endl;
		        exit(0);
	        }
	        if(file_obj.is_open())
			{
				while(getline(file_obj,str))
				cout<<str<<"\n";
			}
	        file_obj.close();
	        cout<<"\n\nPlease press any key to return to menu...!";
	        getch();
	        system("cls");
        }
        void AusPack()
        {
	        string str;
	        fstream file_obj;
			file_obj.open("AusPack.txt");
	        if(!file_obj)
            {
		        cout<<"Error in opening file...!"<<endl;
		        exit(0);
	        }
	        if(file_obj.is_open())
			{
				while(getline(file_obj,str))
				cout<<str<<"\n";
			}
	        file_obj.close();
	        cout<<"\n\nPlease press any key to return to menu...!";
	        getch();
	        system("cls");
        }
        void CanPack()
        {
	        string str;
	        fstream file_obj;
			file_obj.open("CanPack.txt");
	        if(!file_obj)
            {
		        cout<<"Error in opening file...!"<<endl;
		        exit(0);
	        }
	        if(file_obj.is_open())
			{
				while(getline(file_obj,str))
				cout<<str<<"\n";
			}
	        file_obj.close();
	        cout<<"\n\nPlease press any key to return to menu...!";
	        getch();
	        system("cls");
        }
        void HongPack()
        {
        	string str;
	        fstream file_obj;
			file_obj.open("HongPack.txt");
	        if(!file_obj)
            {
		        cout<<"Error in opening file...!"<<endl;
		        exit(0);
	        }
	        if(file_obj.is_open())
			{
				while(getline(file_obj,str))
				cout<<str<<"\n";
			}
	        file_obj.close();
	        cout<<"\n\nPlease press any key to return to menu...!";
	        getch();
	        system("cls");
		}
        void GerPack()
        {
	        string str;
	        fstream file_obj;
			file_obj.open("GerPack.txt");
	        if(!file_obj)
            {
		        cout<<"Error in opening file...!"<<endl;
		        exit(0);
	        }
	        if(file_obj.is_open())
			{
				while(getline(file_obj,str))
				cout<<str<<"\n";
			}
	        file_obj.close();
	        cout<<"\n\nPlease press any key to return to menu...!";
	        getch();
	        system("cls");
        }
};
class tourist_information : public tour_countries_files , public tour_packages_files
{
	private:
		string booking_date;
		int budget;
	    int members;
		char month[10];
		char country[15];
		int package;
		string tour_date;
		float amount;
		int duration ;
		float discount ;
		string flight;
	public:
		tourist_information()
		{
			ofstream fout;
			fout.open("Customer_Data.txt",ios::app);
			system("cls");
	        system("color F1");
			cout<<"Please provide your Personal Data"<<endl<<endl;
			cout<<"\n\t\t\tEnter your Name : ";
			cin>>name;
			fout<<name<<" ";
			cout<<"\n\t\t\t Enter your Age : ";
			cin>>age;
			if(age<18)
			{
				cout<<"\n\nYou are underage...!";
				exit(0);
			}
			fout<<age<<" ";
			cout<<"\n\t\t  Enter your NIC number : ";
			cin>>nic;
			fout<<nic<<" ";
			cout<<"\n";
			cout<<"Please provide Tour Data"<<endl<<endl;
			cout<<"\n\t\tEnter current date : ";
			cin>>booking_date;
			fout<<booking_date<<" ";
			cout<<"\n\tWhat is your budget per person : $";
			cin>>budget;
			fout<<budget<<" ";
			cout<<"\n\tWhich month you prefer to go on Tour : ";
			cin>>month;
			fout<<month<<" ";
			system("cls");
			fout.close();
			asking_choice();
		}
	private:
		void asking_choice()
		{
			char ask;
			cout<<"We have made things easy and much more straight forward for you....!\n";
			cout<<"We have short down a list for you according to the month you enter\n in which you can have best appropiate countries name that will be great to visit...\n";
			cout<<"Do you want to have a look at our list of countries... \nOR you want to enter your own choice of country...?(y/n)\n";
			cin>>ask;
			if(ask=='y')
			contries_name();
			else if(ask=='n')
			{
				ofstream fout;
			    fout.open("Customer_Data.txt",ios::app);
				cout<<"\n\tIn which country you want to go : ";
				cin>>country;
				fout<<country<<" ";
			    fout.close();
			    package_selection();
			}
		    else
		    {
		    	cout<<"\n\nPlease enter correct alphabet.....!\n";
		    	exit(0);
			}
		}
		void contries_name()
		{
			int num;
			system("cls");
	        system("color 34");
			if(strcmp(month,"january")==0||strcmp(month,"January")==0)
			{
				if(budget>=8280)
				{
					while(num!=3)
					{
						cout<<"\n\nCountries according to your Budget and month...\n";
			            cout<<"\n1)UAE \n\n2)Hong Kong \n\n3)Proceed \n";
			            cout<<"\nPress corresponding number to view brief information of country : ";
			            cin>>num;
			            system("cls");
			            if (num==1)
			            	UAE();
			            else if(num==2)
			        	    hong_kong();
			            else if (num==3)
			                goto jump ;
			            else
			            {
			            	cout<<"\n\nInvalid input.";
			                exit(0);
					    }
					}
				}
				else if(budget>=4170)
				{
					while(num!=2)
					{
						cout<<"\n\nCountries according to your Budget and month...\n";
			        	cout<<"\n1)Hong Kong \n\n2)Proceed\n";
			        	cout<<"\nPress corresponding number to view brief information of country : ";
			        	cin>>num;
			        	system("cls");
			        	if(num==1)
			        	    hong_kong();
			        	else if (num==2)
			        	    goto jump ;
			        	else
			        	{
			        		cout<<"\n\nInvalid input.";
			        	    exit(0);
						}
					}
				}
				else
				{
					cout<<"\n\nSorry ! Your budget is too low . Please restart program and input new budget.";
					exit(0);
				}
			}
			if(strcmp(month,"february")==0||strcmp(month,"February")==0)
			{
				if(budget>=8280)
				{
					while(num!=3)
					{
						cout<<"\n\nCountries according to your Budget and month...\n";
			            cout<<"\n1)UAE \n\n2)Hong Kong \n\n3)Proceed \n";
			            cout<<"\nPress corresponding number to view brief information of country : ";
			            cin>>num;
			            system("cls");
			            if (num==1)
			        	    UAE();
			            else if(num==2)
			        	    hong_kong();
			            else if (num==3)
			                goto jump ;
			            else
			            {
			        	    cout<<"\n\nInvalid input.";
			                exit(0);
					    }
					}
				}
				else if(budget>=4170)
				{
					while(num!=2)
					{
						cout<<"\n\nCountries according to your Budget and month...\n";
			            cout<<"\n1)Hong Kong \n\n2)Proceed\n";
			            cout<<"\nPress corresponding number to view brief information of country : ";
			            cin>>num;
			            system("cls");
			            if(num==1)
			        	    hong_kong();
			            else if (num==2)
			                goto jump ;
			            else
			            {
			        	    cout<<"\n\nInvalid input.";
			                exit(0);
					    }
					}
				}
				else
				{
					cout<<"\n\nSorry ! Your budget is too low . Please restart program and input new budget.";
					exit(0);
				}
			}
			if(strcmp(month,"march")==0||strcmp(month,"March")==0)
			{
				if(budget>=1200)
				{
					while(num!=2)
					{
						cout<<"\n\nCountries according to your Budget and month...\n";
			        	cout<<"\n1)Spain \n\n2)Proceed \n";
			        	cout<<"\nPress corresponding number to view brief information of country : ";
			        	cin>>num;
			        	system("cls");
			        	if (num==1)
			        		spain();
			        	else if (num==2)
			        		goto jump ;
			        	else
			        	{
			        		cout<<"\n\nInvalid input.";
			            	exit(0);
						}
					}
				}
				else
				{
					cout<<"\n\nSorry ! Your budget is too low . Please restart program and input new budget.";
					exit(0);
				}
			}
			else if ( strcmp(month,"april") == 0 || strcmp(month,"April") == 0 )                
	        {
		        if ( budget >= 4850  )
		        {
		        	while(num!=6)
			        {
			        	cout<<"\n\nCountries according to your Budget and month :\n";
			            cout<<"\n1)France \n\n2)United Kingdom \n\n3)Italy \n\n4)Australia \n\n5)Spain \n\n6)Proceed \n";
			            cout<<"\nPress corresponding number to view brief information of country : ";
			            cin>>num;
			            system("cls");
			            if (num==1)
			        	    france();
			            else if (num==2)
			        	    UK();
			            else if (num==3)
			        	    italy();
			            else if (num==4)
			        	    australia();
			            else if (num ==5)
			        	    spain();
			            else if (num==6)
			                goto jump ;
			            else
			            {
			                cout<<"\n\nInvalid input.";
			                exit(0);
					    }
					}
	        	}
		
		        else if ( budget >= 4530 )
		        {
		        	while(num!=5)
			        {
			        	cout<<"\n\nCountries according to your Budget and month :\n";
			            cout<<"\n1)United Kingdom \n\n2)Italy \n\n3)Australia \n\n4)Spain \n\n5)Proceed \n";
			            cout<<"\nPress corresponding number to view brief information of country : ";
			            cin>>num;
			            system("cls");
			            if (num==1)
			        	    UK();
			            else if (num==2)
			        	    italy();
			            else if (num==3)
			        	    australia();
			            else if (num==4)
			        	    spain();
			            else if(num==5)
			                goto jump ;
			            else
			            {
			        	    cout<<"\n\nInvalid input.";
			                exit(0);
					    }
					}
		        }
		
		        else if ( budget >= 4100 )
		        {
		        	while(num!=4)
			        {
			        	cout<<"\n\nCountries according to your Budget and month :\n";
			            cout<<"\n1)Italy \n\n2)Australia \n\n3)Spain \n\n4)Proceed \n";
			            cout<<"\nPress corresponding number to view brief information of country : ";
			            cin>>num;
			            system("cls");
			            if (num==1)
			        	    italy();
			            else if (num==2)
			        	    australia();
			            else if (num==3)
			        	    spain();
			            else if(num==4)
			                goto jump ;
			            else
			            {
			        	    cout<<"\n\nInvalid input.";
			                exit(0);
					    }
					}
		        }
		
		        else if ( budget >= 3840 )
		        {
		        	while(num!=3)
			        {
			        	cout<<"\n\nCountries according to your Budget and month :\n";
			            cout<<"\n1)Australia \n\n2)Spain \n\n3)Proceed \n";
			            cout<<"\nPress corresponding number to view brief information of country : ";
			            cin>>num;
			            system("cls");
			            if (num==1)
			        	    australia();
			            else if (num==2)
			        	    spain();
			            else if(num==3)
			                goto jump ;
			            else
			            {
			       	        cout<<"\n\nInvalid input.";
			                exit(0);
				        }
					}
		        }
		
		        else if ( budget >= 1200 )
		        {
		        	loop10:
			        cout<<"\n\nCountries according to your Budget and month :\n";
			        cout<<"\n1)Spain \n\n2)Proceed \n";
			        cout<<"\nPress corresponding number to view brief information of country : ";
			        cin>>num;
			
			        system("cls");
			
			        if (num==1)
			        {
			        	spain();
			        	goto loop10;
					}
			
			        else if (num==2)
			        goto jump ;
	
			        else
			        {
			        	cout<<"\n\nInvalid input.";
			            exit(0);
					}
		        }
		        else
		        {
		        	cout<<"\n\nSorry ! Your budget is too low . Please restart program and input new budget.";
		        	exit(0);
				}
	        }
	        else if ( strcmp(month,"may") == 0 || strcmp(month,"May") == 0 )             
	        {
		        if ( budget >= 6720  )
		        { 
		            loop11:
					cout<<"\n\nCountries according to your Budget and month :\n";
					cout<<"\n1)USA \n\n2)France \n\n3)United Kingdom \n\n4)Italy \n\n5)Australia \n\n6)Germany \n\n7)Pakistan \n\n8)Spain \n\n9)Turkey \n\n10)Proceed \n";
					cout<<"\nPress corresponding number to view brief information of country : ";
					cin>>num;
			
					system("cls");
			
					if (num==1)
					{
						USA();
						goto loop11;
					}
			
					else if (num==2)
					{
						france();
						goto loop11;
					}
			
					else if (num==3)
					{
						UK();
						goto loop11;
					}
			
					else if (num==4)
					{
						italy();
						goto loop11;
					}
			
					else if (num==5)
					{
						australia();
						goto loop11;
					}
			
					else if (num==6)
					{
						germany();
						goto loop11;
					}
				
					else if (num==7)
					{
						pakistan();
						goto loop11;
					}
			
					else if (num==8)
					{
						spain();
						goto loop11;
					}
				
					else if (num==9)
					{
						turkey();
						goto loop11;
					}
			
					else if (num==10)
					goto jump ;
			
					else
					{
						cout<<"\n\nInvalid input.";
					    exit(0);
					}
				}
		
				else if ( budget >= 4850 )
				{
					loop12:
					cout<<"\n\nCountries according to your Budget and month :\n";
					cout<<"\n1)France \n\n2)United Kingdom \n\n3)Italy \n\n4)Australia \n\n5)Germany \n\n6)Pakistan \n\n7)Spain \n\n8)Turkey \n\n9)Proceed \n";
					cout<<"\nPress corresponding number to view brief information of country : ";
					cin>>num;
			
					system("cls");
			
					if (num==1)
					{
						france();
						goto loop12;
					}
			
					else if (num==2)
					{
						UK();
						goto loop12;
					}
			
					else if (num==3)
					{
						italy();
						goto loop12;
					}
			
					else if (num==4)
					{
						australia();
						goto loop12;
					}
			
					else if (num==5)
					{
						germany();
						goto loop12;
					}
		
					else if (num==6)
					{
						pakistan();
						goto loop12;
					}
			
					else if (num==7)
					{
						spain();
						goto loop12;
					}
			
					else if (num==8)
					{
						turkey();
						goto loop12;
					}
			
					else if (num==9)
					goto jump ;
			
					else
					{
						cout<<"\n\nInvalid input.";
					    exit(0);
					}
				}
		
				else if ( budget >= 4530 )
				{
					loop13:
					cout<<"\n\nCountries according to your Budget and month :\n";
					cout<<"\n1)United Kingdom \n\n2)Italy \n\n3)Australia \n\n4)Germany \n\n5)Pakistan \n\n6)Spain \n\n7)Turkey \n\n8)Proceed \n";
					cout<<"\nPress corresponding number to view brief information of country : ";
					cin>>num;
			
					system("cls");
			
					if (num==1)
					{
						UK();
						goto loop13;
					}
			
					else if (num==2)
					{
						italy();
						goto loop13;
					}
			
					else if (num==3)
					{
						australia();
						goto loop13;
					}
			
					else if (num==4)
					{
						germany();
						goto loop13;
					}
		
					else if (num==5)
					{
						pakistan();
						goto loop13;
					}
			
					else if (num==6)
					{
						spain();
						goto loop13;
					}
			
					else if (num==7)
					{
						turkey();
						goto loop13;
					}
			
					else if (num==8)
					goto jump ;
			
					else
					{
						cout<<"\n\nInvalid input.";
					    exit(0);
					}
				}
		
				else if ( budget >= 4080 )
				{
					loop14:
					cout<<"\n\nCountries according to your Budget and month :\n";
					cout<<"\n1)Italy \n\n2)Australia \n\n3)Germany \n\n4)Pakistan \n\n5)Spain \n\n6)Turkey \n\n7)Proceed \n";
					cout<<"\nPress corresponding number to view brief information of country : ";
					cin>>num;
			
					system("cls");
			
					if (num==1)
					{
						italy();
						goto loop14;
					}
			
					else if (num==2)
					{
						australia(); 
						goto loop14;
					}
			
					else if (num==3)
					{
						germany();
						goto loop14;
					}
		
					else if (num==4)
					{
						pakistan();
						goto loop14;
					}
			
					else if (num==5)
					{
						spain();
						goto loop14;
					}
			
					else if (num==6)
					{
						turkey();
						goto loop14;
					}
			
					else if (num==7)
					goto jump ;
			
					else
					{
						cout<<"\n\nInvalid input.";
					    exit(0);
					}
				}
		
				else if ( budget >= 3840 )
				{
					loop15:
					cout<<"\n\nCountries according to your Budget and month :\n";
					cout<<"\n1)Australia \n\n2)Germany \n\n3)Pakistan \n\n4)Spain \n\n5)Turkey \n\n6)Proceed \n";
					cout<<"\nPress corresponding number to view brief information of country : ";
					cin>>num;
			
					system("cls");
			
					if (num==1)
					{
						australia();
						goto loop15;
					}
			
					else if (num==2)
					{
						germany();
						goto loop15;
					}
		
					else if (num==3)
					{
						pakistan();
						goto loop15;
					}
			
					else if (num==4)
					{
						spain();
						goto loop15;
					}
			
					else if (num==5)
					{
						turkey();
						goto loop15;
					}
			
					else if (num==6)
					goto jump ;
			
					else
					{
						cout<<"\n\nInvalid input.";
					    exit(0);
					}
				}
		
				else if ( budget >= 3480 )
				{
					loop16:
					cout<<"\n\nCountries according to your Budget and month :\n";
					cout<<"\n1)Germany \n\n2)Pakistan \n\n3)Spain \n\n4)Turkey \n\n5)Proceed \n";
					cout<<"\nPress corresponding number to view brief information of country : ";
					cin>>num;
			
					system("cls");
			
					if (num==1)
					{
						germany();
						goto loop16;
					}
		
					else if (num==2)
					{
						pakistan();
						goto loop16;
					}
			
					else if (num==3)
					{
						spain();
						goto loop16;
					}
			
					else if (num==4)
					{
						turkey();
						goto loop16;
					}
			
					else if (num==5)
					goto jump ;
			
					else
					{
						cout<<"\n\nInvalid input.";
					    exit(0);
					}
				}
		
				else if ( budget >= 1890 )
				{
					loop17:
					cout<<"\n\nCountries according to your Budget and month :\n";
					cout<<"\n1)Pakistan \n\n2)Spain \n\n3)Turkey \n\n4)Proceed \n";
					cout<<"\nPress corresponding number to view brief information of country : ";
					cin>>num;
			
					system("cls");
		
					if (num==1)
					{
						pakistan();
						goto loop17;
					}
			
					else if (num==2)
					{
						
						spain();
						goto loop17;
					}
			
					else if (num==3)
				    {
				    	turkey();
				    	goto loop17;
					}
			
					else if (num==4)
					goto jump ;
			
					else
					{
					    cout<<"\n\nInvalid input.";
					    exit(0);
					}
				}
		
				else if ( budget >= 1200 )
				{
					loop18:
					cout<<"\n\nCountries according to your Budget and month :\n";
					cout<<"\n1)Spain \n\n2)Turkey \n\n3)Proceed \n";
					cout<<"\nPress corresponding number to view brief information of country : ";
					cin>>num;
			
					system("cls");
			
					if (num==1)
					{
						spain();
						goto loop18;
					}
			
					else if (num==2)
					{
						turkey();
						goto loop18;
					}
			
					else if (num==3)
					goto jump ;
			
					else
					{
						cout<<"\n\nInvalid input.";
					    exit(0);
					}
				}
		
				else if ( budget >= 840 )
				{
					loop19:
					cout<<"\n\nCountries according to your Budget and month :\n";
					cout<<"\n1)Turkey \n\n2)Proceed \n";
					cout<<"\nPress corresponding number to view brief information of country : ";
					cin>>num;
			
					system("cls");
			
					if (num==1)
					{
						turkey();
						goto loop19;
					}
			
					else if (num==2)
					goto jump ;
			
					else
					{
						cout<<"\n\nInvalid input.";
					    exit(0);
					}
				}
				else
				{
					cout<<"\n\nSorry ! Your budget is too low . Please restart program and input new budget.";
					exit(0);
				}
			}
			else if ( strcmp(month,"june") == 0 || strcmp(month,"June") == 0 )             
			{
				if ( budget >= 6720  )
				{
					loop20:
					cout<<"\n\nCountries according to your Budget and month :\n";
					cout<<"\n1)USA \n\n2)France \n\n3)Italy \n\n4)Australia \n\n5)Pakistan \n\n6)Turkey \n\n7)Proceed \n";
					cout<<"\nPress corresponding number to view brief information of country : ";
					cin>>num;
					
					system("cls");
			
					if (num==1)
					{
						USA();
						goto loop20;
					}
			
					else if (num==2)
					{
						france();
						goto loop20;
					}
			
					else if (num==3)
					{
						italy();
						goto loop20;
					}
			
					else if (num==4)
					{
						australia();
						goto loop20;
					}
			
					else if (num==5)
					{
						pakistan();
						goto loop20;
					}
			
					else if (num==6)
					{
						turkey();
						goto loop20;
					}
			
					else if (num==7)
					goto jump ;
			
					else
					{
						cout<<"\n\nInvalid input.";
					    exit(0);
					}
				}
		
				else if ( budget >= 4850 )
				{
					loop21:
					cout<<"\n\nCountries according to your Budget and month :\n";
					cout<<"\n1)France \n\n2)Italy \n\n3)Australia \n\n4)Pakistan \n\n5)Turkey \n\n6)Proceed \n";
					cout<<"\nPress corresponding number to view brief information of country : ";
					cin>>num;
			
					system("cls");
			
					if (num==1)
					{
						france();
						goto loop21;
					}
			
					else if (num==2)
					{
						italy();
						goto loop21;
					}
			
					else if (num==3)
					{
						australia();
						goto loop21;
					}
			
					else if (num==4)
					{
						pakistan();
						goto loop21;
					}
			
					else if (num==5)
					{
						turkey();
						goto loop21;
					}
			
					else if (num==6)
					goto jump ;
			
					else
					{
						cout<<"\n\nInvalid input.";
					    exit(0);
					}
				}
		
				else if ( budget >= 4080 )
				{
					loop22:
					cout<<"\n\nCountries according to your Budget and month :\n";
					cout<<"\n1)Italy \n\n2)Australia \n\n3)Pakistan \n\n4)Turkey \n\n5)Proceed \n";
					cout<<"\nPress corresponding number to view brief information of country : ";
					cin>>num;
			
					system("cls");
			
					if (num==1)
					{
						italy();
						goto loop22;
					}
			
					else if (num==2)
					{
						australia();
						goto loop22;
					}
			
					else if (num==3)
					{
						pakistan();
						goto loop22;
					}
			
					else if (num==4)
					{
						turkey();
						goto loop22;
					}
			
					else if (num==5)
					goto jump ;
			
					else
					{
						cout<<"\n\nInvalid input.";
					    exit(0);
					}
				}
		
				else if ( budget >= 3840 )
				{
					loop23:
					cout<<"\n\nCountries according to your Budget and month :\n";
					cout<<"\n1)Australia \n\n2)Pakistan \n\n3)Turkey \n\n4)Proceed \n";
					cout<<"\nPress corresponding number to view brief information of country : ";
					cin>>num;
			
					system("cls");
			
					if (num==1)
					{
						australia();
						goto loop23;
					}
			
					else if (num==2)
					{
						pakistan();
						goto loop23;
					}
			
					else if (num==3)
					{
						turkey();
						goto loop23;
					}
			
					else if (num==4)
					goto jump ;
			
					else
					{
						cout<<"\n\nInvalid input.";
					    exit(0);
					}
				}
		
				else if ( budget >= 1890 )
				{
					loop24:
					cout<<"\n\nCountries according to your Budget and month :\n";
					cout<<"\n1)Pakistan \n\n2)Turkey \n\n3)Proceed \n";
					cout<<"\nPress corresponding number to view brief information of country : ";
					cin>>num;
			
					system("cls");
			
					if (num==1)
					{
						pakistan();
						goto loop24;
					}
			
					else if (num==2)
					{
						turkey();
						goto loop24;
					}
			
					else if (num==3)
					goto jump ;
			
					else
					{
						cout<<"\n\nInvalid input.";
					    exit(0);
					}
				}
		
				else if ( budget >= 840 )
				{
					loop25:
					cout<<"\n\nCountries according to your Budget and month :\n";
					cout<<"\n1)Turkey \n\n2)Proceed \n";
					cout<<"\nPress corresponding number to view brief information of country : ";
					cin>>num;
			
					system("cls");
			
					if (num==1)
					{
						turkey();
						goto loop25;
					}
			
					else if (num==2)
					{
						goto jump ;
					}
			
					else
					{
						cout<<"\n\nInvalid input.";
					    exit(0);
					}
				}
				else
				{
					cout<<"\n\nSorry ! Your budget is too low . Please restart program and input new budget.";
					exit(0);
				}
			}
	
			else if ( strcmp(month,"july") == 0 || strcmp(month,"July") == 0 )              
			{
				if ( budget >= 6720  )
				{
					loop26:
					cout<<"\n\nCountries according to your Budget and month :\n";
					cout<<"\n1)USA \n\n2)Australia \n\n3)Pakistan \n\n4)Proceed \n";
					cout<<"\nPress corresponding number to view brief information of country : ";
					cin>>num;
			
					system("cls");
			
					if (num==1)
					{
						USA();
						goto loop26;
					}
			
					else if (num==2)
					{
						australia();
						goto loop26;
					}
			
					else if (num==3)
					{
						pakistan();
						goto loop26;
					}
			
					else if (num==4)
					goto jump ;
			
					else
					{
						cout<<"\n\nInvalid input.";
					    exit(0);
					}
				}
		
				else if ( budget >= 3840 )
				{
					loop27:
					cout<<"\n\nCountries according to your Budget and month :\n";
					cout<<"\n1)Australia \n\n2)Pakistan \n\n3)Proceed \n";
					cout<<"\nPress corresponding number to view brief information of country : ";
					cin>>num;
			
					system("cls");
			
					if (num==1)
					{
						australia();
						goto loop27;
					}
			
					else if (num==2)
					{
						pakistan();
						goto loop27;
					}
			
					else if (num==3)
					goto jump ;
			
					else
					{
						cout<<"\n\nInvalid input.";
					    exit(0);
					}
				}
		
				else if ( budget >= 1890 )
				{
					loop28:
					cout<<"\n\nCountries according to your Budget and month :\n";
					cout<<"\n1)Pakistan \n\n2)Proceed \n";
					cout<<"\nPress corresponding number to view brief information of country : ";
					cin>>num;
			
					system("cls");
			
					if (num==1)
					{
						pakistan();
						goto loop28;
					}
			
					else if (num==2)
					goto jump ;
			
					else
					{
						cout<<"\n\nInvalid input.";
					    exit(0);
					}
				}
				else
				{
					cout<<"\n\nSorry ! Your budget is too low . Please restart program and input new budget.";
					exit(0);
				}
			}
	
			else if ( strcmp(month,"august") == 0 || strcmp(month,"August") == 0 )          
			{
				if ( budget >= 6720  )
				{
					loop29:
					cout<<"\n\nCountries according to your Budget and month :\n";
					cout<<"\n1)USA \n\n2)Australia \n\n3)Pakistan \n\n4)Proceed \n";
					cout<<"\nPress corresponding number to view brief information of country : ";
					cin>>num;
			
					system("cls");
			
					if (num==1)
					{
						USA();
						goto loop29;
					}
			
					else if (num==2)
					{
						australia();
						goto loop29;
					}
			
					else if (num==3)
					{
						pakistan();
						goto loop29;
					}
			
					else if (num==4)
					goto jump ;
			
					else
					{
						cout<<"\n\nInvalid input.";
					    exit(0);
					}
				}
		
				else if ( budget >= 3840 )
				{
					loop30:
					cout<<"\n\nCountries according to your Budget and month :\n";
					cout<<"\n1)Australia \n\n2)Pakistan \n\n3)Proceed \n";
					cout<<"\nPress corresponding number to view brief information of country : ";
					cin>>num;
			
					system("cls");
			
					if (num==1)
					{
						australia();
						goto loop30;
					}
			
					else if (num==2)
					{
						pakistan();
						goto loop30;
					}
			
					else if (num==3)
					goto jump ;
			
					else
					{
						cout<<"\n\nInvalid input.";
					    exit(0);
					}
				}
		
				else if ( budget >= 1890 )
				{
					loop31:
					cout<<"\n\nCountries according to your Budget and month :\n";
					cout<<"\n1)Pakistan \n\n2)Proceed \n";
					cout<<"\nPress corresponding number to view brief information of country : ";
					cin>>num;
			
					system("cls");
			
					if (num==1)
					{
						pakistan();
						goto loop31;
					}
			
					else if (num==2)
					goto jump ;
			
					else
					{
						cout<<"\n\nInvalid input.";
					    exit(0);
					}
				}
				else
				{
					cout<<"\n\nSorry ! Your budget is too low . Please restart program and input new budget.";
					exit(0);
				}
			}
	
			else if ( strcmp(month,"september") == 0 || strcmp(month,"September") == 0 )             
			{
				if ( budget >= 6720  )
				{
					loop32:
					cout<<"\n\nCountries according to your Budget and month :\n";
					cout<<"\n1)USA \n\n2)France \n\n3)United Kingdom \n\n4)Italy \n\n5)Canada \n\n6)Pakistan \n\n7)Spain \n\n8)Proceed \n";
					cout<<"\nPress corresponding number to view brief information of country : ";
					cin>>num;
			
					system("cls");
			
					if (num==1)
					{
						USA();
						goto loop32;
					}
			
					else if (num==2)
					{
						france();
						goto loop32;
					}
			
					else if (num==3)
					{
						UK();
						goto loop32;
					}
			
					else if (num==4)
					{
						italy();
						goto loop32;
					}
			
					else if (num==5)
					{
						canada();
						goto loop32;
					}
			
					else if (num==6)
					{
						pakistan();
						goto loop32;
					}
			
					else if (num==7)
					{
			        	spain();
			        	goto loop32;
					}
			
					else if (num==8)
					goto jump ;
			
					else
					{
						cout<<"\n\nInvalid input.";
					    exit(0);
					}
			
				}
		
				else if ( budget >= 4850 )
				{
					loop33:
					cout<<"\n\nCountries according to your Budget and month :\n";
					cout<<"\n1)France \n\n2)United Kingdom \n\n3)Italy \n\n4)Canada \n\n5)Pakistan \n\n6)Spain \n\n7)Proceed \n";
					cout<<"\nPress corresponding number to view brief information of country : ";
					cin>>num;
			
					system("cls");
			
					if (num==1)
					{
						france();
						goto loop33;
					}
			
					else if (num==2)
					{
						UK();
						goto loop33;
					}
			
					else if (num==3)
					{
						italy();
						goto loop33;
					}
			
					else if (num==4)
					{
						canada();
						goto loop33;
					}
			
					else if (num==5)
					{
						pakistan();
						goto loop33;
					}
			
					else if (num==6)
					{
			        	spain();
			        	goto loop33;
					}
			
					else if (num==7)
					goto jump ;
			
					else
					{
						cout<<"\n\nInvalid input.";
					    exit(0);
					}
				}
		
				else if ( budget >= 4530 )
				{
					loop34:
					cout<<"\n\nCountries according to your Budget and month :\n";
					cout<<"\n1)United Kingdom \n\n2)Italy \n\n3)Canada \n\n4)Pakistan \n\n5)Spain \n\n6)Proceed \n";
					cout<<"\nPress corresponding number to view brief information of country : ";
					cin>>num;
			
					system("cls");
			
					if (num==1)
					{
						UK();
						goto loop34;
					}
			
					else if (num==2)
					{
						italy();
						goto loop34;
					}
			
					else if (num==3)
					{
						canada();
						goto loop34;
					}
			
					else if (num==4)
					{
						pakistan();
						goto loop34;
					}
			
					else if (num==5)
					{
			        	spain();
			        	goto loop34;
					}
			
					else if (num==6)
					goto jump ;
			
					else
					{
						cout<<"\n\nInvalid input.";
					    exit(0);
					}
				}
		
				else if ( budget >= 4080 )
				{
					loop35:
					cout<<"\n\nCountries according to your Budget and month :\n";
					cout<<"\n1)Italy \n\n2)Canada \n\n3)Pakistan \n\n4)Spain \n\n5)Proceed \n";
					cout<<"\nPress corresponding number to view brief information of country : ";
					cin>>num;
			
					system("cls");
			
					if (num==1)
					{
						italy();
						goto loop35;
					}
			
					else if (num==2)
					{
						canada();
						goto loop35;
					}
			
					else if (num==3)
					{
						pakistan();
						goto loop35;
					}
			
					else if (num==4)
					{
			        	spain();
			        	goto loop35;
					}
			
					else if (num==5)
					goto jump ;
			
					else
					{
						cout<<"\n\nInvalid input.";
					    exit(0);
					}
				}
		
				else if ( budget >= 4050 )
				{
					loop36:
					cout<<"\n\nCountries according to your Budget and month :\n";
					cout<<"\n1)Canada \n\n2)Pakistan \n\n3)Spain \n\n4)Proceed \n";
					cout<<"\nPress corresponding number to view brief information of country : ";
					cin>>num;
			
					system("cls");
			
					if (num==1)
					{
						canada();
						goto loop36;
					}
			
					else if (num==2)
					{
						pakistan();
						goto loop36;
					}
			
					else if (num==3)
					{
			        	spain();
			        	goto loop36;
					}
			
					else if (num==4)
					goto jump ;
			
					else
					{
						cout<<"\n\nInvalid input.";
					    exit(0);
					}
				}
		
				else if ( budget >= 1890 )
				{
					loop37:
					cout<<"\n\nCountries according to your Budget and month :\n";
					cout<<"\n1)Pakistan \n\n2)Spain \n\n3)Proceed \n";
					cout<<"\nPress corresponding number to view brief information of country : ";
					cin>>num;
			
					system("cls");
			
					if (num==1)
					{
						pakistan();
						goto loop37;
					}
			
					else if (num==2)
					{
			        	spain();
			        	goto loop37;
					}
			
					else if (num==3)
					goto jump ;
			
					else
					{
						cout<<"\n\nInvalid input.";
					    exit(0);
					}
				}
		
				else if ( budget >= 1200 )
				{
					loop38:
					cout<<"\n\nCountries according to your Budget and month :\n";
					cout<<"\n1)Spain \n\n2)Proceed \n";
					cout<<"\nPress corresponding number to view brief information of country : ";
					cin>>num;
			
					system("cls");
			
					if (num==1)
					{
			        	spain();
			        	goto loop38;
					}
			
					else if (num==2)
					goto jump ;
			
					else
					{
						cout<<"\n\nInvalid input.";
					    exit(0);
					}
				}
				else
				{
					cout<<"\n\nSorry ! Your budget is too low . Please restart program and input new budget.";
					exit(0);
				}
			}
	
			else if ( strcmp(month,"october") == 0 || strcmp(month,"October") == 0 )              
			{
				if ( budget >= 8280  )
				{
					while(num!=9)
					{
						cout<<"\n\nCountries according to your Budget and month :\n";
						cout<<"\n1)United Arab Emirates \n\n2)France \n\n3)United Kingdom \n\n4)Hong Kong \n\n5)Italy \n\n6)Canada \n\n7)Pakistan \n\n8)Spain \n\n9)Proceed \n";
						cout<<"\nPress corresponding number to view brief information of country : ";
						cin>>num;
						system("cls");
						if (num==1)
			    	    	UAE();
						else if (num==2)
							france();
						else if (num==3)
							UK();
						else if (num==4)
			    	    	hong_kong();
						else if (num==5)
							italy();
						else if (num==6)
							canada();
						else if (num==7)
							pakistan();
						else if (num==8)
			    	    	spain();
						else if (num==9)
							goto jump ;
						else
						{
							cout<<"\n\nInvalid input.";
						    exit(0);
						}
					}
				}
		
				else if ( budget >= 4850  )
				{
					while(num!=8)
					{
						cout<<"\n\nCountries according to your Budget and month :\n";
						cout<<"\n1)France \n\n2)United Kingdom \n\n3)Hong Kong \n\n4)Italy \n\n5)Canada \n\n6)Pakistan \n\n7)Spain \n\n8)Proceed \n";
						cout<<"\nPress corresponding number to view brief information of country : ";
						cin>>num;
						system("cls");
						if (num==1)
							france();
						else if (num==2)
							UK();
						else if (num==3)
			        		hong_kong();
						else if (num==4)
							italy();
						else if (num==5)
							canada();
						else if (num==6)
							pakistan();
						else if (num==7)
			        		spain();
						else if (num==8)
							goto jump ;
						else
						{
							cout<<"\n\nInvalid input.";
						    exit(0);
						}
					}
				}
		
				else if ( budget >= 4530  )
				{
					while(num!=7)
					{
						cout<<"\n\nCountries according to your Budget and month :\n";
						cout<<"\n1)United Kingdom \n\n2)Hong Kong \n\n3)Italy \n\n4)Canada \n\n5)Pakistan \n\n6)Spain \n\n7)Proceed \n";
						cout<<"\nPress corresponding number to view brief information of country : ";
						cin>>num;
						system("cls");
						if (num==1)
							UK();
						else if (num==2)
			     		   	hong_kong();
						else if (num==3)
							italy();
						else if (num==4)
							canada();
						else if (num==5)
							pakistan();
						else if (num==6)
			        		spain();
						else if (num==7)
							goto jump ;
						else
						{
							cout<<"\n\nInvalid input.";
						    exit(0);
						}
					}
				}
		
				else if ( budget >= 4170  )
				{
					while(num!=6)
					{
						cout<<"\n\nCountries according to your Budget and month :\n";
						cout<<"\n1)Hong Kong \n\n2)Italy \n\n3)Canada \n\n4)Pakistan \n\n5)Spain \n\n6)Proceed \n";
						cout<<"\nPress corresponding number to view brief information of country : ";
						cin>>num;
						system("cls");
						if (num==1)
			        		hong_kong();
						else if (num==2)
							italy();
						else if (num==3)
							canada();
						else if (num==4)
							pakistan();
						else if (num==5)
			        		spain();
						else if (num==6)
							goto jump ;
						else
						{
							cout<<"\n\nInvalid input.";
						    exit(0);
						}
					}
				}
		
				else if ( budget >= 4080  )
				{
					while(num!=5)
					{
						cout<<"\n\nCountries according to your Budget and month :\n";
						cout<<"\n1)Italy \n\n2)Canada \n\n3)Pakistan \n\n4)Spain \n\n5)Proceed \n";
						cout<<"\nPress corresponding number to view brief information of country : ";
						cin>>num;
						system("cls");
						if (num==1)
							italy();
						else if (num==2)
							canada();
						else if (num==3)
							pakistan();
						else if (num==4)
			        		spain();
						else if (num==5)
							goto jump ;
						else
						{
							cout<<"\n\nInvalid input.";
						    exit(0);
						}
					}
				}
		
				else if ( budget >= 4050  )
				{
					while(num!=4)
					{
						cout<<"\n\nCountries according to your Budget and month :\n";
						cout<<"\n1)Canada \n\n2)Pakistan \n\n3)Spain \n\n4)Proceed \n";
						cout<<"\nPress corresponding number to view brief information of country : ";
						cin>>num;
						system("cls");
						if (num==1)
							canada();
						else if (num==2)
							pakistan();
						else if (num==3)
			        		spain();
						else if (num==4)
							goto jump ;
						else
						{
							cout<<"\n\nInvalid input.";
						    exit(0);
						}
					}
				}
		
				else if ( budget >= 1890  )
				{
					while(num!=3)
					{
						cout<<"\n\nCountries according to your Budget and month :\n";
						cout<<"\n1)Pakistan \n\n2)Spain \n\n3)Proceed \n";
						cout<<"\nPress corresponding number to view brief information of country : ";
						cin>>num;
						system("cls");
						if (num==1)
							pakistan();
						else if (num==2)
			        		spain();
						else if (num==3)
							goto jump ;
						else
						{
							cout<<"\n\nInvalid input.";
						    exit(0);
						}
					}
				}
		
				else if ( budget >= 1200  )
				{
					while(num!=2)
					{
						cout<<"\n\nCountries according to your Budget and month :\n";
						cout<<"\n1)Spain \n\n2)Proceed \n";
						cout<<"\nPress corresponding number to view brief information of country : ";
						cin>>num;
						system("cls");
						if (num==1)
			        		spain();
						else if (num==2)
							goto jump ;
						else
						{
							cout<<"\n\nInvalid input.";
						    exit(0);
						}
					}
				}
				else
				{
					cout<<"\n\nSorry ! Your budget is too low . Please restart program and input new budget.";
					exit(0);
				}
			}
	
			else if ( strcmp(month,"november") == 0 || strcmp(month,"November") == 0 )             
			{
				if ( budget >= 4850  )
				{
					while(num!=6)
					{
						cout<<"\n\nCountries according to your Budget and month :\n";
						cout<<"\n1)France \n\n2)United Kingdom \n\n3)Hong Kong \n\n4)Canada \n\n5)Spain \n\n6)Proceed \n";
						cout<<"\nPress corresponding number to view brief information of country : ";
						cin>>num;
						system("cls");
						if (num==1)
							france();
						else if (num==2)
							UK();
						else if (num==3)
			        		hong_kong();
						else if (num==4)
							canada();
						else if (num==5)
			        		spain();
						else if (num==6)
							goto jump ;
						else
						{
							cout<<"\n\nInvalid input.";
						    exit(0);
						}
					}
				}
		
				else if ( budget >= 4530  )
				{
					while(num!=5)
					{
						cout<<"\n\nCountries according to your Budget and month :\n";
						cout<<"\n1)United Kingdom \n\n2)Hong Kong \n\n3)Canada \n\n4)Spain \n\n5)Proceed \n";
						cout<<"\nPress corresponding number to view brief information of country : ";
						cin>>num;
						system("cls");
						if (num==1)
							UK();
						else if (num==2)
			        		hong_kong();
						else if (num==3)
							canada();
						else if (num==4)
			        		spain();
						else if (num==5)
							goto jump ;
						else
						{
							cout<<"\n\nInvalid input.";
						    exit(0);
						}
					}
				}
		
				else if ( budget >= 4170  )
				{
					while(num!=4)
					{
						cout<<"\n\nCountries according to your Budget and month :\n";
						cout<<"\n1)Hong Kong \n\n2)Canada \n\n3)Spain \n\n4)Proceed \n";
						cout<<"\nPress corresponding number to view brief information of country : ";
						cin>>num;
						system("cls");
						if (num==1)
			        	hong_kong();
						else if (num==2)
						canada();
						else if (num==3)
			        	spain();
						else if (num==4)
						goto jump ;
						else
						{
							cout<<"\n\nInvalid input.";
						    exit(0);
						}
					}
				}
		
				else if ( budget >= 4050  )
				{
					while(num!=3)
					{
						cout<<"\n\nCountries according to your Budget and month :\n";
						cout<<"\n1)Canada \n\n2)Spain \n\n3)Proceed \n";
						cout<<"\nPress corresponding number to view brief information of country : ";
						cin>>num;
						system("cls");
						if (num==1)
							canada();
						else if (num==2)
			        		spain();
						else if (num==3)
						goto jump ;
						else
						{
							cout<<"\n\nInvalid input.";
						    exit(0);
						}
					}
				}
		
				else if ( budget >= 1200  )
				{
					while(num!=2)
					{
						cout<<"\n\nCountries according to your Budget and month :\n";
					    cout<<"\n1)Spain \n\n2)Proceed \n";
					    cout<<"\nPress corresponding number to view brief information of country : ";
					    cin>>num;
					    system("cls");
					    if (num==1)
			            	spain();
					    else if (num==2)
					        goto jump ;
					    else
					    {
					    	cout<<"\n\nInvalid input.";
					        exit(0);
					    }
					}
				}
				else
				{
					cout<<"\n\nSorry ! Your budget is too low . Please restart program and input new budget.";
					exit(0);
				}
			}
	
			else if ( strcmp(month,"december") == 0 || strcmp(month,"December") == 0 )              
			{
				if ( budget >= 8280  )
				{
					while(num!=2)
					{
						cout<<"\n\nCountries according to your Budget and month :\n";
						cout<<"\n1)United Arab emirates \n\n2)Proceed \n";
						cout<<"\nPress corresponding number to view brief information of country : ";
						cin>>num;
						system("cls");
						if (num==1)
			        		UAE();
						else if (num==2)
						goto jump ;
						else
						{
							cout<<"\n\nInvalid input.";
						    exit(0);
						}
					}
				}
				else
				{
					cout<<"\n\nSorry ! Your budget is too low . Please restart program and input new budget.";
					exit(0);
				}
			}
			else
			{
				cout<<"\n\n\nOOpss! Someting went wrong. Please read and follow instruction carefully and avoid Spelling Errors ...\n\n";
				exit(0);
			}
			jump:
				ofstream fout;
			    fout.open("Customer_Data.txt",ios::app);
				cout<<"\n\tFINALIZE TOUR INFORMATION \n\n";
				cout<<"\n\t\t\tCOUNTRY : ";
				cin>>country;
				fout<<country<<" ";
			    fout.close();
			    package_selection();
		}
		private:
		void package_selection()
		{
			int num ;
	        system("cls");
	        system("color 70");
			cout<<"\n\t\t\tView Packages of : "<<country<<endl;
			cout<<"\nPress any key to view packages.....";
			getch();
	
			system("cls");
	
			if ( strcmp(country,"UAE") == 0 || strcmp(country,"uae") == 0 )
			{
				UAEPack();
		
	 		    cout<<"\n\t\t\tEnter package number : ";
	 		    cin>>package;
	    
	  		    if( package == 1 )
	  		    {
	  		  	    amount = 16560 ;
	 		   	    duration = 8 ;
				}
				else if( package == 2 )
				{
	    			amount = 8280 ;
	    			duration = 4 ;
				}
				else if( package == 3 )
				{
	   		 	    amount = 4140 ;
	   		 	    duration = 2 ;
				}
		 	}
	
			else if ( strcmp(country,"UK") == 0 || strcmp(country,"uk") == 0 )
			{
				UKPack();
		
			    cout<<"\n\t\t\tEnter package number : ";
			    cin>>package;
	    
			    if( package == 1 )
			    {
			    	amount = 9060 ;
			    	duration = 8 ;
				}
				else if( package == 2 )
				{
			    	amount = 4530 ;
			    	duration = 4 ;
				}
				else if( package == 3 )
				{
	 		   	amount = 2265 ;
	 		   	duration = 2 ;
				}
			}
	
			else if ( strcmp(country,"USA") == 0 || strcmp(country,"usa") == 0 )
			{
				USAPack();
		
	 		    cout<<"\n\t\t\tEnter package number : ";
	  		    cin>>package;
	    
	  		    if( package == 1 )
	  		    {
	    	        amount = 13440 ;
	    	        duration = 8 ;
		        }
				else if( package == 2 )
				{
			    	amount = 6720 ;
			    	duration = 4 ;
				}
				else if( package == 3 )
				{
			    	amount = 3360 ;
			    	duration = 2 ;
				}
			}
	
			else if ( strcmp(country,"Australia") == 0 || strcmp(country,"australia") == 0 )
			{
				AusPack();
		
			    cout<<"\n\t\t\tEnter package number : ";
			    cin>>package;
	    
			    if( package == 1 )
			    {
			    	amount = 7680 ;
			    	duration = 8 ;
				}
				else if( package == 2 )
				{
			    	amount = 3840 ;
			    	duration = 4 ;
				}
				else if( package == 3 )
				{
			    	amount = 1920 ;
			    	duration = 2 ;
				}
			}
	
			else if ( strcmp(country,"Canada") == 0 || strcmp(country,"canada") == 0 )
			{
				CanPack();
		
			    cout<<"\n\t\t\tEnter package number : ";
			    cin>>package;
	    
			    if( package == 1 )
			    {
			    	amount = 16560 ;
			    	duration = 8 ;
				}
				else if( package == 2 )
				{
			    	amount = 8280 ;
			    	duration = 4 ;
				}
				else if( package == 3 )
				{
			    	amount = 4140 ;
			    	duration = 2 ;
				}
			}
	
			else if ( strcmp(country,"France") == 0 || strcmp(country,"france") == 0 )
			{
				FranPack();
		
			    cout<<"\n\t\t\tEnter package number : ";
			    cin>>package;
	    
			    if( package == 1 )
			    {
			    	amount = 9700 ;
			    	duration = 8 ;
				}
				else if( package == 2 )
				{
			    	amount = 4850 ;
			    	duration = 4 ;
				}
				else if( package == 3 )
				{
			    	amount = 2425 ;
			    	duration = 2 ;
				}
			}
	
			else if ( strcmp(country,"Germany") == 0 || strcmp(country,"germany") == 0 )
			{
				GerPack();
		
			    cout<<"\n\t\t\tEnter package number : ";
			    cin>>package;
	    
			    if( package == 1 )
			    {
			    	amount = 7680 ;
			    	duration = 8 ;
				}
				else if( package == 2 )
				{
			    	amount = 3840 ;
			    	duration = 4 ;
				}
				else if( package == 3 )
				{
			    	amount = 1920 ;
			    	duration = 2 ;
				}
			}
	
			else if ( strcmp(country,"Hong Kong") == 0 || strcmp(country,"hong kong") == 0 )
			{
				HongPack();
		
			    cout<<"\n\t\t\tEnter package number : ";
			    cin>>package;
	    
			    if( package == 1 )
			    {
			    	amount = 8340 ;
			    	duration = 8 ;
				}
				else if( package == 2 )
				{
			    	amount = 4170 ;
			    	duration = 4 ;
				}
				else if( package == 3 )
				{
			    	amount = 2085 ;
			    	duration = 2 ;
				}
			}
	
			else if ( strcmp(country,"Italy") == 0 || strcmp(country,"italy") == 0 )
			{
				ItPack();
		
			    cout<<"\n\t\t\tEnter package number : ";
			    cin>>package;
	    
			    if( package == 1 )
			    {
			    	amount = 8160 ;
			    	duration = 8 ;
				}
				else if( package == 2 )
				{
			    	amount = 4080 ;
			    	duration = 4 ;
				}
				else if( package == 3 )
				{
			    	amount = 2040 ;
			    	duration = 2 ;
				}
			}
	
			else if ( strcmp(country,"Pakistan") == 0 || strcmp(country,"pakistan") == 0 )
			{
				PakPack();
		
			    cout<<"\n\t\t\tEnter package number : ";
			    cin>>package;
	    
			    if( package == 1 )
			    {
			    	amount = 3780 ;
			    	duration = 8 ;
				}
				else if( package == 2 )
				{
			    	amount = 1890 ;
			    	duration = 4 ;
				}
				else if( package == 3 )
				{
			    	amount = 945 ;
			    	duration = 2 ;
				}
			}
	
			else if ( strcmp(country,"Spain") == 0 || strcmp(country,"spain") == 0 )
			{
				SpaPack();
		
			    cout<<"\n\t\t\tEnter package number : ";
			    cin>>package;
	    
			    if( package == 1 )
			    {
			    	amount = 2400 ;
			    	duration = 8 ;
				}
				else if( package == 2 )
				{
			    	amount = 1200 ;
			    	duration = 4 ;
				}
				else if( package == 3 )
				{
			    	amount = 600 ;
			    	duration = 2 ;
				}
			}
	
			else if ( strcmp(country,"Turkey") == 0 || strcmp(country,"turkey") == 0 )
			{
				TurPack();
		
			    cout<<"\n\t\t\tEnter package number : ";
			    cin>>package;
	    
			    if( package == 1 )
			    {
			    	amount = 1680 ;
			    	duration = 8 ;
				}
				else if( package == 2 )
				{
			    	amount = 840 ;
			    	duration = 4 ;
				}
				else if( package == 3 )
				{
			    	amount = 420 ;
			    	duration = 2 ;
				}
			}
			ofstream fout;
			fout.open("Customer_Data.txt",ios::app);
			fout<<amount<<" ";
			fout<<duration<<" ";
			fout<<package<<" ";
			fout<<endl;
			fout.close();
			system("cls");
			show_list();
		}
		void show_list()
		{
			int ask,x;
			char y;
			system("cls");
			system("color 47");
			cout<<"Please select the corresponding number : \n\n";
			cout<<"\t1)Book Tour"<<endl;
			cout<<"\t2)Add Ticket"<<endl;
			cout<<"\t3)Cancel Ticket"<<endl;
			cout<<"\t4)Change country"<<endl;
			cout<<"\t5)Change package"<<endl;
			cout<<"\t6)Cancel Tour"<<endl;
			cout<<"\t7)View Summary"<<endl;
			cout<<"\t8)Query"<<endl;
			cout<<"\t9)Suggestion"<<endl;
			cout<<"\t10)Logout"<<endl;
			cin>>ask;
			switch(ask)
			{
				case 1:
				{
					book_tour();
					break;
				}
				case 2:
				{
					add_ticket();
					break;
				}
				case 3:
				{
					cancel(x);
					break;
				}
				case 4:
				{
					change(y);
					break;
				}
				case 5:
				{
					change();
					break;
				}
				case 6:
				{
					cancel(y);
					break;
				}
				case 7:
				{
					view_summary();
					break;
				}
				case 8:
				{
					get_query();
					break;
				}
				case 9:
				{
					get_suggestion();
					break;
				}
				case 10:
				{
					logout();
					break;
				}
				default:
				{
					cout<<"\n\nPlease enter correct number........!\n";
					exit(0);
				}
			}
		}
		void book_tour()
		{
			system("cls");
			int year;
			cout<<"On what year you are planning to go on tour...? : ";
			cin>>year;
			cout<<"Please press any key to view canlender of "<<year<<".....";
			getch();
			system("cls");
			printCalendar(year); 
			system("cls");
			cout<<"\tOn what date you want to go on tour : ";
			cin>>tour_date;
			cout<<"\n\tHow many persons you want to go : ";
			cin>>members;
			cout<<"\n\t\tAirline to reach "<<country<<" : ";
			cin>>flight;
			cout<<"\n\tYour tickets have been booked for "<<members<<" persons...Thank You\n"<<endl;
			int percent;
			if(members>=5)
			{
				try
        	    {
		        	if( members == 5 )
		        	throw 1.00;
		    		else if( members > 5 && members < 10 )
		    		throw 1;
		    		else if( members >= 10 )
		    		throw 'a';
	    	    } 
			    catch(int x)
			    {
		    		discount = ( amount * members ) - ( ( amount * members ) * 0.1 );
		    		percent = 10;
		        }
		        catch(char a)
		        {
		    		discount = ( amount * members ) - ( ( amount * members ) * 0.2 );
		    		percent = 20;
		        }         
			    catch(...)
				{
				    discount = ( amount * members ) - ( ( amount * members ) * 0.05 );
				    percent = 5;
				}
		    	cout<<"\n\t\t\tCongratulations...! You are "<<members<<" members you have recieved "<<percent<<" percent discount on total amount....!\n\t\t\tYour total amount is "<<amount * members<<" \n\t\t\tYour amount after "<<percent<<" percent discount is : "<<discount;
		    	
			}
			cout<<"\n\n\nPlease press any key to continue....";
			getch();
			
			ofstream fout;
			fout.open("Customer_Data.txt",ios::app);
			fout<<tour_date<<" ";
			fout<<members<<" ";
			fout<<flight<<" ";
			fout.close();
			system("cls");
			show_list();
		}
		void add_ticket()
		{
			int ask;
			system("cls");
			cout<<"How many tickets you want to add : ";
			cin>>ask;
			members+=ask;
			cout<<"\n\nThe tickets for "<<members<<" persons have been booked....\n\n";
			cout<<"Please press any key to continue....";
			getch();
			ofstream fout;
			fout.open("Customer_Data.txt",ios::app);
			fout<<members<<" ";
			fout.close();
			system("cls");
			show_list();
		}
		void cancel(int ask)
		{
			system("cls");
			cout<<"How many tickets you want to cancel : ";
			cin>>ask;
			if(ask==members)
			{
				members-=ask;
				cout<<"\n\nThe tickets have been canceled and your tour also....\n";
			    cout<<"Please press any key to continue....";
			    getch();
				system("cls");
				cout<<"\n\nPress any key to log out........"<<endl;
			    getch();
			    exit(0);
			}
			else if(ask>members)
			{
				cout<<"\n\nYou haven't booked this much tickets...!\n";
				exit(0);
			}
			else if(ask<members)
			{
				members-=ask;
				cout<<"\n\nThe tickets for "<<members<<" persons have been canceled....\n";
			    cout<<"Please press any key to continue....";
			    getch();
				ofstream fout;
			    fout.open("Customer_Data.txt",ios::app);
			    fout<<members<<" ";
			    fout.close();
			    system("cls");
			    show_list();
			}
		}
		void change(char ask)
		{
			system("cls");
			cout<<"\n\nDo you really want to change you tour country....?(y/n)\n";
			cin>>ask;
			cout<<"\nIn which country you want to change your tour to : ";
			cin>>country;
			ofstream fout;
			fout.open("Customer_Data.txt",ios::app);
			fout<<country<<" ";
			fout.close();
			system("cls");
			show_list();
		}
		void change()
		{
			system("cls");
			package_selection();
			system("cls");
			show_list();
		}
		void cancel(char ask)
		{
			system("cls");
			cout<<"\n\nDo you really want to cancel the tour....?(y/n)\n";
			cin>>ask;
			if(ask=='y')
			{
				cout<<"\nThe tour has been cancelled....!\n";
				cout<<"\n\nPress any key to log out........"<<endl;
			    getch();
			    exit(0);
			}
			else
			{
		        system("cls");
			    show_list();
			}
		}
		void view_summary()
		{
			system("cls");
			system("color 30");
			cout<<"\n\n\n\n";
			cout<<"\t\t\tPersonal Data \n";
			cout<<"\t_________________________________________________\n";
			cout<<"\t|\tName\t: \t"<<name<<"\t\t\t|\n";
			cout<<"\t|\tAge \t: \t"<<age<<"\t\t\t|\n";
			cout<<"\t|\tNIC\t: \t"<<nic<<"\t\t|\n";
			cout<<"\t|_______________________________________________|\n";
			cout<<"\n\n\t\t\tTour Data \n";
			cout<<"\t_________________________________________________\n";
			cout<<"\t|\tBooking Date\t: \t"<<booking_date<<"\t|\n";
			cout<<"\t|\tTour Date\t: \t"<<tour_date<<"\t|\n";
			cout<<"\t|\tCountry         : \t"<<country<<"\t\t|\n";
			cout<<"\t|\tMonth           : \t"<<month<<"\t\t|\n";
			cout<<"\t|\tAirline         : \t"<<flight<<"\t\t|\n";
			cout<<"\t|\tMembers         : \t"<<members<<"\t\t|\n";
			cout<<"\t|\tPackage         : \t"<<package<<"\t\t|\n";
			cout<<"\t|\tStay            : \t"<<duration<<" weeks  \t|\n";
			cout<<"\t|\tTotal Amount    : \t"<<discount<<"\t\t|\n";
			cout<<"\t|_______________________________________________|\n";
			cout<<"\n\nPlease press any key to continue....";
	        getch();
			system("cls");
			show_list();
		}
		void get_query()
		{
			system("cls");
			query();
			system("cls");
			show_list();
		}
		void get_suggestion()
		{
			system("cls");
			suggestion();
			system("cls");
			show_list();
		}
		void logout()
		{
			system("cls");
			exit(0);
		}
};
int main()
{
	login_id_password obj1;
	tourist_information obj2;
	return 0;
}
