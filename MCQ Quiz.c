/*Shoeb Mahmud Joy
ID: 192-1513045
Daffodil International University*/

#include<stdio.h>
#include<conio.h>
#include<stdbool.h>
#include<dos.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>
#include<ctype.h>
#include<string.h>

int InternationalQ()
{
    int q=0;
    int wr=0;
    int rgt=0;
    bool ansd[20];
    for(int i=1; i<=20; i++)
    {
        ansd[i] = false;
    }
play:
    system("cls");
    //system("color E0");
    if(wr<3)
    {
        while(q<10)
        {
            char ans;
            srand(time(0));
            int num = 1+rand()%20;
            switch(num)
            {
            case 1:
                if(ansd[num] == false)
                {
                    printf("\n\nWhich is the largest continent in the world?");
                    printf("\n\nA.Europe\tB.Africa\n\nC.Australia\tD.Asia\n\n");
                    if (toupper(getch())=='D')
                    {
                        printf("\n\nCorrect!!!");
                        q++;
                        rgt++;
                        ansd[num] = true;
                        getch();
                        goto play;
                        getch();
                    }
                    else
                    {
                        Beep(1000, 500);
                        printf("\n\nWrong!!! The correct answer is D.Asia;\n");
                        getch();
                        wr++;
                        q++;
                        ansd[num] = true;
                        goto play;
                    }
                }
                else
                    goto play;
            case 2:
                if(ansd[num] == false)
                {
                    printf("\n\nHow many UN member countries?");
                    printf("\n\nA.193\tB.191\n\nC.195\tD.197\n\n");
                    if (toupper(getch())=='A')
                    {
                        printf("\n\nCorrect!!!");
                        q++;
                        rgt++;
                        ansd[num] = true;
                        getch();
                        goto play;
                        getch();
                    }
                    else
                    {
                        Beep(1000, 500);
                        printf("\n\nWrong!!! The correct answer is A.193;\n");
                        getch();
                        wr++;
                        q++;
                        ansd[num] = true;
                        goto play;
                    }

                }
                else
                    goto play;
            case 3:
                if(ansd[num] == false)
                {
                    printf("\n\nWhich is the largest country in the world?");
                    printf("\n\nA.Canada\tB.China\n\nC.Russia\tD.India\n\n");
                    if (toupper(getch())=='C')
                    {
                        printf("\n\nCorrect!!!");
                        q++;
                        rgt++;
                        ansd[num] = true;
                        getch();
                        goto play;
                        getch();
                    }
                    else
                    {
                        Beep(1000, 500);
                        printf("\n\nWrong!!! The correct answer is C.Russia;\n");
                        getch();
                        wr++;
                        q++;
                        ansd[num] = true;
                        goto play;
                    }

                }
                else
                    goto play;
            case 4:
                if(ansd[num] == false)
                {
                    printf("\n\nWhich is the deepest lake in the world?");
                    printf("\n\nA.Lake Baikal\t\tB.Sarez Lake\n\nC.Lake Tanganyika\tD.Lake Tahoe\n\n");
                    if (toupper(getch())=='A')
                    {
                        printf("\n\nCorrect!!!");
                        q++;
                        rgt++;
                        ansd[num] = true;
                        getch();
                        goto play;
                        getch();
                    }
                    else
                    {
                        Beep(1000, 500);
                        printf("\n\nWrong!!! The correct answer is A.Lake Baikal;\n");
                        getch();
                        wr++;
                        q++;
                        ansd[num] = true;
                        goto play;
                    }

                }
                else
                    goto play;
            case 5:
                if(ansd[num] == false)
                {
                    printf("\n\nHow many provinces are there in India?");
                    printf("\n\nA.25\tB.27\n\nC.31\tD.29\n\n");
                    if (toupper(getch())=='D')
                    {
                        printf("\n\nCorrect!!!");
                        q++;
                        rgt++;
                        ansd[num] = true;
                        getch();
                        goto play;
                        getch();
                    }
                    else
                    {
                        Beep(1000, 500);
                        printf("\n\nWrong!!! The correct answer is D.29;\n");
                        getch();
                        wr++;
                        q++;
                        ansd[num] = true;
                        goto play;
                    }

                }
                else
                    goto play;
            case 6:
                if(ansd[num] == false)
                {
                    printf("\n\nHow many oceans are there in the world?");
                    printf("\n\nA.5\tB.7\n\nC.4\tD.6\n\n");
                    if (toupper(getch())=='A')
                    {
                        printf("\n\nCorrect!!!");
                        q++;
                        rgt++;
                        ansd[num] = true;
                        getch();
                        goto play;
                        getch();
                    }
                    else
                    {
                        Beep(1000, 500);
                        printf("\n\nWrong!!! The correct answer is A.5;\n");
                        getch();
                        wr++;
                        q++;
                        ansd[num] = true;
                        goto play;
                    }

                }
                else
                    goto play;
            case 7:
                if(ansd[num] == false)
                {
                    printf("\n\nWhich is the deepest ocean in the world?");
                    printf("\n\nA.Atlantic Ocean\tB.Indian Ocean\n\nC.Pacific Ocean\t\tD.Arctic Ocean\n\n");
                    if (toupper(getch())=='C')
                    {
                        printf("\n\nCorrect!!!");
                        q++;
                        rgt++;
                        ansd[num] = true;
                        getch();
                        goto play;
                        getch();
                    }
                    else
                    {
                        Beep(1000, 500);
                        printf("\n\nWrong!!! The correct answer is C.Pacific Ocean;\n");
                        getch();
                        wr++;
                        q++;
                        ansd[num] = true;
                        goto play;
                    }

                }
                else
                    goto play;
            case 8:
                if(ansd[num] == false)
                {
                    printf("\n\nWhich is the deepest place in the world?");
                    printf("\n\nA.Marianas Trench\tB.Puerto Rico Trench\n\nC.Java Trench\t\tD.Arctic Basin\n\n");
                    if (toupper(getch())=='A')
                    {
                        printf("\n\nCorrect!!!");
                        q++;
                        rgt++;
                        ansd[num] = true;
                        getch();
                        goto play;
                        getch();
                    }
                    else
                    {
                        Beep(1000, 500);
                        printf("\n\nWrong!!! The correct answer is A.Marianas Trench;\n");
                        getch();
                        wr++;
                        q++;
                        ansd[num] = true;
                        goto play;
                    }

                }
                else
                    goto play;
            case 9:
                if(ansd[num] == false)
                {
                    printf("\n\nWhich is the biggest desert in the world?");
                    printf("\n\nA.Kalahari Desert\tB.Sonoran Desert\n\nC.Sahara Desert\t\tD.Arabian Desert\n\n");
                    if (toupper(getch())=='C')
                    {
                        printf("\n\nCorrect!!!");
                        q++;
                        rgt++;
                        ansd[num] = true;
                        getch();
                        goto play;
                        getch();
                    }
                    else
                    {
                        Beep(1000, 500);
                        printf("\n\nWrong!!! The correct answer is C.Sahara Desert;\n");
                        getch();
                        wr++;
                        q++;
                        ansd[num] = true;
                        goto play;
                    }

                }
                else
                    goto play;
            case 10:
                if(ansd[num] == false)
                {
                    printf("\n\nWhich is the longest river of the world?");
                    printf("\n\nA.Amazon\tB.Nile\n\nC.Congo\t\tD.Lena\n\n");
                    if (toupper(getch())=='B')
                    {
                        printf("\n\nCorrect!!!");
                        q++;
                        rgt++;
                        ansd[num] = true;
                        getch();
                        goto play;
                        getch();
                    }
                    else
                    {
                        Beep(1000, 500);
                        printf("\n\nWrong!!! The correct answer is B.Nile;\n");
                        getch();
                        wr++;
                        q++;
                        ansd[num] = true;
                        goto play;
                    }

                }
                else
                    goto play;
            case 11:
                if(ansd[num] == false)
                {
                    printf("\n\nWhich is the biggest iceland of the world?");
                    printf("\n\nA.Greenland\tB.New Guinea\n\nC.Borneo\tD.Madagascar\n\n");
                    if (toupper(getch())=='A')
                    {
                        printf("\n\nCorrect!!!");
                        q++;
                        rgt++;
                        ansd[num] = true;
                        getch();
                        goto play;
                        getch();
                    }
                    else
                    {
                        Beep(1000, 500);
                        printf("\n\nWrong!!! The correct answer is A.Greenland;\n");
                        getch();
                        wr++;
                        q++;
                        ansd[num] = true;
                        goto play;
                    }

                }
                else
                    goto play;
            case 12:
                if(ansd[num] == false)
                {
                    printf("\n\nWhich is the biggest mountain of the world?");
                    printf("\n\nA.Lhotse\tB.Cho Oyu\n\nC.Manaslu\tD.Mount Everest\n\n");
                    if (toupper(getch())=='D')
                    {
                        printf("\n\nCorrect!!!");
                        q++;
                        rgt++;
                        ansd[num] = true;
                        getch();
                        goto play;
                        getch();
                    }
                    else
                    {
                        Beep(1000, 500);
                        printf("\n\nWrong!!! The correct answer is D.Mount Everest;\n");
                        getch();
                        wr++;
                        q++;
                        ansd[num] = true;
                        goto play;
                    }

                }
                else
                    goto play;
            case 13:
                if(ansd[num] == false)
                {
                    printf("\n\nWhich is the top country in tea imports?");
                    printf("\n\nA.Russia\tB.China\n\nC.India\t\tD.Canada\n\n");
                    if (toupper(getch())=='A')
                    {
                        printf("\n\nCorrect!!!");
                        q++;
                        rgt++;
                        ansd[num] = true;
                        getch();
                        goto play;
                        getch();
                    }
                    else
                    {
                        Beep(1000, 500);
                        printf("\n\nWrong!!! The correct answer is A.Russia;\n");
                        getch();
                        wr++;
                        q++;
                        ansd[num] = true;
                        goto play;
                    }

                }
                else
                    goto play;
            case 14:
                if(ansd[num] == false)
                {
                    printf("\n\nWhich is the top country in tea exports?");
                    printf("\n\nA.Russia\tB.China\n\nC.India\t\tD.Canada\n\n");
                    if (toupper(getch())=='B')
                    {
                        printf("\n\nCorrect!!!");
                        q++;
                        rgt++;
                        ansd[num] = true;
                        getch();
                        goto play;
                        getch();
                    }
                    else
                    {
                        Beep(1000, 500);
                        printf("\n\nWrong!!! The correct answer is B.China;\n");
                        getch();
                        wr++;
                        q++;
                        ansd[num] = true;
                        goto play;
                    }

                }
                else
                    goto play;
            case 15:
                if(ansd[num] == false)
                {
                    printf("\n\nIn which ocean 'Titanic' sank?");
                    printf("\n\nA.Pacific Ocean\tB.Atlantic Ocean\n\nC.Indian Ocean\tD.Arctic Ocean\n\n");
                    if (toupper(getch())=='B')
                    {
                        printf("\n\nCorrect!!!");
                        q++;
                        rgt++;
                        ansd[num] = true;
                        getch();
                        goto play;
                        getch();
                    }
                    else
                    {
                        Beep(1000, 500);
                        printf("\n\nWrong!!! The correct answer is B.Atlantic Ocean;\n");
                        getch();
                        wr++;
                        q++;
                        ansd[num] = true;
                        goto play;
                    }

                }
                else
                    goto play;

            case 16:
                if(ansd[num] == false)
                {
                    printf("\n\nWhich is the biggest forest in the world?");
                    printf("\n\nA.Daintree Rainforest\tB.Congo Rainforest\n\nC.Sundarban\t\tD.Amazon Rainforest\n\n");
                    if (toupper(getch())=='D')
                    {
                        printf("\n\nCorrect!!!");
                        q++;
                        rgt++;
                        ansd[num] = true;
                        getch();
                        goto play;
                        getch();
                    }
                    else
                    {
                        Beep(1000, 500);
                        printf("\n\nWrong!!! The correct answer is D.Amazon Rainforest;\n");
                        getch();
                        wr++;
                        q++;
                        ansd[num] = true;
                        goto play;
                    }

                }
                else
                    goto play;
            case 17:
                if(ansd[num] == false)
                {
                    printf("\n\nChina is forging strategic ties whith which African nation?");
                    printf("\n\nA.Djibouti\tB.Liberia\n\nC.Zambia\tD.Ethiopia\n\n");
                    if (toupper(getch())=='A')
                    {
                        printf("\n\nCorrect!!!");
                        q++;
                        rgt++;
                        ansd[num] = true;
                        getch();
                        goto play;
                        getch();
                    }
                    else
                    {
                        Beep(1000, 500);
                        printf("\n\nWrong!!! The correct answer is A.Djibouti;\n");
                        getch();
                        wr++;
                        q++;
                        ansd[num] = true;
                        goto play;
                    }

                }
                else
                    goto play;
            case 18:
                if(ansd[num] == false)
                {
                    printf("\n\nHow many agreements India signed with Philippines in Nov 2017?");
                    printf("\n\nA.3\tB.4\n\nC.5\tD.6\n\n");
                    if (toupper(getch())=='B')
                    {
                        printf("\n\nCorrect!!!");
                        q++;
                        rgt++;
                        ansd[num] = true;
                        getch();
                        goto play;
                        getch();
                    }
                    else
                    {
                        Beep(1000, 500);
                        printf("\n\nWrong!!! The correct answer is B.4;\n");
                        getch();
                        wr++;
                        q++;
                        ansd[num] = true;
                        goto play;
                    }

                }
                else
                    goto play;
            case 19:
                if(ansd[num] == false)
                {
                    printf("\n\nUNGCP was adopted by UN on Which date?");
                    printf("\n\nA.Dec 22, 2015\t\tB.April 16, 1985\n\nC.April 18, 1985\tD.Dec 24, 2015\n\n");
                    if (toupper(getch())=='B')
                    {
                        printf("\n\nCorrect!!!");
                        q++;
                        rgt++;
                        ansd[num] = true;
                        getch();
                        goto play;
                        getch();
                    }
                    else
                    {
                        Beep(1000, 500);
                        printf("\n\nWrong!!! The correct answer is B.April 16, 1985;\n");
                        getch();
                        wr++;
                        q++;
                        ansd[num] = true;
                        goto play;
                    }

                }
                else
                    goto play;
            case 20:
                if(ansd[num] == false)
                {
                    printf("\n\nExercise pitch Black 2018 was hosted by:");
                    printf("\n\nA.South Africa\tB.Israel\n\nC.India\t\tD.Australia;\n\n");
                    if (toupper(getch())=='D')
                    {
                        printf("\n\nCorrect!!!");
                        q++;
                        rgt++;
                        ansd[num] = true;
                        getch();
                        goto play;
                        getch();
                    }
                    else
                    {
                        Beep(1000, 500);
                        printf("\n\nWrong!!! The correct answer is D.Australia\n");
                        getch();
                        wr++;
                        q++;
                        ansd[num] = true;
                        goto play;

                    }
                }
                else
                    goto play;
            }
        }
    }
    else
    {
        Beep(5000, 500);
        printf("\n\n\t\tYou have given 3 wrong answer;\n\n\t\tYou cannot play anymore;");
        goto finish;
    }

finish:
    {
        int scr=(rgt*5);
        if(scr<0)
        {
            scr=0;
        }
        if (scr==50)
            printf("\n\n\t\tExcellent!!! Keep it up :)");

        else if (scr>=40 && scr<50)
            printf("\n\n\t\tVery Good!!");

        else if (scr>=20 &&scr<40)
            printf("\n\n\t\tGood! But You Need to Know More :)");

        else if (scr>=10 && scr<20)
            printf("\n\n\t\tSatisfactory Result, Study More :)");

        else
            printf("\n\n\t\tYour General Knowledge is Very Poor :(");
            printf("\n");

        return scr;
    }
}

