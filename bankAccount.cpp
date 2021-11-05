#include "bankAccount.h"


// private functions
void bankAccount::setName(string n){
    customerName = n;
}

void bankAccount::setBalance(float bal){
    balance = bal;
}

// public functions
// constructor
bankAccount::bankAccount(string n, float bal){
    setName(n);
    setBalance(bal);
}

// Accessors
string bankAccount::getName(){
    return customerName;
}

float bankAccount::getBalance(){
    return balance;
}

// Mutators
void bankAccount::deposit(float dep){
    balance = balance + dep;    
}

void bankAccount::withdraw(float draw){
    balance = balance - draw;
}

