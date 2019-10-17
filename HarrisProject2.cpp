//***********************************************************************************
// Name: Alec Harris
// Course: CS 155 - Computer Science I
// Semester: Fall 2019
// Assignment: Project 2 "Save the Date"
// Due date: October 1, 2019
// description: This project uses math to convert a YYYYMMDD date into a MM/DD/YY format
//***********************************************************************************

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int date, day, month, year;
	
	cout << "Type a date in YYYYMMDD format to be converted: ";
	cin >> date;
	
	
	//This keeps the user from inputing an invalid number.
	if (date < 10000000 || date >99999999){
		cout << "Invalid input. Please use a valid date in YYYYMMDD format.";
	}
	else{
		
		month = (date / 100) % 100;
		day = (date % 100);
		year = (date / 10000);
		
        //Month validation.
		if (month > 12 || month < 1){
			cout <<"The month you entered is invalid. Please use a valid date in YYYYMMDD format.";
		}
		//Day validation.
		else if (day > 31 || day < 1){
			cout <<"The day you entered is invalid. Please use a valid date in YYYYMMDD format.";
		}
		//Output statement.
		else{
			cout << "Your date " << date << " converted into MM/DD/YY is:" << endl;
			cout << month << "/" << day << "/" << year << endl;
		}
	}
	
	
	return 0;
	
}
