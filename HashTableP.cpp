#include "HashTableP.h"

//you implement

void HashTableP::printTable(){

    std::cout << "--------------------" << std::endl;
    std::cout << "Collision Strategy: " << collisionStrategy << std::endl;
    std::cout << "Table size: " << tableSize << std::endl;
    std::cout << "Item Count: " << itemCount << std::endl;
    std::cout << "Load Factor: " << loadFactor << std::endl;
    std::cout << "--------------------" << std::endl;

    for(size_t i = 0; i < table->size(); i++){
        printf("%3d ", static_cast<int>(i));
        if(table->at(i) == nullptr){
            std::cout << "[nullptr]" << std::endl;
        }else{
            printf("[%s|%s|%d|%d]", table->at(i)->getCityName().c_str(), table->at(i)->getStateName().c_str(), table->at(i)->getPopulationA(), table->at(i)->getPopulationB());
            //hashCode before probing
            printf("...[%d]\n", hashFunction(table->at(i)->getCityName(), 0));

            //std::cout << "[" << table->at(i)->getCityName() << "|" << table->at(i)->getStateName() << "|" << table->at(i)->getPopulationA() << "|" << table->at(i)->getPopulationB() << "], [Hashcode before probing= " << hashFunction(table->at(i), 0) << "]" << std::endl;
        }
    }
}