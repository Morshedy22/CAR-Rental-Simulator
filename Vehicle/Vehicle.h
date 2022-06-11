#ifndef VEHICLE_H_INCLUDE
#define VEHICLE_H_INCLUDE

/* 
line 16, 17, 28, 29, 38,39, 52
3mlhom comment 3shan lsa msh 3arf al prototype katbo s7 wla ghlt lsa msh 3arf ht3aml m3 al function azay
*/

class CVehicle
{
private:
    int char_number;
    char car_model[10];
    char car_type[10];
    float car_price; // m3mola f al assighmnet 3la array car_price[5] msh 3arf leeh bs 2oult akhleha float bs dlw2ty
    bool rented;
    // char return_time[10];
    // char rentled_name[50];

public:

    // setter
    void set_char_number(int );
    void set_car_model(char *);
    void set_car_type(char *);
    void set_car_price(float );
    void set_rented(bool );

    // void set_return_time(char *);  // msh 3arf hnt3amml m3ahom azay f 3mlhom comment 
    // void set_rentled_name(char *); // msh 3arf hnt3amml m3ahom azay f 3mlhom comment 

    //getter 
    int get_char_number();
    char *get_car_model(char *); // momken nkhleha bdl mtrg3o 3la assas pointer w nt3b nfsna nkhly al function de ttb3 car model 3la toul wykon void bdl char*
    char *get_car_type(char *);  // momken nkhleha bdl mtrg3o 3la assas pointer w nt3b nfsna nkhly al function de ttb3 car type 3la toul wykon void bdl char* 
    float get_car_price(float );
    bool get_rented(bool );

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