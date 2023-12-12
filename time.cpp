#include <iostream>

using namespace std;

class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
    Time() : hours(0), minutes(0), seconds(0) {}

    bool operator==(const Time& other) const {
        return (hours == other.hours && minutes == other.minutes && seconds == other.seconds);
    }

    friend istream& operator>>(istream& in, Time& time);
    friend ostream& operator<<(ostream& out, const Time& time);
};

istream& operator>>(istream& in, Time& time) {
    cout << "Enter hours: ";
    in >> time.hours;

    cout << "Enter minutes: ";
    in >> time.minutes;

    cout << "Enter seconds: ";
    in >> time.seconds;

    return in;
}

ostream& operator<<(ostream& out, const Time& time) {
    out << "Time: " << time.hours << " hours, " << time.minutes << " minutes, " << time.seconds << " seconds";
    return out;
}

int main() {
    Time time1, time2;

    cout << "Enter details for Time 1:\n";
    cin >> time1;

    cout << "Enter details for Time 2:\n";
    cin >> time2;

    cout << "\nTime 1: " << time1 << endl;
    cout << "Time 2: " << time2 << endl;

    if (time1 == time2) {
        cout << "Both times are the same.\n";
    } else {
        cout << "Times are different.\n";
    }

    return 0;
}
