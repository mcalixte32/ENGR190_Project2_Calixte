/*
Project: Electrical Energy Calculator

Partners:
Mikeson Calixte
Grant Lee Steele

Contributions:
Mikeson Calixte: Completed the documentation, formulas, citations,
calculations, and output formatting.
Grant Lee Steele: partner contribution will be added after colaboration

Variable Definitions:
I = electric current in amperes (A)
R = electrical resistance in ohms
t = operating time in seconds (s)
V = voltage in volts (V)
P = power in watts (W)
E = energy in joules (J)
Q = electric charge in coulombs (C)

Formulas:
V = I * R
P = I * I * R
E = P * t
Energy in Wh = E / 3600
Energy in kWh = Energy in Wh / 1000
Cost = Energy in kWh * electricity rate
Q = I * t

Sources:
OpenStax, "Electrical Energy and Power,"
https://openstax.org/books/university-physics-volume-2/pages/9-5-electrical-energy-and-power
Accessed September 17, 2026.

National Institute of Standards and Technology,
"NIST Guide to the SI, Appendix B.9,"
https://www.nist.gov/pml/special-publication-811/nist-guide-si-appendix-b9
Accessed September 17, 2026.

Sample Run:
Current: 5 A
Resistance: 10 ohms
Time: 3600 seconds
Electricity rate: $0.15 per kWh

Voltage: 50.00 V
Power: 250.00 W
Energy: 900000.00 J
Energy: 250.00 Wh
Energy: 0.25 kWh
Cost: $0.04
Charge: 18000.00 C
*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    // Named conversion constants
    const double SECONDS_PER_HOUR = 3600.0;
    const double WATTS_PER_KILOWATT = 1000.0;

    // User inputs
    double current;
    double resistance;
    double time;
    double electricityRate;

    cout << "Electrical Energy Calculator\n\n";

    cout << "Enter current in amperes (A): ";
    cin >> current;

    cout << "Enter resistance in ohms: ";
    cin >> resistance;

    cout << "Enter operating time in seconds (s): ";
    cin >> time;

    cout << "Enter electricity rate in dollars per kWh: ";
    cin >> electricityRate;

    // Calculate voltage using Ohm's law
    double voltage = current * resistance;

    // Calculate electrical power
    double power = current * current * resistance;

    // Calculate energy by reusing the power result
    double energyJoules = power * time;

    // Convert joules to watt-hours by reusing the energy result
    double energyWh = energyJoules / SECONDS_PER_HOUR;

    // Convert watt-hours to kilowatt-hours
    double energyKWh = energyWh / WATTS_PER_KILOWATT;

    // Calculate cost by reusing the kilowatt-hour result
    double cost = energyKWh * electricityRate;

    // Calculate electric charge
    double charge = current * time;

    cout << fixed << setprecision(2);

    cout << "\nELECTRICAL ENERGY REPORT\n";
    cout << left << setw(28) << "Quantity"
         << right << setw(15) << "Value"
         << setw(15) << "Unit" << endl;

    cout << string(58, '-') << endl;

    // Echo the original inputs
    cout << left << setw(28) << "Input: Current"
         << right << setw(15) << current
         << setw(15) << "A" << endl;

    cout << left << setw(28) << "Input: Resistance"
         << right << setw(15) << resistance
         << setw(15) << "ohms" << endl;

    cout << left << setw(28) << "Input: Operating time"
         << right << setw(15) << time
         << setw(15) << "s" << endl;

    cout << left << setw(28) << "Input: Electricity rate"
         << right << setw(15) << electricityRate
         << setw(15) << "$/kWh" << endl;

    cout << string(58, '-') << endl;

    // Display all calculated results
    cout << left << setw(28) << "Voltage"
         << right << setw(15) << voltage
         << setw(15) << "V" << endl;

    cout << left << setw(28) << "Power"
         << right << setw(15) << power
         << setw(15) << "W" << endl;

    cout << left << setw(28) << "Energy"
         << right << setw(15) << energyJoules
         << setw(15) << "J" << endl;

    cout << left << setw(28) << "Energy"
         << right << setw(15) << energyWh
         << setw(15) << "Wh" << endl;

    cout << left << setw(28) << "Energy"
         << right << setw(15) << energyKWh
         << setw(15) << "kWh" << endl;

    cout << left << setw(28) << "Electricity cost"
         << right << setw(15) << cost
         << setw(15) << "dollars" << endl;

    cout << left << setw(28) << "Electric charge"
         << right << setw(15) << charge
         << setw(15) << "C" << endl;

    return 0;
}
