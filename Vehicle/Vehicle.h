#ifndef VEHICLE_H_INCLUDED
#define VEHICLE_H_INCLUDED

class CVehicle
{
private:
    static int car_number;
    int car_Id;
    char car_type[10]; 
    char car_model[10];
    float car_price; // m3mola f al assighmnet 3la array car_price[5] msh 3arf leeh bs 2oult akhleha float bs dlw2ty
    bool rented;
    // char return_time[10];
    // char rentled_name[50];


public:

    // setter
    void set_cars_number(int );
    void set_car_Id(int );
    void set_car_model(char *);
    void set_car_type(char *);
    void set_car_price(float );

    //void set_rented(bool );
    //void set_return_time(char *);  // msh 3arf hnt3amml m3ahom azay f 3mlhom comment 
    //void set_rentled_name(char *); // msh 3arf hnt3amml m3ahom azay f 3mlhom comment 

    //getter 
    int get_cars_number();
    char* get_car_model(); // momken nkhleha bdl mtrg3o 3la assas pointer w nt3b nfsna nkhly al function de ttb3 car model 3la toul wykon void bdl char*
    char* get_car_type();  // momken nkhleha bdl mtrg3o 3la assas pointer w nt3b nfsna nkhly al function de ttb3 car type 3la toul wykon void bdl char* 
    float get_car_price();
    bool get_rented();

    // void get_return_time(char *);
    // void get_rentled_name(char *); 

    // Empty Constructor
    CVehicle();

    // Funciton to enter data from user and store it
    void Add_Car_details();   

    // Funciton to prints all vehicle's data
    void Get_cars_info();


    // Function to Rent_car
    // void Rent_car();

};

#endif