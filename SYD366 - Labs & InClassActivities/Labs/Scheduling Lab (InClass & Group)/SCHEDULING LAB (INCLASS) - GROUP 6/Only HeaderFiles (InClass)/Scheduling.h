/*
 -----GROUP 6 - INFORMATION-----
SCHEDULING LAB (INCLASS) :- 

 NAME :
 Soni Dev Alpeshbhai (130759210) - dasoni4@myseneca.ca
 Anusmita Chanda (154453203) - achanda4@myseneca.ca
 Le Chanh Tin Luong (154574214) - lluong7@myseneca.ca
 Alex (177037215) - achoi28@myseneca.ca

 DATE - 17 NOV 2022
 PROFESSOR - CASSANDRA LAFFAN
 COURSE - SYD366NEE
 */

// HEADER FILE FOR SCHEDULING - CLASS DIAGRAM.
#pragma once

#ifndef SCHEDULE_H_  // Conditional Header file Statements
#define SCHEDULE_H_

#include <stdio.h>  // Standard Header Libraby for the program.

// All the class definitions will be here.

class Owner  // Owner Class.
{
	int PID;  // This will store the Owner ID onto it.
	char* Fname;  // For the first name of the owner.
	char* Lname;  // For the last name of the owner.

public:
	int newPID();  // This is for the adding the Owner ID for the program.
	void newUser(char* Fname, char* Lname);  // This is for adding the new user in the software.
	void deleteUser(int PID);  // This will delete the user from the system.
};

class Appointment  // Appointment Class.
{
	int appointmentID;  // For storing the appointment ID.
	char* CFName;  // For storing the consumer first name.
	char* CLName;  // For storing the consumer last name.
	int appointmentDate;  // For appointment dates storage.
	int appointmentTime;  // For appointment time storage.
	Owner* owner;  // Reference to the Owner class.

public:
	void createNewID();  // This will create a new Appointment ID for the user.
	void newName(char* Fname, char* Lname); // This is for entering new name for the user.
	void setSupplier(char* Supplier);  // For setting up the Supplier for the user.
	void setDate(int date);  // For setting up the date for the appointment.
	void setTime(int time);  // For setting up the time for the appointment.

	void findAppoint(int appointmentID);  // To search the desired appointment requested by the user.
	void CancelAppoint(int appointmentID);  // To cancel the appointment by the user.
	void displayAll();  // To display all the information related to the appointment.
	void createReceipt(int appointmentID);  // To create a receipt number for the appointment opt by the user.
	void cancel();  // To cancel the even issued by the program.


};

class Supplier  // Supplier Class..
{
	int SID;  // To store the supplier ID by the user.
	char* Sname;  // To store the Supplier name.
	char* Service;   // To store the service specified by the user.
	int costs;  // The net cost variable.
	Invoice* invoice;  // Reference to Invoice Class.

public:
	int newSID();  // This will create a new Supplier ID for the user.
	void setSupplierName(char* Sname);  // This will set the Supplier name entered by the user.
	void displayServices(int SID, char* Service);  // To display Services mentioned onto the system.
	void removeService(char* Service);  // To remove a specific service.
	void addService(char* Service); // To add a new service as requested from the user.
	void displayCosts(int costs);  // To display the net cost from the user.
	void removeSupplier(int SID);  // To remove a supplier.
};

class Invoice  // Invoice Class...
{
	char* services;  // Service stored onto this variable.
	float subtotal;  // To store the subtotal mentioned in the invoice.
	float taxrate;  // To store the tax rate by the government ( HST, GST, ..)
	float taxtotal;  // To store the total tax mentioned at the end of the invoice.
	float total;  // To store the net amount on the invoice.

public:
	float subtotalCalc(char* services);  // To calculate the subTotal.
	float taxTotal(float subtotal, float taxrate); // To calculate the total tax.
	float calculateTotal(float subtotal, float taxtotal);  // To calculate the net amount.
	void displayServices(char* services);  // To display all the services opt by the user.
};

#endif