#pragma once
#include "Pharmacy.h"
#include "Surgery.h"
#ifndef PATIENTACCOUNT_H
#define PATIENTACCOUNT_H

class PatientAccount {
private:
	float totalCharges;
	int days;
	Pharmacy pharmacy;
	Surgery surgery;

public:
	PatientAccount();
	float getTotalCharges() const;
	void setTotalCharges(float);
	int getDays() const;
	void setDays(int);
};
#endif PATIENTACCOUNT_H