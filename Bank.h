#pragma once

#include "BankAccount.h"
#include "FileManager.h"

#include <vector>
#include <cstdio>
#include <cstdlib>

class Bank
{
public:

	////// CONSTRUCTOR(S)
	Bank();

	////// DESTRUCTOR
	~Bank();

	////// GETTERS(S)
	std::vector<BankAccount*> vGetBankAccounts() { return vBankAccounts; }

	////// METHOD(S)
	void mainMenu();

private:

	////// METHOD(S)
	CURRENCY eSelectCurrency();
	void vAddAccount();
	void vSeeAccounts() const;
	void vModifyAccount();
	std::string sCreateIban();

	////// FIELD(S)
	FileManagerBankAccounts* bankAccountDatabase;
	std::vector<BankAccount*> vBankAccounts;
};

class UserAccount
{
public:

	////// CONSTRUCTOR(S)
	UserAccount();
	UserAccount(std::string sName, std::string sPassword);

	////// DESTRUCTOR
	~UserAccount();
	
	////// GETTER(S)
	std::string const sGetUserName();
	std::string const sGetUserPassword();

	////// METHOD(S)
	bool bIsUserNameValid(std::string sInputName);
	bool bIsUserPasswordValid(std::string sInputPassword);
	bool bDoesAccountHaveAccess(UserAccount* adminAccount);

private:

	////// FIELD(S)
	void sSetUserName(std::string& sInputName);
	void sSetUserPassword(std::string& sInputPassword);
	std::string sUserName;
	std::string sUserPassword;
	FileManagerUserAccounts* userAccountsDatabase = new FileManagerUserAccounts("user_accounts.csv");
};