
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
    /* Construct 2 Box objects, 
     * one with initializers, and one without
     */
    Box thisbox(4, 7, 9);
    Box defaultbox;
    int volume = thisbox.volume();
    
    /* Get and display the 2 objects' volumes
     */
    std::cout<<"The volume of this box is "<<volume<<std::endl;
    std::cout<<"The volume of default box is "<<defaultbox.volume()<<std::endl;
    return;
}