/**
 *  @author Put your name here
 *  @date Put the date here
 *  @file h01.cpp
 */
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

string STUDENT = "vnguyen844";  // Add your Canvas login name
extern string ASSIGNMENT;

const int kMinsInHours {60};

/**
 * This program calculates time to help you manage the day better.
 * @return 0 for success.
 */
int run()
{
    /*  Processing section
     *  time <- time-hours x 60 + time-minutes
     *  duration <- dur-hours x 60 + dur-minutes
     *  after <- time + duration
     *  before <- time - duration
     *  after-hours<- after / 60
     *  after-minutes <- after % 60
     *  before-hours <- before / 60
     *  before-minutes <- before % 60
     *  Output section
     *  print before and after in hh:mm format
     */
    int timeHour, timeMin, durationHour, durationMin, time, duration, after, before, afterHours, afterMins, beforeHours, beforeMins;
    int sumHours, sumMins, diffHours, diffMins;
    char discard; // to discard the colon

    // TODO: title
    cout << "\n" << STUDENT << "-" << ASSIGNMENT << ": ";
    cout << "⏳ Time on My Hands 🖐" << endl;
    cout << string(50, '-') << endl;

    cout << "\nGive me a time (such as 3:57) and a duration" << endl;
    cout << "(such as 1:05), and I'll tell you the sum " << endl;
    cout << "(that is, the time that follows the given time " << endl;
    cout << "by the given duration), and difference (the time" << endl;
    cout << "that precedes the given time by that duration).\n" << endl;

    // TODO: ask user for time and duration
    cout << setw(10) << "Time: ";
    cin >> timeHour >> discard >> timeMin;

    cout << setw(14) << "Duration: ";
    cin >> durationHour >> discard >> durationMin;

    time = (timeHour * kMinsInHours) + timeMin;
    duration  = (durationHour * kMinsInHours) + durationMin;
    after = time + duration;
    before = time - duration + 1440;
    afterHours = (11 +  after / kMinsInHours) % 12 + 1;
    afterMins = after % kMinsInHours;
    beforeHours = (11 + before / kMinsInHours) % 12 + 1;
    beforeMins = before % kMinsInHours;


    cout << setfill('0');
    cout << "\n" << durationHour << ":" << setw(2) << durationMin <<
    " hours after, and before, " <<
    timeHour << ":" << setw(2) << timeMin << " is [" <<
    afterHours << ":" <<  setw(2) << afterMins << ", " << beforeHours << ":" <<  setw(2) << beforeMins << "]\n" << endl;


    return 0;
}