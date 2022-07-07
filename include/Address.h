#ifndef ADDRESS_H
#define ADDRESS_H

#include<string>

using namespace std;

class Address
{
    public:
        Address();
        Address(string, string, string);
        void setAddress(string);
        void setAddressType(string);
        void setAddressDescription(string);
        string getAddress();
        string getAddressType();
        string getAddressDescription();
    private:
        string address, address_type, address_description;
};

#endif // ADDRESS_H
