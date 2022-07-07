#include "Contact.h"

Contact::Contact(int n) : counter(0){
    user = new User[n+1];
}

Contact::~Contact()
{
    delete[] user;
}




int Contact::searchUser(int n) {
    index = -1;
    for(int i = 1; i<= counter; i++) {
        if(user[i].Search(n) == 1) {
            index = i;
            cout<<"hello "<<user[index].getFName()<<endl;
            break;
        }
    }
    if(index == -1) {
            cout<<"Invalid ID Please check the ID first\n";
        return 1;
    } else return 0;
}

// ----------------- Add -------------
void Contact::addUser(string fn, string ln, string c, string g, string ad, int id) {
    counter++;
    user[counter].edit(fn, ln, c, g, ad, id);
    cout<<"Successfully Added\n";
}
void Contact::addUserEmail( string a, string type, string description) {
    user[index].addEmail(a, type, description);
}
void Contact::addUserPhone(int a, string type, string description) {
    user[index].addPhone(a, type, description);
}
void Contact::addUserAddress(string a, string type, string description) {
    user[index].addAddress(a, type, description);
}

// ---------------Edit --------------------
void Contact::editUser(int n, string fn, string ln, string c, string g, string ad, int id) {
    user[n].edit(fn, ln, c, g, ad, id);
    cout<<"Successfully Edited\n";
}
void Contact::editUserEmail(int n, string a, string type, string description) {
    user[index].editEmail(n, a, type, description);
}
void Contact::editUserPhone(int n, int a, string type, string description) {
    user[index].editPhone(n, a, type, description);
}
void Contact::editUserAddress(int n, string a, string type, string description) {
    user[index].editAddress(n, a, type, description);
}

//---------------- Delete --------------
void Contact::delUser(int n) {
    for(int i = n+1; i<=counter; i++) {
        user[i-1] = user[i];
    }
    counter--;
    cout<<"Successfully Deleted\n";
}
void Contact::delUserEmail(int n) {
    user[index].delEmail(n);
}
void Contact::delUserPhone(int n) {
    user[index].delPhone(n);
}
void Contact::delUserAddress(int n) {
    user[index].delAddress(n);
}

// Count Users

int Contact::countUser() {
    return counter;
}

// show Functions

void Contact::showUserInfo() {
    user[index].showAll();
    cout<<endl;
}
void Contact::showUsers() {
    cout<<"\t\tID\t\tFirstName\t\tLastName\t\tGender\t\tCity\t\tAddedDate\n";
    for(int i = 1; i<= counter; i++) {
        cout<<i<<"- \n";
        user[i].showPersontalInfo();
        cout<<endl;
    }
    cout<<"----------------\t------------------------\t-----------------------\t----------------------";
}
void Contact::showAllUsers() {
    for(int i = 1; i<=counter; i++) {
        user[i].showAll();
        cout<<endl<<"----------------------------------------------------------------------------------------------------------\n";
    }
}

















