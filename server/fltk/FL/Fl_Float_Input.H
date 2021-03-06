//
// "$Id: Fl_Float_Input.H,v 1.1 2007-09-01 23:40:01 dcommander Exp $"
//
// Floating point input header file for the Fast Light Tool Kit (FLTK).
//
// Copyright 1998-2005 by Bill Spitzak and others.
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Library General Public
// License as published by the Free Software Foundation; either
// version 2 of the License, or (at your option) any later version.
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Library General Public License for more details.
//
// You should have received a copy of the GNU Library General Public
// License along with this library; if not, write to the Free Software
// Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301
// USA.
//
// Please report all bugs and problems on the following page:
//
//     http://www.fltk.org/str.php
//

#ifndef Fl_Float_Input_H
#define Fl_Float_Input_H

#include "Fl_Input.H"

class Fl_Float_Input : public Fl_Input {
public:
    Fl_Float_Input(int X,int Y,int W,int H,const char *l = 0)
	: Fl_Input(X,Y,W,H,l) {type(FL_FLOAT_INPUT);}
};

#endif

//
// End of "$Id: Fl_Float_Input.H,v 1.1 2007-09-01 23:40:01 dcommander Exp $".
//