int BangladeshQ()
{
    int q=0;
    int wr=0;
    int rgt=0;
    bool ansd[20];
    for(int i=1; i<=20; i++)
    {
        ansd[i] = false;
    }
play:
    system("cls");
    //system("color B0");
    if(wr<3)
    {
        while(q<10)
        {
            char ans;
            srand(time(0));
            int num = 1+rand()%20;
            switch(num)
            {
            case 1:
                if(ansd[num] == false)
                {
                    printf("\n\nWhen did Bangladesh become an independent country?");
                    printf("\n\nA.1965\tB.1952\n\nC.1971\tD.1981\n\n");
                    if (toupper(getch())=='C')
                    {
                        printf("\n\nCorrect!!!");
                        q++;
                        rgt++;
                        ansd[num] = true;
                        getch();
                        goto play;
                        getch();
                    }
                    else
                    {
                        Beep(1000, 500);
                        printf("\n\nWrong!!! The correct answer is C.1971;\n");
                        getch();
                        wr++;
                        q++;
                        ansd[num] = true;
                        goto play;
                    }
                }
                else
                    goto play;
            case 2:
                if(ansd[num] == false)
                {
                    printf("\n\nBangladesh was known as:?");
                    printf("\n\nA.Baluchistan\tB.East Pakistan\n\nC.West Pakistan\tD.Sindh\n\n");
                    if (toupper(getch())=='B')
                    {
                        printf("\n\nCorrect!!!");
                        q++;
                        rgt++;
                        ansd[num] = true;
                        getch();
                        goto play;
                        getch();
                    }
                    else
                    {
                        Beep(1000, 500);
                        printf("\n\nWrong!!! The correct answer is B.East Pakistan;\n");
                        getch();
                        wr++;
                        q++;
                        ansd[num] = true;
                        goto play;
                    }

                }
                else
                    goto play;
            case 3:
                if(ansd[num] == false)
                {
                    printf("\n\nWhich district of Bangladesh was part of Assam?");
                    printf("\n\nA.Sylhet\tB.Chittagong\n\nC.Dinajpur\tD.Khulna\n\n");
                    if (toupper(getch())=='A')
                    {
                        printf("\n\nCorrect!!!");
                        q++;
                        rgt++;
                        ansd[num] = true;
                        getch();
                        goto play;
                        getch();
                    }
                    else
                    {
                        Beep(1000, 500);
                        printf("\n\nWrong!!! The correct answer is A.Sylhet;\n");
                        getch();
                        wr++;
                        q++;
                        ansd[num] = true;
                        goto play;
                    }

                }
                else
                    goto play;
            case 4:
                if(ansd[num] == false)
                {
                    printf("\n\nWhich river of Bangladesh originates in Tibet?");
                    printf("\n\nA.Tista\t\tB.Padma\n\nC.Brahmaputra\tD.Surma\n\n");
                    if (toupper(getch())=='C')
                    {
                        printf("\n\nCorrect!!!");
                        q++;
                        rgt++;
                        ansd[num] = true;
                        getch();
                        goto play;
                        getch();
                    }
                    else
                    {
                        Beep(1000, 500);
                        printf("\n\nWrong!!! The correct answer is C.Brahmaputra;\n");
                        getch();
                        wr++;
                        q++;
                        ansd[num] = true;
                        goto play;
                    }

                }
                else
                    goto play;
            case 5:
                if(ansd[num] == false)
                {
                    printf("\n\nWhat is the national flower of Bangladesh?");
                    printf("\n\nA.Rose\tB.Jasmine\n\nC.Lotus\tD.Water Lily\n\n");
                    if (toupper(getch())=='D')
                    {
                        printf("\n\nCorrect!!!");
                        q++;
                        rgt++;
                        ansd[num] = true;
                        getch();
                        goto play;
                        getch();
                    }
                    else
                    {
                        Beep(1000, 500);
                        printf("\n\nWrong!!! The correct answer is D.Water Lily;\n");
                        getch();
                        wr++;
                        q++;
                        ansd[num] = true;
                        goto play;
                    }

                }
                else
                    goto play;
            case 6:
                if(ansd[num] == false)
                {
                    printf("\n\nIn which continent is Bangladesh located?");
                    printf("\n\nA.Africa\tB.Asia\n\nC.Europe\tD.Australia\n\n");
                    if (toupper(getch())=='B')
                    {
                        printf("\n\nCorrect!!!");
                        q++;
                        rgt++;
                        ansd[num] = true;
                        getch();
                        goto play;
                        getch();
                    }
                    else
                    {
                        Beep(1000, 500);
                        printf("\n\nWrong!!! The correct answer is B.Asia;\n");
                        getch();
                        wr++;
                        q++;
                        ansd[num] = true;
                        goto play;
                    }

                }
                else
                    goto play;
            case 7:
                if(ansd[num] == false)
                {
                    printf("\n\nThe population of Bangladesh is around:");
                    printf("\n\nA.160 million\tB.158 million\n\nC.156 million\tD.159 million\n\n");
                    if (toupper(getch())=='A')
                    {
                        printf("\n\nCorrect!!!");
                        q++;
                        rgt++;
                        ansd[num] = true;
                        getch();
                        goto play;
                        getch();
                    }
                    else
                    {
                        Beep(1000, 500);
                        printf("\n\nWrong!!! The correct answer is A.160 million;\n");
                        getch();
                        wr++;
                        q++;
                        ansd[num] = true;
                        goto play;
                    }

                }
                else
                    goto play;
            case 8:
                if(ansd[num] == false)
                {
                    printf("\n\nWhen was Bangabandhu Satellite-1 launched?");
                    printf("\n\nA.11 March, 2018\tB.11 April, 2018\n\nC.11 May, 2018\t\tD.11 June, 2018\n\n");
                    if (toupper(getch())=='C')
                    {
                        printf("\n\nCorrect!!!");
                        q++;
                        rgt++;
                        ansd[num] = true;
                        getch();
                        goto play;
                        getch();
                    }
                    else
                    {
                        Beep(1000, 500);
                        printf("\n\nWrong!!! The correct answer is C.11 May, 2018;\n");
                        getch();
                        wr++;
                        q++;
                        ansd[num] = true;
                        goto play;
                    }

                }
                else
                    goto play;
            case 9:
                if(ansd[num] == false)
                {
                    printf("\n\nWhen is 'International Mother Language Day'?");
                    printf("\n\nA.21 June\tB.21 March\n\nC.21 April\tD.21 February\n\n");
                    if (toupper(getch())=='D')
                    {
                        printf("\n\nCorrect!!!");
                        q++;
                        rgt++;
                        ansd[num] = true;
                        getch();
                        goto play;
                        getch();
                    }
                    else
                    {
                        Beep(1000, 500);
                        printf("\n\nWrong!!! The correct answer is D.21 February;\n");
                        getch();
                        wr++;
                        q++;
                        ansd[num] = true;
                        goto play;
                    }

                }
                else
                    goto play;
            case 10:
                if(ansd[num] == false)
                {
                    printf("\n\nWhere is the 'Chimbuk' Hill?");
                    printf("\n\nA.Bandarban\tB.Sylhet\n\nC.Rangamati\tD.Chittagong\n\n");
                    if (toupper(getch())=='A')
                    {
                        printf("\n\nCorrect!!!");
                        q++;
                        rgt++;
                        ansd[num] = true;
                        getch();
                        goto play;
                        getch();
                    }
                    else
                    {
                        Beep(1000, 500);
                        printf("\n\nWrong!!! The correct answer is A.Bandarban;\n");
                        getch();
                        wr++;
                        q++;
                        ansd[num] = true;
                        goto play;
                    }

                }
                else
                    goto play;
            case 11:
                if(ansd[num] == false)
                {
                    printf("\n\nWhere is the 'Hum Hum' waterfall?");
                    printf("\n\nA.Thanchi, Bandarban\tB.Kamalganj, Moulvibazar\n\nC.Ruma, Bandarban\tD.Thaikong, Bnadarban\n\n");
                    if (toupper(getch())=='B')
                    {
                        printf("\n\nCorrect!!!");
                        q++;
                        rgt++;
                        ansd[num] = true;
                        getch();
                        goto play;
                        getch();
                    }
                    else
                    {
                        Beep(1000, 500);
                        printf("\n\nWrong!!! The correct answer is B.Kamalganj, Moulvibazar;\n");
                        getch();
                        wr++;
                        q++;
                        ansd[num] = true;
                        goto play;
                    }

                }
                else
                    goto play;
            case 12:
                if(ansd[num] == false)
                {
                    printf("\n\nWhat is the national fruit of Bangladesh?");
                    printf("\n\nA.Mango\t\tB.Jack fruit\n\nC.Litchi\tD.Apple\n\n");
                    if (toupper(getch())=='B')
                    {
                        printf("\n\nCorrect!!!");
                        q++;
                        rgt++;
                        ansd[num] = true;
                        getch();
                        goto play;
                        getch();
                    }
                    else
                    {
                        Beep(1000, 500);
                        printf("\n\nWrong!!! The correct answer is B.Jack fruit;\n");
                        getch();
                        wr++;
                        q++;
                        ansd[num] = true;
                        goto play;
                    }

                }
                else
                    goto play;
            case 13:
                if(ansd[num] == false)
                {
                    printf("\n\nHow many district in Bangladesh?");
                    printf("\n\nA.63\tB.66\n\nC.64\tD.65\n\n");
                    if (toupper(getch())=='C')
                    {
                        printf("\n\nCorrect!!!");
                        q++;
                        rgt++;
                        ansd[num] = true;
                        getch();
                        goto play;
                        getch();
                    }
                    else
                    {
                        Beep(1000, 500);
                        printf("\n\nWrong!!! The correct answer is C.64;\n");
                        getch();
                        wr++;
                        q++;
                        ansd[num] = true;
                        goto play;
                    }

                }
                else
                    goto play;
            case 14:
                if(ansd[num] == false)
                {
                    printf("\n\nWhat is the national bird of Bangladesh?");
                    printf("\n\nA.Magpie\tB.Owl\n\nC.Pigeons\tD.Ostrich\n\n");
                    if (toupper(getch())=='A')
                    {
                        printf("\n\nCorrect!!!");
                        q++;
                        rgt++;
                        ansd[num] = true;
                        getch();
                        goto play;
                        getch();
                    }
                    else
                    {
                        Beep(1000, 500);
                        printf("\n\nWrong!!! The correct answer is A.Magpie;\n");
                        getch();
                        wr++;
                        q++;
                        ansd[num] = true;
                        goto play;
                    }

                }
                else
                    goto play;
            case 15:
                if(ansd[num] == false)
                {
                    printf("\n\nWhen did Bangladeshi taka first launched?");
                    printf("\n\nA.Dec 16, 1972\t\tB.June 4, 1972\n\nC.March 4, 1972\t\tD.Sept 4, 1972\n\n");
                    if (toupper(getch())=='C')
                    {
                        printf("\n\nCorrect!!!");
                        q++;
                        rgt++;
                        ansd[num] = true;
                        getch();
                        goto play;
                        getch();
                    }
                    else
                    {
                        Beep(1000, 500);
                        printf("\n\nWrong!!! The correct answer is C.March 4, 1972;\n");
                        getch();
                        wr++;
                        q++;
                        ansd[num] = true;
                        goto play;
                    }

                }
                else
                    goto play;

            case 16:
                if(ansd[num] == false)
                {
                    printf("\n\nWhat is the national animal of Bangladesh?");
                    printf("\n\nA.Lion\t\tB.Royal Bengal Tiger\n\nC.Leopard\tD.Kangaroo\n\n");
                    if (toupper(getch())=='B')
                    {
                        printf("\n\nCorrect!!!");
                        q++;
                        rgt++;
                        ansd[num] = true;
                        getch();
                        goto play;
                        getch();
                    }
                    else
                    {
                        Beep(1000, 500);
                        printf("\n\nWrong!!! The correct answer is B.Royal Bengal Tiger;\n");
                        getch();
                        wr++;
                        q++;
                        ansd[num] = true;
                        goto play;
                    }

                }
                else
                    goto play;
            case 17:
                if(ansd[num] == false)
                {
                    printf("\n\nWhich organization launched Bangabandhu Satellite-1?");
                    printf("\n\nA.NASA\t\tB.ISRO\n\nC.Roscosmos\tD.SpaceX\n\n");
                    if (toupper(getch())=='D')
                    {
                        printf("\n\nCorrect!!!");
                        q++;
                        rgt++;
                        ansd[num] = true;
                        getch();
                        goto play;
                        getch();
                    }
                    else
                    {
                        Beep(1000, 500);
                        printf("\n\nWrong!!! The correct answer is D.SpaceX;\n");
                        getch();
                        wr++;
                        q++;
                        ansd[num] = true;
                        goto play;
                    }

                }
                else
                    goto play;
            case 18:
                if(ansd[num] == false)
                {
                    printf("\n\nWhen is Bangladesh Independence Day?");
                    printf("\n\nA.March 26\tB.April 26\n\nC.March 25\tD.March 7\n\n");
                    if (toupper(getch())=='A')
                    {
                        printf("\n\nCorrect!!!");
                        q++;
                        rgt++;
                        ansd[num] = true;
                        getch();
                        goto play;
                        getch();
                    }
                    else
                    {
                        Beep(1000, 500);
                        printf("\n\nWrong!!! The correct answer is A.March 26;\n");
                        getch();
                        wr++;
                        q++;
                        ansd[num] = true;
                        goto play;
                    }

                }
                else
                    goto play;
            case 19:
                if(ansd[num] == false)
                {
                    printf("\n\nWhen is Bangladesh's Victory Day?");
                    printf("\n\nA.March 7\tB.Dec 14\n\nC.Dec 16\tD.March 26\n\n");
                    if (toupper(getch())=='C')
                    {
                        printf("\n\nCorrect!!!");
                        q++;
                        rgt++;
                        ansd[num] = true;
                        getch();
                        goto play;
                        getch();
                    }
                    else
                    {
                        Beep(1000, 500);
                        printf("\n\nWrong!!! The correct answer is C.Dec 16;\n");
                        getch();
                        wr++;
                        q++;
                        ansd[num] = true;
                        goto play;
                    }

                }
                else
                    goto play;
            case 20:
                if(ansd[num] == false)
                {
                    printf("\n\nHow many sea ports in Bangladesh?");
                    printf("\n\nA.3\tB.4\n\nC.5\tD.2\n\n");
                    if (toupper(getch())=='A')
                    {
                        printf("\n\nCorrect!!!");
                        q++;
                        rgt++;
                        ansd[num] = true;
                        getch();
                        goto play;
                        getch();
                    }
                    else
                    {
                        Beep(1000, 500);
                        printf("\n\nWrong!!! The correct answer is A.3;\n");
                        getch();
                        wr++;
                        q++;
                        ansd[num] = true;
                        goto play;

                    }
                }
                else
                    goto play;
            }
        }
    }
    else
    {
        Beep(5000, 500);
        printf("\n\n\t\tYou have given 3 wrong answer;\n\n\t\tYou cannot play anymore;");
        goto finish;
    }
finish:
    {
        int scr=(rgt*5);
        if(scr<0)
        {
            scr=0;
        }
        if (scr==50)
            printf("\n\n\t\tExcellent!!! Keep it up :)");

        else if (scr>=40 && scr<50)
            printf("\n\n\t\tVery Good!!");

        else if (scr>=20 &&scr<40)
            printf("\n\n\t\tGood! But You Need to Know More :)");

        else if (scr>=10 && scr<20)
            printf("\n\n\t\tSatisfactory Result, Study More :)");

        else
            printf("\n\n\t\tYour General Knowledge is Very Poor :(");
            printf("\n");

        return scr;
    }
}

