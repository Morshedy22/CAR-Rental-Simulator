#include <bits/stdc++.h>
#include "Vehicle.h"
using namespace std;


//Setter
void CVehicle::set_car_number(int N)
{
    ///funciton to set car Id
    car_number = N;
}
void CVehicle::set_car_type(char *type)
{
    ///funciton to set car type
    strcpy_s(car_type, type);
}
void CVehicle::set_car_model(char *model)
{
    ///funciton to set car model
    strcpy_s(car_model, model);
}
void CVehicle::set_car_price(float price)
{
    ///funciton to set car price
    car_price = price;
}
void CVehicle::set_rented(bool x)
{
    //Function car is rented
    rented = x;
}
void CVehicle::set_Rented_time(int time)
{
    //Funciton set rented time in days
    Rented_time = time;
}
void CVehicle::set_Rented_name(char *name)
{
    //Function to set Rented name
    strcpy_s(Rented_name, name);
}

// getter
int CVehicle::get_car_number()
{
    /// Function to return car number
    return car_number;
    
}
char* CVehicle::get_car_model()
{
    /// Function to print car model
    return car_model;
}
char* CVehicle::get_car_type()
{
    /// Function to return car type
    return car_type;
}
float CVehicle::get_car_price()
{
    /// Function to return car price
    return car_price;
}
bool CVehicle::get_rented()
{
    /// Function to return rented true or false
    return rented;
}
int CVehicle::get_Rented_time()
{
    /// Function to return retled time
    return Rented_time;
}
char* CVehicle::get_Rented_name()
{
    /// Function to return retled name
    return Rented_name;
}

// Empty Constructor
CVehicle::CVehicle()
{
    // to Init all variable with null and zeros
    
    car_type[10] = {};
    car_model[10] = {};
    car_price = 0;
    rented = false;
    Rented_name[20] = {};
    Rented_time = 0;
}


void CVehicle::Add_Car_details()
{
    /// Function to Enter car's data
    cout<<"\n###############################################################################################################"<<endl;
    cout << "\n\t\tWelcome to the Vehicle Rental Service. Please fill the required information below." << endl;
    cout<<"\n Add Vehicle Number: "<<endl;
    cin>>car_number;
    cout<<" Add Vehicle Type: "<<endl;
    cin>>car_type;
    cout<<" Add Vehicle Model: "<<endl;
    cin>>car_model;
    cout<<" Add Vehicle price: "<<endl;
    cin>>car_price;
    cout<<" '1' if Vehicle is rented and if not '0' : "<<endl;
    cin>>rented;
    if(rented)
    {
        cout<<" Rented time: "<<endl;
        cin>>Rented_time;
        cout<< " Rented Name: "<<endl;
        cin>>Rented_name;
        
    }
}

void CVehicle::Get_cars_info()
{
    // Function to print Cars information
    
    cout<<car_number<<"\t\t"<<car_type<<"\t\t"<<car_model<<"\t\t"<<car_price<<"\t\t";
    printf("%s",rented?"YES\t":"NO\t");
    if(rented)
        cout<<"\t"<<Rented_name<<"\t\t"<<Rented_time;   
}




int CVehicle::Rent_car()
{
    
    rented = true;
    return Rented_time;
}


