#include "bankAccount.h"

int main(int argc, char* argv[]){

// jack account init
bankAccount jackAccount("Jack Smith", 50);
// jill acount init
bankAccount jillAccount("Jill Brian", 100);

// array of 3 accounts
bankAccount *bankArray[3];

bankArray[0] = new bankAccount("Ralph Kramden", 10);
bankArray[1] = new bankAccount("Alice Kramden", 10);
bankArray[2] = new bankAccount("Ed Norton", 30);

// c
jackAccount.deposit(30);
jillAccount.deposit(30);

for (int i = 0; i < 3; i++)
    bankArray[i]->deposit(30);

// d
jackAccount.withdraw(20);
jillAccount.withdraw(20);

for (int i = 0; i < 3; i++)
    bankArray[i]->withdraw(20);

// e
cout << "Account holder: " << jackAccount.getName() << "\t";
cout << " Account balance: " << jackAccount.getBalance() << endl;

cout << "Account holder: " << jillAccount.getName() << "\t";
cout << " Account balance: " << jillAccount.getBalance() << endl;

for (int i = 0; i < 3; i++){
    cout << "Account holder: " << bankArray[i]->getName() << "\t";
    cout << " Account balance: " << bankArray[i]->getBalance() << endl;
}

return 0;
}