int TechnologyQ()
{
    int q=0;
    int wr=0;
    int rgt=0;
    bool ansd[20];
    for(int i=1; i<=20; i++)
    {
        ansd[i] = false;
    }
play:
    system("cls");
    //system("color B0");
    if(wr<3)
    {
        while(q<10)
        {
            char ans;
            srand(time(0));
            int num = 1+rand()%20;
            switch(num)
            {
            case 1:
                if(ansd[num] == false)
                {
                    printf("\n\nBluetooth was invented by which company?");
                    printf("\n\nA.Sony\t\tB.Ericsson\n\nC.Samsung\tD.Nokia\n\n");
                    if (toupper(getch())=='B')
                    {
                        printf("\n\nCorrect!!!");
                        q++;
                        rgt++;
                        ansd[num] = true;
                        getch();
                        goto play;
                        getch();
                    }
                    else
                    {
                        Beep(1000, 500);
                        printf("\n\nWrong!!! The correct answer is B.Ericsson;\n");
                        getch();
                        wr++;
                        q++;
                        ansd[num] = true;
                        goto play;
                    }
                }
                else
                    goto play;
            case 2:
                if(ansd[num] == false)
                {
                    printf("\n\nWho invented the printing press?");
                    printf("\n\nA.Mary Anderson\t\tB.George Antheil\n\nC.Johannes Gutenberg\tD.Victor Adler\n\n");
                    if (toupper(getch())=='C')
                    {
                        printf("\n\nCorrect!!!");
                        q++;
                        rgt++;
                        ansd[num] = true;
                        getch();
                        goto play;
                        getch();
                    }
                    else
                    {
                        Beep(1000, 500);
                        printf("\n\nWrong!!! The correct answer is C.Johannes Gutenberg;\n");
                        getch();
                        wr++;
                        q++;
                        ansd[num] = true;
                        goto play;
                    }

                }
                else
                    goto play;
            case 3:
                if(ansd[num] == false)
                {
                    printf("\n\nWhat does 'ATM' stands for?");
                    printf("\n\nA.Automated Teller Machine\tB.Automated Teller Money\n\nC.Automated Transaction Machine\tD.Automated Transaction Money\n\n");
                    if (toupper(getch())=='A')
                    {
                        printf("\n\nCorrect!!!");
                        q++;
                        rgt++;
                        ansd[num] = true;
                        getch();
                        goto play;
                        getch();
                    }
                    else
                    {
                        Beep(1000, 500);
                        printf("\n\nWrong!!! The correct answer is A.Automated Teller Machine;\n");
                        getch();
                        wr++;
                        q++;
                        ansd[num] = true;
                        goto play;
                    }

                }
                else
                    goto play;
            case 4:
                if(ansd[num] == false)
                {
                    printf("\n\nWho invented World Wide Web?");
                    printf("\n\nA.Tim Barners\t\tB.Dennis Ritchie\n\nC.Bjarne Stroustrup\tD.John Backus\n\n");
                    if (toupper(getch())=='A')
                    {
                        printf("\n\nCorrect!!!");
                        q++;
                        rgt++;
                        ansd[num] = true;
                        getch();
                        goto play;
                        getch();
                    }
                    else
                    {
                        Beep(1000, 500);
                        printf("\n\nWrong!!! The correct answer is A.Tim Barners;\n");
                        getch();
                        wr++;
                        q++;
                        ansd[num] = true;
                        goto play;
                    }

                }
                else
                    goto play;
            case 5:
                if(ansd[num] == false)
                {
                    printf("\n\nAtomic bomb was first successfully developed by:");
                    printf("\n\nA.Russia\tB.China\n\nC.Germany\tD.United States\n\n");
                    if (toupper(getch())=='D')
                    {
                        printf("\n\nCorrect!!!");
                        q++;
                        rgt++;
                        ansd[num] = true;
                        getch();
                        goto play;
                        getch();
                    }
                    else
                    {
                        Beep(1000, 500);
                        printf("\n\nWrong!!! The correct answer is D.United States;\n");
                        getch();
                        wr++;
                        q++;
                        ansd[num] = true;
                        goto play;
                    }

                }
                else
                    goto play;
            case 6:
                if(ansd[num] == false)
                {
                    printf("\n\nFrequency Modulation radio was invented by:");
                    printf("\n\nA.Gerald Pearson\tB.Edwin Howard Armstrong\n\nC.Daryl Chapin\t\tD.Calvin Southern Fuller\n\n");
                    if (toupper(getch())=='B')
                    {
                        printf("\n\nCorrect!!!");
                        q++;
                        rgt++;
                        ansd[num] = true;
                        getch();
                        goto play;
                        getch();
                    }
                    else
                    {
                        Beep(1000, 500);
                        printf("\n\nWrong!!! The correct answer is B.Edwin Howard Armstrong;\n");
                        getch();
                        wr++;
                        q++;
                        ansd[num] = true;
                        goto play;
                    }

                }
                else
                    goto play;
            case 7:
                if(ansd[num] == false)
                {
                    printf("\n\nPrinting press was invented in:");
                    printf("\n\nA.1440\tB.1436\n\nC.1486\tD.1446\n\n");
                    if (toupper(getch())=='A')
                    {
                        printf("\n\nCorrect!!!");
                        q++;
                        rgt++;
                        ansd[num] = true;
                        getch();
                        goto play;
                        getch();
                    }
                    else
                    {
                        Beep(1000, 500);
                        printf("\n\nWrong!!! The correct answer is A.1440;\n");
                        getch();
                        wr++;
                        q++;
                        ansd[num] = true;
                        goto play;
                    }

                }
                else
                    goto play;
            case 8:
                if(ansd[num] == false)
                {
                    printf("\n\n'DVD' was developed by:");
                    printf("\n\nA.Sony\t\tB.Intel\n\nC.Panasonic\tD.Both A and B\n\n");
                    if (toupper(getch())=='D')
                    {
                        printf("\n\nCorrect!!!");
                        q++;
                        rgt++;
                        ansd[num] = true;
                        getch();
                        goto play;
                        getch();
                    }
                    else
                    {
                        Beep(1000, 500);
                        printf("\n\nWrong!!! The correct answer is D.Both A and B;\n");
                        getch();
                        wr++;
                        q++;
                        ansd[num] = true;
                        goto play;
                    }

                }
                else
                    goto play;
            case 9:
                if(ansd[num] == false)
                {
                    printf("\n\nFacebook invented year:");
                    printf("\n\nA.2003\tB.2000\n\nC.2004\tD.2002\n\n");
                    if (toupper(getch())=='C')
                    {
                        printf("\n\nCorrect!!!");
                        q++;
                        rgt++;
                        ansd[num] = true;
                        getch();
                        goto play;
                        getch();
                    }
                    else
                    {
                        Beep(1000, 500);
                        printf("\n\nWrong!!! The correct answer is C.2004;\n");
                        getch();
                        wr++;
                        q++;
                        ansd[num] = true;
                        goto play;
                    }

                }
                else
                    goto play;
            case 10:
                if(ansd[num] == false)
                {
                    printf("\n\nCompass was invented by:");
                    printf("\n\nA.Europeans\tB.Chinese\n\nC.Romans\tD.Greeks\n\n");
                    if (toupper(getch())=='B')
                    {
                        printf("\n\nCorrect!!!");
                        q++;
                        rgt++;
                        ansd[num] = true;
                        getch();
                        goto play;
                        getch();
                    }
                    else
                    {
                        Beep(1000, 500);
                        printf("\n\nWrong!!! The correct answer is B.Chinese;\n");
                        getch();
                        wr++;
                        q++;
                        ansd[num] = true;
                        goto play;
                    }

                }
                else
                    goto play;
            case 11:
                if(ansd[num] == false)
                {
                    printf("\n\nFirst personal computer controlled with a keyboard was invented by:");
                    printf("\n\nA.Apple\t\t\tB.Microsoft\n\nC.Hewlett Packard\tD.IBM\n\n");
                    if (toupper(getch())=='D')
                    {
                        printf("\n\nCorrect!!!");
                        q++;
                        rgt++;
                        ansd[num] = true;
                        getch();
                        goto play;
                        getch();
                    }
                    else
                    {
                        Beep(1000, 500);
                        printf("\n\nWrong!!! The correct answer is D.IBM;\n");
                        getch();
                        wr++;
                        q++;
                        ansd[num] = true;
                        goto play;
                    }

                }
                else
                    goto play;
            case 12:
                if(ansd[num] == false)
                {
                    printf("\n\nTelephone was invented by:");
                    printf("\n\nA.Alexander Graham Bell\tB.Alexander Fleming\n\nC.Howard Armstrong\tD.Ferdinand Magellan\n\n");
                    if (toupper(getch())=='A')
                    {
                        printf("\n\nCorrect!!!");
                        q++;
                        rgt++;
                        ansd[num] = true;
                        getch();
                        goto play;
                        getch();
                    }
                    else
                    {
                        Beep(1000, 500);
                        printf("\n\nWrong!!! The correct answer is A.Alexander Graham Bell;\n");
                        getch();
                        wr++;
                        q++;
                        ansd[num] = true;
                        goto play;
                    }

                }
                else
                    goto play;
            case 13:
                if(ansd[num] == false)
                {
                    printf("\n\nFirst Graphical user Interface (GUI) was popularized as:");
                    printf("\n\nA.Xerox Star\tB.Apple Lisa\n\nC.IBM 610\tD.Both A and B\n\n");
                    if (toupper(getch())=='D')
                    {
                        printf("\n\nCorrect!!!");
                        q++;
                        rgt++;
                        ansd[num] = true;
                        getch();
                        goto play;
                        getch();
                    }
                    else
                    {
                        Beep(1000, 500);
                        printf("\n\nWrong!!! The correct answer is D.Both A and B;\n");
                        getch();
                        wr++;
                        q++;
                        ansd[num] = true;
                        goto play;
                    }

                }
                else
                    goto play;
            case 14:
                if(ansd[num] == false)
                {
                    printf("\n\n'DVD' was invented in:");
                    printf("\n\nA.1990\tB.1995\n\nC.1997\tD.1992\n\n");
                    if (toupper(getch())=='B')
                    {
                        printf("\n\nCorrect!!!");
                        q++;
                        rgt++;
                        ansd[num] = true;
                        getch();
                        goto play;
                        getch();
                    }
                    else
                    {
                        Beep(1000, 500);
                        printf("\n\nWrong!!! The correct answer is B.1995;\n");
                        getch();
                        wr++;
                        q++;
                        ansd[num] = true;
                        goto play;
                    }

                }
                else
                    goto play;
            case 15:
                if(ansd[num] == false)
                {
                    printf("\n\nFirst Freely programmable computer in world was built in:");
                    printf("\n\nA.1936\tB.1934\n\nC.1938\tD.1932\n\n");
                    if (toupper(getch())=='C')
                    {
                        printf("\n\nCorrect!!!");
                        q++;
                        rgt++;
                        ansd[num] = true;
                        getch();
                        goto play;
                        getch();
                    }
                    else
                    {
                        Beep(1000, 500);
                        printf("\n\nWrong!!! The correct answer is C.1938;\n");
                        getch();
                        wr++;
                        q++;
                        ansd[num] = true;
                        goto play;
                    }

                }
                else
                    goto play;

            case 16:
                if(ansd[num] == false)
                {
                    printf("\n\nFirst personal computer controlled with a keyboard is:");
                    printf("\n\nA.IBM 610\tB.hp 610\n\nC.Intel 210\tD.IBM 800\n\n");
                    if (toupper(getch())=='A')
                    {
                        printf("\n\nCorrect!!!");
                        q++;
                        rgt++;
                        ansd[num] = true;
                        getch();
                        goto play;
                        getch();
                    }
                    else
                    {
                        Beep(1000, 500);
                        printf("\n\nWrong!!! The correct answer is A.IBM 610;\n");
                        getch();
                        wr++;
                        q++;
                        ansd[num] = true;
                        goto play;
                    }

                }
                else
                    goto play;
            case 17:
                if(ansd[num] == false)
                {
                    printf("\n\nFirst freely programmable computer in world was built by:");
                    printf("\n\nA.Karl Benz\tB.Percy Spencer\n\nC.Konrad Zuse\tD.Georage Stepheman\n\n");
                    if (toupper(getch())=='C')
                    {
                        printf("\n\nCorrect!!!");
                        q++;
                        rgt++;
                        ansd[num] = true;
                        getch();
                        goto play;
                        getch();
                    }
                    else
                    {
                        Beep(1000, 500);
                        printf("\n\nWrong!!! The correct answer is C.Konrad Zuse;\n");
                        getch();
                        wr++;
                        q++;
                        ansd[num] = true;
                        goto play;
                    }

                }
                else
                    goto play;
            case 18:
                if(ansd[num] == false)
                {
                    printf("\n\nName of first popular web browser is:");
                    printf("\n\nA.IBM browser\tB.NCSA Mosaic\n\nC.Google Chrome\tD.Mozilla Firefox\n\n");
                    if (toupper(getch())=='B')
                    {
                        printf("\n\nCorrect!!!");
                        q++;
                        rgt++;
                        ansd[num] = true;
                        getch();
                        goto play;
                        getch();
                    }
                    else
                    {
                        Beep(1000, 500);
                        printf("\n\nWrong!!! The correct answer is B.NCSA Mosaic;\n");
                        getch();
                        wr++;
                        q++;
                        ansd[num] = true;
                        goto play;
                    }

                }
                else
                    goto play;
            case 19:
                if(ansd[num] == false)
                {
                    printf("\n\n'FM' radio was invented in:");
                    printf("\n\nA.1934\tB.1936\n\nC.1939\tD.1933\n\n");
                    if (toupper(getch())=='D')
                    {
                        printf("\n\nCorrect!!!");
                        q++;
                        rgt++;
                        ansd[num] = true;
                        getch();
                        goto play;
                        getch();
                    }
                    else
                    {
                        Beep(1000, 500);
                        printf("\n\nWrong!!! The correct answer is D.1933;\n");
                        getch();
                        wr++;
                        q++;
                        ansd[num] = true;
                        goto play;
                    }

                }
                else
                    goto play;
            case 20:
                if(ansd[num] == false)
                {
                    printf("\n\nAirplane was invented by:");
                    printf("\n\nA.Wright Brothers\tB.Robert Adler\n\nC.Ernst Abbe\t\tD.Edwin Armstrong\n\n");
                    if (toupper(getch())=='A')
                    {
                        printf("\n\nCorrect!!!");
                        q++;
                        rgt++;
                        ansd[num] = true;
                        getch();
                        goto play;
                        getch();
                    }
                    else
                    {
                        Beep(1000, 500);
                        printf("\n\nWrong!!! The correct answer is A.Wright Brothers;\n");
                        getch();
                        wr++;
                        q++;
                        ansd[num] = true;
                        goto play;

                    }
                }
                else
                    goto play;
            }
        }
    }
    else
    {
        Beep(5000, 500);
        printf("\n\n\t\tYou have given 3 wrong answer;\n\n\t\tYou cannot play anymore;");
        goto finish;
    }

finish:
    {
        int scr=(rgt*5);
        if(scr<0)
        {
            scr=0;
        }
        if (scr==50)
            printf("\n\n\t\tExcellent!!! Keep it up :)");

        else if (scr>=40 && scr<50)
            printf("\n\n\t\tVery Good!!");

        else if (scr>=20 &&scr<40)
            printf("\n\n\t\tGood! But You Need to Know More :)");

        else if (scr>=10 && scr<20)
            printf("\n\n\t\tSatisfactory Result, Study More :)");

        else
            printf("\n\n\t\tYour General Knowledge is Very Poor :(");
            printf("\n");

        return scr;
    }
}

