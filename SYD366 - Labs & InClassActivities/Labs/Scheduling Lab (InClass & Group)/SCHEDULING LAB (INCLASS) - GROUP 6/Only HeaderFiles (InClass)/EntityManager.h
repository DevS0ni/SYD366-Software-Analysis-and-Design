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

// HEADER FILE FOR SCHEDULING - ENTITY MANAGER.

#ifdef ENTITY_MANAGER_H
#ifndef ENTITY_MANAGER_H

#include <stdio.h> // Standard Library...


class EntityManager{
    private:
    const int SuppID;  // This will store the Supplier ID entered by the user.

// Functionalities for this program... 
    public:
        void create();  // This will create a multiple file database from the Entity Manager.
        void persists(int SuppID);  // This will persist everything at the end of the program.
        
};

#endif 