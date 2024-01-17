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

#endif