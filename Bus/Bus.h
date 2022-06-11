#ifndef BUS_H_INCLUDE
#define BUS_H_INCLUDE
#include "../Vehicle/Vehicle.h"

class CBus : public CVehicle
{
private:
    int number_passentgers_of_bus;
    char name_of_driver[20];

public:
    //setter
    void set_number_passentgers_of_bus(int );
    void set_name_of_driver(char *);

    //getter
    int get_number_passentgers_of_bus();
    char* get_name_of_driver();
};

#endif