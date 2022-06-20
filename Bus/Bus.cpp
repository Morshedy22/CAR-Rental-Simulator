#include <bits/stdc++.h>
#include "Bus.h"
using namespace std;


//Setter
void CBus::set_number_passentgers_of_bus(int n)
{
    number_passentgers_of_bus = n;
}
void CBus::set_name_of_driver(char* name)
{
    strcpy_s(name_of_driver, name);
}

//Getter
int CBus::get_number_passentgers_of_bus()
{
    return number_passentgers_of_bus;
}
char* CBus::get_name_of_driver()
{
    return name_of_driver;
}