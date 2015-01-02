/***************************************************************************
 * File name		: Test.cpp
 * Description		: Design and perform the test cases.
 * Creator			: XU ZAN
 * Creation date	: Thur.	Jan. 01, 2015
 * Copyright(C)		2015	All rights reserved.
 * 
 ***************************************************************************/


#include <iostream>
#include <ctime>

#include "Test.h"
#include "Date.h"
#include "Time.h"

void General_Test_Cases(void)
{
    TestCase_Date_Structure();
    TestCase_Date_StructureMemberFunction();
    
    TestCase_DiffStructsWithSameMemberFuncName();
    return;
}


void TestCase_Date_Structure(void)
{
    Date birthday = {4, 6, 2011};
    std::cout<<"Alan's date of birth is ";
    display(birthday);
    return;
}

void TestCase_Date_StructureMemberFunction(void)
{
    Date birthday = {5, 12, 2012};
    std::cout<<"Benedicte's date of birth is ";
    birthday.display();
    
    return;
}

void TestCase_DiffStructsWithSameMemberFuncName(void)
/* 測試驗證不同的結構體，卻含有同名的成員函數。
 */
{
    /* Get the current time from OS. */
    std::time_t curtime = time(0);
    std::tm tim = *std::localtime(&curtime);
    /* Define Time and Date structures */
    Time now;
    Date today;
    
    /* Initialize the structures */
    now.hour = tim.tm_hour;
    now.minute = tim.tm_min;
    now.second = tim.tm_sec;
    
    today.month = tim.tm_mon;
    today.day = tim.tm_mday;
    today.year = tim.tm_year+1900;
    
    /* Display the current date and time */
    std::cout<<"At the tone it will be ";
    now.display();
    std::cout<<" on ";
    today.display();
    std::cout<<'\a'<<std::endl;
    
    return;
}