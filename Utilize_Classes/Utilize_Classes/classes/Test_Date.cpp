/***************************************************************************
 * File name		: Test_Date.cpp
 * Description		: Test the class Date's interface and implementation.
 * Creator			: XU ZAN
 * Creation date	: Sat.	Jan. 03, 2015
 * Copyright(C)		2015	All rightds reserved.
 * 
 ***************************************************************************/

#include "Test_Date.h"
#include "Date.h"

void Test_ConversionConstructorFunc(void)
{
    // Get today's calender and time
    std::time_t now = std::time(0);
    
    /* Construct a Date object by invoking
     * the conversion constructor function.
     */
    Date dt(now);
    // Display the date
    dt.display();
    
    return;
}