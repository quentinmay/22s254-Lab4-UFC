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
//   Program name: main
//   Date program began: 2022-Mar-2
//   Date of last update: 2020-Mar-2
//   Purpose: The purpose this program is to read in names text from readme.txt and then output it using standard output 
//
// This file
//   Name: main.cpp                                                              
//   Language: C++                                                                
//   Syntax: ---
//   Assemble: g++ main.cpp functionImplementation.cpp header.cpp
//   Purpose: to read in names text from readme.txt and then output it using standard output
//
//***** BEGIN CODE AREA ********************************************************************************************************

// include the previous files and their respective libraries
#include "header.cpp"
#include "functionImplementation.cpp"
#include <string>

using namespace std;

// main function
int main() {
    string readMeText = openFile("readme.md");
    string memberNames = getMemberNames(readMeText);
    outputNames(memberNames);    

    return 0;
}