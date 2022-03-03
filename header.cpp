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
//   Purpose: The purpose of this program is to establish a common header that will be re-used in all other files of our project. 
//
// This file
//   Name: commonHeader.cpp                                                              
//   Language: C++                                                                
//   Syntax: ---
//   Assemble: g++ commonHeader.cpp
//   Purpose: To estbalish the functions being used in this program. In this case, functions to open the README and to scan and print the
//            contents of the file
//
//***** BEGIN CODE AREA ********************************************************************************************************

// Including necessary libraries
include iostream
include fstream 
include String

// Function to open the file with the file as a param
String openFile(fstream& someFile)

// Gets member names from text retrieved from file
getMemberNames(String text)

//Printing out member names based on an array of member names
outputMemberNames(string[] names)
