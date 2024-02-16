#include<iostream>
using namespace std;
class EventOrganizer
{
	private :
		const double CostPerHour = 18.50;
		const double CostPerMinute = .40;
		const double CostOfDinner =20.70;
		
		string eventname;
		string firstname;
		string lastname;
		int NumberOfGuests;
		int NumberOfMinutes;
		
		public:
			void getdata()
			{
				cout<<"\n\n\t Enter The Event Name :";
				cin>>eventname;
				
				cout<<"\n\n\t Enter Your First Name :";
				cin>>firstname;
				
				cout<<"\n\n\t Enter Your Last Name :";
				cin>>lastname;
				
				cout<<"\n\n\t Enter the Number Of Guest :";
				cin>>NumberOfGuests;
				
				cout<<"\n\n\t Enter the Number Of Minutes :";
				cin>>NumberOfMinutes;
			}
			
			void calculateCost()
			{
				 int numberOfServers = NumberOfGuests / 20;
				 
				 double Cost1 = (NumberOfMinutes / 60) * CostPerHour;
                 double Cost2 = (NumberOfMinutes % 60) * CostPerMinute;
                 int CostForOneServer = Cost1 + Cost2;
                 
                 double TotalFoodCost = NumberOfGuests * CostOfDinner;
                 
                 double AverageCost = TotalFoodCost / NumberOfGuests;
                 
                 double TotalCost = TotalFoodCost + (CostForOneServer * numberOfServers);
                 
                 double DepositAmount = TotalCost * .25;

//				 cout<<"_____________Event Cost Animation_______________";
				 cout<<"\n\n\tEvent Name : "<<eventname;
				 cout<<"\n\n\tEevent Organaizer : "<<firstname<<lastname;
				 cout<<"\n\n\tNumber of Guest :"<<NumberOfGuests;
				 cout<<"\n\n\tNumber of Servers :"<<numberOfServers;
				 cout<<"\n\n\tCost For One Server :"<<CostForOneServer<<".00"<<"\n";
				 cout<<"\n\n\tTotal Food Cost :"<<TotalFoodCost<<".00"<<"\n";
				 cout<<"\n\n\tAverage Cost : "<<AverageCost<<".00"<<"\n";
				 cout<<"\n\n\tTotal Cost :"<<TotalCost<<".00"<<"\n";
				 cout<<"\n\n\tDeposit Amount (25%) :"<<DepositAmount<<".00"<<"\n";
				 
			}
		
};	

main()
{
	EventOrganizer event;
	
	event.getdata();
	event.calculateCost();
}
