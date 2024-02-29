// コードを入力してください

#include <iostream>
#include "./bank_account.h"

BankAccount::BankAccount(double balance) {
    this->balance = balance;
}

void BankAccount::deposit(double cash) {
    if (cash < 0) return;
    balance += cash;
    std::cout << "Balance: $" << get_balance() << std::endl;
};

void BankAccount::withdraw(double cash) {
    if (cash < 0) return;
    if (balance > cash) {
        balance -= cash;
    } else {
        std::cout << "Insufficient balance!" << std::endl;
    }
    std::cout << "Balance: $" << get_balance() << std::endl;
};

double BankAccount::get_balance() const { return balance; };
