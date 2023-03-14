#include "account.h"
#include <stdlib.h>
#include <stdint.h>

typedef struct account{
    int accountNo;
    double creditLimit;
    double balance;
} account;

account_t account_create(int accountNo, double creditLimit, double balance) {
    account_t _newAccount = calloc(1, sizeof(account));

    if(NULL == _newAccount) {
        return NULL;
    }

    _newAccount->accountNo = accountNo;
    _newAccount->creditLimit = creditLimit;
    _newAccount->balance = balance;

    return _newAccount;
}

void account_destroy(account_t self) {
    if(NULL != self) {
        free(self);
    }
}

