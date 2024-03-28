#include <iostream>
using namespace std;

// Function to convert time from 24-hour format to 12-hour format
string convert_to_12_hour_format(string time) {
    // Extract hour and minute from the input time
    int hour = stoi(time.substr(0, 2));
    int minute = stoi(time.substr(3, 2));

    // Initialize a string to store the period (AM or PM)
    string period;

    // Adjust the hour and period
    if (hour >= 12) {
        period = "PM";
        // Convert hour to 12-hour format (subtract 12 if it's greater than 12)
        if (hour > 12)
            hour -= 12;
    } else {
        period = "AM";
        // Convert hour 0 to 12
        if (hour == 0)
            hour = 12;
    }

    // Format the hour and minute with leading zeroes if necessary
    string hour_str = (hour < 10) ? "0" + to_string(hour) : to_string(hour);
    string minute_str = (minute < 10) ? "0" + to_string(minute) : to_string(minute);

    // Construct and return the 12-hour format time string
    return hour_str + ":" + minute_str + " " + period;
}

int main() {
    int t;
    cin >> t; // Read the number of test cases

    // Iterate over each test case
    while (t--) {
        string time;
        cin >> time; // Read the time in 24-hour format
        // Convert the time to 12-hour format and output
        cout << convert_to_12_hour_format(time) << endl;
    }

    return 0;
}
