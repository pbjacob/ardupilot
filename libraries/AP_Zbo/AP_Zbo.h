/// @file	AP_LandingGear.h
/// @brief	Landing gear control library
#pragma once

class AP_Zbo {
public:
    /// initialise state of landing gear
    bool init();

private:
    /// deploy - deploy the landing gear
    bool deploy();
};

void test_zbo_func(float testParam);