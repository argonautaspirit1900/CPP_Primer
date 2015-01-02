/*****************************************************************
 * File name		: Box.cpp
 * Description		: Implementation of the Box class
 * Creator			: XU ZAN
 * Creation date	: Fri.	Jan. 02, 2015
 * Copyright(C)		2015	All rights reserved.
 * 
 *****************************************************************/

#include "Box.h"

/* The constructor function
 */
Box::Box(int ht, int wd, int dp)
{
    height = ht;
    width = wd;
    depth = dp;
}

Box::~Box(void)
/* The destructor function
 */
{
    // Insert your code here.
    
}

int Box::volume(void)
/* Member function to compute the Box's volume.
 */
{
    return height*width*depth;
}