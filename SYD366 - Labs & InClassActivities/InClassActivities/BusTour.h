/*
 -----STUDENT INFORMATION-----
 NAME - Soni Dev Alpeshbhai
 STUDENT NUMBER - 130759210
 E-MAIL - dasoni4@myseneca.ca
 DATE - 22 SEPT 2022
 PROFESSOR - CASSANDRA LAFFAN
 COURSE - SYD366NEE
 */

// HEADER FILE FOR THE BUS TOUR CLASS DIAGRAM :-

#ifndef BUSTOUR_H_  // Conditional Header Commands to the console.
#define BUSTOUR_H_

// Standard or Other libraries for the program.
#include <stdio.h>
#include <string>

// All the Class Declarations for the program.
class BusTour{
    int busTourID;
    char busTourName[100];
    char staffName[100];
    int busTourDate;
    char originStation[100];
    char destinationStation[100];
    int staffContactInfo;
    double tourPrice;
    char busTourDescription[100];
public:
    
    // Getters
    int get(BusTour) const; // method to get the BusTour
    int getBusTourList() const; // method to get the List of BusTours.

    // Functionalities
    void browseBusTours(int busTourID) const;  // It will allows the user to load the Bus Tour List onto the program.
    void requestBusTours(int busTourID) const; // This will send a request query to the program to get the Bus Tour List.
    void selectBusTour(BusTour b); // This functionality will allow the user to select one of the Bus Tour List from the Lists of Bus Tours.
    void create() const; // This functionality will create a Bus Tour List from the request made by the user.
};

class Ticket{
    int TicketID;
    char TicketType[100];
    double ticketPrice;
    int expiryDateForTheTicket;
    int ticketPurchaseDate;
    BusTour* busTour;  // reference attribute of the class BusTour.
};

class Passenger{
    int passengerID;
    char passengerName;
    int phoneNum;
    char emailAddress[100];
    char address[100];
    PaymentTransaction* payment;  // reference attribute of the class Passenger.
    
};

class PaymentTransaction{
    int paymentID;
    char paymentMethod[100];
    int paymentDate;
    Ticket* ticket;  // reference attribute of the class Ticket.
    BusTour* busTour; // reference attribute of the class BusTour.
    
public:
    void confirm(BusTour b) const;  // This functionality will confirm the BusTour List from the List, chose by the user.
    void save(BusTour b); // This functionality will save the BusTour, chose by the user onto the Domain Controller (System).
};

#endif
