/***************************************************************************************************
 * File name		: Static_Class_Member.cpp
 * Description		: 研究static類成員
 * Creator			: XU ZAN
 * Creation date	: Thur.	Dec. 11, 2014
 * Copyright(C)		2014	All rights reserved.
 * *
 ***************************************************************************************************/


#include "Static_Class_Member.h"

#if 0
	/**
     *  『注意 ：』
     * 
     * 類成員函數的實現，當要訪問類的static數據成員時，
     * 只能在類中實現， 而不能移到類外來實現。
     * 如下要實現類的成員函數 applyint()， 若按如下方式移到類外來實現，
     * 編譯器就會報錯。 只要把它留在類中來實現，才能編譯通過。
     * 
     * 請注意。  徐贊備註 2014-12-11
     * 
	 **/
	void Account::applyint(void)
	{
		amount += amount*interestRate;
	}

    /**
     * [Notice]
     * 'static' can only be specified inside the class definition.
     *  
     **/
    static double Account::rate(void)
    {
        return interestRate;
    }  
    
    void Account::rate(double newRate)
    {
        interestRate = newRate;
    }
    
    void Account::rate(double newRate)
    {
        interestRate = newRate;
    }
#endif
    
    
   

