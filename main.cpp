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
#include "Bus\Bus.cpp"
using namespace std;




 
int main()
{
    freopen("Input.txt", "r", stdin);
    CVehicle vec[100];  
    
    int n;
    cout<<"Enter number of Cars ";
    cin>>n;
    
    for (int i =0; i<n; i++)
    {
        vec[i].Add_Car_details();
    }
    cout<<"\n\t\t\t\t\t***ALL CARS INFORMATIONS***\n"<<endl;
    cout<<"Car Number\tCar Type\tCar Model\tCar Price\tRented\t\tRented name\tRented time";
    for(int i=0; i<n; i++)
    {
        cout<<"\n";
        vec[i].Get_cars_info();
    }

    char username[20], pass[20];

    //--------------------------------------------------------------------------------------------------
    CCustomer cus[100];
    int N_Cus;
    cin>>N_Cus;
    for (int i=0; i<N_Cus; i++)
    {
        cus[i].Add_customer_info();
    }

    for (int i=0; i<N_Cus; i++)
    {
        cus[i].Get_Customer_info();
    }



    



    //--------------------------------------------------------------------------------------------------
    int flag=0;
    for(int i=0; i<N_Cus; i++)
    {
    
        cout<<"\n\n\n***********************************************************"<<endl;
        cout<<"                             LOGIN                               "<<endl;
        cout<<"                UserName:                                        "<<endl;
        cin>>username;
        cout<<"                Pass    :                                        "<<endl;
        cin>>pass;
        cout<<"\n***********************************************************"<<endl;

        for(int j=0; j<N_Cus; j++)
        {
            if((strcmp(cus[j].get_Cus_name(), username))==0)
                if((strcmp(cus[j].get_Email_Password(), pass))==0)
                    flag = 1;
        }    
            
            
        if(flag)
        {
            cout<<"\n\n\t\tWelocme "<<username<<endl;
            
            int N_rent;
            cout<<"Choose car you want to rent (Car Number): "<<endl;
            cin>>N_rent;     

            if(vec[N_rent-1].get_rented())
            {
                cout<<"\n\n\t*Sorry This Car Is Rented*"<<endl;
                cout<<"\t\t"<<vec[N_rent-1].get_Rented_time()<<" Days's Left";
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
                    vec[N_rent-1].set_Rented_time(n_days);
                    vec[N_rent-1].set_Rented_name(username);
                    cout<<"\n\n\t"<<vec[N_rent-1].get_car_type()<<" Car is Rented Succssfully for "<<vec[N_rent-1].Rent_car()<<" Day's\n\n\n";
                }
                
            }
        }
        else
        {
            cout<<"\nInvalid Username or Password\n";
        }

    }

    cout<<"\t\t\t\t\t***ALL CARS INFORMATIONS***\n"<<endl;
    cout<<"Car Number\tCar Type\tCar Model\tCar Price\tRented\t\tRented name\tRented time"<<endl;
        for(int i=0; i<n; i++)
    {
        cout<<"\n";
        vec[i].Get_cars_info();
    }




    //--------------------------------------------------------------------------------------------------
    CBus bus[100];

    int n_bus;
    cout<<"\n\nEnter number of Bus: "<<endl;
    cin>>n_bus;
    int n_passengers;
    char n_dirver[20];
    for(int i=0; i<n_bus; i++)
    {
        cout<<"\n";
        
        bus[i].Add_Car_details();

        cout<<"Enter number of passngers: ";
        cin>>n_passengers;
        cout<<"\nName of Driver: ";
        cin>>n_dirver;
        bus[i].set_number_passentgers_of_bus(n_passengers);
        bus[i].set_name_of_driver(n_dirver);
    }

    cout<<"\n\n\t\t\t\t\t\t\t\t***ALL BUSES INFORMATIONS***\n"<<endl;
    cout<<"Number of passengers\t Name of driver\t\tBus Number\tBus Type\tBus Model\tBus Price\tRented\t\tRented name\tRented time";
        for(int i=0; i<n_bus; i++)
    {
        cout<<"\n";
        cout<<bus[i].get_number_passentgers_of_bus()<<"\t\t\t  ";
        cout<<bus[i].get_name_of_driver()<<"\t\t";
        bus[i].Get_cars_info();
    }   
    //-------------------------------------------------------------------------------------------------- 






}