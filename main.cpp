/* 
 * File:   main.cpp
 * Author: bat
 *
 * Created on 17 Сентябрь 2015 г., 18:48
 */

#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;
int main(int argc, char *argv[]) {
    ifstream stream(argv[1]);
    stringstream ss;
    string line;
    short num, count, now;
    while (getline(stream, line)) {
        ss.clear();
        ss << line;
        
        ss >> now;
        count = 1;
        while (ss >> num) {
            if(now != num) {
                cout << count << ' ' << now << ' ';
                now = num;
                count = 1;
            }
            else {
                count++;
            }
        }
        cout << count << ' ' << now << endl;
    }
    return 0;
}