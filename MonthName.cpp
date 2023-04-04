#include <iostream>
#include <cmath>

using namespace std;

string monthName(int num){
    string monthName;
    switch(num){
    case 1:
        monthName = "January";
        break;
    case 2:
        monthName = "February";
        break;
    case 3:
        monthName = "March";
        break;
    case 4:
        monthName = "April";
        break;
    case 5:
        monthName = "May";
        break;
    case 6:
        monthName = "June";
        break;
    case 7:
        monthName = "July";
        break;
    case 8:
        monthName = "August";
        break;
    case 9:
        monthName = "September";
        break;
    case 10:
        monthName = "October";
        break;
    case 11:
        monthName = "November";
        break;
    case 12:
        monthName = "December";
        break;
    default:
        monthName = "Invalid entry.";
    }

    return monthName;
}
int main()
{
    int num;
    cout << "Enter the month number: ";
    cin >> num;
    cout << "The month is " << monthName(num) << ".";
    return 0;
}
