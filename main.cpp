#include<iostream>
#include<Contact.h>

using namespace std;

int main()
{
    //Welcome Text
    int user_number, input, id, phone;
    string fn, ln, g, c, ad, type, description;
    cout<<"\t\t\t\t\t       Made By\n"
        <<"\t\t\t\t\tAhmed Mohamed ElGarhy\n\n"
        <<"\t\t\t\t\t   Contact Manager\n";
    cout<<"Enter Today's Date: ";
    cin>>ad;
    cout<<"Enter Number Of Users You Will Add: ";
    cin>>user_number;
     cout<<"\nHello There\n\n";
    Contact user(user_number);

    while (true) {
        cout<<"Press Number:\n"
        <<"1- Add User\n"
        <<"2- Enter User page By ID\n"
        <<"3- Show All Users Without Emails, ....\n"
        <<"4- Show All Users Informations , Emails, Phones and Addresses\n"
        <<"5- Close Program\n";
        cout<<"\nEnter Number: ";
        cin>>input;
        if(input == 5) break;
        switch(input) {
            // case one add user
        case 1:
            cout<<" ID: ";
            cin>>id;
            cout<<" First Name: ";
            cin>>fn;
            cout<<" last Name: ";
            cin>>ln;
            cout<<" Gender: ";
            cin>>g;
            cout<<" City: ";
            cin>>c;
            cout<<" Added Date: "<<ad<<endl;
            user.addUser(fn, ln, c, g, ad, id);
            break;
            // case 2 edit user
        case 2:
                cout<<" Enter ID: ";
                cin>>id;
                input = user.searchUser(id);
                if(input == 1) break;
                cout<<" Pres Number For\n"
                    <<"  1- personal info like name\n"
                    <<"  2- Phone\n"
                    <<"  3- Mail\n"
                    <<"  4- Address\n"
                    <<"  5- Show user Info\n"
                    <<"  6- Quite\n";
                cin>>input;
                // Quite Condition
                if(input == 6)break;
                switch (input) {
                case 1:
                    cout<<" ID: ";
                    cin>>id;
                    cout<<" First Name: ";
                    cin>>fn;
                    cout<<" last Name: ";
                    cin>>ln;
                    cout<<" Gender: ";
                    cin>>g;
                    cout<<" City: ";
                    cin>>c;
                    cout<<" Added Date: "<<ad<<endl;
                    user.addUser(fn, ln, c, g, ad, id);
                    break;
                    // -------------------------- Phone -------------------------
                case 2:
                    cout<<"  Press Number To:\n"
                        <<"   1- Add Phone\n"
                        <<"   2- Edit Phone\n"
                        <<"   3- Delete Phone\n"
                        <<"   4- Quite\n";
                        cin>>input;
                        if(input == 4) break;
                    switch (input) {
                    case 1:
                        cout<<"Enter Phone Number: ";
                        cin>>phone;
                        cout<<"Enter Phone Type: ";
                        cin>>type;
                        cout<<"Enter Phone Description: ";
                        cin>>description;
                        user.addUserPhone(phone, type, description);
                        break;
                    case 2:
                        cout<<"Enter The Index Of Phone Information You Want To Change: \n"
                            <<"iF You Don't Know Press Zero => 0 To Show All Of Your Information: ";
                        cin>>input;
                        if(input == 0) {
                            user.showUserInfo();
                            cout<<"Enter The Index Of Phone Information You Want To Change: ";
                            cin>>input;
                        }
                        cout<<"Enter Phone Number: ";
                        cin>>phone;
                        cout<<"Enter Phone Type: ";
                        cin>>type;
                        cout<<"Enter Phone Description: ";
                        cin>>description;
                        user.editUserPhone(input, phone, type, description);
                        break;
                    case 3:
                        cout<<"Enter The Index Of Phone Information You Want To Delete: \n"
                            <<"iF You Don't Know Press Zero => 0 To Show All Of Your Information: ";
                        cin>>input;
                        if(input == 0) {
                            user.showUserInfo();
                            cout<<"Enter The Index Of Phone Information You Want To Delete: ";
                            cin>>input;
                        }
                        user.delUserPhone(input);
                        break;
                    default:
                        cout<<"Invalid Number\n";
                }
                break;
                // ------------x--------------- Phone ------------x-------------
                // ---------------------------- Email Case 3 ----------------------------
                case 3:
                    cout<<"  Press Number To:\n"
                        <<"   1- Add Email\n"
                        <<"   2- Edit Email\n"
                        <<"   3- Delete Email\n"
                        <<"   4- Quite\n";
                        cin>>input;
                        if(input == 4) break;
                    switch (input) {
                    case 1:
                        cout<<"Enter Email Number: ";
                        cin>>fn;
                        cout<<"Enter Email Type: ";
                        cin>>type;
                        cout<<"Enter Email Description: ";
                        cin>>description;
                        user.addUserEmail(fn, type, description);
                        break;
                    case 2:
                        cout<<"Enter The Index Of Email Information You Want To Change: \n"
                            <<"iF You Don't Know Press Zero => 0 To Show All Of Your Information: ";
                        cin>>input;
                        if(input == 0) {
                            user.showUserInfo();
                            cout<<"Enter The Index Of Email Information You Want To Change: ";
                            cin>>input;
                        }
                        cout<<"Enter Email: ";
                        cin>>fn;
                        cout<<"Enter Email Type: ";
                        cin>>type;
                        cout<<"Enter Email Description: ";
                        cin>>description;
                        user.editUserEmail(input, fn, type, description);
                        break;
                    case 3:
                        cout<<"Enter The Index Of Email Information You Want To Delete: \n"
                            <<"iF You Don't Know Press Zero => 0 To Show All Of Your Information: ";
                        cin>>input;
                        if(input == 0) {
                            user.showUserInfo();
                            cout<<"Enter The Index Of Email Information You Want To Delete: ";
                            cin>>input;
                        }
                        user.delUserEmail(input);
                        break;
                    default:
                        cout<<"Invalid Number\n";
                }
                break;
                // ----------x----------- Email ---------------x--------------
                //----------------------- Address --------------------------
                 case 4:
                    cout<<"  Press Number To:\n"
                        <<"   1- Add Address\n"
                        <<"   2- Edit Address\n"
                        <<"   3- Delete Address\n"
                        <<"   4- Quite\n";
                        cin>>input;
                        if(input == 4) break;
                    switch (input) {
                    case 1:
                        cout<<"Enter Address Number: ";
                        cin>>fn;
                        cout<<"Enter Address Type: ";
                        cin>>type;
                        cout<<"Enter Address Description: ";
                        cin>>description;
                        user.addUserAddress(fn, type, description);
                        break;
                    case 2:
                        cout<<"Enter The Index Of Address Information You Want To Change: \n"
                            <<"iF You Don't Know Press Zero => 0 To Show All Of Your Information: ";
                        cin>>input;
                        if(input == 0) {
                            user.showUserInfo();
                            cout<<"Enter The Index Of Address Information You Want To Change: ";
                            cin>>input;
                        }
                        cout<<"Enter Address: ";
                        cin>>fn;
                        cout<<"Enter Address Type: ";
                        cin>>type;
                        cout<<"Enter Address Description: ";
                        cin>>description;
                        user.editUserAddress(input, fn, type, description);
                        break;
                    case 3:
                        cout<<"Enter The Index Of Address Information You Want To Delete: \n"
                            <<"iF You Don't Know Press Zero => 0 To Show All Of Your Information: ";
                        cin>>input;
                        if(input == 0) {
                            user.showUserInfo();
                            cout<<"Enter The Index Of Address Information You Want To Delete: ";
                            cin>>input;
                        }
                        user.delUserEmail(input);
                        break;
                    default:
                        cout<<"Invalid Number\n";
                }
                break;
                //-----------x------------------ Address -------------x----------------
                case 5:
                    user.showUserInfo();
                    break;
                default:
                        cout<<"Invalid Number\n";

            }
                break;
                // Case 3 Show All Users Without Emails, ....
            case 3:
                user.showUsers();
                break;
            case 4:
                user.showAllUsers();
                break;
            default:
                cout<<"Invalid Number \n";

        //end of Main Switch
        }
        cout<<"\n---------------------------------------------- End Proccess ----------------------------------------------- \n\n";
    //end of While True
    }
    return 0;
}
