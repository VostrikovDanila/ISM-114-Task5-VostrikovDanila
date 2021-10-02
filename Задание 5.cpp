#include <cmath>
#include <ctime>
#include <iostream>
#include <exception>
#include <stdexcept>
using namespace std;
class Exception1 {

};
class Exception2
{
private:
    std::string m_error;

public:
    Exception2(std::string error)
        : m_error(error)
    {
    }

    const char* getError() { return m_error.c_str(); }
};
class Exception3 :public std::logic_error {
public:
    float min;
    float hours;
    Exception3(string str, float a, float b) :logic_error(str) {
        hours = a;
        min = b;
    }

};
float toSeconds1(float hours, float minutes) {
    return hours * 3600 + minutes * 60;
}
float toSeconds2(float hours, float minutes) {
    if (hours < 0 || minutes < 0)
        throw 123;
    return hours * 3600 + minutes * 60;
}
float toSeconds3(float hours, float minutes) {
    if (hours < 0 || minutes < 0)
        throw std::logic_error("minutes or hours are low than null");
    return hours * 3600 + minutes * 60;
}
float toSeconds4(float hours, float minutes) {
    if (hours < 0 || minutes < 0)
        throw Exception1();
    return hours * 3600 + minutes * 60;
}
float toSeconds5(float hours, float minutes) {
    if (hours < 0 || minutes < 0)
        throw Exception2("minutes or hours are low than null");
    return hours * 3600 + minutes * 60;
}
float toSeconds6(float hours, float minutes) {
    if (hours < 0 || minutes < 0)
        throw Exception3("minutes or hours are low than null", hours, minutes);
    return hours * 3600 + minutes * 60;
}
int main() {
    setlocale(LC_ALL, "Russian");
    float h, m;
    cout << "введите часы и минуты: " << endl;
    cin >> h >> m;
    cout << toSeconds1(h, m) << endl;
    try {
        cout << toSeconds2(h, m) << endl;
    }
    catch (int e) {
        cout << "exception " << e << endl;
    }
    try {
        cout << toSeconds3(h, m) << endl;
    }
    catch (std::logic_error e) {
        cout << "exception " << e.what() << endl;
    }
    try {
        cout << toSeconds4(h, m) << endl;
    }
    catch (Exception1 e) {
        cout << "exception " << endl;
    }
    try {
        cout << toSeconds5(h, m) << endl;
    }
    catch (Exception2 e) {
        cout << "exception " << e.getError() << endl;
    }
    try {
        cout << toSeconds6(h, m) << endl;
    }
    catch (Exception3 e) {
        cout << "exception " << e.what() << endl;
    }
    return 0;
}
