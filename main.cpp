/***********************************************************************
 *                     Name                 ID                         *               
 *                  Omar Morshdy         211001749                     *
 *                  Sara Aboalyazeed     211001641                     *
 *                  Mohamed Hafez        211000565                     *
 *                  Rovan Ehab           211000559                     *
 *                  Michael Hany         211001760                     *
*/////////////////////////////////////////////////////////////////////// 

#include <bits/stdc++.h>
#include "Customer\Customer.cpp"
#include "Vehicle\Vehicle.cpp"
using namespace std;




 
int main()
{
    freopen("Input.txt", "r", stdin);
    CVehicle vec[100];  CCustomer cus[100];
    
    int n;
    cout<<"Enter number of Cars ";
    cin>>n;
    // vec->set_cars_number(n);
    for (int i =0; i<n; i++)
    {
        vec[i].Add_Car_details();
    }
    cout<<"\t\t\t***ALL CARS INFORMATIONS***"<<endl;
    cout<<"Car ID\t\tCar Type\tCar Model\tCar Price\tRented\tRentled name\tRentled time";
    for(int i=0; i<n; i++)
    {
        vec[i].Get_cars_info();
    }
      
}