#pragma once
#ifndef entityManager_H_
#define entityManager_H_
#include <stdio.h>
#include <string>

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