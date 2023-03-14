#pragma once

#include <stdlib.h>
#include <stdint.h>

typedef struct account* account_t;

typedef enum {
    OK,
    OVER_MAX_CREDIT_LIMIT,
    ACCOUNT_NOT_INSTANTIATED
} account_accountStatus_t;

account_t account_create(int accountNo, double creditLimit);
void account_destroy(account_t self);
account_accountStatus_t account_withdraw(account_t self, double amount);
account_accountStatus_t account_deposit(account_t self, double amount);
double account_getBalance(account_t self);
double account_getCreditLimit(account_t self);
int account_getAccountNo(account_t self);