int SportsQ()
{
    int q=0;
    int wr=0;
    int rgt=0;
    bool ansd[20];
    for(int i=1; i<=20; i++)
    {
        ansd[i] = false;
    }
play:
    system("cls");
    //system("color E0");
    if(wr<3)
    {
        while(q<10)
        {
            char ans;
            srand(time(0));
            int num = 1+rand()%20;
            switch(num)
            {
            case 1:
                if(ansd[num] == false)
                {
                    printf("\n\nWhen was BCB founded?");
                    printf("\n\nA.1973\tB.1975\n\nC.1972\tD.1974\n\n");
                    if (toupper(getch())=='C')
                    {
                        printf("\n\nCorrect!!!");
                        q++;
                        rgt++;
                        ansd[num] = true;
                        getch();
                        goto play;
                        getch();
                    }
                    else
                    {
                        Beep(1000, 500);
                        printf("\n\nWrong!!! The correct answer is C.1972;\n");
                        getch();
                        wr++;
                        q++;
                        ansd[num] = true;
                        goto play;
                    }
                }
                else
                    goto play;
            case 2:
                if(ansd[num] == false)
                {
                    printf("\n\nWhere is the BCB headquarters?");
                    printf("\n\nA.Dhaka\t\tB.Khulna\n\nC.Sylhet\tD.Bogra\n\n");
                    if (toupper(getch())=='A')
                    {
                        printf("\n\nCorrect!!!");
                        q++;
                        rgt++;
                        ansd[num] = true;
                        getch();
                        goto play;
                        getch();
                    }
                    else
                    {
                        Beep(1000, 500);
                        printf("\n\nWrong!!! The correct answer is A.Dhaka;\n");
                        getch();
                        wr++;
                        q++;
                        ansd[num] = true;
                        goto play;
                    }

                }
                else
                    goto play;
            case 3:
                if(ansd[num] == false)
                {
                    printf("\n\nWhen was the first common wealth games held?");
                    printf("\n\nA.1934\tB.1930\n\nC.1938\tD.1948\n\n");
                    if (toupper(getch())=='B')
                    {
                        printf("\n\nCorrect!!!");
                        q++;
                        rgt++;
                        ansd[num] = true;
                        getch();
                        goto play;
                        getch();
                    }
                    else
                    {
                        Beep(1000, 500);
                        printf("\n\nWrong!!! The correct answer is B.1930;\n");
                        getch();
                        wr++;
                        q++;
                        ansd[num] = true;
                        goto play;
                    }

                }
                else
                    goto play;
            case 4:
                if(ansd[num] == false)
                {
                    printf("\n\nIn which sports is the participant called pugilist?");
                    printf("\n\nA.Sprinter\tB.Wrestling\n\nC.Javelin throw\tD.Boxing\n\n");
                    if (toupper(getch())=='D')
                    {
                        printf("\n\nCorrect!!!");
                        q++;
                        rgt++;
                        ansd[num] = true;
                        getch();
                        goto play;
                        getch();
                    }
                    else
                    {
                        Beep(1000, 500);
                        printf("\n\nWrong!!! The correct answer is D.Boxing;\n");
                        getch();
                        wr++;
                        q++;
                        ansd[num] = true;
                        goto play;
                    }

                }
                else
                    goto play;
            case 5:
                if(ansd[num] == false)
                {
                    printf("\n\nThe term 'Butterfly Stroke' is referred to in which sport?");
                    printf("\n\nA.Wrestling\tB.Volley Ball\n\nC.Swimming\tD.Tennis\n\n");
                    if (toupper(getch())=='C')
                    {
                        printf("\n\nCorrect!!!");
                        q++;
                        rgt++;
                        ansd[num] = true;
                        getch();
                        goto play;
                        getch();
                    }
                    else
                    {
                        Beep(1000, 500);
                        printf("\n\nWrong!!! The correct answer is C.Swimming;\n");
                        getch();
                        wr++;
                        q++;
                        ansd[num] = true;
                        goto play;
                    }

                }
                else
                    goto play;
            case 6:
                if(ansd[num] == false)
                {
                    printf("\n\nIn which game the term 'Putting' is used?");
                    printf("\n\nA.Golf\t\tB.Chess\n\nC.Hockey\tD.Billiards\n\n");
                    if (toupper(getch())=='A')
                    {
                        printf("\n\nCorrect!!!");
                        q++;
                        rgt++;
                        ansd[num] = true;
                        getch();
                        goto play;
                        getch();
                    }
                    else
                    {
                        Beep(1000, 500);
                        printf("\n\nWrong!!! The correct answer is A.Golf;\n");
                        getch();
                        wr++;
                        q++;
                        ansd[num] = true;
                        goto play;
                    }

                }
                else
                    goto play;
            case 7:
                if(ansd[num] == false)
                {
                    printf("\n\nThomas Cup is related to:");
                    printf("\n\nA.Tennis\tB.Badminton\n\nC.Cricket\tD.Basketball\n\n");
                    if (toupper(getch())=='B')
                    {
                        printf("\n\nCorrect!!!");
                        q++;
                        rgt++;
                        ansd[num] = true;
                        getch();
                        goto play;
                        getch();
                    }
                    else
                    {
                        Beep(1000, 500);
                        printf("\n\nWrong!!! The correct answer is B.Badminton;\n");
                        getch();
                        wr++;
                        q++;
                        ansd[num] = true;
                        goto play;
                    }

                }
                else
                    goto play;
            case 8:
                if(ansd[num] == false)
                {
                    printf("\n\nThe number of players in each side in water polo is:");
                    printf("\n\nA.6\tB.8\n\nC.9\tD.7\n\n");
                    if (toupper(getch())=='D')
                    {
                        printf("\n\nCorrect!!!");
                        q++;
                        rgt++;
                        ansd[num] = true;
                        getch();
                        goto play;
                        getch();
                    }
                    else
                    {
                        Beep(1000, 500);
                        printf("\n\nWrong!!! The correct answer is D.7;\n");
                        getch();
                        wr++;
                        q++;
                        ansd[num] = true;
                        goto play;
                    }

                }
                else
                    goto play;
            case 9:
                if(ansd[num] == false)
                {
                    printf("\n\nWhich was the first country to host the Asian Games?");
                    printf("\n\nA.China\t\tB.Japan\n\nC.India\t\tD.Korea\n\n");
                    if (toupper(getch())=='C')
                    {
                        printf("\n\nCorrect!!!");
                        q++;
                        rgt++;
                        ansd[num] = true;
                        getch();
                        goto play;
                        getch();
                    }
                    else
                    {
                        Beep(1000, 500);
                        printf("\n\nWrong!!! The correct answer is C.India;\n");
                        getch();
                        wr++;
                        q++;
                        ansd[num] = true;
                        goto play;
                    }

                }
                else
                    goto play;
            case 10:
                if(ansd[num] == false)
                {
                    printf("\n\nWhere is the headquarters of the International Olympic Committee located?");
                    printf("\n\nA.Switzerland\tB.France\n\nC.Belgium\tD.Italy\n\n");
                    if (toupper(getch())=='A')
                    {
                        printf("\n\nCorrect!!!");
                        q++;
                        rgt++;
                        ansd[num] = true;
                        getch();
                        goto play;
                        getch();
                    }
                    else
                    {
                        Beep(1000, 500);
                        printf("\n\nWrong!!! The correct answer is A.Switzerland;\n");
                        getch();
                        wr++;
                        q++;
                        ansd[num] = true;
                        goto play;
                    }

                }
                else
                    goto play;
            case 11:
                if(ansd[num] == false)
                {
                    printf("\n\n'Free throw' is associate with:");
                    printf("\n\nA.Hockey\tB.Basketball\n\nC.Volley Ball\tD.Football\n\n");
                    if (toupper(getch())=='B')
                    {
                        printf("\n\nCorrect!!!");
                        q++;
                        rgt++;
                        ansd[num] = true;
                        getch();
                        goto play;
                        getch();
                    }
                    else
                    {
                        Beep(1000, 500);
                        printf("\n\nWrong!!! The correct answer is B.Basketball;\n");
                        getch();
                        wr++;
                        q++;
                        ansd[num] = true;
                        goto play;
                    }

                }
                else
                    goto play;
            case 12:
                if(ansd[num] == false)
                {
                    printf("\n\n2018 'FIFA' world cup held in:");
                    printf("\n\nA.Qatar\t\tB.Netherlands\n\nC.France\tD.Russia\n\n");
                    if (toupper(getch())=='D')
                    {
                        printf("\n\nCorrect!!!");
                        q++;
                        rgt++;
                        ansd[num] = true;
                        getch();
                        goto play;
                        getch();
                    }
                    else
                    {
                        Beep(1000, 500);
                        printf("\n\nWrong!!! The correct answer is D.Russia;\n");
                        getch();
                        wr++;
                        q++;
                        ansd[num] = true;
                        goto play;
                    }

                }
                else
                    goto play;
            case 13:
                if(ansd[num] == false)
                {
                    printf("\n\nThe first world cup cricket was held in:");
                    printf("\n\nA.1971\tB.1973\n\nC.1975\tD.1977\n\n");
                    if (toupper(getch())=='C')
                    {
                        printf("\n\nCorrect!!!");
                        q++;
                        rgt++;
                        ansd[num] = true;
                        getch();
                        goto play;
                        getch();
                    }
                    else
                    {
                        Beep(1000, 500);
                        printf("\n\nWrong!!! The correct answer is C.1975;\n");
                        getch();
                        wr++;
                        q++;
                        ansd[num] = true;
                        goto play;
                    }

                }
                else
                    goto play;
            case 14:
                if(ansd[num] == false)
                {
                    printf("\n\nWhere did the game of chess originate?");
                    printf("\n\nA.India\t\tB.Persia\n\nC.Arabia\tD.Europe\n\n");
                    if (toupper(getch())=='A')
                    {
                        printf("\n\nCorrect!!!");
                        q++;
                        rgt++;
                        ansd[num] = true;
                        getch();
                        goto play;
                        getch();
                    }
                    else
                    {
                        Beep(1000, 500);
                        printf("\n\nWrong!!! The correct answer is A.India;\n");
                        getch();
                        wr++;
                        q++;
                        ansd[num] = true;
                        goto play;
                    }

                }
                else
                    goto play;
            case 15:
                if(ansd[num] == false)
                {
                    printf("\n\nHow many players are there on each side in the game of cricket?");
                    printf("\n\nA.11\tB.10\n\nC.12\tD.13\n\n");
                    if (toupper(getch())=='A')
                    {
                        printf("\n\nCorrect!!!");
                        q++;
                        rgt++;
                        ansd[num] = true;
                        getch();
                        goto play;
                        getch();
                    }
                    else
                    {
                        Beep(1000, 500);
                        printf("\n\nWrong!!! The correct answer is A.11;\n");
                        getch();
                        wr++;
                        q++;
                        ansd[num] = true;
                        goto play;
                    }

                }
                else
                    goto play;

            case 16:
                if(ansd[num] == false)
                {
                    printf("\n\nThe distance of marathon race is:");
                    printf("\n\nA.24 miles\tB.26 miles\n\nC.25 miles\tD.28 miles\n\n");
                    if (toupper(getch())=='B')
                    {
                        printf("\n\nCorrect!!!");
                        q++;
                        rgt++;
                        ansd[num] = true;
                        getch();
                        goto play;
                        getch();
                    }
                    else
                    {
                        Beep(1000, 500);
                        printf("\n\nWrong!!! The correct answer is B.26 miles;\n");
                        getch();
                        wr++;
                        q++;
                        ansd[num] = true;
                        goto play;
                    }

                }
                else
                    goto play;
            case 17:
                if(ansd[num] == false)
                {
                    printf("\n\nWhat is the maximum permitted length of cricket bat?");
                    printf("\n\nA.36 inches\tB.37 inches\n\nC.38 inches\tD.39 inches\n\n");
                    if (toupper(getch())=='C')
                    {
                        printf("\n\nCorrect!!!");
                        q++;
                        rgt++;
                        ansd[num] = true;
                        getch();
                        goto play;
                        getch();
                    }
                    else
                    {
                        Beep(1000, 500);
                        printf("\n\nWrong!!! The correct answer is C.38 inches;\n");
                        getch();
                        wr++;
                        q++;
                        ansd[num] = true;
                        goto play;
                    }

                }
                else
                    goto play;
            case 18:
                if(ansd[num] == false)
                {
                    printf("\n\nGreen Park Stadium is in:");
                    printf("\n\nA.Kanpur, India\t\tB.Dehradun, India\n\nC.Bengaluru, India\tD.Chandigarh, India\n\n");
                    if (toupper(getch())=='A')
                    {
                        printf("\n\nCorrect!!!");
                        q++;
                        rgt++;
                        ansd[num] = true;
                        getch();
                        goto play;
                        getch();
                    }
                    else
                    {
                        Beep(1000, 500);
                        printf("\n\nWrong!!! The correct answer is A. Kanpur, India;\n");
                        getch();
                        wr++;
                        q++;
                        ansd[num] = true;
                        goto play;
                    }

                }
                else
                    goto play;
            case 19:
                if(ansd[num] == false)
                {
                    printf("\n\nWhich of the following is not correct?");
                    printf("\n\nA.Sania Mirza(Tennis)\t\tB.Jeev Milkha Singh(Football)\n\nC.Saina Nehwal(Badminton)\tD.Vishwanathan Anand(Chess)\n\n");
                    if (toupper(getch())=='B')
                    {
                        printf("\n\nCorrect!!!");
                        q++;
                        rgt++;
                        ansd[num] = true;
                        getch();
                        goto play;
                        getch();
                    }
                    else
                    {
                        Beep(1000, 500);
                        printf("\n\nWrong!!! The correct answer is B.Jeec Milkha Singh(Football);\n");
                        getch();
                        wr++;
                        q++;
                        ansd[num] = true;
                        goto play;
                    }

                }
                else
                    goto play;
            case 20:
                if(ansd[num] == false)
                {
                    printf("\n\nIndia won it's first Olympic hockey gold in:");
                    printf("\n\nA.1924\tB.1932\n\nC.1948\tD.1928\n\n");
                    if (toupper(getch())=='D')
                    {
                        printf("\n\nCorrect!!!");
                        q++;
                        rgt++;
                        ansd[num] = true;
                        getch();
                        goto play;
                        getch();
                    }
                    else
                    {
                        Beep(1000, 500);
                        printf("\n\nWrong!!! The correct answer is D.1928;\n");
                        getch();
                        wr++;
                        q++;
                        ansd[num] = true;
                        goto play;

                    }
                }
                else
                    goto play;
            }
        }
    }
    else
    {
        Beep(5000, 500);
        printf("\n\n\t\tYou have given 3 wrong answer;\n\n\t\tYou cannot play anymore;");
        goto finish;
    }
finish:
    {
        int scr=(rgt*5);
        if(scr<0)
        {
            scr=0;
        }
        if (scr==50)
            printf("\n\n\t\tExcellent!!! Keep it up :)");

        else if (scr>=40 && scr<50)
            printf("\n\n\t\tVery Good!!");

        else if (scr>=20 &&scr<40)
            printf("\n\n\t\tGood! But You Need to Know More :)");

        else if (scr>=10 && scr<20)
            printf("\n\n\t\tSatisfactory Result, Study More :)");

        else
            printf("\n\n\t\tYour General Knowledge is Very Poor :(");
            printf("\n");

        return scr;
    }
}

