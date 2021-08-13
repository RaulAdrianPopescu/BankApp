#pragma once
#include <iostream>
#include <string>

enum class CURRENCY
{
	UNKNOWN,
	EURO,
	DOLLAR,
	RON
};

class BankAccount
{
public:

	////// CONSTRUCTOR(S)
	BankAccount(std::string sAccountName, std::string sAccountSurname, std::string sAccountIban);

	////// DESTRUCTOR
	~BankAccount();

	////// GETTER(S)
	std::string sGetName() const;
	std::string sGetSurname() const;
	CURRENCY eGetCurrency() const;
	std::string sGetIban() const;
	double fGetBalance() const;

	////// SETTER(S)
	void sSetName(std::string sAccountName);
	void sSetSurname(std::string sAccountSurname);
	void eSetCurrency(CURRENCY eAccountCurrency);
	void sSetIban(std::string sAccountIban);
	void fSetBalance(double fAccountBalance);

private:

	////// FIELD(S)
	std::string sName = "Undefined";
	std::string sSurname = "Undefined";
	CURRENCY eCurrency = CURRENCY::UNKNOWN;
	std::string sIban = "Undefined";
	double fBalance = 0;
};