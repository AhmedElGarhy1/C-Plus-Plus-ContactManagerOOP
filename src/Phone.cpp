#include "Phone.h"


Phone::Phone() : phone(-1), phone_type("Undefind"), phone_description("Undefind") {}
Phone::Phone(int number, string type, string description) : phone(number), phone_type(type), phone_description(description) {}

void Phone::setPhone(int n) {
    phone = n;
}
void Phone::setPhoneType(string s) {
    phone_type = s;
}
void Phone::setPhoneDescription(string s) {
    phone_description = s;
}

int Phone::getPhone() {
    return phone;
}
string Phone::getPhoneType() {
    return phone_type;
}
string Phone::getPhoneDescription() {
    return phone_description;
}
