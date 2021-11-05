#ifndef bankAccount_h
#define bankAccount_h

#include <iostream>
#include <string>
#include <fstream>
#include <string>
using namespace std;

class bankAccount{
private:
    string customerName;
    int balance;

    void setName(string n);
    void setBalance(float bal);
public:
    bankAccount(string n, float bal);

    // Accessors
    string getName();
    float getBalance();

    // mutators
    void deposit(float dep);
    void withdraw(float draw);
};

#endif
