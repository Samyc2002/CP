#include <iostream>
#include <string>
using namespace std;

class user{     
    private:
        int id;
        string name;
        long int salary;
        int password;
    
    protected:
        int p;

    public:
        user() {
            id = 0;
            name = "dbdf";
            salary = 0;
            password = 0;
        }
        user(int a, string b, long int c, int d) {
            id = a;
            name = b;
            salary = c;
            password = d;
        }
        user(user* a) {
            id = (*a).id;
            name = (*a).name;
            salary = (*a).salary;
            password = (*a).password;
        }
        void func() {
            cout << id << endl << name << endl << salary << endl << password << endl;
        }
        ~user() {
            cout << "Phack Oph nub";
        }
};

class admin : protected user{
    bool status;

    public:
        admin() {
            status = true;
        }
        void f() {
            p = 2;
            cout << id;
        }
        ~admin() {
            cout << "Moi Nub";
        }
};

int main() {
    admin a;
    a.f();
    return 0;
}