#include "User.h"

User::User() :
    first_name("Undefind"), last_name("Undefind"), city("Undefind"), gender("Undefind"),
    added_date("Undefind"), id(-1), e_counter(0), a_counter(0), p_counter(0){}

void User::edit(string fn, string ln, string c, string g, string ad, int i) {
    first_name = fn;
    last_name = ln;
    city = c;
    gender = g;
    added_date = ad;
    id = i;
}



// Search Function it returns 1 if entered ID is the same of this User

int User::Search(int n) {
    if(n == id) return 1;
    else return 0;
}


//-------------------- add ----------------------

void User::addPhone(int n, string type, string description) {
    p_counter++;
    phone[p_counter].setPhone(n);
    phone[p_counter].setPhoneType(type);
    phone[p_counter].setPhoneDescription(description);
    cout<<"You have added One More Phone information\nYou Have "<<p_counter<<" Phone Information\n";
}
void User::addEmail(string n, string type, string description) {
     e_counter++;
    email[e_counter].setEmail(n);
    email[e_counter].setEmailType(type);
    email[e_counter].setEmailDescription(description);
    cout<<"You have added One More mail information\nYou Have "<<e_counter<<" mail Information\n";
}
void User::addAddress(string n, string type, string description) {
    a_counter++;
    address[a_counter].setAddress(n);
    address[a_counter].setAddressType(type);
    address[a_counter].setAddressDescription(description);
    cout<<"You have added One More Address information\nYou Have "<<a_counter<<" address Information\n";
}

// -------------------- Edit ------------------

void User::editPhone(int index, int n, string type, string description) {
    phone[index].setPhone(n);
    phone[index].setPhoneType(type);
    phone[index].setPhoneDescription(description);
    cout<<"Done!!\n";
}
void User::editEmail(int index, string n, string type, string description) {
    email[index].setEmail(n);
    email[index].setEmailType(type);
    email[index].setEmailDescription(description);
    cout<<"Done!!\n";
}
void User::editAddress(int index, string n, string type, string description) {
    address[index].setAddress(n);
    address[index].setAddressType(type);
    address[index].setAddressDescription(description);
    cout<<"Done!!\n";
}

// ---------------------- delete ----------------

void User::delPhone(int n) {
    for(int i = n+1; i<= p_counter; i++) {
        phone[i-1] = phone[i];
    }
    p_counter--;
}
void User::delEmail(int n) {
    for(int i = n+1; i<= e_counter; i++) {
        email[i-1] = email[i];
    }
    e_counter--;
}
void User::delAddress(int n) {
    for(int i = n+1; i<= a_counter; i++) {
        address[i-1] = address[i];
    }
    a_counter--;
}

//----------------- show info -----------------

void User::showPersontalInfo() {
    cout<<"\t"<<id<<"\t\t"<<first_name<<"\t\t"<<last_name<<"\t\t"
        <<gender<<"\t\t"<<city<<"\t\t"<<added_date<<endl
        <<"------------------------------------\n";
}
void User::showEmails () {
    cout<<"\tMail\t\t\tType\t\t\tDescription\n";
    for(int i = 1; i<= e_counter; i++) {
        cout<<"    "<<i<<"- "
        <<email[i].getEmail()<<"\t\t\t"
        <<email[i].getEmailType()<<"\t\t\t"
        <<email[i].getEmailDescription()<<endl;
    }
    cout<<"    ----------\t--------------\t------------\n";
}
void User::showPhones () {
    cout<<"\tPhone\t\t\tType\t\t\tDescription\n";
    for(int i = 1; i<= p_counter; i++) {
        cout<<"    "<<i<<"- "
        <<phone[i].getPhone()<<"\t\t\t"
        <<phone[i].getPhoneType()<<"\t\t\t"
        <<phone[i].getPhoneDescription()<<endl;
    }
    cout<<"    -----------\t-------------\t------------\n";
}
void User::showAddresses () {
    cout<<"\tAddress\t\t\tType\t\t\tDescription\n";
    for(int i = 1; i<= a_counter; i++) {
        cout<<"    "<<i<<"- "
        <<address[i].getAddress()<<"\t\t\t"
        <<address[i].getAddressType()<<"\t\t\t"
        <<address[i].getAddressDescription()<<endl;
    }
    cout<<"    -----------\t-------------\t------------\n";
}
void User::showAll() {
    cout<<" Personal Informations\n";
    showPersontalInfo();
    cout<<" Email Information\n";
    showEmails();
    cout<<" Phone Information\n";
    showPhones();
    cout<<" Address Information\n";
    showAddresses();
}

string User::getFName() {
    return first_name;
}
