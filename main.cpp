#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <chrono>
#include <thread>
using namespace std;

void loading_time(int sec) // IT is a function for loading data on screen..
{
    cout << "Loading, please wait...\n";
    // thread_local :: sleep_for(chrono::seconds(sec));
    system("cls");
}
void Enter_to_exit() // This is a Function by which pressing ENTER it stops ....
{
    cout << endl;
    cout << setw(20) << " " << "Press ENTER to QUIT...";
    cin.get();
    exit(0);
}
class POS
{
    // Revenue :
    // payment processing
    // printing recipts on screen
};
class Owner
{
    string name[3];
    string password[3];
    string positon = "Manager";

public:
    string names, pass, details;
    Owner() // default constructor
    {
        int i = 0;
        while (i < 3)
        {
            name[i] = "Alber";
            password[i] = "123alber";
            i++;
            name[i] = "Nabeel";
            password[i] = "123nabeel";
            i++;
            name[i] = "Muneeb";
            password[i] = "123muneeb";
            i++;
        }
        // if (n == 1)
        // {
        //     cout << setw(14) <<"Hi Alber! Welcome To CAFE."<<endl;
        // }
        // else if (n == 2)
        // {
        //     cout << setw(14) << "Hi Nabeel! Welcome To your CAFE."<<endl;
        // }
        // else if (n == 3)
        // {
        //     cout << setw(14) << "Hi Muneeb! Welcome To your CAFE."<<endl;
        // }
        // else
        // {
        //     cout << "Invalid Owner ID";
        // }
    }
    void set_data()
    {
        cout << setw(20) << " " << "Enter your User name: ";
        getline(cin, names);
        cout << setw(20) << " " << "Enter your password: ";
        getline(cin, pass);
        cout << setw(20) << " " << "Enter Your Position: ";
        getline(cin, details);
    }
    int check_credentails()
    {
        while (true)
        {
            if (names == name[0] || (names == name[1]) || (names == name[2]))
            {
                if (pass == password[0] || (pass == password[1]) || (pass == password[2]))
                {
                    return true;
                    break;
                }
                else
                {
                    cout << "Incorrect password.";
                    return false;
                    exit(0);
                }
            }
            else
            {
                cout << "Incorrect username.";
                return false;
                exit(0);
            }
        }
    }
    void Welcoming_owner()
    {
        cout << endl;
        cout << setw(5) << " " << "Welcome Manager ." << endl;
    }
};

// bool check_Owner_credetails(string name, string email, string password)
// {
//     if ((this->email == email) && (this->password == password))
//     {
//         return true;
//     }
//     else
//     {
//         return false;
//     }
// }
class Cafe
{
    string cafeName;
    string address;

public:
    void openCafe()
    {
    }
    void closeCafe() {

    };
};
class Employee
{
    string name;
    int employee_id;
    string address;
    string phone;
    float Salary;

public:
    void calculateSalary() {}
};
class Inventory
{
    string itemName;
    int quantity;

public:
    void updateInventory() {}
};
class orderTaking
{
public:
};
class CustomerFeedback
{
public:
};
class Menu : public POS // Inheriting POS in Menu.
{
public:
    string items_names[6] = {"TEA", "COFFEE", "BLACK COFFEE", "CAKE", "SANDWICH", "WAFFLES"};
    float items_prices[6] = {10.0, 15.0, 12.0, 27.0, 17.0, 25.0};
    Menu()
    {
        system("cls");
        cout << setw(20) << "" << "--------------------------------------" << endl;
        cout << setw(37) << "" << "MENU" << endl;
        cout << setw(20) << "" << "--------------------------------------" << endl;
        for (int i = 0; i < 6; i++)
        {
            cout << setw(20) << " " <<"|"<< i + 1 << ". " << items_names[i] <<setw(31-items_names[i].length())<<" "<<items_prices[i]<<"|"<<endl;
        }
        cout << setw(20) << "" << "--------------------------------------" << endl;
    }
};
int ownercode;
int main()
{
    cout << setw(20) << "" << "--------------------------------------" << endl;
    cout << setw(28) << "" << "CaFe MaNaGeMeNT SySTeM" << endl;
    cout << setw(20) << "" << "--------------------------------------" << endl;

    cout << endl;

    // Owner o;
    // o.set_data();
    // o.check_credentails();
    // o.Welcoming_owner();
    Menu();
}
