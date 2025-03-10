#include<string>
#include<iostream>
#include "Account.h"
using namespace std;

int Account::count(0);
int main(){
       
        
	//Account A1;
	//A1.Accept();
	//A1.Display();
	
	int size;
	cout<<"Enter the total number of Accounts to be created :"<<endl;
	cin>>size;
	Account *Arr = new Account[size];
	
	/*Account A1 = new Account();
		A1.Accept();			
		Arr[AccNo].Name = A1.name;
		Arr[Accno].Balance = A1.balance;
		
	for(int i=0;i<size;i++){
	     Arr[i].Display();
	}
	*/
	
	int choice=0;

	do{
     		cout<<"Enter 0 : To Exit"<<endl;
     		cout<<"Enter 1 : To Create new Account"<<endl;
     		cout<<"Enter 2 : To Deposit Money"<<endl;
     		cout<<"Enter 3 : To Withdraw money"<<endl;
     		cout<<"Enter 4 : To Check Balance"<<endl;
     		cout<<"Enter 5 : To Display Account Holder Details:"<<endl;	
     		cin>>choice;
     		
     		switch(choice){
     		
     			case 1: {
     			          	Account A1 ;
					A1.Accept();
					Arr[AccNo].Name = A1.name;
					Arr[Accno].Balance = A1.balance;
					break;
     				}
     				
     			case 2: {  
     			           cout<<"Enter the AccNo to Deposit";
     			           int acc_no;
     			           cin>>acc_no;
     			           
     			           for(int i=0;i<size;i++){
     			           if(Arr[i].AccNo==acc_no)
     			           {
				        cout<<"Enter Ammount to add :"<<endl;
					double balance;
					cin>>balance;
					Arr[i].Balance = Arr[i].Balance+balance;
					cout<<"Updated balance is :"<<endl;
					cout<<Arr[i].Balance;
					}
				  }
				  
				  break;
     				}
     				
     			case 3: {
     			           cout<<"Enter the AccNo to Deposit";
     			           int acc_no;
     			           cin>>acc_no;
     			           
     			           for(int i=0;i<size;i++){
     			           if(Arr[i].AccNo==acc_no)
     			           {
				        cout<<"Enter Ammount to withdraw :";
					double ammount;
					cin>>ammount;
					Arr[i].Balance = Arr[i].Balance-ammount;
					cout<<"Updated Balance is :"<<endl;
					cout<<Arr[i].Balance;	
					}
				  }
				  
				  break;
     				
     				}
     				
	     			case 4: {
	     				cout<<"Enter Account Number to see Balance:";
					int acc_No ;
					cin>>acc_NO;
					for(int i=0;i<size;i++){
						if(Arr[i].AccNo==acc_No){
							cout<<"Account Balance is :"<<endl;
							cout<<Arr[i].Balance;
						}
	     				
	     				}
	     				break;
	     				}
	     				
	     			case 5 {
	     				cout<<"Enter the Account Number to view details:"<<endl;
	     				for(int i=0;i<size;i++){
						if(Arr[i].AccNo==acc_No){
						Arr[i].Display();
						}
	     				
	     				}
	     				break;
	     				}
	     			default : 
	     			         cout<<"Enter valid input"<<endl;	
     		
     		
     		}
	
	}while(choice!=0);
	
	
	

return 0;

}
