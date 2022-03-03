//******************************************************************************************************************************
//                                                                                                                             *
// Author information                                                                                                          *
//  Author name: Brian Lucero, Quentin May, Ethan Santos                                                                       *
//  Author Email: 13rianlucero@csu.fullerton.edu, quentinemay@gmail.com, ethansantos@csu.fullerton.edu                         *
//                                                                                                                             *
// Copyright (C) 2022 Brian Lucero, Quentin May, Ethan Santos                                                                  *
//                                                                                                                             *
// This is a library function distributed without accompanying software.                                                       *
// This program is free software: you can redistribute it and/or modify it under the terms of the GNU Lesser General Public    *
// License version 3 as published by the Free Software Foundation.  This program is distributed in the hope that it will be    *
// useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. *
// See the GNU General Public License for more details.  A copy of the GNU Lesser General Public License 3.0 should have been  *
// distributed with this function.  If the LGPL does not accompany this software then it is available here:                    *
// <https:;www.gnu.org/licenses/>.                                                                                             *
//                                                                                                                             *
//******************************************************************************************************************************
//
// Program information
//   Program name: Common Header
//   Date program began: 2022-Mar-2
//   Date of last update: 2020-Mar-2
//   Purpose: The purpose this program is to establish a common header that will be re-used in all other files of our project. 
//
// This file
//   Name: functionImplementation.cpp                                                              
//   Language: C++                                                                
//   Syntax: ---
//   Assemble: g++ functionImplementation.cpp
//   Purpose: Defines the functions to be used within main.cpp.
//
//***** BEGIN CODE AREA ********************************************************************************************************
#include <iostream>
#include <fstream>
using namespace std;

string openFile(string filePath) {
    ofstream readMeFile;
    string data;
    readMeFile.open(filePath);
    if (readMeFile.is_open())
    {
    while ( getline (readMeFile,line) )
    {
        data += line;
    }
    myfile.close();
    }
    return data;
}

string getMemberNames(string readMeData) {
    string memberNames;
    for (string line of readMeData) {
        if (line contains "* ") {
            memberNames += "\n" + line;
        }
    }
    return memberNames;
}

int outputNames(string memberNames) {
    for (string line of memberNames) {
        cout << line << endl;
    }
    return 0;
}
