#include<iostream>
#include<string>
#include "Account.h"
using namespace std;

Account::Account(){
        count++;
        this->AccNo = count;
}

Account::Account(double Balance, string Name): Balance(Balance), Name(Name){
     	count++;
     	this->AccNo = count;
}

int Account::GetAccNo(){
	return this->AccNo;
}

void Account::Accept(){
	cout<<"Enter Details to Open Account"<<endl;
	cout<<"Enter Name :"<<endl;
	cin>>Name;
	cout<<"Enter Amount to Add:";
	cin>>Balance;
}

void Account::Display(){
	cout<<"Account Number :";
	cout<<this->AccNo<<endl;
	cout<<"Account Holder Name :";
	cout<<this->Name<<endl;
	cout<<"Account Balance :";
	cout<<this->Balance<<endl;
}













