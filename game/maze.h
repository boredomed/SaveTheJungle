#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <Windows.h>   //For Sound
#include <mmsystem.h>  //For Sound
#include "glut.h"
#include "GL.H"

void display_maze()
{
	draw(image30,0,g_Height,g_Width,g_Height);
	char buff[] = "You have 2500 ms to take the fruit and ";
	printText(buff, 10, 25);
	char buff2[]= "Collect atleats 2 orange USB's to to save the junlge";
	printText(buff2,30,50);
	//printf("loalylo");
	game_pause_i = 0;

	glColor3f(0, 0, 0);
	drawRectangle(0, 600, 800, 10);
	drawRectangle(0, 600, 10, 600);
	drawRectangle(790, 600, 10, 600);
	drawRectangle(0, 10, 800, 10);
	//draw(image60, 800, 600, 800, 600);


	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);//RED
	glVertex2f(100, 400);          //left down vertex
	glVertex2f(110, 400);     //right down vertex
	glVertex2f(110, 500);//right to vetec
	glVertex2f(100, 500);     //right to vetex
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);//LIGHT GREEN
	glVertex2f(100, 500);          //left down vertex
	glVertex2f(540, 500);     //right down vertex
	glVertex2f(540, 510);//right to vetec
	glVertex2f(100, 510);     //right to vetex
	glEnd();


	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);//BLUE
	glVertex2f(530, 500);          //left down vertex
	glVertex2f(540, 500);     //right down vertex
	glVertex2f(540, 250);//right to vetec
	glVertex2f(530, 250);     //right to vetex

	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);//YELLOW
	glVertex2f(530, 250);          //upper endmost
	glVertex2f(700, 250);     //right down vertex
	glVertex2f(700, 260);//right to vetec
	glVertex2f(530, 260);     //right to vetex

	glEnd();


	glBegin(GL_POLYGON);
glColor3f(0, 0, 0);// MEDIUM PINK
	glVertex2f(600, 550);          //upper endmost
	glVertex2f(590, 550);     //right down vertex
	glVertex2f(590, 370);//right to vetec
	glVertex2f(600, 370);     //right to vetex

	glEnd();



	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);//OFF WHITE
	glVertex2f(590, 370);          //upper endmost
	glVertex2f(720, 370);     //right down vertex
	glVertex2f(720, 380);//right to vetec
	glVertex2f(590, 380);     //right to vetex

	glEnd();


	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);// LIGHT C GREEN
	glVertex2f(720, 470);          //upper endmost
	glVertex2f(660, 470);     //right down vertex
	glVertex2f(660, 480);//right to vetec
	glVertex2f(720, 480);     //right to vetex

	glEnd();



	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);// DARK PINK
	glVertex2f(710, 380);          //upper endmost
	glVertex2f(720, 380);     //right down vertex
	glVertex2f(720, 470);//right to vetec
	glVertex2f(710, 470);     //right to vetex

	glEnd();




	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);//LIGHT PINK
	glVertex2f(650, 430);          //upper endmost
	glVertex2f(660, 430);     //right down vertex
	glVertex2f(660, 600);//right to vetec
	glVertex2f(650, 600);     //right to vetex

	glEnd();



	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);// DULL DARK BLUE
	glVertex2f(800, 300);          //upper endmost
	glVertex2f(800, 310);     //right down vertex
	glVertex2f(460, 310);//right to vetec
	glVertex2f(460, 300);     //right to vetex

	glEnd();




	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);// FADED RED
	glVertex2f(110, 450);          //left down vertex
	glVertex2f(380, 450);     //right down vertex
	glVertex2f(380, 460);//right to vetec
	glVertex2f(110, 460);     //right to vetex

	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);// GANDA GREEN
	glVertex2f(0, 300);          //left down vertex
	glVertex2f(200, 300);     //right down vertex
	glVertex2f(200, 310);//right to vetec
	glVertex2f(0, 310);     //right to vetex

	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);// BROWN
	glVertex2f(190, 310);          //left down vertex
	glVertex2f(200, 310);     //right down vertex
	glVertex2f(200, 410);//right to vetec
	glVertex2f(190, 410);     //right to vetex

	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);// AJEEB SA GREEN
	glVertex2f(190, 400);          //left down vertex
	glVertex2f(400, 400);     //right down vertex
	glVertex2f(400, 410);//right to vetec
	glVertex2f(190, 410);     //right to vetex

	glEnd();


	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);// AJEEB SA BLUE
	glVertex2f(390, 400);          //left down vertex
	glVertex2f(400, 400);     //right down vertex
	glVertex2f(400, 330);//right to vetec
	glVertex2f(390, 330);     //right to vetex

	glEnd();


	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);// WHITE
	glVertex2f(400, 330);          //left down vertex
	glVertex2f(250, 330);     //right down vertex
	glVertex2f(250, 340);//right to vetec
	glVertex2f(400, 340);     //right to vetex

	glEnd();




	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);//ORANGE
	glVertex2f(250, 330);          //left down vertex
	glVertex2f(260, 330);     //right down vertex
	glVertex2f(260, 90);//right to vetec
	glVertex2f(250, 90);     //right to vetex

	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);//MAROON
	glVertex2f(120, 90);          //left down vertex
	glVertex2f(690, 90);     //right down vertex
	glVertex2f(690, 100);//right to vetec
	glVertex2f(120, 100);     //right to vetex

	glEnd();

	glBegin(GL_POLYGON);
