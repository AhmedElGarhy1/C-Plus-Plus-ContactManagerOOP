#ifndef EMAIL_H
#define EMAIL_H

#include<string>

using namespace std;

class Email {
    public:
        Email();
        Email(string, string, string);
        void setEmail(string);
        void setEmailType(string);
        void setEmailDescription(string);
        string getEmail();
        string getEmailType();
        string getEmailDescription();
    private:
        string email, email_type, email_description;
};

#endif // EMAIL_H
