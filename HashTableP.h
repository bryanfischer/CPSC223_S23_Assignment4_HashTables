/**
 * File:        HashTableP.h
 * Author:      Your Name
 * Date:        date last modified
 * Description: Header file for a hash table implementation.
*/

#ifndef HASHTABLELP_H
#define HASHTABLELP_H

#include "HashTable.h"
#include<math.h>

class HashTableP : public HashTable{

    public:

        /**
         * Constructor will set the collision resolution strategy.
         * Acceptable strings are "Linear Probing" and "Quadratic Probing"
         * 
        */
        HashTableP(std::string hashStrategy);

        /**
         *  Hash function is defined as h(x) = (x + f(i)) % tableSize
         *  Hash function should call hashCode helper function to get
         *  the hash code of a city name
        */
        int hashFunction(std::string cityName, const int i);

        /* 
        *   Function: hashCode
        *   Parameters: a string representing the name of the city
        *   Return:     The integer hashCode of the city name
        *   Description:
        *       hashcode of a city object is the ASCII sum of each char
        *       in the city name and state
        */
        int hashCode(std::string cityName);

        /* 
        *   Function: insert
        *   Parameters: the city object to be inserted into the hashtable
        *   Return:     void
        *   Description:
        *       inserts a city object based on the hash of the city name
        */
        void insert(City * cityObj);

        /* 
        *   Function: lookup
        *   Parameters: the city object you're searching for
        *   Return:     void
        *   Description:
        *       attempts to find the city in the hash table, if found
        *       print the city to the console. Otherwise, print "Item not found".
        */
        void lookup(std::string cityName);

        /* 
        *   Function: removeCity
        *   Parameters: the city object to be removed from the hashtable
        *   Return:     void
        *   Description:
        *       removes the city from the hash table if found using lazy deletion.
        *       if the city is not found in the table, print a message stating
        *       "item not found" and don't modify the hash table. If there are multiple
        *       items with the same cityName, remove the first occurance.
        */
        void removeCity(std::string cityName);

        /* 
        *   Function: rehash
        *   Parameters: none
        *   Return:     void
        *   Description:
        *       rehash the table as described in class. Double the table to the
        *       next prime number, re-insert all elements into new table, and
        *       update the load factor.
        */
        void rehash();

        /* 
        *   Function: findNextPrimeTS
        *   Parameters: none
        *   Return:     integer representing the next prime number after doubling table size
        *   Description:
        *       helper function to find the next table size to rehash to. 
        */
        int findNextPrimeTS();

        /* 
        *   Function: printTable
        *   Parameters: none
        *   Return:     void
        *   Description:
        *       Prints the hash table. This function is given to you.
        */
        void printTable();

    private:
        //the hash table vector
        std::vector<City *> *table;

};

#endif