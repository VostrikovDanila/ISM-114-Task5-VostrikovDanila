
#ifndef Exceptions_hpp
#define Exceptions_hpp
#include <cmath>
 #include <ctime>
 #include <iostream>
 #include <exception>
 #include <stdexcept>
#include <stdio.h>
#include <string>
const int seconds_in_hour=3600;
const int seconds_in_minute=60;
 class Exception1 {

 };
 class Exception2
 
 {
 private:
     std::string m_error;

 public:
     Exception2(std::string error);

     const char* getError();
 };
 class Exception3 :public std::logic_error {
 public:
     int min;
     int hours;

     Exception3(std::string str, float hours, float min) ;

 };
float toSeconds1(float hours, float minutes);
float toSeconds2(float hours, float minutes);
float toSeconds3(float hours, float minutes);
float toSeconds4(float hours, float minutes);
float toSeconds5(float hours, float minutes);
float toSeconds6(float hours, float minutes);

#endif 
