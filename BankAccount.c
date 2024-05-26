#include <stdio.h>
#include <string.h>

#include "BankAccount.h"

BankAccount InitBankAccount(char* newName, double chBalance, double sBalance){
  BankAccount newCustomer;

  strcpy(newCustomer.customerName, newName);
  newCustomer.savingsAccountBalance = sBalance;
  newCustomer.checkingAccountBalance = chBalance;

  return newCustomer;
}

BankAccount SetName(char* newName, BankAccount account){

  strcpy(account.customerName, newName);

  return account;
}

void GetName(char* customerName, BankAccount account){
  strcpy(customerName, account.customerName);
}

BankAccount SetChecking(double balance, BankAccount account){
  account.checkingAccountBalance = balance;

  return account;
}

double GetChecking(BankAccount account){
  return account.checkingAccountBalance;
}

BankAccount SetSavings(double balance, BankAccount account){
  account.savingsAccountBalance = balance;

  return account;
}

double GetSavings(BankAccount account){
  return account.savingsAccountBalance;
}

BankAccount DepositChecking(double amt, BankAccount account){
  if(amt > 0){
    account.checkingAccountBalance += amt;
  }

  return account;
}

BankAccount DepositSavings(double amt, BankAccount account){
  if(amt > 0){
    account.savingsAccountBalance += amt;
  }

  return account;
}

BankAccount WithdrawChecking(double amt, BankAccount account){
  if(amt > 0){
    account.checkingAccountBalance -= amt;
  }

  return account;
}

BankAccount WithdrawSavings(double amt, BankAccount account){
  if(amt > 0){
    account.savingsAccountBalance -= amt;
  }

  return account;
}

BankAccount TransferToSavings(double amt, BankAccount account){
  if(amt > 0){
    account.checkingAccountBalance -= amt;
    account.savingsAccountBalance += amt;
  }

  return account;
}