void Credits()
{
    system("cls");
    //system("color 04");
    printf("\n\t\t\t***************************** Credits *****************************");
    printf("\n\n\n\tAdvisor of this project:\n\tSyeda Tasmia Alvi Onika\n\tLecturer, Department of CSE\n\tDaffodil International University\n\n\n");
    printf("\n\n\n\tPresented by:\n\tShoeb Mahmud Joy\n\tID: 192-15-13045\n\tDaffodil International University");
}

void Rules()
{
    system("cls");
    //system("color 04");
    printf("\n\t\t\t***************************** GAME RULES *****************************");
    printf("\n\n\n\t1.You have 10 question to answer.");
    printf("\n\n\t2.You will be given 4 options and you have to press A, B, C, D for the right option.");
    printf("\n\n\t3.Without A, B, C, D, if you press any other button for answering your question it will count as wrong answer.");
    printf("\n\n\t4.Each question will carry 5 points.");
    printf("\n\n\t5.The game will automatically end after answering 3 questions incorrectly.");
    printf("\n\n\t6.There is no negative marking for wrong answer.");
    printf("\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\tGOOD LUCK:)");
}

void ScoreBoard()
{
    char name[20];
    float scr;
    FILE *quiz;
    system("cls");
    quiz=fopen("Score.txt","r");
    fscanf(quiz,"%s%f",&name,&scr);
    printf("\t%s is the current high scorer with the score of %.2f", name, scr);
    printf("\n\n\t\t ");
    fclose(quiz);
    getch();
}