glColor3f(0, 0, 0);// DARK GRAY
	glVertex2f(120, 100);          //left down vertex
	glVertex2f(130, 100);     //right down vertex
	glVertex2f(130, 200);//right to vetec
	glVertex2f(120, 200);     //right to vetex

	glEnd();


	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);// LIGHT GRAY
	glVertex2f(60, 100);          //left down vertex
	glVertex2f(70, 100);     //right down vertex
	glVertex2f(70, 250);//right to vetec
	glVertex2f(60, 250);     //right to vetex

	glEnd();


	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);// MAGENTA
	glVertex2f(60, 250);          //left down vertex
	glVertex2f(250, 250);     //right down vertex
	glVertex2f(250, 260);//right to vetec
	glVertex2f(60, 260);     //right to vetex

	glEnd();

	glBegin(GL_POLYGON);
glColor3f(0, 0, 0);// LIGHT PURPLE
	glVertex2f(180, 250);          //left down vertex
	glVertex2f(190, 250);     //right down vertex
	glVertex2f(190, 140);//right to vetec
	glVertex2f(180, 140);     //right to vetex

	glEnd();


	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);// MUSTARD
	glVertex2f(680, 100);          //left down vertex
	glVertex2f(690, 100);     //right down vertex
	glVertex2f(690, 190);//right to vetec
	glVertex2f(680, 190);     //right to vetex

	glEnd();


	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);// LIGHT BROWN
	glVertex2f(690, 190);          //left down vertex
	glVertex2f(500, 190);     //right down vertex
	glVertex2f(500, 200);//right to vetec
	glVertex2f(690, 200);     //right to vetex

	glEnd();


	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);// DIRTY GREEN
	glVertex2f(500, 190);          //left down vertex
	glVertex2f(510, 190);     //right down vertex
	glVertex2f(510, 155);//right to vetec
	glVertex2f(500, 155);     //right to vetex

	glEnd();


	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);// OLIVE GREEN
	glVertex2f(500, 145);          //left down vertex
	glVertex2f(590, 145);     //right down vertex
	glVertex2f(590, 155);//right to vetec
	glVertex2f(500, 155);     //right to vetex

	glEnd();



	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);// SKY BLUE
	glVertex2f(450, 100);          //left down vertex
	glVertex2f(440, 100);     //right down vertex
	glVertex2f(440, 200);//right to vetec
	glVertex2f(450, 200);     //right to vetex

	glEnd();



	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);// DARKEST PURPLE
	glVertex2f(450, 200);          //left down vertex
	glVertex2f(400, 200);     //right down vertex
	glVertex2f(400, 210);//right to vetec
	glVertex2f(450, 210);     //right to vetex

	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);// SKIN
	glVertex2f(400, 140);          //left down vertex
	glVertex2f(360, 140);     //right down vertex
	glVertex2f(360, 150);//right to vetec
	glVertex2f(400, 150);     //right to vetex

	glEnd();


	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);// LIME GREEN
	glVertex2f(370, 140);          //left down vertex
	glVertex2f(360, 140);     //right down vertex
	glVertex2f(360, 100);//right to vetec
	glVertex2f(370, 100);     //right to vetex

	glEnd();


	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);// LIGHT AQUA
	glVertex2f(310, 180);          //left down vertex
	glVertex2f(350, 180);     //right down vertex
	glVertex2f(350, 190);//right to vetec
	glVertex2f(310, 190);     //right to vetex

	glEnd();


	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);/// MEDIUM PURPLE
	glVertex2f(310, 190);          //left down vertex
	glVertex2f(320, 190);     //right down vertex
	glVertex2f(320, 260);//right to vetec
	glVertex2f(310, 260);     //right to vetex

	glEnd();


	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);// BLACK IN MID
	glVertex2f(310, 260);          //left down vertex
	glVertex2f(460, 260);     //right down vertex
	glVertex2f(460, 270);//right to vetec
	glVertex2f(310, 270);     //right to vetex

	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0, 0, 0);// LIGHT ORANGE
	glVertex2f(450, 270);          //left down vertex
	glVertex2f(460, 270);     //right down vertex
	glVertex2f(460, 450);//right to vetec
	glVertex2f(450, 450);     //right to vetex

	glEnd();
	//fruits
	if (counter1 == 0)
	{
		glBegin(GL_POLYGON);
		glColor3f(1, 0.6, 0);// fruit
		glVertex2f(370, 360);          //left down vertex
		glVertex2f(390, 360);     //right down vertex
		glVertex2f(390, 380);//right to vetec
		glVertex2f(370, 380);     //right to vetex

		glEnd();
	}
	if ((berry[1] >= 360 && berry[1] <= 380 && berryx[1] == 370) || (berry[2] >= 360 && berry[2] <= 380) && berryx[1] == 370){
		if(counter1==0){

			win=win+1;
		++counter1;
		}

	}

	//fruit2
	if (counter2 == 0){
		glBegin(GL_POLYGON);
		glColor3f(1, .6, 0);// fruit
		glVertex2f(110, 480);          //left down vertex
		glVertex2f(130, 480);     //right down vertex
		glVertex2f(130, 500);//right to vetec
		glVertex2f(110, 500);     //right to vetex
		draw(image70, 110, 500, 20, 20);
		glEnd();
		
	}

	if ((berry[0] >= 480 && berry[0] <= 500 && berryx[0] == 130) || (berryx[3] == 130 && berry[3] >= 480 && berry[3] <= 500)){
		if(counter2==0){
			win=win+1;
		++counter2;
		}
	}


	//fruit3
	if (counter3 == 0){
		glBegin(GL_POLYGON);
		glColor3f(1, 0.6, 0);// fruit
		glVertex2f(470, 180);          //left down vertex
		glVertex2f(490, 180);     //right down vertex
		glVertex2f(490, 200);//right to vetec
		glVertex2f(470, 200);     //right to vetex

		glEnd();
	
	}

	if ((berryx[0] >= 470 && berryx[0] <= 490 && berry[0] == 200) || (berryx[1] >= 470 && berryx[1] <= 490 && berry[1] == 200)) {
		if(counter3==0){
			win=win+1;
		++counter3;
		}
			
	}

	//fruit4
	if (counter4 == 0){
		glBegin(GL_POLYGON);
		glColor3f(1, 0.6, 0);          // fruit
		glVertex2f(400, 110);          //left down vertex
		glVertex2f(420, 110);          //right down vertex
		glVertex2f(420, 130);          //right to vetec
		glVertex2f(400, 130);          //right to vetex

		glEnd();
			
	}

	if ((berry[0] == 130 && berryx[0] >= 400 && berryx[0] <= 420) || (berry[1] == 130 && berryx[1] >= 400 && berryx[1] <= 420)){
		if(counter4==0){
			win=win+1;
		++counter4;
		}
			
	}

	if (counter5 == 0){
		glBegin(GL_POLYGON);
		glColor3f(1, 0, 0);     //fruit
		glVertex2f(740, 570);     //left down vertex
		glVertex2f(790, 570);     //right down vertex
		glVertex2f(790, 590);     //right to vetec
		glVertex2f(740, 590);     //right to vetex

		glEnd();

	}

	if ((berry[3] == 570 && berryx[3] >= 740 && berryx[3] <= 790) || (berry[2] == 570 && berryx[2] >= 740 && berryx[2] <= 790))
	{
		++counter5;

			
	}

	glBegin(GL_POLYGON);
	glColor3f(1, 1.0, 1.0);
	glVertex2f(berryx[0], berry[0]);          //upper endmost
	glVertex2f(berryx[1], berry[1]);     //right down vertex
	glVertex2f(berryx[2], berry[2]);//right to vetec
	glVertex2f(berryx[3], berry[3]);     //right to vetex

	glEnd();

	// collisions
	// outter walls
	if (berryx[0] <= 10)
	{
		berryx[0] += 5; berryx[1] += 5; berryx[2] += 5; berryx[3] += 5;
	}
	if (berryx[1] >= 790)
	{
		berryx[0] -= 5; berryx[1] -= 5; berryx[2] -= 5; berryx[3] -= 5;
	}
	if (berry[0] <= 10)
	{
		berry[0] += 5; berry[1] += 5; berry[2] += 5; berry[3] += 5;
	}
	if (berry[0] >= 570)
	{
		berry[0] -= 5; berry[1] -= 5; berry[2] -= 5; berry[3] -= 5;
	}

	//VERTICAL LINES


	//dirty green
	if (berryx[0] >= 500 && berryx[0] <= 510 && berry[0] >= 155 && berry[0] <= 200)
	{
		berryx[0] += 5; berryx[1] += 5; berryx[2] += 5; berryx[3] += 5;
	}
	if (berryx[1] >= 500 && berryx[1] <= 510 && berry[1] >= 155 && berry[1] <= 200)
	{
		berryx[0] -= 5; berryx[1] -= 5; berryx[2] -= 5; berryx[3] -= 5;
	}


	//light orange
	if (berryx[0] >= 450 && berryx[0] <= 460 && berry[0] >= 270 && berry[0] <= 450)
	{
		berryx[0] += 5; berryx[1] += 5; berryx[2] += 5; berryx[3] += 5;
	}
	if (berryx[1] >= 450 && berryx[1] <= 460 && berry[1] >= 270 && berry[1] <= 450)
	{
		berryx[0] -= 5; berryx[1] -= 5; berryx[2] -= 5; berryx[3] -= 5;
	}

	if (berryx[0]>445 && berryx[0] <= 465 && berry[0] <= 450 && berry[0] >= 395)
	{
		berry[0] += 5; berry[1] += 5; berry[2] += 5; berry[3] += 5;
	}


	// orange
	if (berryx[0] >= 250 && berryx[0] <= 260 && berry[0] >= 90 && berry[0] <= 330)
	{
		berryx[0] += 5; berryx[1] += 5; berryx[2] += 5; berryx[3] += 5;
	}
	if (berryx[1] >= 250 && berryx[1] <= 260 && berry[1] >= 90 && berry[1] <= 330)
	{
		berryx[0] -= 5; berryx[1] -= 5; berryx[2] -= 5; berryx[3] -= 5;
	}


	//mustard
	if (berryx[0] >= 680 && berryx[0] <= 690 && berry[0] >= 100 && berry[0] <= 190)
	{
		berryx[0] += 5; berryx[1] += 5; berryx[2] += 5; berryx[3] += 5;
	}
	if (berryx[1] >= 680 && berryx[1] <= 690 && berry[1] >= 100 && berry[1] <= 190)
	{
		berryx[0] -= 5; berryx[1] -= 5; berryx[2] -= 5; berryx[3] -= 5;
	}


	//red
	if (berryx[0] >= 100 && berryx[0] <= 110 && berry[0] >= 400 && berry[0] <= 500)
	{
		berryx[0] += 5; berryx[1] += 5; berryx[2] += 5; berryx[3] += 5;
	}
	if (berryx[1] >= 100 && berryx[1] <= 110 && berry[1] >= 400 && berry[1] <= 500)
	{
		berryx[0] -= 5; berryx[1] -= 5; berryx[2] -= 5; berryx[3] -= 5;
	}

	if (berryx[3] >= 95 && berryx[3] <= 110 && berry[3] >= 400 && berry[3] <= 500)
	{
		berry[0] -= 5; berry[1] -= 5; berry[2] -= 5; berry[3] -= 5;
	}

	//Dark pink
	if (berryx[0] >= 710 && berryx[0] <= 720 && berry[0] >= 370 && berry[0] <= 470)
	{
		berryx[0] += 5; berryx[1] += 5; berryx[2] += 5; berryx[3] += 5;
	}
	if (berryx[1] >= 710 && berryx[1] <= 720 && berry[1] >= 370 && berry[1] <= 470)
	{
		berryx[0] -= 5; berryx[1] -= 5; berryx[2] -= 5; berryx[3] -= 5;
	}


	// light pink
	if (berryx[0] >= 650 && berryx[0] <= 660 && berry[0] >= 430 && berry[0] <= 600)
	{
		berryx[0] += 5; berryx[1] += 5; berryx[2] += 5; berryx[3] += 5;
	}
	if (berryx[1] >= 650 && berryx[1] <= 660 && berry[1] >= 430 && berry[1] <= 600)
	{
		berryx[0] -= 5; berryx[1] -= 5; berryx[2] -= 5; berryx[3] -= 5;
	}

	if (berry[3] >= 430 && berry[3] <= 600 && berryx[3] >= 645 && berryx[3] <= 665)
	{
		berry[0] -= 5; berry[1] -= 5; berry[2] -= 5; berry[3] -= 5;
	}

	//medium pink
	if (berryx[0] >= 590 && berryx[0] <= 600 && berry[0] >= 370 && berry[0] <= 550)
	{
		berryx[0] += 5; berryx[1] += 5; berryx[2] += 5; berryx[3] += 5;
	}
	if (berryx[1] >= 590 && berryx[1] <= 600 && berry[1] >= 370 && berry[1] <= 550)
	{
		berryx[0] -= 5; berryx[1] -= 5; berryx[2] -= 5; berryx[3] -= 5;
	}

	if (berry[0] <= 550 && berry[0] >= 420 && berryx[0] >= 585 && berryx[0] <= 605)
	{
		berry[0] += 5; berry[1] += 5; berry[2] += 5; berry[3] += 5;
	}

	//med purple
	if (berryx[0] >= 310 && berryx[0] <= 320 && berry[0] >= 190 && berry[0] <= 260)
	{
		berryx[0] += 5; berryx[1] += 5; berryx[2] += 5; berryx[3] += 5;
	}
	if (berryx[1] >= 310 && berryx[1] <= 320 && berry[1] >= 190 && berry[1] <= 250)
	{
		berryx[0] -= 5; berryx[1] -= 5; berryx[2] -= 5; berryx[3] -= 5;
	}

	//liht purple
	if (berryx[0] >= 180 && berryx[0] <= 190 && berry[0] >= 140 && berry[0] <= 250)
	{
		berryx[0] += 5; berryx[1] += 5; berryx[2] += 5; berryx[3] += 5;
	}
	if (berryx[1] >= 180 && berryx[1] <= 190 && berry[1] >= 140 && berry[1] <= 250)
	{
		berryx[0] -= 5; berryx[1] -= 5; berryx[2] -= 5; berryx[3] -= 5;
	}

	if (berry[2] >= 140 && berry[2] <= 200 && berryx[2] >= 175 && berryx[2] <= 195)
	{
		berry[0] -= 5; berry[1] -= 5; berry[2] -= 5; berry[3] -= 5;
	}

	//lime green
	if (berryx[0] >= 360 && berryx[0] <= 370 && berry[0] >= 90 && berry[0] <= 150)
	{
		berryx[0] += 5; berryx[1] += 5; berryx[2] += 5; berryx[3] += 5;
	}
	if (berryx[1] >= 360 && berryx[1] <= 370 && berry[1] >= 90 && berry[1] <= 150)
	{
		berryx[0] -= 5; berryx[1] -= 5; berryx[2] -= 5; berryx[3] -= 5;
	}

	//blue
	if (berryx[0] >= 530 && berryx[0] <= 540 && berry[0] >= 250 && berry[0] <= 510)
	{
		berryx[0] += 5; berryx[1] += 5; berryx[2] += 5; berryx[3] += 5;
	}
	if (berryx[1] >= 530 && berryx[1] <= 540 && berry[1] >= 230 && berry[1] <= 510)
	{
		berryx[0] -= 5; berryx[1] -= 5; berryx[2] -= 5; berryx[3] -= 5;
	}


	//brown
	if (berryx[0] >= 190 && berryx[0] <= 200 && berry[0] >= 310 && berry[0] <= 410)
	{
		berryx[0] += 5; berryx[1] += 5; berryx[2] += 5; berryx[3] += 5;
	}
	if (berryx[1] >= 190 && berryx[1] <= 200 && berry[1] >= 310 && berry[1] <= 410)
	{
		berryx[0] -= 5; berryx[1] -= 5; berryx[2] -= 5; berryx[3] -= 5;
	}


	//ajeeb blue
	if (berryx[0] >= 390 && berryx[0] <= 400 && berry[0] >= 330 && berry[0] <= 410)
	{
		berryx[0] += 5; berryx[1] += 5; berryx[2] += 5; berryx[3] += 5;
	}
	if (berryx[1] >= 390 && berryx[1] <= 400 && berry[1] >= 330 && berry[1] <= 410)
	{
		berryx[0] -= 5; berryx[1] -= 5; berryx[2] -= 5; berryx[3] -= 5;
	}


	//light gray
	if (berryx[0] >= 60 && berryx[0] <= 70 && berry[0] >= 100 && berry[0] <= 250)
	{
		berryx[0] += 5; berryx[1] += 5; berryx[2] += 5; berryx[3] += 5;
	}
	if (berryx[1] >= 60 && berryx[1] <= 70 && berry[1] >= 100 && berry[1] <= 250)
	{
		berryx[0] -= 5; berryx[1] -= 5; berryx[2] -= 5; berryx[3] -= 5;
	}

	if (berryx[3] >= 40 && berryx[3] <= 70 && berry[3] >= 100 && berry[3] <= 240)
	{
		berry[0] -= 5; berry[1] -= 5; berry[2] -= 5; berry[3] -= 5;
	}

	//dark gray
	if (berryx[0] >= 120 && berryx[0] <= 130 && berry[0] >= 90 && berry[0] <= 200)
	{
		berryx[0] += 5; berryx[1] += 5; berryx[2] += 5; berryx[3] += 5;
	}
	if (berryx[1] >= 120 && berryx[1] <= 130 && berry[1] >= 90 && berry[1] <= 200)
	{
		berryx[0] -= 5; berryx[1] -= 5; berryx[2] -= 5; berryx[3] -= 5;
	}

	if (berryx[0] >= 115 && berryx[0] <= 135 && berry[0] <= 200 && berry[0] >= 90)
	{
		berry[0] += 5; berry[1] += 5; berry[2] += 5; berry[3] += 5;
	}

	//SKY blue
	if (berryx[0] >= 440 && berryx[0] <= 450 && berry[0] >= 90 && berry[0] <= 210)
	{
		berryx[0] += 5; berryx[1] += 5; berryx[2] += 5; berryx[3] += 5;
	}
	if (berryx[1] >= 440 && berryx[1] <= 450 && berry[1] >= 90 && berry[1] <= 210)
	{
		berryx[0] -= 5; berryx[1] -= 5; berryx[2] -= 5; berryx[3] -= 5;
	}


	//HORIZONTAL
	//Magenta
	if (berryx[1] >= 60 && berryx[1] <= 250 && berry[1] >= 250 && berry[1] <= 260)
	{
		berry[0] += 5; berry[1] += 5; berry[2] += 5; berry[3] += 5;
	}
	if (berryx[1] >= 60 && berryx[1] <= 250 && berry[1] >= 250 && berry[1] <= 260)
	{
		berry[0] -= 5; berry[1] -= 5; berry[2] -= 5; berry[3] -= 5;
	}

	//maroon
	if (berryx[1] >= 120 && berryx[1] <= 690 && berry[1] >= 90 && berry[1] <= 100)
	{
		berry[0] += 5; berry[1] += 5; berry[2] += 5; berry[3] += 5;
	}
	if (berryx[2] >= 120 && berryx[2] <= 690 && berry[2] >= 90 && berry[2] <= 100)
	{
		berry[0] -= 5; berry[1] -= 5; berry[2] -= 5; berry[3] -= 5;
	}

	if (berry[3] >= 95 && berry[3] <= 115 && berryx[3] >= 120 && berryx[3] <= 690)
	{
		berryx[0] += 5; berryx[1] += 5; berryx[2] += 5; berryx[3] += 5;
	}
	if (berry[1] >= 85 && berry[1] <= 100 && berryx[1] >= 120 && berryx[1] <= 690)
	{
		berryx[0] -= 5; berryx[1] -= 5; berryx[2] -= 5; berryx[3] -= 5;
	}

	//skin
	if (berryx[1] >= 360 && berryx[1] <= 400 && berry[1] >= 140 && berry[1] <= 150)
	{
		berry[0] += 5; berry[1] += 5; berry[2] += 5; berry[3] += 5;
	}
	if (berryx[2] >= 360 && berryx[2] <= 400 && berry[2] >= 140 && berry[2] <= 150)
	{
		berry[0] -= 5; berry[1] -= 5; berry[2] -= 5; berry[3] -= 5;
	}

	if (berryx[0] >= 360 && berryx[0] <= 400 && berry[0] >= 135 && berry[0] <= 150)
	{
		berryx[0] += 5; berryx[1] += 5; berryx[2] += 5; berryx[3] += 5;
	}
	if (berryx[1] >= 360 && berryx[1] <= 400 && berry[1] >= 135 && berry[1] <= 150)
	{
		berryx[0] -= 5; berryx[1] -= 5; berryx[2] -= 5; berryx[3] -= 5;
	}

	//off white
	if (berryx[1] >= 590 && berryx[1] <= 710 && berry[1] >= 370 && berry[1] <= 380)
	{
		berry[0] += 5; berry[1] += 5; berry[2] += 5; berry[3] += 5;
	}
	if (berryx[2] >= 590 && berryx[2] <= 710 && berry[2] >= 370 && berry[2] <= 380)
	{
		berry[0] -= 5; berry[1] -= 5; berry[2] -= 5; berry[3] -= 5;
	}

	if (berryx[1] >= 590 && berryx[1] <= 710 && berry[1] >= 365 && berry[1] <= 385)
	{
		berryx[0] -= 5; berryx[1] -= 5; berryx[2] -= 5; berryx[3] -= 5;
	}
	if (berryx[0] >= 590 && berry[0] <= 710 && berryx[0] >= 365 && berryx[0] <= 385)
	{
		berryx[0] += 5; berryx[1] += 5; berryx[2] += 5; berryx[3] += 5;
	}

	//white
	if (berryx[1] >= 250 && berryx[1] <= 400 && berry[1] >= 330 && berry[1] <= 340)
	{
		berry[0] += 5; berry[1] += 5; berry[2] += 5; berry[3] += 5;
	}
	if (berryx[2] >= 250 && berryx[2] <= 400 && berry[2] >= 330 && berry[2] <= 340)
	{
		berry[0] -= 5; berry[1] -= 5; berry[2] -= 5; berry[3] -= 5;
	}

	if ((berryx[0] == 400 || berryx[3] == 400) && berry[0] >= 330 && berry[0] <= 340)
	{
		berryx[0] += 5; berryx[1] += 5; berryx[2] += 5; berryx[3] += 5;
	}
	if ((berry[1] == 250 || berry[2] == 250) && berryx[2] >= 330 && berryx[2] <= 340)
	{
		berryx[0] -= 5; berryx[1] -= 5; berryx[2] -= 5; berryx[3] -= 5;
	}

	//dark purple 
	if (berryx[1] >= 400 && berryx[1] <= 450 && berry[1] >= 200 && berry[1] <= 210)
	{
		berry[0] += 5; berry[1] += 5; berry[2] += 5; berry[3] += 5;
	}
	if (berryx[2] >= 400 && berryx[2] <= 450 && berry[2] >= 200 && berry[2] <= 210)
	{
		berry[0] -= 5; berry[1] -= 5; berry[2] -= 5; berry[3] -= 5;
	}

	if (berryx[0] <= 450 && berryx[0] >= 400 && berry[0] >= 195 && berry[0] <= 210)
	{
		berryx[0] += 5; berryx[1] += 5; berryx[2] += 5; berryx[3] += 5;
	}
	if (berryx[1] >= 400 && berryx[1] <= 450 && berry[1] >= 195 && berry[1] <= 210)
	{
		berryx[0] -= 5; berryx[1] -= 5; berryx[2] -= 5; berryx[3] -= 5;
	}

	//dull blue
	if (berryx[1] >= 460 && berryx[1] <= 800 && berry[1] >= 300 && berry[1] <= 310)
	{
		berry[0] += 5; berry[1] += 5; berry[2] += 5; berry[3] += 5;
	}
	if (berryx[2] >= 460 && berryx[2] <= 800 && berry[2] >= 300 && berry[2] <= 310)
	{
		berry[0] -= 5; berry[1] -= 5; berry[2] -= 5; berry[3] -= 5;
	}

	//yellow
	if (berryx[1] >= 530 && berryx[1] <= 700 && berry[1] >= 250 && berry[1] <= 260)
	{
		berry[0] += 5; berry[1] += 5; berry[2] += 5; berry[3] += 5;
	}
	if (berryx[2] >= 530 && berryx[2] <= 700 && berry[2] >= 250 && berry[2] <= 260)
	{
		berry[0] -= 5; berry[1] -= 5; berry[2] -= 5; berry[3] -= 5;
	}

	if (berryx[0] >= 530 && berryx[0] <= 700 && berry[0] >= 245 && berry[0] <= 260)
	{
		berryx[0] += 5; berryx[1] += 5; berryx[2] += 5; berryx[3] += 5;
	}
	if (berryx[1] >= 530 && berryx[1] <= 700 && berry[1] >= 245 && berry[1] <= 260)
	{
		berryx[0] -= 5; berryx[1] -= 5; berryx[2] -= 5; berryx[3] -= 5;
	}

	//mid black
	if (berryx[1] >= 310 && berryx[1] <= 460 && berry[1] >= 260 && berry[1] <= 270)
	{
		berry[0] += 5; berry[1] += 5; berry[2] += 5; berry[3] += 5;
	}
	if (berryx[3] >= 310 && berryx[3] <= 460 && berry[3] >= 260 && berry[3] <= 270)
	{
		berry[0] -= 5; berry[1] -= 5; berry[2] -= 5; berry[3] -= 5;
	}

	if (berryx[1] >= 310 && berryx[1] <= 460 && berry[1] >= 255 && berry[1] <= 270)
	{
		berryx[0] -= 5; berryx[1] -= 5; berryx[2] -= 5; berryx[3] -= 5;
	}
	if (berryx[0] >= 310 && berryx[0] <= 460 && berry[0] >= 255 && berry[0] <= 270)
	{
		berryx[0] += 5; berryx[1] += 5; berryx[2] += 5; berryx[3] += 5;
	}

	//light green
	if (berryx[1] >= 100 && berryx[1] <= 540 && berry[1] >= 500 && berry[1] <= 510)
	{
		berry[0] += 5; berry[1] += 5; berry[2] += 5; berry[3] += 5;
	}
	if (berryx[2] >= 100 && berryx[2] <= 540 && berry[2] >= 500 && berry[2] <= 510)
	{
		berry[0] -= 5; berry[1] -= 5; berry[2] -= 5; berry[3] -= 5;
	}

	if (berryx[1] >= 100 && berryx[1] <= 540 && berry[1] >= 495 && berry[1] <= 510)
	{
		berryx[0] -= 5; berryx[1] -= 5; berryx[2] -= 5; berryx[3] -= 5;
	}
	if (berryx[0] >= 100 && berryx[0] <= 540 && berry[0] >= 495 && berry[0] <= 510)
	{
		berryx[0] += 5; berryx[1] += 5; berryx[2] += 5; berryx[3] += 5;
	}

	//ajeeb green
	if (berryx[1] >= 190 && berryx[1] <= 400 && berry[1] >= 400 && berry[1] <= 410)
	{
		berry[0] += 5; berry[1] += 5; berry[2] += 5; berry[3] += 5;
	}
	if (berryx[2] >= 190 && berryx[2] <= 400 && berry[2] >= 400 && berry[2] <= 410)
	{
		berry[0] -= 5; berry[1] -= 5; berry[2] -= 5; berry[3] -= 5;
	}

	if (berryx[1] >= 190 && berryx[1] <= 400 && berry[1] >= 395 && berry[1] <= 410)
	{
		berryx[0] -= 5; berryx[1] -= 5; berryx[2] -= 5; berryx[3] -= 5;
	}
	if (berryx[0] >= 190 && berryx[0] <= 400 && berry[0] >= 395 && berry[0] <= 410)
	{
		berryx[0] += 5; berryx[1] += 5; berryx[2] += 5; berryx[3] += 5;
	}

	//light brown
	if (berryx[1] >= 500 && berryx[1] <= 690 && berry[1] >= 190 && berry[1] <= 200)
	{
		berry[0] += 5; berry[1] += 5; berry[2] += 5; berry[3] += 5;
	}
	if (berryx[2] >= 500 && berryx[2] <= 690 && berry[2] >= 190 && berry[2] <= 200)
	{
		berry[0] -= 5; berry[1] -= 5; berry[2] -= 5; berry[3] -= 5;
	}

	if (berryx[1] >= 500 && berryx[1] <= 690 && berry[1] >= 185 && berry[1] <= 200)
	{
		berryx[0] -= 5; berryx[1] -= 5; berryx[2] -= 5; berryx[3] -= 5;
	}
	if (berryx[0] >= 500 && berryx[0] <= 690 && berry[0] >= 185 && berry[0] <= 200)
	{
		berryx[0] += 5; berryx[1] += 5; berryx[2] += 5; berryx[3] += 5;
	}

	//ganda green
	if (berryx[1] >= 0 && berryx[1] <= 200 && berry[1] >= 300 && berry[1] <= 310)
	{
		berry[0] += 5; berry[1] += 5; berry[2] += 5; berry[3] += 5;
	}
	if (berryx[2] >= 0 && berryx[2] <= 200 && berry[2] >= 300 && berry[2] <= 310)
	{
		berry[0] -= 5; berry[1] -= 5; berry[2] -= 5; berry[3] -= 5;
	}

	if (berryx[0] >= 0 && berryx[0] <= 200 && berry[0] >= 295 && berry[0] <= 310)
	{
		berryx[0] += 5; berryx[1] += 5; berryx[2] += 5; berryx[3] += 5;
	}

	//light aqua
	if (berryx[1] >= 310 && berryx[1] <= 350 && berry[1] >= 180 && berry[1] <= 190)
	{
		berry[0] += 5; berry[1] += 5; berry[2] += 5; berry[3] += 5;
	}
	if (berryx[2] >= 310 && berryx[2] <= 350 && berry[2] >= 180 && berry[2] <= 190)
	{
		berry[0] -= 5; berry[1] -= 5; berry[2] -= 5; berry[3] -= 5;
	}

	if (berryx[0] <= 350 && berryx[0] >= 310 && berry[0] >= 175 && berry[0] <= 190)
	{
		berryx[0] += 5; berryx[1] += 5; berryx[2] += 5; berryx[3] += 5;
	}
	if (berryx[1] >= 310 && berryx[1] <= 350 && berry[1] >= 175 && berry[1] <= 190)
	{
		berryx[0] -= 5; berryx[1] -= 5; berryx[2] -= 5; berryx[3] -= 5;
	}

	//light c green
	if (berryx[1] >= 660 && berryx[1] <= 740 && berry[1] >= 470 && berry[1] <= 480)
	{
		berry[0] += 5; berry[1] += 5; berry[2] += 5; berry[3] += 5;
	}
	if (berryx[2] >= 660 && berryx[2] <= 720 && berry[2] >= 470 && berry[2] <= 480)
	{
		berry[0] -= 5; berry[1] -= 5; berry[2] -= 5; berry[3] -= 5;
	}

	if (berryx[0] <= 740 && berryx[0] >= 660 && berry[0] >= 465 && berry[0] <= 480)
	{
		berryx[0] += 5; berryx[1] += 5; berryx[2] += 5; berryx[3] += 5;
	}


	//faded red
	if (berryx[1] >= 120 && berryx[1] <= 380 && berry[1] >= 450 && berry[1] <= 460)
	{
		berry[0] += 5; berry[1] += 5; berry[2] += 5; berry[3] += 5;
	}
	if (berryx[2] >= 100 && berryx[2] <= 380 && berry[2] >= 450 && berry[2] <= 460)
	{
		berry[0] -= 5; berry[1] -= 5; berry[2] -= 5; berry[3] -= 5;
	}

	if (berryx[0] <= 380 && berryx[0] >= 100 && berry[0] >= 445 && berry[0] <= 460)
	{
		berryx[0] += 5; berryx[1] += 5; berryx[2] += 5; berryx[3] += 5;
	}


	//olive green
	if (berryx[1] >= 500 && berryx[1] <= 610 && berry[1] >= 145 && berry[1] <= 155)
	{
		berry[0] += 5; berry[1] += 5; berry[2] += 5; berry[3] += 5;
	}
	if (berryx[2] >= 500 && berryx[2] <= 610 && berry[2] >= 145 && berry[2] <= 155)
	{
		berry[0] -= 5; berry[1] -= 5; berry[2] -= 5; berry[3] -= 5;
	}


	if (berryx[1] >= 500 && berryx[1] <= 610 && berry[1] >= 140 && berry[1] <= 155)
	{
		berryx[0] -= 5; berryx[1] -= 5; berryx[2] -= 5; berryx[3] -= 5;
	}
	if (berryx[0] >= 590 && berryx[1] <= 610 && berry[0] >= 140 && berry[0] <= 155)
	{
		berryx[0] += 5; berryx[1] += 5; berryx[2] += 5; berryx[3] += 5;
	}

	int static tamer=2500;
	tamer--;

	glColor3f(0, 0, 0);
	char buffer3[30];
	sprintf(buffer3, "Time: %d", tamer);
	printText(buffer3, 580, 30);
	char buffer4[30];
	sprintf(buffer4,"USB's: %d", win);
	printText(buffer4,580,50);
	if (tamer >= 0 && berryx[2] > 780 && berry[2] > 580 && win>=2)
	{
		curScreen = end;
	}
	else if (tamer < 0 )
	{
		curScreen = end;
	}


}