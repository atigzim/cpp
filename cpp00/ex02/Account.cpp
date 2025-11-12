#include "Account.hpp"

int Account::getNbAccounts()
{
    return (_nbAccounts);
}
int Account::getNbDeposits()
{
    return (_totalNbDeposits);
}
int Account::getTotalAmount()
{
    return (_totalAmount);
}
int Account::getNbWithdrawals()
{
    return (_totalNbWithdrawals);
}