void SetScore(char nm[20], float score)
{
    char hn[20];
    float hs;
    FILE *quiz;
    system("cls");
    quiz=fopen("Score.txt","r");
    fscanf(quiz,"%s %f",&hn,&hs);
    if (score>=hs)
    {
        hs=score;
        fclose(quiz);
        quiz=fopen("Score.txt","w");
        fprintf(quiz,"%s %.2f",nm,hs);
        fclose(quiz);
    }
}

void Reset_High_Score()
{
    FILE *saveScore;
    saveScore=fopen("Score.txt", "w");
    system("cls");
    fclose(saveScore);
}

int main()
{
    char name[15];
    char ch;

home:
    system("cls");
    //system("color 09");
    puts("\n\t\t***************************** WELCOME TO Quiz Test Program 2021 *****************************\n\n");
    puts("\n\t\t Enter the mentioned keywords for its assigned action:");
    puts("\n\t\t A.Start Game");
    puts("\n\t\t B.High Score");
    puts("\n\t\t C.Reset High Score");
    puts("\n\t\t D.Rules");
    puts("\n\t\t E.Credits");
    puts("\n\t\t F.Exit");

    ch = toupper(getch());
    if(ch=='B')
    {
        ScoreBoard();
        getch();
        goto home;
    }
    else if(ch =='C')
    {
        Reset_High_Score();
        getch();
        goto home;
    }
    else if (ch =='D')
    {
        Rules();
        getch();
        goto home;
    }
    else if (ch =='E')
    {
        Credits();
        getch();
        goto home;
    }
    else if(ch == 'F')
    {
        printf("Exiting");
        system("cls");
        exit(1);
    }
    else if(ch== 'A')
    {
        float score=0.0;
        printf("\n\n\n\t\tPlease Enter your Name:\t");
        gets(name);
        system("cls");
        //system("color 09");
        printf("\n\n\t\tPress S to start the quiz\n");
        if(toupper(getch())=='S')
        {
            goto ghome;
        }
        else
        {
            goto home;
            system("cls");
        }
ghome:
        system("cls");
        //system("color 09");
        printf("\n\n\t\tPlease select the subject you prefer for your quiz:\n");
        printf("\n\t\t1.International\t2.Bangladesh\n\n\t\t3.Technology\t4.Sports");
        char ch = toupper(getch());
        if(ch == '1')
        {
            score =  InternationalQ();
            printf("\n\t\tYour Score: %.2f;\n",score);
            getch();
            SetScore(name,score);
            goto home;
        }
        else if(ch == '2')
        {
            score = BangladeshQ();
            printf("\n\t\tYour Score: %.2f;\n",score);
            getch();
            SetScore(name,score);
            goto home;
        }
        else if(ch == '3')
        {
            score = TechnologyQ();
            printf("\n\t\tYour Score: %.2f;\n",score);
            getch();
            SetScore(name,score);
            goto home;
        }
        else if(ch == '4')
        {
            score = SportsQ();
            printf("\n\t\tYour Score: %.2f;\n",score);
            getch();
            SetScore(name,score);
            goto home;
        }
        else
        {
            printf("\n\n\n\t\tInvalid Input:(\n");
            getch();
            goto ghome;
        }
    }
    else
    {
        printf("\n\n\n\n\t\t!!!!!Invalid Keyword!!!!!!\n");
        getch();
        goto home;
    }
}
