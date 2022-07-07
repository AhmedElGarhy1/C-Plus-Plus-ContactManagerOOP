#ifndef USER_H
#define USER_H
#include<Email.h>
#include<Phone.h>
#include<Address.h>
#include<string>
#include<iostream>

using namespace std;

class User
{
    public:
        User();
        void edit(string, string, string, string, string, int);
        int Search(int);
        /// These Functions add Information about user => ( EX:Phone, Type, Description )
        void addPhone(int, string, string);
        void addEmail(string, string, string);
        void addAddress(string, string, string);

        /// These Functions Edit Information about user => ( index which will be edit, EX:Phone, type, description)
        void editPhone(int, int, string, string);
        void editEmail(int, string, string, string);
        void editAddress(int, string, string, string);

        /// These Functions Delete Information about user => ( index which will be edit)
        void delPhone(int);
        void delEmail(int);
        void delAddress(int);

        /// Show Information Functions
        void showPersontalInfo();
        void showEmails();
        void showAddresses();
        void showPhones();
        void showAll();

        //
        string getFName();

    private:
        Phone phone[11];
        Email email[11];
        Address address[11];
        string first_name, last_name, gender, city, added_date;
        int id, e_counter, a_counter, p_counter;
};

#endif // USER_H
