#include <iostream>
using namespace std;

int main()
{
    int i, j, k, n = 7;

    for (i=1; i<=n; i++)
    {
        for (j=0; j<i-1; j++)
        {
            cout << " ";
        }
        for (j=i; j<=n; j++){
            cout << j << " ";
        }
        cout << endl;
    }


    for (i=1; i<7; i++)
    {
        for (j=i; j<6; j++)
        {
            cout << " ";
        }
        for(j=7-i; j<=7; j++)
        {
            cout << j << " ";
        }
        cout << endl;

    }

    return 0;
}

/*

1 2 3 4 5 6 7
 2 3 4 5 6 7
  3 4 5 6 7
   4 5 6 7
    5 6 7
     6 7
      7
     6 7
    5 6 7
   4 5 6 7
  3 4 5 6 7
 2 3 4 5 6 7
1 2 3 4 5 6 7


*/





