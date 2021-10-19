#include "Exceptions.hpp"
#include <iostream>
 using namespace std;

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
