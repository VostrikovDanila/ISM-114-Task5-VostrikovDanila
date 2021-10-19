
#include "Exceptions.hpp"
using namespace std;
Exception2::Exception2(const std::string& error)

    : m_error(error)
{
}

std::string Exception2::getError() { return m_error; }
Exception3::Exception3(std::string str, int hours, int min) :logic_error(str) {

    this->hours = hours;
    this->min = min;
}
int toSeconds1(int hours, int minutes) {
    return hours * SECONDS_IN_HOUR + minutes * SECONDS_IN_MINUTE;

}
int toSeconds2(int hours, int minutes) {
    if (hours < 0 || minutes < 0)
        throw 123;
    return hours * SECONDS_IN_HOUR + minutes * SECONDS_IN_MINUTE;
}
int toSeconds3(int hours, int minutes) {
    if (hours < 0 || minutes < 0)
        throw std::logic_error("minutes or hours are low than null");
    return hours * SECONDS_IN_HOUR + minutes * SECONDS_IN_MINUTE;
}
int toSeconds4(int hours, int minutes) {
    if (hours < 0 || minutes < 0)
        throw Exception1();
    return hours * SECONDS_IN_HOUR + minutes * SECONDS_IN_MINUTE;
}
int toSeconds5(int hours, int minutes) {
    if (hours < 0 || minutes < 0)
        throw Exception2("minutes or hours are low than null");
    return hours * SECONDS_IN_HOUR + minutes * SECONDS_IN_MINUTE;
}
int toSeconds6(int hours, int minutes) {
    if (hours < 0 || minutes < 0)
        throw Exception3("minutes or hours are low than null", hours, minutes);
    return hours * SECONDS_IN_HOUR + minutes * SECONDS_IN_MINUTE;
}
