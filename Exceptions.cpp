
#include "Exceptions.hpp"
using namespace std;
Exception2::Exception2(std::string error)

    : m_error(error)
{
}

const char* Exception2::getError() { return m_error.c_str(); }
Exception3::Exception3(std::string str, float hours, float min) :logic_error(str) {

    this->hours = hours;
    this->min = min;
}
float toSeconds1(float hours, float minutes) {
    return hours * seconds_in_hour + minutes * seconds_in_minute;

}
float toSeconds2(float hours, float minutes) {
    if (hours < 0 || minutes < 0)
        throw 123;
    return hours * seconds_in_hour + minutes * seconds_in_minute;
}
float toSeconds3(float hours, float minutes) {
    if (hours < 0 || minutes < 0)
        throw std::logic_error("minutes or hours are low than null");
    return hours * seconds_in_hour + minutes * seconds_in_minute;
}
float toSeconds4(float hours, float minutes) {
    if (hours < 0 || minutes < 0)
        throw Exception1();
    return hours * seconds_in_hour + minutes * seconds_in_minute;
}
float toSeconds5(float hours, float minutes) {
    if (hours < 0 || minutes < 0)
        throw Exception2("minutes or hours are low than null");
    return hours * seconds_in_hour + minutes * seconds_in_minute;
}
float toSeconds6(float hours, float minutes) {
    if (hours < 0 || minutes < 0)
        throw Exception3("minutes or hours are low than null", hours, minutes);
    return hours * seconds_in_hour + minutes * seconds_in_minute;
}
