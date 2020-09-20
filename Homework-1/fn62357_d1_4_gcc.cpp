/**
*
* Solution to homework task 4
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2018/2019
*
* @author Yanislav Yankov
* @idnumber 62357
* @task 4
* @compiler GCC
*
*/
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
    int counter,INTmove;
    char STRmove;
    char mp1, mp2, mp3, mp4, mp5, mp6, mp7, mp8, mp9, mp10, mp11, mp12, mp13, mp14, mp15, mp16;
     while ( counter > 0)
        {
            cout  << mp1 << mp2 << mp3 << mp4 << endl;
            cout << mp5 << mp6 << mp7 << mp8 << endl;
            cout << mp9 << mp10 << mp11 << mp12 << endl;
            cout << mp13 << mp14 << mp15 << mp16 << endl;

            cout << "enter to move up, down, left, right, or exit: ";
            cin >> STRmove;

                    if ( STRmove == 'e')
                        {
                            INTmove = 0;
                        }

                          if (STRmove == 'd')
                        {
                            INTmove = 3;
                        }

                          if ( STRmove == 'l')
                        {
                            INTmove = 4;
                        }

                          if ( STRmove == 'up')
                        {
                            INTmove = 1;
                        }

                          if ( STRmove == 'r')
                        {
                            INTmove = 2;
                        }

                                switch(INTmove)
                                {
                                   case 0:

                                        cout << "exiting game" << endl;
                                        return 0;
                                        break;

                                    case 1:                             //up

                                    if(mp10 == '#')
                                    {
                                                mp6 = '"#"';
                                                mp7 = ' ';
                                                mp10 = ' ';
                                                mp11 = ' ';
                                                 system("CLS");
                                                break;
                                    }

                                     if(mp11 == '#')
                                    {
                                                mp6 = " ";
                                                mp7 = "#";
                                                mp10 = " ";
                                                mp11 = " ";
                                                 system("CLS");
                                                break;
                                    }


                                    else
                                                mp6 = mp6;
                                                mp7 = mp7;
                                                mp10 = mp10;
                                                mp11 = mp11;
                                                system("CLS");
                                                break;

                                    case 2:                              //right

                                    if(mp6 == "#")
                                    {
                                                mp6 = " ";
                                                mp7 = "#";
                                                mp10 = " ";
                                                mp11 = " ";
                                                 system("CLS");
                                                break;
                                    }

                                       if(mp10 == "#")
                                    {
                                                mp6 = " ";
                                                mp7 = " ";
                                                mp10 = " ";
                                                mp11 = "#";
                                                 system("CLS");
                                                break;
                                    }

                                    else
                                         mp6 = mp6;
                                                mp7 = mp7;
                                                mp10 = mp10;
                                                mp11 = mp11;
                                                system("CLS");
                                                break;

                                            case 3:    //down

                                          if(mp6 == "#")
                                          {
                                                mp6 = " ";
                                                mp7 = " ";
                                                mp10 = "#";
                                                mp11 = " ";
                                                system("CLS");
                                                break;
                                          }

                                              if(mp7 == "#")
                                          {
                                                mp6 = " ";
                                                mp7 = " ";
                                                mp10 = " ";
                                                mp11 = "#";
                                                system("CLS");
                                                break;
                                          }


                                    else
                                               mp6 = mp6;
                                                mp7 = mp7;
                                                mp10 = mp10;
                                                mp11 = mp11;
                                                system("CLS");
                                                break;


                                    case 4:  //left

                                    if(mp7 == "#")
                                    {
                                                mp6 = "#";
                                                mp7 = " ";
                                                mp10 = " ";
                                                mp11 = " ";
                                                system("CLS");
                                                break;
                                    }

                                       if(mp11 == "#")
                                    {
                                                mp6 = " ";
                                                mp7 = " ";
                                                mp10 = " ";
                                                mp11 = "#";
                                                system("CLS");
                                                break;

                                   }

                                    else
                                                mp6 = mp6;
                                                mp7 = mp7;
                                                mp10 = mp10;
                                                mp11 = mp11;
                                                system("CLS");
                                                break;

                                   default:
                                                mp6 = mp6;
                                                mp7 = mp7;
                                                mp10 = mp10;
                                                mp11 = mp11;
                                                system("CLS");
                                                break;
                                }
        }
}
    return 0;
}
