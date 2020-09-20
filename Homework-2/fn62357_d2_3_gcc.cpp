/**
*
* Solution to homework assignment 2
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2018/2019
*
* @author Yanislav Yankov
* @idnumber 62357
* @task 3
* @compiler GCC
*
*/

#include <iostream>
using namespace std;
int findHowManyDigits(int m)  // funkciq namirasha broq na cifrite na M
{
    int br = 0;
    while (m>0)
    {
        m /= 10;
        br++;
    }
    return br;
}
void otdelqneCifri(int arrM[], int m, int length)
{
    for (int i = length - 1 ; i >= 0; i--)   // от дължината -1, защото програмистите броят от нула
    {
        arrM[i] = m % 10; // взимаме последната цифра
        m /= 10; // и я махаме за да не я вземем пак
    }
}
int countt(int arrMatrica[6][6], int m)
{
    int counter = 0;
    int br2;
    bool isSimple = true;
    int length = findHowManyDigits(m);
    int arrM[length];
    otdelqneCifri(arrM, m, length);

    for (int i = 0; i < 6; i++)//proverka za prosti chisla, ako se vyvejda matricata
    {
        for (int j = 0; j < 6; j++)
        {
            if (arrMatrica[i][j] > 9 || arrMatrica[i][j] < 0)
            {
                isSimple = false;
                break;
            }
        }
    }
    if (isSimple)
    {
        for (int i = 0; i < 6; i++)
        {
            for (int j = 0; j < 6; j++)
            {
                br2 = 0;//za vsqko chislo da se zanulqva
                if (length >= 2)
                {
                    for (int k = 0; k<length; k++)
                    {
                        if (arrM[k] == arrMatrica[i + k][j]) //koloni napred
                        {
                            br2++;
                            continue;
                        }
                        if (arrM[k] == arrMatrica[i - k][j]) //koloni nazad
                        {
                            br2++;
                            continue;
                        }
                        if (arrM[k] == arrMatrica[i][j - k]) //redove nazad
                        {
                            br2++;
                            continue;
                        }
                        if (arrM[k] == arrMatrica[i][j+k]) //redove napred
                        {
                            br2++;
                        }
                    }
                    if (br2%length==0 && br2>=length)
                    {
                        counter++;
                    }
                }
                else
                {
                    if (arrM[0] == arrMatrica[i][j])
                    {
                        counter++;
                    }
                }
            }

        }
        return counter;
    }
}
int main()
{
    int b[6][6] =
    {
        { 5, 4, 3, 8, 0, 6 },
        { 9, 4, 5, 1, 0, 2 },
        { 8, 5, 8, 0, 6, 1 },
        { 0, 9, 6, 8, 4, 2 },
        { 6, 1, 0, 2, 6, 1 },
        { 2, 1, 8, 4, 2, 6 }
    };
    int M;
    int CounteR;
    cout << " 5 4 3 8 0 6 \n 9 4 5 1 0 2 \n 8 5 8 0 6 1 \n 0 9 6 8 4 2 \n 6 1 0 2 6 1 \n 2 1 8 4 2 6" << endl;
    cout << endl << " M = ";
    cin >> M;
    if(cin.fail())//proverka na M
    {
        cout<<"Error!"<<endl;
        return 0;
    }
    CounteR = countt(b, M);
    cout <<CounteR;
    return 0;
}
