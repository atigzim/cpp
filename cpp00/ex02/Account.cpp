#include "Account.hpp"
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

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
void Account::displayAccountsInfos()
{
    std::cout << _nbAccounts << std::endl;
    std::cout << _totalAmount<< std::endl;
    std::cout << _totalNbDeposits << std::endl;
    std::cout << _totalNbWithdrawals << std::endl;
}
void	Account::makeDeposit( int deposit)
{
    _totalNbDeposits++;
    _totalAmount += deposit;
}
int Account:: checkAmount()const
{
    return(getTotalAmount());
}
bool Account::makeWithdrawal(int withdrawal)
{
    if (withdrawal > getTotalAmount())
    {
        _totalAmount -= withdrawal;
        _totalNbWithdrawals++;
        return (true);
    }
    return(false);
}
void	Account::displayStatus( void ) const
{
        // _displayTimestamp();
    std::cout << "index:" << _accountIndex
              << ";amount:" << _amount
              << ";deposits:" << _nbDeposits
              << ";withdrawals:" << _nbWithdrawals
              << std::endl;
}
