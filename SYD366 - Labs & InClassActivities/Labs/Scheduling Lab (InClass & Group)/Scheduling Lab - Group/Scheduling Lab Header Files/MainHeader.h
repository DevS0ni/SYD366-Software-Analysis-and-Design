#pragma once
#ifndef class1_H_
#define class1_H_
#include <stdio.h>
#include <string>

class class1
{
	int PID;
	int date;
	int ApptID;
	int owner[10] = {};
	int appointment[10] = {};
	int serviceID;

public:
	void getPid();
	void setPid();
	void getDate();
	void SetDate();
	void getApptID();
	void setApptID();
	void getOwner();
	void setOwner();
	void getAppointment();
	void setAppointment();
	void getServiceID();
	void setServiceID();

};


class UIController
{
public:
	void addAppt();
	void DispListOwner();
	int chooseOwner();
	void addDate(int PID);
	void DispListApp();
	void addTime(int PID, int Date);
	void DispListPet();
	int choosePet();
	int DispListServi();
	int chooseServ();
	int PromptChangeAddSave();
	void SaveAppt(int ApptID);
	void addDate(int PID, int Date);
};


class DomainController
{

public:
	char getOwner();
	void getListOwner();
	char getAppt(int date);
	char createAppt(int PID, int date, int time);
	char getPet(int PID);
	void getListService(int PetID);
	char getService(int PetID);
	void chooserServe(int ServiceID);
	char addServices(int serviceID);
	void persistAppt(int ApptID);

};

class EntityManager
{

public:
	char createOwner();
	char createAppt(int date);
	void setApptID();
	char createPet(int PID);
	char createService(int petID);
	void createInvoice(int serviceID);
	int calcAmount();
	void persistAppt(int ApptId);
};




#endif