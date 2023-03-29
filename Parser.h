#ifndef PARSER_H
#define PARSER_H

#include "City.h"
#include<string>
#include<fstream>
#include<iostream>
#include<sstream>
#include<stdlib.h>
#include<stdio.h>
#include<vector>

class Parser{

    public:
        static void parseFile(const std::string fileName, std::vector<City*> &vec);

};

#endif