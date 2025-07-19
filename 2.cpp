#include <iostream>
using namespace std;

class Time {
private:
    int hours, minutes, seconds;
    static int timeCount;
    const int maxHours;
public:
    Time() : hours(0), minutes(0), seconds(0), maxHours(24) { timeCount++; }
    
    void input() {
        cout << "Enter hours: "; cin >> hours;
        cout << "Enter minutes: "; cin >> minutes;
        cout << "Enter seconds: "; cin >> seconds;

        if (hours >= maxHours || hours < 0 || minutes < 0 || minutes >= 60 || seconds < 0 || seconds >= 60) {
            cout << "Invalid time. Enter again." << endl;
            input();
        }
    }

    void output() const {
        cout << hours << ":" << minutes << ":" << seconds << endl;
    }

    int toSecond() const { return (hours * 3600 + minutes * 60 + seconds); }

    void timeDuration(Time a, Time b) {
        long temp = b.toSecond() - a.toSecond();
        if (temp < 0) { temp += maxHours * 3600; }
        hours = temp / 3600;
        temp %= 3600;
        minutes = temp / 60;
        temp %= 60;
        seconds = temp;
    }

    int getMinutes() const { return minutes; }

    static int getTimeCount() { return timeCount; }

    void compareTime(const Time& t) const {
        if (toSecond() > t.toSecond()) {
            cout << "Current object has a later time than the compared one." << endl;
        } else {
            cout << "Compared time is later or equal." << endl;
        }
    }
};

int Time::timeCount = 0;

int main() {
    Time t1, t2, duration;
    
    t1.input();
    t2.input();
    
    duration.timeDuration(t1, t2);
    
    t1.output();
    t2.output();
    duration.output();

    cout << "Total Time objects created: " << Time::getTimeCount() << endl;

    t1.compareTime(t2);

    return 0;
}