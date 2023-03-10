#include "account.h"
#include <stdlib.h>
#include <stdint.h>

typedef struct account{
    int accountNo;
    double creditLimit;
    double balance;
} account;

account_t account_create(int accountNo, double creditLimit) {
    account_t _newAccount = calloc(1, sizeof(account));

    if(NULL == _newAccount) {
        return NULL;
    }

    _newAccount->accountNo = accountNo;
    _newAccount->creditLimit = creditLimit;
    _newAccount->balance = 0;

    return _newAccount;
}

void account_destroy(account_t self) {
    if(NULL != self) {
        free(self);
    }
}

account_accountStatus_t account_withdraw(account_t self, double amount) {
    self->balance = self->balance - amount;
}

account_accountStatus_t account_deposit(account_t self, double amount) {
    self->balance = self->balance + amount;
}

double account_getBalance(account_t self) {
    return self->balance
}

double account_getCreditLimit(account_t self) {
    return self->creditLimit
}

int account_getAccountNo(account_t self) {
    return self->accountNo;
}