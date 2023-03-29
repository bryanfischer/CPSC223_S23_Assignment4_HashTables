#ifndef CITY_H
#define CITY_H

#include<string>

class City{
    public:

        City();
        City(std::string cName, std::string sName, int popA, int popB);

        //getters
        std::string getCityName();
        std::string getStateName();
        int getPopulationA();
        int getPopulationB();

        //setters
        void setCityName(std::string name);
        void setStatename(std::string name);
        void setPopulationA(int population);
        void setPopulationB(int population);

        //prints the data members of the city to the screen
        std::string toString();

    private:
        std::string cityName;
        std::string stateName;
        int populationA;
        int populationB;
};
#endif