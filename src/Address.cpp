#include "Address.h"

Address::Address() : address("Undefind"), address_type("Undefind"), address_description("Undefind") {}
Address::Address(string addres, string type, string description) : address(addres), address_type(type), address_description(description){}

void Address::setAddress(string a) {
    address = a;
}
void Address::setAddressType(string a) {
    address_type = a;
}
void Address::setAddressDescription(string a) {
    address_description = a;
}

string Address::getAddress() {
    return address;
}
string Address::getAddressType() {
    return address_type;
}
string Address::getAddressDescription() {
    return address_description;
}
