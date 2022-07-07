
#include "Email.h"

Email::Email() : email("Undefind"), email_type("Undefind"), email_description("Undefind"){}
Email::Email(string e, string et, string ed) : email(e), email_type(et), email_description(ed) {}

void Email::setEmail(string e) {
    email = e;
}
void Email::setEmailType(string e) {
    email_type = e;
}
void Email::setEmailDescription(string e) {
    email_description = e;
}

string Email::getEmail() {
    return email;
}
string Email::getEmailType() {
    return email_type;
}
string Email::getEmailDescription() {
    return email_description;
}
