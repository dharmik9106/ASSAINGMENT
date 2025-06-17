#include <iostream>

using namespace std;

int main()
{

    int r,c;
        cout << "enter the array's rows size: ";
        cin >> r;
        
        cout << "enter  the array's cols size: ";
        cin >> c;

        int arr[r][c];

        for (int i=0; i<r; i++)
        {
            for (int j=0; j<c; j++)
            {
                cout << "arr["<< i<< "][ "<< j<< "]";
                cin >> arr[i][j];
            }
            cout << endl;
        }
        cout << "The transpose matrix of an array: "<<endl;

        for (int i=0; i<r; i++){

            for (int j=0; j<c; j++){

                cout << arr[i][j];

            }
            cout << endl;

        }



    return 0;
}