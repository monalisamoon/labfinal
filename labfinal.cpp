#include <iostream>
#include <string>
#include<graphics.h>

using namespace std;

//DELAY
#define DEL  5000

void showEmoji()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Set color of smiley to yellow
    setcolor(YELLOW);

    // creating circle and fill it with yellow color
    circle(300, 150, 100);
    setfillstyle(SOLID_FILL, YELLOW);
    floodfill(300, 150, YELLOW);

    // Set color of background to black
    setcolor(BLACK);

    //EYES: Use fill ellipse for creating eyes
    setfillstyle(SOLID_FILL, BLACK);
    fillellipse(320, 120, 15, 15);
    setfillstyle(SOLID_FILL, BLACK);
    fillellipse(280, 120, 15, 15);

    // Use ellipse for creating mouth/Lips
    ellipse(300, 170, 205, 335, 40, 20);
    ellipse(300, 170, 205, 335, 40, 21);
    ellipse(300, 170, 205, 335, 40, 22);
    ellipse(300, 170, 205, 335, 40, 23);
    ellipse(300, 170, 205, 335, 40, 24);

    delay(DEL);
    closegraph();
}

void showDoremon()
{

    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");


    //blue top head/cap using fillellipse
    setfillstyle(SOLID_FILL,BLUE);
    fillellipse(200,200,100,100);

    // white Face using fillellipse by setting setfillstyle white
    setfillstyle(SOLID_FILL,WHITE);
    fillellipse(200,220,90,80);

    //LEFT EYE using fillellipse with black outline(outline by setcolor)
    setcolor(BLACK);
    setfillstyle(SOLID_FILL,WHITE);
    fillellipse(185,140,15,20);

    //LEFT EYEBALL
    setcolor(BLACK);
    setfillstyle(SOLID_FILL,BLACK);
    fillellipse(190,145,5,10);
    setcolor(BLACK);


    //RIGHT EYE
    setfillstyle(SOLID_FILL,WHITE);
    fillellipse(215,140,15,20);
    setcolor(BLACK);

    //RIGHT EYEBALL
    setfillstyle(SOLID_FILL,BLACK);
    fillellipse(210,145,5,10);
    setcolor(BLACK);


    //RED NOSE
    setfillstyle(SOLID_FILL,RED);
    fillellipse(200,180,15,15);


    //NOSE LINE
    setcolor(BLACK);
    line(200,195,200,230);
    setcolor(BLACK);

    //ROUND LIPS
    ellipse(200,220,190,350,50,40);


    //Right Mustach
    line(220,200,280,150);
    line(220,200,280,200);
    line(220,200,280,250);


    // Left Mustach
    line(180,200,120,150);
    line(180,200,120,200);
    line(180,200,120,250);


    //RED BELT
    setfillstyle(SOLID_FILL,RED);
    bar(140,295,260,310);


    // YELLOW BELL
    setfillstyle(SOLID_FILL,YELLOW);
    fillellipse(200,305,10,10);

    delay(DEL);

   closegraph();

}

void showBird()
{

    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");

    setcolor(RED);

    //body
    setfillstyle(SOLID_FILL,YELLOW);
    ellipse(345,180,190,189,89,50);
    floodfill(345,180,RED);

    //head
    setfillstyle(SOLID_FILL,YELLOW);
    circle(224,150,40);
    floodfill(225,150,RED);


    //EYE
    setfillstyle(SOLID_FILL,BLACK);
    circle(200,143,5);
    floodfill(200,143,RED);



    //beak/ thoth
    line(135,183,190,170);
    line(135,183,185,143);


    //Right Leg
    line(379,290,379,227);

    //left leg
    line(340,280,345,230);

    //right nail
    arc(371,295,30,160,10);

    //left nail
    arc(331,286,20,160,10);


    //TAIL
    setfillstyle(SOLID_FILL,YELLOW);
    ellipse(507,160,110,109,80,20);
    floodfill(510,160,RED);


    //Inner tail outline
    setfillstyle(SOLID_FILL,YELLOW);
    ellipse(503,160,108,107,70,10);
    floodfill(503,160,RED);

    delay(DEL);
    closegraph();
}

void showFlag()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");

    //Right stick
    setfillstyle(SOLID_FILL,WHITE);
    bar(30,30,40,400);

    //Flag string
    setfillstyle(SOLID_FILL,RED);
    bar(26,35,30,400);

    //Lower part of flag
    setfillstyle(SOLID_FILL,WHITE);
    bar(20,390,50,410);
    setcolor(RED);
    setfillstyle(SOLID_FILL,WHITE);
    bar(15,410,55,420);


    //GREEN FLAG PART
    setfillstyle(SOLID_FILL,GREEN);
    bar(40,40,350,220);

    //RED CIRCLE
    setfillstyle(SOLID_FILL,RED);
    fillellipse(180,130,50,50);




    delay(DEL);
    closegraph();

}

int main()
{
    cout<<"COMPUTER GRAPHICS SESSIONAL PROJECT SHOWCASE"<<endl;

    cout<<"Enter any of below option: "<<endl;
    cout<<"1. Emoji(emoji)"<<endl<<"2. Doremon(doremon)"<<endl<<"3. Bird(bird)"<<endl<<"4. National Flag(flag)"<<endl;

    while (true){
        string user_input;
        cout << "Enter something (type 'exit' to quit): ";
        getline(cin, user_input);

        // Check if the user wants to exit
        if (user_input == "emoji" || user_input == "1")
        {
            showEmoji();
        }
        else if(user_input=="doremon" ||user_input=="2")
        {
            showDoremon();
        }
        else if(user_input=="bird" ||user_input=="3")
        {
            showBird();
        }
        else if(user_input=="flag" ||user_input=="4")
        {
            showFlag();
        }
        else if (user_input == "exit" ||user_input=="0")
        {
            break;
        }
        else
        {
            cout << "Nothing found by " << user_input <<". Try again!!!"<< endl;
        }
    }

    return 0;
}


