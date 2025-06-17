#include <iostream>

using namespace std;

 int main()
{
    int r, c;
     
    cout << "Enter the array's row size: ";
    cin >> r;

    cout << "Enter the array's cols size: ";
    cin >> c;

    int arr[r][c];

            for (int i=0; i<r; i++)
            {
                for (int j=0; j<c; j++)
                {
                    cout << "arr["<< i << "]" "["<< j << "]";
                    cin >> arr [i][j];

                }
                cout << endl;

            }

        int largest = arr[0][0];


            for (int i=0; i<r; i++)
            {
                for (int j=0; j<c; j++)
                {
                    if(arr[i][j] > largest)
                    {
                        largest= arr[i][j];

                    }
                }
            }
            cout << "The largest elements is: "<< largest <<endl;
        
    return 0;

}