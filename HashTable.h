#ifndef HASHTABLE_H
#define HASHTABLE_H

#include "City.h"
#include<vector>
#include<iostream>

class HashTable{

    public:

        virtual int hashFunction(std::string cityName, const int i) = 0;
        virtual void insert(City * cityObj) = 0;
        virtual void lookup(std::string cityName) = 0;
        virtual void removeCity(std::string cityName) = 0;
        virtual void rehash() = 0;

        std::string getCollisionStrategy(){
            return collisionStrategy;
        }

    protected:
    
        std::string collisionStrategy;
        int tableSize;
        int itemCount;
        double loadFactor;

};

#endif