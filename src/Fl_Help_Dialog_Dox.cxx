//
// "$Id"
//
// Fl_Help_Dialog dialog for the Fast Light Tool Kit (FLTK).
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
// Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307
// USA.
//
// Please report all bugs and problems on the following page:
//
//     http://www.fltk.org/str.php
//

// Fl_Help_Dialog (autogenerated class) doxygen documentation placeholder

/** \class Fl_Help_Dialog
  The Fl_Help_Dialog widget displays a standard help dialog window
  using the Fl_Help_View widget.
  
  <P ALIGN=CENTER> \image html Fl_Help_Dialog.gif </P> 
  \image latex  Fl_Help_Dialog.eps "Fl_Help_Dialog" width=8cm
*/

/** \fn Fl_Help_Dialog::Fl_Help_Dialog()
  The constructor creates the dialog pictured above.*/

/** \fn Fl_Help_Dialog::~Fl_Help_Dialog()
  The destructor destroys the widget and frees all memory that has been
  allocated for the current file.
*/

/** \fn void Fl_Help_Dialog::hide()
  Hides the Fl_Help_Dialog window.*/

/** \fn void Fl_Help_Dialog::load(const char *f)
  Loads the specified HTML file into the Fl_Help_View widget.
  The filename can also contain a target name ("filename.html#target").
*/

/** \fn void Fl_Help_Dialog::position(int x, int y)
  Set the screen position of the dialog.*/

/** \fn void Fl_Help_Dialog::resize(int xx, int yy, int ww, int hh)
  Change the position and size of the dialog.*/

/** \fn void Fl_Help_Dialog::show()
  Shows the Fl_Help_Dialog window.*/

/** \fn void Fl_Help_Dialog::textsize(Fl_Fontsize s)
  Sets or gets the default text size for the help view.*/

/** \fn uchar Fl_Help_Dialog::textsize()
  Sets or gets the default text size for the help view.*/

/** \fn void Fl_Help_Dialog::topline(const char *n)
  Sets the top line in the Fl_Help_View widget to the named or
  numbered line.
*/

/** \fn void Fl_Help_Dialog::topline(int n)
  Sets the top line in the Fl_Help_View widget to the named or
  numbered line.
*/

/** \fn void Fl_Help_Dialog::value(const char *v)
  The first form sets the current buffer to the string provided and
  reformats the text. It also clears the history of the "back" and
  "forward" buttons. The second form returns the current buffer contents.
*/

/** \fn const char *Fl_Help_Dialog::value() const
  The first form sets the current buffer to the string provided and
  reformats the text. It also clears the history of the "back" and
  "forward" buttons. The second form returns the current buffer contents.
*/

/** \fn int Fl_Help_Dialog::visible()
  Returns 1 if the Fl_Help_Dialog window is visible.*/

/** \fn int Fl_Help_Dialog::x()
  Returns the position and size of the help dialog.*/

/** \fn int Fl_Help_Dialog::y()
  Returns the position and size of the help dialog.*/

/** \fn int Fl_Help_Dialog::w()
  Returns the position and size of the help dialog.*/

/** \fn int Fl_Help_Dialog::h()
  Returns the position and size of the help dialog.*/

/** \fn void Fl_Help_Dialog::show()
  Shows the main Help Dialog Window
  Delegates call to encapsulated window_ void Fl_Window::show() method */

/** \fn void Fl_Help_Dialog::show(int argc, char **argv)
  Shows the main Help Dialog Window
  Delegates call to encapsulated window_ void Fl_Window::show(int argc, char **argv) instance method */

/** \fn void Fl_Help_Dialog::textsize(Fl_Fontsize s)
  Sets the internal Fl_Help_View instance text size.
  Delegates call to encapsulated view_ void Fl_Help_View::textsize(Fl_Fontsize s) instance method */

//
// End of "$Id".
//
