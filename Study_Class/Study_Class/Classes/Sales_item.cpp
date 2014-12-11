/*******************************************************************************************
 * File name		: Sales_item.cpp
 * Description		: Implement the class "Sales_item".
 * Creator			: XU ZAN
 * Creation date	: Thur.	Nov. 27, 2014
 * Copyright(C)		2014	All rights reserved.
 *
 *******************************************************************************************/

#include "Sales_item.h"

Sales_item::Sales_item(void)
{
	units_sold = 0;
	revenue = 0.0;
}

#if 0
	Sales_item::Sales_item(const std::string& book)
	{
		isbn = book;
		units_sold = 0;
		revenue = 0.0;
	}
#endif

#if defined (EXPLICIT_CONSTRUCTOR)
    Sales_item::Sales_item(std::istream &is)
    /* NOTICE : 
     * "explicit" is allowed only on constructor declaration in class header.
     */
	{
        std::cout<<"Please enter the ISBN :"<<std::endl;
		is >> this->isbn;    // Use Sales_item input operator to read the number.
	}
#else
	Sales_item::Sales_item(std::istream&)
	{
		std::cout<<"Please enter the ISBN :"<<std::endl;
		std::cin>>isbn;
	}
#endif

double Sales_item::avg_price(void) const
{
	if (units_sold)
	{
		return revenue/units_sold;
	}
	else
	{
		return 0;
	}
}

bool Sales_item::same_isbn(const Sales_item &rhs) const
{
	return (isbn == rhs.isbn);
}

void Sales_item::Print_Information(void)
{
	std::cout<<"ISBN = "<<isbn<<std::endl;
	std::cout<<"Revenue = "<<revenue<<std::endl;
	std::cout<<"There have been "<<units_sold<<" books sold."<<std::endl;
	
	std::cout<<"\n"<<std::endl;
	return;
}


/*============================================================================*/




/*
 * END OF FILE <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
 */