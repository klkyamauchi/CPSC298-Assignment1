/* 
Problem 2 (firecapacity): Write a program that determines whether a meeting room
 is in violation of fire law regulations regarding the maximum room capacity. 
 The program will read in the maximum room capacity and the number of people to 
 attend the meeting. If the number of peopleis less than or equal to the maximum 
 room capacity, the program announces that it is legal to hold the meeting and tells
  how many additional people may legally attend. If the number of people exceeds the 
  maximum room capacity, the program announces that the meeting cannot be held as 
  planned due to fire regulations and tells how many people must be excluded in order
  to meet the fire regulations.
*/ 

#include <iostream>

using namespace std;

int main(int argc, char **argv) {

int maxRoomCapacity; 
int numAttendees; 
int numAdditionalAttendees; 
int numExcluded;

cout << "Please enter the maximumm room capacity." << endl;
cin >> maxRoomCapacity; 

cout << "Please enter the number of people to attend the meeting." << endl;
cin >> numAttendees; 

if (numAttendees <= maxRoomCapacity){
    numAdditionalAttendees = maxRoomCapacity - numAttendees; 
    cout << "It is legal to hold the meeting. " << endl; 
    cout << numAdditionalAttendees << " additional attendees are allowed to attend the meeting." << endl;  
} else {
    numExcluded = numAttendees - maxRoomCapacity; 
    cout << "The number of people exceeds the maximum room occupancy and cannot be held due to fire regulations." << endl; 
    cout << "You must exclude " << numExcluded << " guests in order to meet fire regulations." << endl;
}

return 0; 
}