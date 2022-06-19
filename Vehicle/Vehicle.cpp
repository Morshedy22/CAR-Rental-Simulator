#include <bits/stdc++.h>
#include "Vehicle.h"
using namespace std;


//Setter
void CVehicle::set_cars_number(int number)
{
    ///funciton to set car number
    car_number = number;
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

/*////////////////////////
// Function car is rented
// Funciton set rented days
// Function rentled name
*/////////////////////////

// getter
int CVehicle::get_cars_number()
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


// Empty Constructor
CVehicle::CVehicle()
{
    // to Init all variable with null and zeros
    car_number = 0;
    car_type[10] = {};
    car_model[10] = {};
    car_price = 0;
    rented = false;
}


///
void CVehicle::Add_Car_details()
{
    /// Function to Enter car's data
    cin>>car_Id;
    cout<<"Enter car Id "<<endl;
    cin>>car_type;
    cout<<"Enter car Type"<<endl;
    cin>>car_model;
    cout<<"Enter car Model"<<endl;
    cin>>car_price;
    cout<<"Enter car price"<<endl;
}


///
//void CVehicle::Get_cars_info()
///


///
// Fucntion to rent car
///






