#include <iostream>

using namespace std;


int main()
{

    int mark;


   
    cout << "enter your marks: ";
    cin >> mark;


    char grade = (mark >=90) ? 'a':
                (mark >=75) ? 'b':
                (mark >=60) ? 'c':
                (mark >=40) ? 'd':
                (mark >=33) ? 'e':'f';
                
        cout << "your Grade is "<< grade;


        switch(grade){
             case 'a' : cout << ". excellent work!" << endl;
              break;
              
             case 'b' : cout << ". very good.:" << endl;
              break;

             case 'c' : cout << ".good try." << endl;
              break;

             case 'd' : cout << ". you passed!" << endl;
              break;

             case 'e' : cout << ".  you failed." << endl;
              break;

              default:
              cout << "invalide grade";

        }

        
    if(grade =='a' || grade =='b' || grade =='c' || grade =='d' || grade =='e')
    {
        cout << "excelent for best performance the next level." <<endl;
    }

    else{
        cout << "Please try again ."<<endl;
    }
                
 
    return 0;
}