// CSC 134
// M2LAB
// Alexander
// 9/27/2026
// SNAKKKKKEEEE crate's machine
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Dimensions variables
    double width;
    double height;
    double length;

    // Input dimensions
    cout << "Enter the width of the box: ";
    cin >> width;
    cout << "Enter the length of the box: ";
    cin >> length;
    cout << "Enter the height of the box: ";
    cin >> height;

    // Variable declarations
    const double COST_PER_CUBIC_FOOT = 0.23;
    const double CHARGE_PER_CUBIC_FOOT = 0.50;
    double volume = width * height * length;
    double cost = volume * COST_PER_CUBIC_FOOT;
    double charge = volume * CHARGE_PER_CUBIC_FOOT;
    double profit = charge - cost;

    // OUTPUT
    cout << fixed << setprecision(2) << showpoint;
    cout << "Each crate is " << volume << " cubic feet" << endl;
    cout << "Each crate costs $" << cost << " to make." << endl;
    cout << "Each crate sells for $" << charge << "." << endl;
    cout << "Each crate makes a profit of $" << profit << "." << endl;
}
