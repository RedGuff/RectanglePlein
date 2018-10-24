#include <iostream>

using namespace std;

int main()
{
    cout << "Quelles sont les dimentions de votre rectangle ?" << endl;
    cout << "Par exemple 5 par 3 donnnera :" << endl;
    cout << "#####" << endl;
    cout << "#####" << endl;
    cout << "#####" << endl;
    string tentativeString = "";
    bool inputOk = true;
    int dimHoriz=0;
    int dimVert=0;
            do
            {
                inputOk = true; // Pour autre demande éventuelle.
                try
                {
                    // cin >> dimHoriz;
                    getline(cin, tentativeString); // Pour éviter des bugs de non nombre.
                    dimHoriz = stoi(tentativeString);
                }
                catch (const std::invalid_argument& e)
                {
                    cerr << "Un nombre, svp !" << endl;
                    inputOk = false;
                }
            }
            while (inputOk == false);
        do
        {
            inputOk = true; // Pour autre demande éventuelle.
            try
            {
                // cin >> dimVert;
                getline(cin, tentativeString); // Pour éviter des bugs de non nombre.
                dimVert = stoi(tentativeString);
            }
            catch (const std::invalid_argument& e)
            {
                cerr << "Un nombre, svp !" << endl;
                inputOk = false;
            }
        }
        while (inputOk == false);

        for (int h = 0; h < dimVert; h++)
        {
            for (int v = 0; v < dimHoriz; v++)
            {
                cout << "#";
            }
            cout << "" << endl;
        }

    return 0;
}
