/*******************************************************************************************
 * File name		: Sales_item.h
 * Description		: Define the class "Sales_item".
 * Creator			: XU ZAN
 * Creation date	: Thur.	Nov. 27, 2014
 * Copyright(C)		2014	All rights reserved.
 *
 *******************************************************************************************/

#ifndef SALES_ITEM_H
#define SALES_ITEM_H

	#include <string>
	#include <iostream>

	#define EXPLICIT_CONSTRUCTOR


	class Sales_item
	{
	public:
		/* Default constructor needed to initialize members of build-in type
		 */
		Sales_item(void);
		/* default argument for book is the empty string.
		 * 
		 * Notice : when you set a default argument value in the constructor,
		 *			It will cause the an ambiguous calling.
		Sales_item(const std::string &book="") : isbn(book), units_sold(0), revenue(0.0) {}
		 */ 
		Sales_item(const std::string &book) : isbn(book), units_sold(0), revenue(0.0) {}
		
		#if defined (EXPLICIT_CONSTRUCTOR)
			explicit Sales_item(std::istream &is);
		#else
			Sales_item(std::istream &is);
		#endif

		// Sales_item() const;		// error.  const is not allowed on a constructor.
		
		/* 合成的默認構造函數 (Synthesized default constructor)
		 */
		
		/* Operations on Sales_item objects
		 */
		double avg_price(void) const;
		bool same_isbn(const Sales_item &rhs) const;
		
		void Print_Information(void);
	private:
		std::string isbn;
		unsigned int units_sold;
		double revenue;
	};

/*============================================================================*/

#endif	/*  SALES_ITEM_H  */