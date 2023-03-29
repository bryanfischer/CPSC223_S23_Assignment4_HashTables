#include "City.h"

City::City(){
    
}

City::City(std::string cName, std::string sName, int popA, int popB){
    cityName = cName;
    stateName = sName;
    populationA = popA;
    populationB = popB;
}

std::string City::getCityName(){
    return cityName;
}

std::string City::getStateName(){
    return stateName;
}

int City::getPopulationA(){
    return populationA;
}

int City::getPopulationB(){
    return populationB;
}

void City::setCityName(std::string name){
    cityName = name;
}

void City::setStatename(std::string name){
    stateName = name;
}

void City::setPopulationA(int population){
    populationA = population;
}

void City::setPopulationB(int population){
    populationB = population;
}

std::string City::toString(){
    std::string str = "-------------------------------\n";
                str += "City Name: ...........[" + cityName + "]\n";
                str += "State Name: ..........[" + stateName + "]\n";
                str += "Population in 2020: ..[" + std::to_string(populationA) + "]\n";
                str += "Population in 2021: ..[" + std::to_string(populationB) + "]\n";
                str += "Population Change: ...[" + std::to_string(populationB - populationA) + "]\n";
                str += "------------------------------\n";
    return str;
}
