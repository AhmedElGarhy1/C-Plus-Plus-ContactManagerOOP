#ifndef CONTACT_H
#define CONTACT_H
#include<iostream>
#include<User.h>
#include<string>

using namespace std;

class Contact
{
    public:
        Contact(int);
        ~Contact();

        int searchUser(int);

        // add User's iInfo
        void addUser(string, string, string, string, string, int);
        void addUserEmail(string, string, string);
        void addUserPhone(int, string, string);
        void addUserAddress(string, string, string);

        // Edit User's iInfo
        void editUser(int, string, string, string, string, string, int);
        void editUserEmail(int, string, string, string);
        void editUserPhone(int, int, string, string);
        void editUserAddress(int, string, string, string);

        // Delete User's Info
        void delUser(int);
        void delUserEmail(int);
        void delUserPhone(int);
        void delUserAddress(int);

        // Count Users
        int countUser();

        // show all
        void showUserInfo();
        void showUsers();
        void showAllUsers();
    private:
        User* user;
        int counter, index;
};

#endif // CONTACT_H
