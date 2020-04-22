/** Ladies and gentlemen, the animation timing calculator! Yes, this is what happens when I get bored **/
#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>
#include <cctype>
#include <limits>

using namespace std;




int main()
{


    system("COLOR 4F"); // create basic UI because black and white might be boring
    int minno, fps, multiply;


    cout << "intTJ 2020\n" << endl;
    cout << "FrameCalc 0.9 beta-1\n" << endl;
    string restart = "yes";
    while (restart == "yes")
    {

        cout << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << endl;
        cout << "Enter FPS: "; // do it 
        cin >> fps; // get FPS 

        while (1)
        {
            if (cin.fail())
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << endl;
                cout << "ERROR: Invalid input. Please enter a valid integer." << endl;
                cout << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << endl;
                cout << "Enter FPS: "; // do it 
                cin >> fps;
            }
            if (!cin.fail())
                break;
        }


        cout << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << endl;
        cout << "Enter minutes: ";
        cin >> minno; // get user input
        cout << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << endl;

        while (1)
        {
            if (cin.fail())
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << endl;
                cout << "ERROR: Invalid input. Please enter a valid integer." << endl;
                cout << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << endl;
                cout << "Enter minutes: "; // do it 
                cin >> minno;
            }
            if (!cin.fail())
                break;
        }

        multiply = minno * 60 * fps; // assuming 24fps, do the user input * 60 seconds * 24 frames, i.e. 1 * multiply = 1440.

        cout << "Your animation will be approximately " << multiply << " frames long.\n";
        cout << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << endl;

        

  
}
    return 0;

}
