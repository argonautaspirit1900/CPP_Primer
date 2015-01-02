/***************************************************************
 * File name		: Date.cpp
 * Description		: Implement the class "Date"
 * Creator			: XU ZAN
 * Creation date	: Sat.	Jan 03, 2015
 * Copyright(C)		2015	All rights reserved.
 * 
 ***************************************************************/

#include <iostream>

#include "Date.h"

Date::Date(time_t now)
{
    std::tm *tim = std::localtime(&now);
    da = tim->tm_mday;
    mo = tim->tm_mon+1;
    yr = tim->tm_year+1900;
}

Date::~Date(void)
{
    // Do nothing
}

void Date::display(void)
{
    std::cout<<"Today is "
             <<yr<<"-"<<mo<<"-"<<da<<std::endl;
}