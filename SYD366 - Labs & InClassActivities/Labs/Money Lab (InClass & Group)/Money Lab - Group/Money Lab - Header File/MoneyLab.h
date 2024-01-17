/*
 -----STUDENT INFORMATION-----
 NAME - Soni Dev Alpeshbhai
 STUDENT NUMBER - 130759210
 E-MAIL - dasoni4@myseneca.ca
 DATE - 30 SEPT 2022
 PROFESSOR - CASSANDRA LAFFAN
 COURSE - SYD366NEE
 */
// HEADER FILE FOR THE MONEY LAB CLASS DIAGRAM :-

#ifndef MONEYTRANS_H_ // Conditional Header Commands to the console.
#define MONEYTRANS_H_

// Standard or Other libraries for the program.
#include <stdio.h>

// All the Class Declarations for the program.
class Owner{
 
    const int OwnerID;
    char ownerName[100];
    double ownerFinanceBudget;

public:
 
// Functionalities
 
void requestAddIncomeTrans(); // to add Income Transaction
 
void selectIncomeTrans(int transDate) const; // select Income Transaction, between specific dates.
 
void addTransDesc(int transDate); // add Transaction description.
 
void requestAddExpenseTrans(); // to add Expense Transaction
 
void selectExpenseTrans(int transDate) const; //select expense Transaction, between specific dates.

void requestFinalTrans(); // request final transaction
 
void selectFinalTrans(int transDate) const; // select final Transaction, for specific dates.
 
void selectFinalTrans(int minDate, int maxDate); // select final Transaction, between specific dates.

void exit(); // exit to main menu

};
class Sales{
 
const int SalesID;
 
int salesDate;
 
char salesDesc[500];
 
double netSales;
 
Owner* owner; // reference attribute of the class Owner.
};

class Transaction{ 
 
int transactionID;
 
int transactionDate;
 
double transactionWithHST;
 
char transactionDesc[500];
 
double transactionAmount;
 
Sales* sales; // reference attribute of the class Sales.

public :
    int addIncomeTrans();  // add Transaction description.
    int addExpenseTrans();  // to add Expense Transaction
    int HSTcalculator(double finalTrans);  // to convert transaction to HST.
 
};

class IncomeSavings{
 
double netAmountAfterExpense;
 
double netAmountAfterHST;
 
double finalSavingsAmount;

double profitFromSales;
 
Transaction* transaction; // reference attribute of the Transaction.

public:
 
void confirmTransAmount(int transDate) const; // This functionality will confirm the transaction amount from the List, chose by the user.
 
void saveTransAmount(int transDate); // This functionality will save the transaction amount, chose by the user onto the Domain Controller (System).
};

#endif
