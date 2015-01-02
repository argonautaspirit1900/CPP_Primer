/************************************************************************
 * File name		: Time.cpp
 * Description		: Define the structure "Time".
 * Creator			: XU ZAN
 * Creation date	: Thur.	Jan. 01, 2015
 * Copyright(C)		2015	All rights reserved.
 ************************************************************************/

#include <iostream>
#include <ctime>
#include <iomanip>

#include "Time.h"

void Time::display()
{
    std::cout.fill('0');
    std::cout<<((hour>12)?(hour-12):((hour==0)?12:hour))<<':'
             <<std::setw(2)<<minute<<':'
             <<std::setw(2)<<second
             <<((hour<12)?"am":"pm");
    return;
}
