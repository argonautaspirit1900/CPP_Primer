/******************************************************************************
 * File name		: Date.cpp
 * Description		: 結構體的定義與實現.
 * Creator			: XU ZAN
 * Creation date	: Jan. 01, 2015
 * Copyright(C)		2015	All rights reserved.
 * 
 ******************************************************************************/

#include "Date.h"
#include <iostream>

void display(Date& dt)
/* Display a date in a standard format.
 */
{
    static char *mon[] = {"January",
                          "February",
                          "March",
                          "April",
                          "May",
                          "June",
                          "July",
                          "August",
                          "September",
                          "October",
                          "November",
                          "December"};
    std::cout<<mon[dt.month-1]<<" "<<dt.day<<", "<<dt.year<<std::endl;
    return;
}

void Date::display(void)
/* Implementation of the "Date" structure's 
 * display() member function.
 */
{
    static char *mon[] = {"January",
                          "February",
                          "March",
                          "April",
                          "May",
                          "June",
                          "July",
                          "August",
                          "September",
                          "October",
                          "November",
                          "December"};
    std::cout<<mon[month-1]<<" "<<day<<", "<<year<<std::endl;
    return;
}