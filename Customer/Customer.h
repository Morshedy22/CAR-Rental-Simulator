#ifndef CUSTOMER_H_INCLUDE
#define CUSTOMER_H_INCLUDE

class CCustomer
{
private:
    int  Cus_ID;
    char Cus_name[50];
    char cus_Email[10];
    char Email_Password[10];  //Ect...
public: 
    //setter
    void set_Cus_ID(int ); // sara
    void set_Cus_name(char *); // sara
    void set_cus_Email(char *); // Micheal
    void set_Email_Password(char *); // Micheal

    //getter
    int get_Cus_ID(); // sara
    char* get_Cus_name(); // sara
    char* get_cus_Email(); // Micheal
    char* get_Email_Password(); // Micheal

    //Empty Constructor to intiallize all variable with zero and NULL
    CCustomer(); // Micheal 

    //Function that accepts values for the customer class members and store them.
    void Add_customer_info(); // sara

    //Function that prints the customer details.
    void Get_Customer_info(); // sara



};

#endif