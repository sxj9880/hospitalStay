#include "PatientAccount.h"
#include "Pharmacy.h"
#include "Surgery.h"
#include <iostream>
using namespace std;

//default constructor with zero day and zero total charges
PatientAccount::PatientAccount() {
	days = 0;
	totalCharges = 0;
}


void PatientAccount::setTotalCharges(float newTotalCharges) {
	totalCharges = newTotalCharges;
}

float PatientAccount::getTotalCharges() const {
	return totalCharges;
}

void PatientAccount::setDays(int newDays) {
	if (newDays < 0) {
		cout << "Please enter a positive number of day(s).";
	}
	else {
		days = newDays;
	};
}

int PatientAccount::getDays() const {
	return days;
}

//default constructor for pharmacy class
Pharmacy::Pharmacy() {
	antiBiotic = 1;
	antiNausea = 2;
	antiInflammatory = 3;
	lightPain = 4;
	strongPain = 5;
}

//default constructor for surgery class
Surgery::Surgery() {
	tonsillectomy = 1;
	foot = 2;
	knee = 3;
	shoulder = 4;
	appendectomy = 5;
}