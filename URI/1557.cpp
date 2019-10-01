#include "iostream"
#include <stdio.h>
#include <stack>
#include <vector>

using namespace std;

int main()
{

    std::vector<int> array;

    int x = 1;
    while (x != 0)
    {
        cin >> x;
        if (x != 0)
        {
            array.push_back(x);
        }
        else
        {
            break;
        }
    }
    cout << endl
         << array.size() << endl;
        


    for (int i = 0; i < array.size(); i++)
    {
        int x[array[i]][array[i]];
        x[0][0] = 1;

        for (int linha_1 = 0; linha_1 < array.size(); linha_1++)
        {
            for (int coluna = 0; coluna < array.size(); coluna++)
            {
                int coluna_aux = 1;
                x[linha_1][coluna_aux] = (x[linha_1][coluna] * 2);
                cout << x[linha_1][coluna]<< " ";
                coluna_aux++;
                if (coluna_aux == array.size())
                {
                    break;
                }
            }
            cout << endl;
        }
        if(i % 2 == 1)cout<<endl;
    }

    

    return 0;
}