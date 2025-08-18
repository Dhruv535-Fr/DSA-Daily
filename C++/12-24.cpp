#include <iostream>
#include <string>
#include <sstream>
using namespace std;

string timeConversion(string s) {
    int hour = stoi(s.substr(0, 2));  // Get the first 2 characters as hour
    string period = s.substr(8, 2);   // Get the AM/PM part (last 2 characters)
    stringstream result;

    // If AM and hour is 12, convert to 00 for midnight
    if (period == "AM" && hour == 12) {
        result << "00" << s.substr(2, 6);
    }
    // If PM and hour is 12, keep as 12 for noon
    else if (period == "PM" && hour == 12) {
        result << s.substr(0, 8);  // Simply return the original string
    }
    // Convert PM hours greater than 12 by adding 12
    else if (period == "PM") {
        result << (hour + 12) << s.substr(2, 6);
    }
    // For AM times that are not 12
    else {
        result << hour << s.substr(2, 6);
    }

    return result.str();
}

int main() {
    string time;
    cin >> time;

    cout << timeConversion(time) << endl;

    return 0;
}
