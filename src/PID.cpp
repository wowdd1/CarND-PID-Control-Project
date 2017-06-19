#include "PID.h"
#include <iostream>

using namespace std;

/*
* the PID class.
*/

PID::PID() {}

PID::~PID() {}

double prev_cte = 0;
double int_cte = 0;
double diff_cte = 0;


void PID::Init(double Kp_inp, double Ki_inp, double Kd_inp) {
    Kp = Kp_inp;
    Ki = Ki_inp;
    Kd = Kd_inp;
}

void PID::UpdateError(double cte) {
    diff_cte = cte - prev_cte;
    prev_cte = cte;
    int_cte += cte; // add current local cte to the int cte which is set to 0.
}

double PID::TotalError() {
    return -Kp*prev_cte-Kd*diff_cte-Ki*int_cte;
}

