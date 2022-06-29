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
    
    for (int i =0; i<n; i++)
    {
        vec[i].Add_Car_details();
    }
    cout<<"\t\t\t***ALL CARS INFORMATIONS***"<<endl;
    cout<<"Car Number\tCar Type\tCar Model\tCar Price\tRented\t\tRentled name\tRentled time";
    for(int i=0; i<n; i++)
    {
        vec[i].Get_cars_info();
    }

    char username[20], pass[20];
    
    cout<<"\n\n\n***********************************************************"<<endl;
    cout<<"                             LOGIN                               "<<endl;
    cout<<"                UserName:                                        "<<endl;
    cin>>username;
    cout<<"                Pass    :                                        "<<endl;
    cin>>pass;
    cout<<"\n***********************************************************"<<endl;

    cout<<"\n\n\t\tWelocme "<<username<<endl;
    
    int N_rent;
    cout<<"Choose car you want to rent (Car Number): "<<endl;
    cin>>N_rent;     

    if(vec[N_rent-1].get_rented())
    {
        cout<<"\n\n\t*Sorry This Car Is Rented*"<<endl;
        cout<<"\t\t"<<vec[N_rent-1].get_rentled_time()<<" Days's Left";
    }
    else
    {
        cout<<"\nHow many days you want to rent "<<vec[N_rent-1].get_car_type()<<" Car : ";
        int n_days;
        cin>>n_days;
        cout<<"\n\nPrice for "<<n_days<<" Day's is $"<<vec[N_rent-1].get_car_price()*n_days;
        char x;
        cout<<"\n\nEnter (y/n) y for continue , n for Break: ";
        cin>>x;
        if ( x == 'n')
            cout<<"\n\n\t\tThanks "<<username<<endl;
        else
        {
            vec[N_rent-1].set_rentled_time(n_days);
            vec[N_rent-1].set_rentled_name(username);
            cout<<"\n\n\t"<<vec[N_rent-1].get_car_type()<<" Car is Rented Succssfully for "<<vec[N_rent-1].Rent_car()<<" Day's\n\n\n";
        }
        
    }


    cout<<"\t\t\t***ALL CARS INFORMATIONS***"<<endl;
    cout<<"Car Number\tCar Type\tCar Model\tCar Price\tRented\t\tRentled name\tRentled time";
    for(int i=0; i<n; i++)
    {
        vec[i].Get_cars_info();
    }


}