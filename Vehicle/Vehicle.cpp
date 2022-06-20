#include <bits/stdc++.h>
#include "Vehicle.h"
using namespace std;


//Setter
void CVehicle::set_cars_number(int number)
{
    ///funciton to set car number
    cars_number = number;
}
void CVehicle::set_car_Id(int id)
{
    ///funciton to set car Id
    car_Id = id;
}
void CVehicle::set_car_type(char *model)
{
    ///funciton to set car model
    strcpy_s(car_model, model);
}
void CVehicle::set_car_model(char *type)
{
    ///funciton to set car type
    strcpy_s(car_type, type);
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
void CVehicle::set_rentled_time(int time)
{
    //Funciton set rented time in days
    rentled_time = time;
}
void CVehicle::set_rentled_name(char *name)
{
    //Function to set rentled name
    strcpy_s(rentled_name, name);
}

// getter
int CVehicle::get_cars_number()
{
    /// Function to return car number
    return cars_number;
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
int CVehicle::get_return_time()
{
    /// Function to return retled time
    return rentled_time;
}
char* CVehicle::get_rentled_name()
{
    /// Function to return retled name
    return rentled_name;
}

// Empty Constructor
CVehicle::CVehicle()
{
    // to Init all variable with null and zeros
    car_type[10] = {};
    car_model[10] = {};
    car_price = 0;
    rented = false;
}


///
void CVehicle::Add_Car_details()
{
    /// Function to Enter car's data
    for (int i = 0; i < cars_number; i++)
    {
        cout << "Welcome to the Car Rental Service. Please fill the required information below." << endl;
        cout<<"Please enter the car Id "<<endl;
        cin>>car_Id;
        cout<<"Please enter the car Type"<<endl;
        cin>>car_type;
        cout<<"Please enter the car Model"<<endl;
        cin>>car_model;
        cout<<"Please enter the car price"<<endl;
        cin>>car_price;
    }
}



void CVehicle::Get_cars_info()
{
    // Functino to print Cars information
    for(int i = 0; i < cars_number; i++)
    {
        cout<<"Congratulations on your new rent. Here are your car details."<<endl;
        cout<<"Car ID->"<<car_Id<<endl;
        cout<<"Car Type->"<<car_Id<<endl;
        cout<<"Car Model->"<<car_Id<<endl;
        cout<<"Car Price->"<<car_Id<<endl;
        cout<<"Rented->"<<car_Id<<endl;
        if (Rented)
        {
            cout<<"Rentled name->"<<car_Id<<endl;
            cout<<"Rentled time->"<<car_Id<<endl;
        }
    }
}


void CVehicle::Rent_car()
{
    // Fucntion to rent car

}
