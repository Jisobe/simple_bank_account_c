/* TODO: Type your header file guards and include directives here. */
#ifndef BANKACCOUNT_H_
#define BANKACCOUNT_H_

typedef struct BankAccount_struct{
  char customerName[20];
  double savingsAccountBalance;
  double checkingAccountBalance;
}BankAccount;

BankAccount InitBankAccount(char* newName, double chBalance, double sBalance);
BankAccount SetName(char* newName, BankAccount account);
void GetName(char* customerName, BankAccount account);
BankAccount SetChecking(double balance, BankAccount account);
double GetChecking(BankAccount account);
BankAccount SetSavings(double balance, BankAccount account);
double GetSavings(BankAccount account);
BankAccount DepositChecking(double amt, BankAccount account);
BankAccount DepositSavings(double amt, BankAccount account);
BankAccount WithdrawChecking(double amt, BankAccount account);
BankAccount WithdrawSavings(double amt, BankAccount account);
BankAccount TransferToSavings(double amt, BankAccount account);

#endif