#include <iostream>
using namespace std;

int main() {
    double speedLimit, driverSpeed;
    
    // Input speed limit and driver's speed
    cout << "Enter the speed limit (mph): ";
    cin >> speedLimit;

    cout << "Enter the driver's speed (mph): ";
    cin >> driverSpeed;

    // Check for speed violations
    if (driverSpeed <= speedLimit) {
        cout << "Driver is within the speed limit. No violation." << endl;
    } else {
        double overSpeed = driverSpeed - speedLimit;
        cout << "Driver is over the speed limit by " << overSpeed << " mph!" << endl;

        if (overSpeed > 10) {
            cout << "Severe violation! Issue a hefty fine." << endl;
        } else {
            cout << "Minor violation. Issue a warning or small fine." << endl;
        }
    }

    return 0;
}
