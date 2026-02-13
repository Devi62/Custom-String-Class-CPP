# Custom-String-Class-CPP
## **Project Overview**
This mini project implements a Custom STRING Class in C++ without using the Standard Library std::string.  

The objective of this project is to understand low-level string manipulation, dynamic memory allocation, and operator overloading by building a string class from scratch using Object-Oriented Programming concepts.

## **Features Implemented**
 The project includes the following features:   
* Default constructor, parameterized constructor, and copy constructor
* Dynamic memory management using new and delete
* Operator overloading for common string operations
* Manual implementation of common string functions without using std::string
* Demonstration of Rule of Three in C++
## **Operators Implemented**
The following operators are overloaded in the STRING class:

* Assignment operator (=)
* Concatenation operator (+)
* Subscript operator ([])
* Stream insertion operator (<<)
* Stream extraction operator (>>)
* Comparison operators (==, !=, <, >, <=, >=)

## **String Functions Implemented**
The following string manipulation functions are implemented using friend functions:
* Strcpy
* Strncpy
* Strcmp
* Strncmp
* Strcat
* Strncat
* Strrev
* Strupper
* Strlower
* Strchr
* Strrchr
* Strstr
* Strlen
## **Concepts Used**
This project uses the following C++ concepts:
* Object-Oriented Programming (OOP)
* Dynamic memory allocation
* Operator overloading
* Friend functions
* Character array manipulation
* Rule of Three (Constructor, Copy Constructor, Destructor)
## **Project Files**
The project consists of the following files:
* header.h : Contains class definition and function declarations for the custom STRING class.
* member.cpp : Contains the implementation (definitions) of all member functions of the STRING class
* friend.cpp : Contains implementation of string functions
* main.cpp : Test and demonstration program
* Makefile : Build instructions
* README.md : Project documentation
# **Working Description**
The STRING class internally manages a dynamically allocated character array.  

User input is accepted using the overloaded extraction (>>) operator and output is displayed using the insertion (<<) operator.

All string operations such as copying, concatenation, comparison, searching, and case conversion are implemented manually without using the C++ Standard Library string class. 

This project helps in understanding how strings work internally in C++.


