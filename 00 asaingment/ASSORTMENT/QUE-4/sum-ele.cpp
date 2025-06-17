#include<iostream>
using namespace std;

int main(){
     
	 int R, C;
	
	cout << "Enter the array's row size:";
	cin >> R;
	cout << "Enter the array's cols size:";
	cin >> C;
	
	
    int arr[R][C];

	for(int i=0 ;i<R ;i++){
		
		for(int j=0 ;j<C ;j++)
        {
			cout << "Arr["<< i << "][ "<< j << "]:";
			cin >> arr[i][j]; 
		}
		cout << endl;	
	}
	
	int rows;
    cout << "Enter the row number : (0 to " << R-1 << "): ";
    cin >> rows;

    if (rows >= 0 && rows < R) {
        int Sum = 0;
        cout << "Elements of row " << rows << ": ";
        for (int j = 0; j < C; j++)
         {
            cout << arr[rows][j] << " ,";
            Sum += arr[rows][j];
        }
        cout << endl << "Sum of row " << rows << ": " << Sum << endl;
    }
    else 
    {
     cout << "Invalid row number!" << endl;
    }

  
    int col;
    cout << "Enter the column number : (0 to " << C-1 << "): ";
    cin >> col;

    if (col >= 0 && col < C) {
        int Sum = 0;
        cout << "Elements of column " << col << ": ";
        for (int i = 0; i < R; i++) 
        {
            cout << arr[i][col] << " ,";
            Sum += arr[i][col];
        }
        cout << endl << "Sum of column " << col << ": " << Sum << endl;
    } 
    else 
    {
        cout << "Invalid column number!" << endl;
    }
    return 0;
}