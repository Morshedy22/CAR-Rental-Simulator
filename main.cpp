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
    //File For Read all Input
    freopen("Input.txt", "r", stdin);
    
    // create an array of Cvehicle objects
    CVehicle vec[100];

    // Cars we have in system
    int N_Cars;
    cout<<"Enter number of Cars ";
    cin>>N_Cars;
    
    // for loop to Add All Cars information we have
    for (int i =0; i<N_Cars; i++)
    {
        vec[i].Add_Car_details();
    }

    cout<<"\n\t\t\t\t\t***ALL CARS INFORMATIONS***\n"<<endl;
    cout<<"Car Number\tCar Type\tCar Model\tCar Price\tRented\t\tRented name\tRented time";

    // for loop to print All cars information we have
    for(int i=0; i<N_Cars; i++)
    {
        cout<<"\n";
        vec[i].Get_cars_info();
    }


    //--------------------------------------------------------------------------------------------------

    //  Create an array of CCustomer objects
    CCustomer cus[100];

    // Number of Customer in system
    int N_Cus;
    cin>>N_Cus;
    
    // for loop to Add All customers information
    for (int i=0; i<N_Cus; i++)
    {
        cus[i].Add_customer_info();
    }

    // de msh m7tagnha awy msh lazm ntb3 al Customer information
    for (int i=0; i<N_Cus; i++)
    {
        // print Customers information we have in system
        cus[i].Get_Customer_info();
    }
    //--------------------------------------------------------------------------------------------------





    //--------------------------------------------------------------------------------------------------
    // flag to check Username and password is Ture
    int flag=0;
    // variable for username and pass
    char username[20], pass[20];

    // for loop to login and rent car (loop btlf 3la 3dd al customer al 3ndna)
    for(int i=0; i<N_Cus; i++)
    {
    
        cout<<"\n\n\n***********************************************************"<<endl;
        cout<<"                             LOGIN                               "<<endl;
        cout<<"                UserName:                                        "<<endl;
        cin>>username;
        cout<<"                Pass    :                                        "<<endl;
        cin>>pass;
        cout<<"\n***********************************************************"<<endl;

        // for loop to check Username and pass we have in system
        for(int j=0; j<N_Cus; j++)
        {
            // Astkhdmna strcmp to compare flw username == cusname f htdena 0 wnfs alklam f al pass 
            if((strcmp(cus[j].get_Cus_name(), username))==0)
                if((strcmp(cus[j].get_Email_Password(), pass))==0)
                    // lw tl3 al username w al pass s7 hntkhly al flag = 1 alhwa true y3ny
                    flag = 1;
        }    
            
        // If flag is True that mean username and pass is true    
        if(flag)
        {
            cout<<"\n\n\t\tWelocme "<<username<<endl;

            // variable rkm al3rbya la3ayz y3mlha rent
            int N_rent;
            cout<<"Choose car you want to rent (Car Number): "<<endl;
            cin>>N_rent;     

            // check if car is rented 
            if(vec[N_rent-1].get_rented())
            {
                // if car is already rented print this message
                cout<<"\n\n\t*Sorry This Car Is Rented*"<<endl;
                cout<<"\t\t"<<vec[N_rent-1].get_Rented_time()<<" Days's Left";
            }
            else  // car is't rented 
            {
                // days user want to rent this car
                int n_days;
                cout<<"\nHow many days you want to rent "<<vec[N_rent-1].get_car_type()<<" Car : ";
                cin>>n_days;
                // print price of car
                cout<<"\n\nPrice for "<<n_days<<" Day's is $"<<vec[N_rent-1].get_car_price()*n_days;
                // nt2kd al user mwaf2 3la als3r
                char x;
                cout<<"\n\nEnter (y/n) y for continue , n for Break: ";
                cin>>x;

                if ( x == 'n') // lw hwa msh mwaf2
                    cout<<"\n\n\t\tThanks "<<username<<endl;
    
                else // lw hwa mwaf2
                {
                    // update car information
                    vec[N_rent-1].set_Rented_time(n_days);
                    vec[N_rent-1].set_Rented_name(username);
                    cout<<"\n\n\t"<<vec[N_rent-1].get_car_type()<<" Car is Rented Succssfully for "<<vec[N_rent-1].Rent_car()<<" Day's\n\n\n";
                }
                
            }
        }
        // flag is 0 "false" so username or password is wrong
        else
        {
            cout<<"\n\t****Invalid Username or Password****\n";
        }

    }

    // All car information b3d 3mlyet al rent
    cout<<"\t\t\t\t\t***ALL CARS INFORMATIONS***\n"<<endl;
    cout<<"Car Number\tCar Type\tCar Model\tCar Price\tRented\t\tRented name\tRented time"<<endl;
    for(int i=0; i<N_Cars; i++)
    {
        cout<<"\n";
        vec[i].Get_cars_info();
    }


    //--------------------------------------------------------------------------------------------------


    cout<<"\n\n#############################################################################################################################################"<<endl;
    
    // nfs al Comments bta3t al car bs msh 2adr aktb b2a mfesh w2t
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

        cout<<" Number of passngers: ";
        cin>>n_passengers;
        cout<<"\n Name of Driver: ";
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