#ifndef PHONE_H
#define PHONE_H

#include<string>

using namespace std;

class Phone
{
    public:
        Phone();
        Phone(int, string, string);
        void setPhone(int);
        void setPhoneType(string);
        void setPhoneDescription(string);
        int getPhone();
        string getPhoneType();
        string getPhoneDescription();
    private:
        int phone;
        string phone_type, phone_description;
};

#endif // PHONE_H
