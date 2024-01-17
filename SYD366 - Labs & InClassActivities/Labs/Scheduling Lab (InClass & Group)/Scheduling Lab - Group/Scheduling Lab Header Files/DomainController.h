#pragma once
#ifndef DomainController_H_
#define DomainController_H_
#include <stdio.h>
#include <string>
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


#endif


