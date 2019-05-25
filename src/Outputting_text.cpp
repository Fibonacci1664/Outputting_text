//============================================================================
// Name        : Outputting_text.cpp
// Author      : D_Green
// Version     :
// Copyright   : D-Green
// Description : Outputting text in C++, Ansi-style
//============================================================================

#include <iostream>

using namespace std;

int main()
{
	cout << "Starting program..." << flush; // flush tells OS output the text and clear the buffer but doesnt provide a carriage return.

	cout << "This is some text" << endl; // cout means character output.

	cout << "This is some more text" << endl; // endl clear the buffer the same as flush but also provides a carriage return.

	cout << "This is even more text" <<"\n";  // \n as with normal formatting is simply a way of providing a new line, and essentially does the same as endl, providing a carriage return

	cout << "This is getting silly now" << endl;

	cout << "This sentence is split up" << " here, " << "here " << "and here" << endl;

	return 0;
}
