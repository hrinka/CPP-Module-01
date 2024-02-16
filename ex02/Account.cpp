/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrinka <hrinka@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 16:47:36 by hrinka            #+#    #+#             */
/*   Updated: 2024/02/16 17:09:24 by hrinka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

// Initialize static member variables
int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

// Constructor with initial deposit
Account::Account(int initial_deposit) : _accountIndex(_nbAccounts), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)
{
    _nbAccounts++;
    _totalAmount += initial_deposit;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << initial_deposit << ";created" << std::endl;
}

// Destructor
Account::~Account()
{
    _nbAccounts--;
    _totalAmount -= _amount;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

// Static member function to display number of accounts
int Account::getNbAccounts()
{
    return _nbAccounts;
}

// Static member function to display total amount
int Account::getTotalAmount()
{
    return _totalAmount;
}

// Static member function to display number of deposits
int Account::getNbDeposits() {
    return _totalNbDeposits;
}

// Static member function to display number of withdrawals
int Account::getNbWithdrawals() {
    return _totalNbWithdrawals;
}

// Static member function to display accounts information
void Account::displayAccountsInfos() {
    _displayTimestamp();
    std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

// Member function to make deposit
void Account::makeDeposit(int deposit) {
    _amount += deposit;
    _totalAmount += deposit;
    _nbDeposits++;
    _totalNbDeposits++;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";p_amount:" << _amount - deposit << ";deposit:" << deposit << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
}

// Member function to make withdrawal
bool Account::makeWithdrawal(int withdrawal) {
    if (_amount < withdrawal) {
        _displayTimestamp();
        std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:refused" << std::endl;
        return false;
    } else {
        _amount -= withdrawal;
        _totalAmount -= withdrawal;
        _nbWithdrawals++;
        _totalNbWithdrawals++;
        _displayTimestamp();
        std::cout << "index:" << _accountIndex << ";p_amount:" << _amount + withdrawal << ";withdrawal:" << withdrawal << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
        return true;
    }
}

// Member function to check amount
int Account::checkAmount() const {
    return _amount;
}

// Member function to display account status
void Account::displayStatus() const {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

// Private static member function to display timestamp
void Account::_displayTimestamp() {
    time_t      t_stmp_ptr;
    struct tm   *t_stmp;

    std::time(&t_stmp_ptr);
    t_stmp = localtime(&t_stmp_ptr);
    std::cout << "[";
    std::cout << t_stmp->tm_year + 1900;
    std::cout << std::setw(2) << std::setfill('0') << t_stmp->tm_mon + 1;
    std::cout << std::setw(2) << std::setfill('0') << t_stmp->tm_mday << "_";
    std::cout << std::setw(2) << std::setfill('0') << t_stmp->tm_hour;
    std::cout << std::setw(2) << std::setfill('0') << t_stmp->tm_min;
    std::cout << std::setw(2) << std::setfill('0') << t_stmp->tm_sec;
    std::cout << "] ";
}