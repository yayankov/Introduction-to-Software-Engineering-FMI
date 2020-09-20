/**
*
* Solution to homework assignment 2
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2018/2019
*
* @author Yanislav Yankov
* @idnumber 62357
* @task 2
* @compiler GCC
*
*/

#include<iostream>
#include<cstring>
using namespace std;
int lengtH(char B[101], char C[101], int& index);
int main()
{
    char B[101], C[101];
    cout << " B= ";
    cin.getline(B, 101); //zapisvame niz B
    cout << " C= ";
    cin.getline(C, 101);//zapisvame niz C
    int index = -1; //ako funkciqta ne vrusha stoinost na index, to toi izpolzva -1
    int length = lengtH(B, C, index); //length prisvoqva stoinostta koqto poluchavame vuv funkciqta
    cout << "Index: " << index << endl;
    cout << "Length: " << length << endl;
    return 0;
}

int lengtH(char B[101], char C[101], int& index)
{
    int i = 0, j, br = 0;
    int MaxC = 0;
    int length;
    int tempIdx;
    bool isSimilar = true;
    bool found = false;
    while (B[i] != '\0') //zapochva da razglejda elementite ot B dokato sstigne /0 posledniq element na nizovete
    {
        if (!isSimilar || !found) //ako ne e namereno i ne e syshoto chisloto
        {
            if (br>MaxC)
            {
                MaxC = br;
                index = tempIdx;
            }
            br = 0;
        }
        j = 1; //na dolniq element proverqvam za j=0 zatova pochvame ot j=1
        if (B[i] == C[0])
        {
            if (!found) { //ako ne e nameren C v B
                tempIdx = i;
            }
            isSimilar = true;
            while (C[j] != '\0')//minava prez celiq niz zapochvaiki ot j=1
            {
                i++; //vurtim  i i j ednovremenno za da ne proverqvame 2 puti dolniq cikul
                if (B[i] != C[j])
                {
                    isSimilar = false;
                    break;
                }
                j++;
            }
        }
        if (C[j] == '\0')//minava prez vsichki eleemtni ot C i kachva br s edinica
        {
            br++;
            found = true;
        }
        else if (br == 0)
        {
            found = false;
        }
        i++;
    }
    if (br>MaxC)//proverqva dali br e maksimalniq broi povtarenie na niza C v niza B i go pravi takuv ako ne e
    {
        MaxC = br;
        index = tempIdx;
    }
    length = MaxC * strlen(C);//duljinata na maksimalniq povtarqsh se niz C v niz B e proizvedenieeto na broq na niz C po duljinata na C
    return length;
}
