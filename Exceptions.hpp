
#ifndef Exceptions_hpp
#define Exceptions_hpp
 #include <exception>
 #include <stdexcept>
#include <string>
const int SECONDS_IN_HOUR=3600;
const int SECONDS_IN_MINUTE=60;
 class Exception1 {

 };
 class Exception2
 
 {
 private:
     std::string m_error;

 public:
     Exception2(const std::string& error);

     std::string getError();
 };
 class Exception3 :public std::logic_error {
 public:
     int min;
     int hours;

     Exception3(std::string str, int hours, int min) ;

 };
int toSeconds1(int hours, int minutes);
int toSeconds2(int hours, int minutes);
int toSeconds3(int hours, int minutes);
int toSeconds4(int hours, int minutes);
int toSeconds5(int hours, int minutes);
int toSeconds6(int hours, int minutes);

#endif 
