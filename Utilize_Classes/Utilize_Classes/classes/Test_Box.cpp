
/*****************************************************************************
 * File name		: Test_Box.cpp
 * Description		: Test the class Box's interface and implementation.
 * Creator			: XU ZAN
 * Creation date	: Fri.	Jan. 02, 2015
 * Copyright(C)		2015	All rights reserved.
 * 
 *****************************************************************************/

#include "Test_Box.h"
#include "Box.h"

#include <iostream>

void Test_Box_Class(void)
{
    Box thisbox(4, 7, 9);
    int volume = thisbox.volume();
    std::cout<<"The volume of this box is "<<volume<<std::endl;
    return;
}