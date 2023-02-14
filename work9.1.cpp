#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double initialSum, creditSum, interestRate, payment, remainingSum, interest;
    int monthCount = 0;

    cout << "Enter initial sum: ";
    cin >> initialSum;
    cout << "Enter credit sum: ";
    cin >> creditSum;
    cout << "Enter interest rate (in %): ";
    cin >> interestRate;

    remainingSum = creditSum;
    payment = (creditSum + creditSum * interestRate / 100) / 12;

    cout << "Month" << setw(15) << "Payment" << setw(15) << "Interest" << setw(15) << "Remaining Sum" << endl;

    while (remainingSum > 0) {
        monthCount++;
        interest = remainingSum * interestRate / 100 / 12;
        remainingSum -= payment - interest;
        cout << setw(5) << monthCount << setw(15) << payment << setw(15) << interest << setw(15) << remainingSum << endl;
    }

    return 0;
}

