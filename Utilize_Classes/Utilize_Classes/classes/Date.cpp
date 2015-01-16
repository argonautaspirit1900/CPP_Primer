/***************************************************************
 * File name		: Date.cpp
 * Description	: Implement the class "Date"
 * Creator			: XU ZAN
 * Creation date	: Sat.	Jan 03, 2015
 * Copyright(C)	2015	All rights reserved.
 * 
 ***************************************************************/

#include <iostream>
#include <stdio.h>

#include "Date.h"

Date::Date(time_t now)
/* 轉換構造函數
 */
{
    std::tm *tim = std::localtime(&now);
    da = tim->tm_mday;
    mo = tim->tm_mon+1;
    yr = tim->tm_year+1900;
}

Date::Date(int m, int d, int y)
{
    mo = m;
    da = d;
    yr = y;
}

Date::~Date(void)
{
    // Do nothing
}

Date::operator long(void)
/* 成員轉換函數， 用關鍵字operator來修飾
 */
{
    static int dys[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    long days = yr-1900;
    days *= 365;
    days += yr/4;
    
    for (int i=0; i<mo-1; i++)
    {
        days += dys[i];
    }
    days += da;
    return days;
}

void Date::display(void)
{
    std::cout<<"Today is "
             <<yr<<"-"<<mo<<"-"<<da<<std::endl;
}

void Date::DisplayCalender(char *sCalender)
{
    std::sprintf(sCalender, "%d-%02d-%02d", yr, mo, da);
    return;
}