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
    void set_Cus_ID(int ); 
    void set_Cus_name(char *); 
    void set_cus_Email(char *); 
    void set_Email_Password(char *); 

    //getter
    int get_Cus_ID(); 
    char* get_Cus_name(); 
    char* get_cus_Email(); 
    char* get_Email_Password(); 

    //Empty Constructor to intiallize all variable with zero and NULL
    CCustomer();  

    //Function that accepts values for the customer class members and store them.
    void Add_customer_info(); 

    //Function that prints the customer details.
    void Get_Customer_info(); 

};

#endif