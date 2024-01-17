#pragma once
#ifndef UIController_H_
#define UIController_H_
#include <stdio.h>
#include <string>
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

#endif