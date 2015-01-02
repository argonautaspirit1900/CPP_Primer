/*****************************************************************
 * File name		: Box.h
 * Description		: Declaration of the Box class
 * Creator			: XU ZAN
 * Creation date	: Fri.	Jan. 02, 2015
 * Copyright(C)		2015	All rights reserved.
 * 
 *****************************************************************/


#ifndef BOX_H
#define	BOX_H

	class Box;		// Box class declaration
	
	/* Box class definition :
	 */
	class Box
	{
	private:
		int height;
		int width;
		int depth;
	public:
		Box(int, int, int);
		~Box(void);
		int volume(void);
	};


#endif	/* BOX_H */

