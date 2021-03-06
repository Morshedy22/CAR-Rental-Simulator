#ifndef VEHICLE_H_INCLUDED
#define VEHICLE_H_INCLUDED

class CVehicle
{
private:

    int n_cars;
    int car_number;
    char car_type[10]; 
    char car_model[10];
    float car_price;
    bool rented;
    int Rented_time;
    char Rented_name[20];


public:

    // setter
    void set_car_number(int );
    void set_car_Id(int );
    void set_car_model(char *);
    void set_car_type(char *);
    void set_car_price(float );
    void set_rented(bool );
    void set_Rented_time(int );  
    void set_Rented_name(char *); 

    //getter 
    int get_car_number();
    char* get_car_model();
    char* get_car_type();  
    float get_car_price();
    bool get_rented();
    int get_Rented_time();
    char* get_Rented_name(); 



    // Empty Constructor
    CVehicle();

    // Funciton to enter data from user and store it
    void Add_Car_details();   


    // Funciton to prints all vehicle's data
    void Get_cars_info();

    // Function to Rent_car
    int Rent_car();
};

#endif 