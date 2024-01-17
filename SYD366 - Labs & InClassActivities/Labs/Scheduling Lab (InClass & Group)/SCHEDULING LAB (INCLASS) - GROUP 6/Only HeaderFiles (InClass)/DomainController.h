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

// HEADER FILE FOR SCHEDULING - DOMAIN CONTROLLER.

#ifdef DOMAIN_CONTROLLER_H
#ifndef DOMAIN_CONTROLLER_H

#include <stdio.h> // Standard Library...


class DomainController{

    private: 
        const int apptID, suppID; // to store the appartment ID and supply ID.
        char* apptDate;  // to store the application Date.
        char* suppTime;  // To store the suppy Time
        float hours;   // To store the hours mentioned by the user.
        double price;  // To store the price estimated in the invoice.

// Functionalities for this program... 
    public:     
        void addAppt();  // This functionality will add or request the Entity Manager for any available Appointment.
        void getListSuppliers() const;  // This will display the list of Suppliers.
        void getSupp();  // This will fetch the Supplier chose by the user from the Entity Manager.
        void addDate(int SuppID);  // This functionality will help to mention and add Date, entered by the user.
        void addTime(int SuppID, const char* SuppDate);  // This functionality will help the program to facilitate the user to add the Time.
        void getSeviceAndInfo(char* SuppTime);  // This will fetch the Services and the required information from the Entity Manager, as requested by the user.
        void promptApptServices() const; // This will display the appointment Servies opt by the user before.
        void Save(int SuppID);  // This will save the rest of the work done before.
};

#endif 