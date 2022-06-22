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
    cars_number = 0;
    car_type[10] = {};
    car_model[10] = {};
    car_price = 0;
    rented = false;
    rentled_name[20] = {};
    rentled_time = 0;
}


///
void CVehicle::Add_Car_details()
{
    /// Function to Enter car's data

        cout << "\nWelcome to the Car Rental Service. Please fill the required information below." << endl;
        cout<<"##################################################################"<<endl;
        cout<<"Please enter the car Id "<<endl;
        cin>>car_Id;
        cout<<"Please enter the car Type "<<endl;
        cin>>car_type;
        cout<<"Please enter the car Model "<<endl;
        cin>>car_model;
        cout<<"Please enter the car price "<<endl;
        cin>>car_price;
        cout<<"##################################################################"<<endl;
}

void CVehicle::Get_cars_info()
{
    // Functino to print Cars information
    
    cout<<"\n"<<car_Id<<"\t\t"<<car_type<<"\t\t"<<car_model<<"\t\t"<<car_price<<"\t\t";
    printf("%s",rented?"Ture":"False");
    if(rented)
        cout<<"\t\t"<<rentled_name<<"\t\t"<<rentled_time;   
}




void CVehicle::Rent_car()
{
    // Fucntion to rent car
    cout << "1 =BMW ";
    cout << "2 =Mercedes ";
    cout << "3 =Honda ";
    cout << "4 =Toyota ";
    cout << "5 =Fiat ";
   
    int x;
    cout << "Choose Your Car : " << endl;
    cin >> x ;
    switch(x)
    {
        case 1:
            cout << "You Choose to rent BMW";

        case 2:
            cout << "You Choose to rent Mercedes";

        case 3:
            cout << "You Choose to rent Honda";

        case 4:
            cout << "You Choose to rent Toyota";

        case 5:
            cout << "You Choose to rent Fiat";
     
    }
}
