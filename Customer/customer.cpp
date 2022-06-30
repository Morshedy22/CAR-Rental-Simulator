#include <bits/stdc++.h>
#include "Customer.h"
using namespace std;


/// Setter 
void CCustomer::set_Cus_ID(int id)
{
    Cus_ID = id;
}
void CCustomer::set_Cus_name(char* name)
{
    strcpy_s(Cus_name, name);
}
void CCustomer::set_cus_Email(char* email)
{
    strcpy_s(cus_Email, email);
}
void CCustomer::set_Email_Password(char* pass)
{
    strcpy_s(Email_Password, pass);
}

///getter
int CCustomer::get_Cus_ID()
{
    return Cus_ID;
}
char* CCustomer::get_Cus_name()
{
    return Cus_name;
}
char* CCustomer::get_cus_Email()
{
    return cus_Email;
}
char* CCustomer::get_Email_Password()
{
    return Email_Password;
}

///Empty Constuctor
CCustomer::CCustomer()
{
    Cus_ID = 0;
    Cus_name[50] = {};
    cus_Email[10] = {};
    Email_Password[10] = {};
}

// Function to Add Customer information and store it
void CCustomer::Add_customer_info()
{
    cout<<"\n\n**************************************************************";
    cout<<"\nEnter your ID: "<<endl;
    cin>>Cus_ID;
    cout<<"Enter your Name: "<<endl;
    cin>>Cus_name;
    cout<<"Enter your Email: "<<endl;
    cin>>cus_Email;
    cout<<"Enter your Pass: "<<endl;
    cin>>Email_Password;
}


void CCustomer::Get_Customer_info()
{
  
    cout << "\n\t\t                       Car Rental - Customer              "<<endl;
    cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
    cout << "\t\t	| ID:"<<"-----------------|"<<Cus_ID<<" |"<<endl;
    cout << "\t\t	| Name :"<<"--------------------|"<<Cus_name<<" |"<<endl;
    cout << "\t\t	| Email. :"<<"----------------------|"<<cus_Email<<" |"<<endl;
    // cout << "\t\t	| Password :"<<"---------------|"<<Email_Password<<" |"<<endl;
    cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
}





