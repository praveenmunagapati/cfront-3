/*ident	"@(#)Symbol:Symbol_in.c	3.1" */
/******************************************************************************
*
* C++ Standard Components, Release 3.0.
*
* Copyright (c) 1991, 1992 AT&T and Unix System Laboratories, Inc.
* Copyright (c) 1988, 1989, 1990 AT&T.  All Rights Reserved.
*
* THIS IS UNPUBLISHED PROPRIETARY SOURCE CODE OF AT&T and Unix System
* Laboratories, Inc.  The copyright notice above does not evidence
* any actual or intended publication of such source code.
*
******************************************************************************/

#include <Symbol.h>
#include <iostream.h>

istream&
operator>>(istream& is, Symbol& s) {
	String tmp;
	is >> tmp;
	if (is) {
		s = Symbol(tmp);
	}
	return is;
}
