#include <iostream>
#include <string>

using namespace std;

class User {
    string name;
    string email;
public:
    User(string name, string email)
        : name(name), email(email) {}

    string getName() {
        return name;
    }

    string getEmail() {
        return email;
    }
};

class UserPrinter {
public:
    void printUserDetails(User user) {
        cout << "User Details:\n";
        cout << "Name: " << user.getName() << endl;
        cout << "Email: " << user.getEmail() << endl;
    }
};

class UserManager {
public:
    void addUser(string name, string email) {
        User newUser(name, email);
    }
};

int main() {
    return 0;
}
