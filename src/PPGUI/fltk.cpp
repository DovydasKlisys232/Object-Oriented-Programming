/*
 * FLTK Hello World!
 * To build: g++ -o hellofltk.exe hellofltk.cpp -lfltk
 *
 * 28/3/2025 GB Initial revision from https://www.fltk.org/
*/

//These headers give you access to FLTK's core functionality, window management, and basic widgets.
#include <FL/Fl.H> //FLTK core library
#include <FL/Fl_Window.H>  //Window class
#include <FL/Fl_Box.H> //Box/Label widget class


int main (int argc, char ** argv)
{
    Fl_Window *window;
    Fl_Box *box;

    window = new Fl_Window (300, 180); //creates window that is 300px wide, 180px height

    box = new Fl_Box (20, 40, 260, 100, "Hello World!"); //creates box at position(20,40) 260px width, 100px height displaying "Hello World!" 
                                                         //Parameters: (x, y, width, height, label)

    box->box (FL_UP_BOX); //Gives box a 3D appearence using FL_UP_BOX
    box->labelsize (36); //font-size: 36px
    box->labelfont (FL_BOLD+FL_ITALIC); //font style
    box->labeltype (FL_SHADOW_LABEL); //Drop shadow added to text
    window->resizable(window); //can change size of window
    window->label("My First GUI"); //title of app
    window->end (); //Finishes adding widgets to window
    window->show (argc, argv); //displays the window

    return(Fl::run()); // Starts FLTK's main event handler
}

/*
    widgets: self contained UI elements, they make up the apps visuals.
    Types of widgets: FL_Window: holds other widgets/container, FL_box: label/display text, FL_Button: clickable interface,
        FL_Input: enter text, FL_Slider: adjustable value selector, FL_Menu_Bar: Dropdown selection
*/