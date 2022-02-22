#include "Account.hpp"
#include <iostream>
#include <ctime>

Account::Account(int initial_deposit)
{
    _accountIndex = _nbAccounts;
    _nbAccounts += 1;
    _totalAmount += initial_deposit;
    _amount = initial_deposit;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
    return ;
}

Account::~Account(void) 
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
    return;
}

int Account::getNbAccounts(void)
{
    return(_nbAccounts);
}

int Account::getTotalAmount(void)
{
    return(_totalAmount);
}

int Account::getNbDeposits(void)
{
    return(_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
    return(_totalNbWithdrawals);
}

void    Account::displayAccountsInfos(void)
{
    _displayTimestamp();
    std::cout << "accounts:" << Account::_nbAccounts << ";total:" << Account::_totalAmount 
        << ";deposits:" << Account::_totalNbDeposits << ";withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

void    Account::makeDeposit(int deposit)
{
    _nbDeposits += 1;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";p_amount" << _amount << ";deposit:" << deposit << ";amount:" << (_amount + deposit) << ";nb_deposit:" << _nbDeposits << std::endl;
    _amount += deposit;
    _totalAmount += deposit;
    _totalNbDeposits += 1;
}

bool    Account::makeWithdrawal(int withdrawal)
{
    if (withdrawal > _amount)
    {
        _displayTimestamp();
        std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:refused" << std::endl;
        return false;
    }
    _nbWithdrawals += 1;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:" << withdrawal << ";amount:" << (_amount - withdrawal) << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
    _amount -= withdrawal;
    _totalAmount -= withdrawal;
    _totalNbWithdrawals += 1;
    return true;
}

int Account::checkAmount( void ) const
{
    return (_amount);
}

void    Account::displayStatus( void ) const
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;

}

void    Account::_displayTimestamp( void )
{
    const std::time_t   t = std::time(nullptr);
    char            str[16];

    if (std::strftime(str, 16, "%Y%m%d_%H%M%S", std::localtime(&t)))
    {
        std::cout << "[" << str << "] ";
    }
}

int Account::_nbAccounts = 0;

int Account::_totalAmount = 0;

int Account::_totalNbDeposits = 0;

int Account::_totalNbWithdrawals = 0;

