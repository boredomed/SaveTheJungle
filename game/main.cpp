#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <Windows.h>   //For Sound
#include <stdlib.h>
#include <mmsystem.h>  //For Sound
#include "glut.h"
#include "GL.H"
#include "Header.h"
#define SIZE 4

#pragma comment(lib, "opengl32.lib")
#pragma comment(lib, "glut32.lib")

// Function prototypes
GLuint loadTexture(char* name);
void draw(GLuint _textureId, int x, int y, int wd, int ht);
void draw_i(GLuint id, int x, int y, int wd, int ht);
void init();
void myMouseFunction( int button, int state, int mouseX, int mouseY );
void myKeyboardFunction( unsigned char key, int mouseX, int mouseY );
void mySpecialKeysUpFunction(int key, int x, int y);
void mySpecialKeysFunction(int key, int x, int y);
void myReshapeFunction( int width, int height );
void myTimerFunction( int val );
void drawButton(char * label, int x, int y, int wd, int ht);
void loading();
void display_menu();
void display_story1();
void display_story2();
void display_story3();
void display_story4();
void display_game();
void display_help();
void display_sound();
void display_maze();
void myDisplayFunction();
void display_end();
void reset();

GLuint image1;
GLuint image2;
GLuint image3;
GLuint image4;
GLuint image5;
GLuint image6;
GLuint image7;
GLuint image8;
GLuint image9;
GLuint image10;
GLuint image11;
GLuint image12;
GLuint image13;
GLuint image14;
GLuint image15;
GLuint image16;
GLuint image17;
GLuint image18;
GLuint image19;
GLuint image20;
GLuint image21;
GLuint image22;
GLuint image23;
GLuint image24;
GLuint image25;
GLuint image26;
GLuint image27;
GLuint image28;
GLuint image29;
GLuint image30;
GLuint imagec1;
GLuint imagec2;

//For maze
GLuint image70;
GLuint image60;

//sound
GLuint simage[2];

GLuint fImage[10];
int current_fruit = 0;
Fruits fruits = { 200, 300, 80, 120, 10, 1, 1 };

GLuint background[5];
int current = 0;

enum Screen{loadingg,menu,game,story1,story2,story3,story4,help,sound,maze,end};
Screen curScreen = Screen::loadingg;
int selected = 0;
int selected1 = 0;

void LoadResources()
{
	image1 = loadTexture("load.tga");
	image2 = loadTexture("save_j.tga");
	image3 = loadTexture("all_running.tga");
	image4 = loadTexture("s1.tga");
	image5 = loadTexture("level1.tga");
	image6 = loadTexture("story1.tga");
	image7 = loadTexture("story2.tga");
	image8 = loadTexture("story3.tga");
	image9 = loadTexture("welcome.tga");
	image10 = loadTexture("h_1..tga");
	image11 = loadTexture("bmb.tga");
	image12 = loadTexture("bomb.tga");
	image13 = loadTexture("level1..tga");
	image14 = loadTexture("fruits/hole.tga");
	image15 = loadTexture("dolphin.tga");
	image16 = loadTexture("dolphin1.tga");
	image17 = loadTexture("dolphin3.tga");
	image18 = loadTexture("shark.tga");
	image19 = loadTexture("shark1.tga");
	image20 = loadTexture("penguins.tga");
    image21 = loadTexture("shark2.tga");
	image22 = loadTexture("bird.tga");
	image23 = loadTexture("flint_machine.tga");
	image24 = loadTexture("m_burger.tga");
	image25 = loadTexture("moanster.tga");
	image27 = loadTexture("help.tga");
	image28 = loadTexture("gameover.tga");
	image29 = loadTexture("winning.tga");
	image30 = loadTexture("mazeee.tga");

	imagec1 = loadTexture("cloud1.tga");
	imagec2 = loadTexture("cloud2.tga");

	background[0] = loadTexture("B1.tga");
	background[1] = loadTexture("B2.tga");
	background[2] = loadTexture("B3.tga");
	background[3] = loadTexture("B4.tga");
	background[4] = loadTexture("B5.tga");

	fImage[0] = loadTexture("fruits/f1.tga");
	fImage[1] = loadTexture("fruits/f2.tga");
	fImage[2] = loadTexture("fruits/f3.tga");
	fImage[3] = loadTexture("fruits/f4.tga");
	fImage[4] = loadTexture("fruits/f5.tga");
	fImage[5] = loadTexture("fruits/f6.tga");
	fImage[6] = loadTexture("fruits/f7.tga");
	fImage[7] = loadTexture("fruits/f8.tga");
	fImage[8] = loadTexture("fruits/f9.tga");
	fImage[9] = loadTexture("fruits/f10.tga");

	image26 = loadTexture("music.tga");
	//sound
	simage[0] = loadTexture("sounds.tga");
	simage[1] = loadTexture("sounds1.tga");

	//for maze
	image70 = loadTexture("f1.tga");
	image60 = loadTexture("B4.tga");
}

int main(int argc, char** argv)
{
	srand(time(NULL));
	glutInit( &argc, argv );		//initilize the GLUT libraray

	glutInitDisplayMode( GLUT_DOUBLE | GLUT_RGBA );		//has four colour components red, green,blue, and alpha 
	glutInitWindowSize( 800, 600 );	//size of window outer window
	glutInitWindowPosition( 0, 0 );		//poistion of window 
	glutCreateWindow( "Save the Jungle" );

	LoadResources();

	init();

	glutMouseFunc( myMouseFunction );
	glutKeyboardFunc( myKeyboardFunction );
	glutSpecialFunc( mySpecialKeysFunction );
	glutSpecialUpFunc(mySpecialKeysUpFunction);

	glutReshapeFunc( myReshapeFunction );
	glutDisplayFunc( myDisplayFunction ); 
	glutTimerFunc( 33, myTimerFunction, 0 ); 	

	//glutFullScreen();	// make the screen fullscreen
	glutSetCursor( GLUT_CURSOR_INFO );	//Displays the type of cursor u want

	glutMainLoop();

	return 0;
}

void printText(char *text, int x, int y)
{
	glRasterPos2f(x, y);
	
	for (int i = 0; text[i] != '\0'; i++)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, text[i]);
}

void init(void) 
{
	glClearColor( 150.f/255, 220/255.0, 230/255.0, 0.0 );		//background color of openGl window
	//			 ^red, green, blue, alpha(opaquenss) 
	glMatrixMode( GL_PROJECTION );		//glMatrixMode — specify which matrix is the current matrix ????
	glLoadIdentity();		//glLoadIdentity — replace the current matrix with the identity matrix	????

	if (current == 4)
	{
		PlaySound(TEXT("sound/mysterious.wav"), NULL, SND_ASYNC);
	}

	glOrtho(0.0, g_Width, 0.0, g_Height, -1.0, 1.0);	//set (0,0) on left top
}

void myMouseFunction( int button, int state, int mouseX, int mouseY ) 
{
	mouse_X = mouseX;
	mouse_Y = mouseY;

	if (state == 0) //Click
	{
		printf("mouse clicked \n");
		printf("\nmouseX: %d mouseY: %d, State: %d", mouseX, mouseY, state);
	}
}

void myKeyboardFunction(unsigned char key, int mouseX, int mouseY)
{
	if (curScreen == Screen::menu)
	{
		if (key == 13)
		{
			if (selected == 0)			// NEW GAME
			{
				curScreen = story1;
				if (sounds == 1)
				PlaySound(TEXT("sound/story1.wav"), NULL, SND_ASYNC);
			}
			else if (selected == 1) 	// HELP
			{
				curScreen = help;
				if (sounds == 1)
					PlaySound(TEXT("sound/g_b2.wav"), NULL, SND_ASYNC | SND_LOOP);
			}
			else if (selected == 2)  	//SOUND
			{
				curScreen = sound;
			}
			else if (selected == 3)		// EXIT
				exit(0);
		}
	}

	else if (curScreen == Screen::game)
	{
		if (key == 8)
		{
			curScreen = story4;
		}
		if (key == 32)
		{
			if (inverter_1 == 1){
				for (int i = 0; i < MAX_BULLET; i++)
				{
					if (bullets[i].exist == 0)
					{
						bullets[i].exist = 1;
						bullets[i].pos_x = s_pos_x + (s_wd / 2);
						bullets[i].pos_y = s_pos_y - 20;
						if (current < 5)
						{
							if (sounds == 1)
							PlaySound(TEXT("sound/click.wav"), NULL, SND_ASYNC);
						}
						break;
					}
				}
			}
		}
	}

	else if (curScreen == Screen::story1)
	{
		if (key == 8)
		{
			curScreen = menu;
			if (sounds == 1)
			PlaySound(TEXT("sound/g_b2.wav"), NULL, SND_ASYNC);
		}
		if (key == 13)
		{
			curScreen = story2;
			if (sounds == 1)
			PlaySound(TEXT("sound/story2.wav"), NULL, SND_ASYNC);
		}

	}

	else if (curScreen == Screen::story2)
	{

		if (key == 8)
		{
			curScreen = story1;
		}
		if (key == 13)
		{
			curScreen = story3;
			if (sounds == 1)
			PlaySound(TEXT("sound/story3.wav"), NULL, SND_ASYNC);
		}

	}

	else if (curScreen == Screen::story3)
	{
		if (key == 8)
		{
			curScreen = story2;
		}
		if (key == 13)
		{
			curScreen = story4;
			if (sounds == 1)
			PlaySound(TEXT("sound/story4.wav"), NULL, SND_ASYNC);
		}
	}

	else if (curScreen == Screen::story4)
	{
		if (key == 8)
		{
			curScreen = story3;
		}
		if (key == 13)
		{
			curScreen = game;
		}
	}

	else if (curScreen == Screen::help)
	{
		if (key == 8)
		{
			curScreen = menu;
		}
	}

	else if (curScreen == Screen::sound)
	{
		if (key == 8)
		{
			curScreen = menu;
		}
		if (key == 13)
		{

			if (selected1 == 0)
			{
				if (sounds == 1)
					sounds = 0;
				curScreen = menu;

			}
			else if (selected1 == 1)
			{
				if (sounds == 0)
					sounds = 1;
				curScreen = menu;
			}
		}
	}

	//hard code 
	//if (curScreen == Screen::game)
	//{
	//	if (current == 4)
	//	if (key == 'c')
	//	{
	//		PlaySound(TEXT("sound/g_b1.wav"), NULL, SND_ASYNC | SND_LOOP);
	//	}
	//}
	//if (curScreen == Screen::maze)
	//{
	//	if (key == 'v')
	//	{
	//		PlaySound(TEXT("sound/mysterious.wav"), NULL, SND_ASYNC | SND_LOOP);
	//	}
	//}

	if (curScreen == Screen::game)
	{
		if (key == 'p')
		{
			if (game_pause == 1)
			{
				game_pause = 0;
			}
			
		}
		if (key == 'r' || key == 'q')
		{
			if (game_pause == 0)
			{
				game_pause = 1;
			}
		}
	}

	if (curScreen == end)
	{
		reset();
		if (key == 13)
		{
			curScreen = menu;
		}
	}
	
			
}
	     
void mySpecialKeysUpFunction(int key, int x, int y)
{
	if (curScreen == game)
	{
		switch (key)
		{
		case GLUT_KEY_UP:
			//s_temp_up = 0;
			break;
		case GLUT_KEY_RIGHT:
			s_temp_right = 0;

			break;
		case GLUT_KEY_LEFT:
			s_temp_left = 0;
			break;
		}
	}
}

void mySpecialKeysFunction(int key, int x, int y)
{

	if (curScreen == menu)
	{
		
		switch (key)
		{
		case GLUT_KEY_UP:
			if (selected > 0)
				selected--;
			if (sounds == 1)
			PlaySound(TEXT("sound/click.wav"), NULL, SND_ASYNC );
			break;
		case GLUT_KEY_DOWN:
			if (selected < 3)
				selected++;
			if (sounds == 1)
			PlaySound(TEXT("sound/click.wav"), NULL, SND_ASYNC );
			break;

		
		}
	}

	if (curScreen == sound)
	{
		switch (key)
		{
		case GLUT_KEY_UP:
			if (selected1 > 0)
				selected1--;
			if (sounds == 1)
			PlaySound(TEXT("sound/click.wav"), NULL, SND_ASYNC);
			break;
		case GLUT_KEY_DOWN:
			if (selected1 < 2)
				selected1++;
			if (sounds == 1)
			PlaySound(TEXT("sound/click.wav"), NULL, SND_ASYNC);
			break;

		}
	}

	if (curScreen == game)
	{
		switch (key)
		{
		case GLUT_KEY_UP:
			//s_temp_up = 1;
			if (current <= 3)
			{
				if (s_pos_y == 499 || s_pos_y == hurdle.pos_y - hurdle.ht || s_pos_y == hurdle1.pos_y - hurdle1.ht)
				{
					s_speed_up = -340;
					accel = 240;
					if (current < 2)
					{
						if (sounds == 1)
							PlaySound(TEXT("sound/pani.wav"), NULL, SND_ASYNC);
					}
					else if (current > 1 && current < 4)
					{
						if (sounds == 1)
							PlaySound(TEXT("sound/aoin.wav"), NULL, SND_ASYNC);
					}

					/*speed_bg = s_speed_up / 2;
					accel_bg = accel / 2;*/
				}
			}
			else if (current > 3)
			{
				s_speed_up = -200;
				accel = 200;
			}

			break;
		
		case GLUT_KEY_DOWN:
			s_pos_y += s_speed - 3;
			break;
		case GLUT_KEY_LEFT:
			s_temp_left = 1;
			inverter = 1;    // for strawbwery
			inverter_2 = 1;
			//inverter_1 = 0;
			break;
		case GLUT_KEY_RIGHT:
			s_temp_right = 1;
			inverter = 0;   // for strawberry
			inverter_1 = 1;
			//inverter_2 = 0;
			
			break;
		}

	}

	//MAZE part
	if (curScreen == maze)
	{
		switch (key)
		{
		case GLUT_KEY_UP:
			berry[0] = berry[0] - speedyu;
			berry[1] = berry[1] - speedyu;
			berry[2] = berry[2] - speedyu;
			berry[3] = berry[3] - speedyu;
			
			break;

		case GLUT_KEY_DOWN:

			berry[0] = berry[0] + speedyd;
			berry[1] = berry[1] + speedyd;
			berry[2] = berry[2] + speedyd;
			berry[3] = berry[3] + speedyd;



			break;
		case GLUT_KEY_LEFT:

			berryx[0] = berryx[0] - speedxl;
			berryx[1] = berryx[1] - speedxl;
			berryx[2] = berryx[2] - speedxl;
			berryx[3] = berryx[3] - speedxl;


			break;
		case GLUT_KEY_RIGHT:


			berryx[0] = berryx[0] + speedxr;
			berryx[1] = berryx[1] + speedxr;
			berryx[2] = berryx[2] + speedxr;
			berryx[3] = berryx[3] + speedxr;

			break;
		case GLUT_KEY_HOME:
			break;
		case GLUT_KEY_END:
			break;
		case GLUT_KEY_PAGE_UP:
			break;
		case GLUT_KEY_PAGE_DOWN:
			break;
		}
	}

	glutPostRedisplay();
}

void myReshapeFunction( int width, int height )
{
	glClear(GL_COLOR_BUFFER_BIT);

	g_Width  = width; 
	g_Height = height;

	glViewport (0, 0, g_Width, g_Height);

	glMatrixMode (GL_PROJECTION);
	glLoadIdentity ();
	glOrtho(0.0, g_Width, g_Height, 0.0, -1.0, 1.0);	// Set axis :: change the (0,0) to top left
}

void reset()
{
	    current = 0;
	    s_pos_x = 10;
		s_pos_y = 499;
		f_score = 0;
		tamer = 0;
		kills = 0;
		s_wd = 60;
		lives = 3;
}

//functions called in the timer function
void Loading_m()
{
	//PlaySound(TEXT("sound/tick.wav"), NULL, SND_ASYNC | SND_LOOP);
	if (start == 1 && d_wd < 596)
	{
		d_wd += 20;
		Time += 4;
		
	}

}

void LoadLevel1()
{
	
	//printf("Level one\n");
	gate_y = 500;
	gate2_y = 300;
	monster_1.pos_y = gate_y;
	monster_2.pos_y = gate2_y;
}
void LoadLevel2()
{
	//printf("Level two\n");
	gate_y = 430;
	gate2_y = 200;
	monster_1.pos_y = gate_y;
	monster_2.pos_y = gate2_y;
}
void LoadLevel3()
{
	gate_y = 375;
	gate2_y = 150;
	monster_1.pos_y = gate_y;
	monster_2.pos_y = gate2_y;
}
void LoadLevel4()
{
	gate_y = 500;
	gate2_y = 300;
	monster_1.pos_y = gate_y;
	monster_2.pos_y = gate2_y;

}
void LoadLevel5()
{
	
	gate_y = 450;
	gate2_y = 350;
	monster_1.pos_y = gate_y;
	monster_2.pos_y = gate2_y;
}

void ScrollBackground()
{
	/*if (bg_yposition >= 2 * g_Height)
	current = 1;
	else
	current = 0;

	if (s_pos_y < 499)
	{
	bg_yposition++;
	s_pos_y-=0.5;
	}

	else if (s_pos_y > 499)
	{
	bg_yposition--;
	s_pos_y+=0.5;

	}
	*/

	////scroll
	//if (s_pos_y >= g_Height)
	//{
	//	bg_posy = (bg_posy - g_Height) + s_speed_up * 33 / 1000;
	//}

	//scroll background
	if (s_pos_y < 0)
	{
		if (current < 4)
		{
			//hurdle.pos_x = rand() % (g_Width - hurdle.wd);
			hurdle1.pos_x = rand() % (g_Width - hurdle1.wd);
			current++;

			s_pos_y = 499 - s_pos_y;
		}
		else
		{
			s_pos_y += 10;
			s_speed_up = 0;
		}
	}
	else if (s_pos_y > g_Height)
	{
		current--;
		s_pos_y -= g_Height;
	}
}

void Strawberry()
{
	//strawberry
	s_pos_y = s_pos_y + s_speed_up * 33 / 1000;
	s_speed_up += accel * 33 / 1000;            // s = ut

	if (current == 0 && s_pos_y >= 499)
	{
		s_pos_y = 499;
		s_speed_up = 0;
	}

	//keeping in x limits
	if (s_pos_x  + s_wd + 10 > g_Width)
	{
		s_pos_x -= 10;
	}
	else if (s_pos_x  < 0)
	{
		s_pos_x += 10;
	}

	//upper limit
	if (current == 4 && s_pos_y < 250)
	{
		s_pos_y += 15;
	}



}

void Hurdle()
{
	//collision with hurdle
	if (current <= 3)
	{
		if (s_pos_y >= hurdle.pos_y - hurdle.ht && s_pos_y - s_ht <= hurdle.pos_y - 60 && s_speed_up > 0 && s_pos_x + s_wd > hurdle.pos_x && s_pos_x < hurdle.pos_x + hurdle.wd)
		{
			s_pos_y = hurdle.pos_y - hurdle.ht;
			check = 1;
			s_speed_up = 0;
			accel = 0;
		}

		if (check == 1)
		{
			check = 0;
			accel = 230;
			//s_speed_up = -230;

		}

		if (s_pos_y - s_ht <= hurdle.pos_y && s_pos_y > hurdle.pos_y - hurdle.ht && s_speed_up < 0 && s_pos_x + s_wd > hurdle.pos_x && s_pos_x < hurdle.pos_x + hurdle.wd)
		{
			//s_pos_x -= 2;
			s_pos_y += 10;
			s_speed_up = 0;

		}

		//hurdle 1 movement
		hurdle.pos_x += hurdle.speed * hurdle.direction;

		if (hurdle.pos_x > g_Width - hurdle.wd || hurdle.pos_x < 0)
		{
			hurdle.direction *= -1;
		}

		//strawberry and hurdle 1 stay
		if (s_pos_y >= hurdle1.pos_y - hurdle1.ht && s_pos_y - s_ht <= hurdle1.pos_y - 60 && s_speed_up > 0 && s_pos_x > hurdle1.pos_x && s_pos_x < hurdle1.pos_x + hurdle1.wd)
		{
			s_pos_y = hurdle1.pos_y - hurdle1.ht;
			s_speed_up = 0;
			accel = 0;
			check1 = 1;
		}
		if (check1 == 1)
		{
			check1 = 0;
			accel = 230;
		}

		if (s_pos_y - s_ht <= hurdle1.pos_y && s_pos_y > hurdle1.pos_y - hurdle1.ht  && s_speed_up < 0 && s_pos_x + s_wd > hurdle1.pos_x && s_pos_x < hurdle1.pos_x + hurdle1.wd)
		{
			//s_pos_x -= 2;
			s_pos_y += 10;
			s_speed_up = 0;

		}
	}

}

void Bullets()
{
	//bullets for strawberry
	if (inverter_1 == 1)
	{
		for (int i = 0; i < MAX_BULLET; i++)
		{
			if (bullets[i].exist == 1)
			{
				bullets[i].pos_x += 15;
			}

			if (bullets[i].pos_x > g_Width)
			{
				bullets[i].exist = 0;
				bullets[i].pos_x = s_pos_x + (s_wd / 2);
				bullets[i].pos_y = s_pos_y - 20;
				if (current < 4)
					PlaySound(TEXT("sound/click.wav"), NULL, SND_ASYNC);
			}
		}
	}

}

void Hurdle1()
{

	//hurdle1
	if (current <= 3)
	{
		hurdle1.pos_x += hurdle1.speed * hurdle1.direction;

		if (hurdle1.pos_x > g_Width - hurdle1.wd || hurdle1.pos_x < 0)
		{
			hurdle1.direction *= -1;
		}
	}
}

void rite_left()
{

	//forward
	if (s_temp_right == 1)
	{
		s_pos_x += s_speed;
	}

	//Backwards
	if (s_temp_left == 1)
	{
		s_pos_x -= s_speed;
	}
}

void Monster()
{
	//monster 1
	static int Timer = 0;
	Timer++;
	if (Timer % monster_frequency  == 0)
	{
		monster_1.exists = 1;
		monster_1.pos_x = gate_x;
		monster_1.pos_y = gate_y;
	}

	if (monster_1.exists != 0)
	{
		monster_1.pos_x -= monster_1.speed;
	}
	

	for (int i = 0; i < MAX_BULLET; i++)
	{
		if (bullets[i].pos_x + bullets[i].width > monster_1.pos_x && bullets[i].pos_x + bullets[i].width < monster_1.pos_x + monster_1.wd)
		{
			if (bullets[i].pos_y >= monster_1.pos_y - monster_1.ht && bullets[i].pos_y - bullets[i].height < monster_1.pos_y )
			{
				kills++;
				monster_1.exists = 0;
				bullets[i].exist = 0;
				monster_1.pos_x = gate_x;
				monster_1.pos_y = gate_y;
				bullets[i].pos_x = 0;
				bullets[i].pos_y = 0;
				//if (current < 4)
				//if (sound == 1)
					//PlaySound(TEXT("sound/eaton.wav"), NULL, SND_ASYNC);
			}
		}
	}
	
	//collision of strawberry with monstre 1
	for (int i = 0; i < MAX_BULLET; i++)
	{
			if (s_pos_x + s_wd > monster_1.pos_x && s_pos_x < monster_1.pos_x + monster_1.wd)
			{
				if (s_pos_y - s_ht < monster_1.pos_y && s_pos_y > monster_1.pos_y - monster_1.ht)
				{
				lives--;
				monster_1.exists = 0;
				monster_1.pos_x = gate_x;
				monster_1.pos_y = gate_y;
				if (current < 4)
					PlaySound(TEXT("sound/eaton.wav"), NULL, SND_ASYNC);
			}
		}
	}

	for (int i = 0; i < MAX_BULLET; i++)
	{
		if (monster_1.pos_x < 0)
		{
			monster_1.exists = 0;
			monster_1.pos_x = gate_x;
			monster_1.pos_y = gate_y;
		}
	}


	//monster 2
	static int Timer2 = 0;
	Timer2++;
	if (Timer2 % monster_2frequency == 0)
	{
		monster_2.exists = 1;
		monster_2.pos_x = gate2_x;
		monster_2.pos_y = gate2_y;
	}

	if (monster_2.exists != 0)
	{
		monster_2.pos_x -= monster_2.speed + 4;
		monster_2.pos_y += 1;
	}

	for (int i = 0; i < MAX_BULLET; i++)
	{
		if (bullets[i].pos_x + bullets[i].width > monster_2.pos_x && bullets[i].pos_x + bullets[i].width < monster_2.pos_x + monster_2.wd)
		{
			if (bullets[i].pos_y >= monster_2.pos_y - monster_2.ht && bullets[i].pos_y - bullets[i].height < monster_2.pos_y)
			{
				kills++;
				monster_2.exists = 0;
				bullets[i].exist = 0;
				monster_2.pos_x = gate2_x;
				monster_2.pos_y = gate2_y;
				bullets[i].pos_x =0;
				bullets[i].pos_y = 0;
			}
		}
	}

	for (int i = 0; i < MAX_BULLET; i++)
	{
		if (s_pos_x + s_wd > monster_2.pos_x && s_pos_x < monster_2.pos_x + monster_2.wd)
		{
			if (s_pos_y - s_ht < monster_2.pos_y && s_pos_y > monster_2.pos_y - monster_2.ht)
			{
				lives--;
				monster_2.exists = 0;
				monster_2.pos_x = gate2_x;
				monster_2.pos_y = gate2_y;
				if (current < 4)
					PlaySound(TEXT("sound/eaton.wav"), NULL, SND_ASYNC);
			}

		}
	}

	for (int i = 0; i < MAX_BULLET; i++)
	{
		if (monster_2.pos_x < 0)
		{
			monster_2.exists = 0;
			monster_2.pos_x = gate2_x;
			monster_2.pos_y = gate2_y;
		}
	}
}

void Fruitss()
{
	//Fruit machine
	machine1.pos_x += machine1.speed * machine1.direction;
	if (machine1.pos_x > g_Width - machine1.wd || machine1.pos_x < 0)
	{
		machine1.direction *= -1;
	}

	//Fruits
	if (current > 3)
	{
		PlaySound(TEXT("mysterious.wav"), NULL, SND_ASYNC);
		static int f_time = 0;
		f_time++;
		int f_frequency = 50;
		if (f_time % f_frequency == 0)
		{
			fruits.exist = 1;
			fruits.pos_x = machine1.pos_x;
			fruits.pos_y = machine1.pos_y;

			current_fruit++;
			if (current_fruit > 9)
			{
				current_fruit = 0;
			}
		}
		if (fruits.exist != 0)
		{
			fruits.pos_y += fruits.speed;
		}

		if (s_pos_x < fruits.pos_x + fruits.wd && s_pos_x + s_wd > fruits.pos_x && s_pos_y > fruits.pos_y - fruits.ht && s_pos_y - s_ht < fruits.pos_y)
		{
		
			f_score++;
			fruits.exist = 0;
			fruits.pos_x = machine1.pos_x - 1000;
			fruits.pos_y = machine1.pos_y - 100;
			if (current == 4)
			{
				s_wd = s_wd + 2;
				s_pos_x = s_pos_x - (5);
				if (s_wd  > 120)
				{
					s_wd = 60;
				}
			}
			else
			{
				s_wd = 60;
				s_ht = 50;
			}
		}
	}

	if (fruits.pos_y < 300)
	{
		//fruits.pos_y += 10 ;
		fruits.direction *= -1;
	}


}

void Maze()
{
	game_pause_i = 0;


	//entering and leaing maze
	if (f_score >= 20)
	{
		curScreen = maze;
		//if (sounds == 1)
		PlaySound(TEXT("sound/mysterious.wav"), NULL, SND_ASYNC);
	}

	


}

void myTimerFunction(int val)                // to enter in a function right click go to def
{
	
	glutTimerFunc(33, myTimerFunction, 0);   // this function is called after every 33mili


	     if (current == 0) LoadLevel1();
	     else if (current == 1) LoadLevel2();
	     else if (current == 2) LoadLevel3();
	     else if (current == 3) LoadLevel4();
	     else if (current == 4) LoadLevel5();

		//zoom_in/zoom_out monster3d
		//monster_3d.z -= 0.01;
		//seconds (recursion but after a a delay)

		//loading menu bar
		Loading_m();

		if (game_pause_i == 1)
		{
			if (game_pause == 1){

				//character movement
				Strawberry();

				//chaniging back ground
				ScrollBackground();

				//the lower hurdle 
				Hurdle();

				//rite and left movement
				rite_left();

				//hurdle1 movement
				Hurdle1();

				//depting bullets from character
				Bullets();

				//monster 1 and 2 code
				Monster();

				//fruits
				Fruitss();

				//maze
				Maze();

				
				
				
			}
		}

	glutPostRedisplay();
}

//DISPLAY
void drawRectangle(int x, int y, int wd, int ht)
{
	glBegin(GL_POLYGON);

	glVertex2f(x, y);          //left down vertex
	glVertex2f(x + wd, y);     //right down vertex
	glVertex2f(x + wd, y - ht);//right to vetec
	glVertex2f(x, y - ht);     //right to vetex

	glEnd();
}

void drawButton(char * label, int x, int y, int wd, int ht)
{
	//Draw shadow
	glColor3f(0.0, 0.0, 0.0);
	drawRectangle(x, y, wd, ht);

	//Draw box
	glColor3f(128 / 255.f, 255 / 255.f, 255 / 255.f);
	drawRectangle(x - 2, y - 2, wd, ht);

	//Text to be printed 
	//if only char
	glColor3f(0.0, 0.0, 0.0);
	printText(label, x + 10, y - 3);


}

void display_loading()
{
	draw(image1, 0, g_Height, g_Width, g_Height);

	//glColor4f(0.0, 0.0, 0.0, 0.2);
	glColor3f(0.f, 0.0 / 255, 0.0 / 255);
	drawRectangle(d_pos_x+5,d_pos_y+5,d_wd,d_ht);
	glColor3f(1.f, 0.0 / 255, 0.0 / 255);
	drawRectangle(d_pos_x, d_pos_y, d_wd, d_ht);

	start = 1;

	if (d_wd > 300)
		draw(image2, 250, 120, 340, 120);

	glColor3f(0.f,0.f,0.f);
	char buffer[15];
	sprintf(buffer, "LOADING: %d %", Time);
	printText(buffer, d_pos_x + 260, d_pos_y-10);

	if (Time == 100)
	{
		curScreen = menu;
		PlaySound(TEXT("sound/mysterious.wav"), NULL, SND_ASYNC);
	}


}

void display_menu()
{
	//game_pause = 1;                                       //So game only starts when user enters on start button
	draw(image3, 0, g_Height, g_Width, g_Height);

	glColor3f(0.0, 0.0, 1.0);
	char back[37] = "Press BACKSPACE to get back to menu";
	//printText(back, 5, 35);

	char back1[23] = "Press ENTER to select";
	printText(back1, 5, 35);

	int wd = 160;
	int ht = 40;
	int x = (g_Width / 2) - 80;
	int y = 180;
	int add = 80;

	char*label[SIZE] = { "PLAY", "HELP","SOUND", "EXIT" };

	for (int i = 0; i < SIZE; i++)
	{

		glColor3f(128 / 255.f, 255 / 255.f, 255 / 255.f);
		drawButton(label[i], x, y, wd, ht);

		if (selected == i)
		{
			glColor3f(1, 0, 0);    //color of pointer
			glBegin(GL_POLYGON);
			glVertex2f(x - 40, y);
			glVertex2f(x + 7, y - 20);
			glVertex2f(x - 40, y - 40);
			glEnd();
		}
		y += 70;
	}


}

void display_help()
{
		draw(image27, 0, g_Height, g_Width, g_Height);
}

void display_sound()
{
	draw(image26, 0, g_Height, g_Width, g_Height);
	int wd = 160;
	int ht = 80;
	int x = (g_Width / 2) - 80;
	int y = 180;
	int add = 80;

	for (int i = 0; i < 2; i++)
	{
		draw(simage[i], x, y, wd, ht);

		if (selected1 == i)
		{
			glColor3f(1, 0, 0);    //color of pointer
			glBegin(GL_POLYGON);
			glVertex2f(x - 40, y - 10);
			glVertex2f(x + 7, y - 30);
			glVertex2f(x - 40, y - 50);
			glEnd();
		}

		y += 80;
	}
	
}

void display_story1()
{
	glColor3f(0.0, 1.0, 0.0);
	draw(image6, 0, g_Height, g_Width, g_Height);
}

void display_story2()
{
	glColor3f(1.0,0.0,0.0);
	draw(image7,0, g_Height, g_Width, g_Height);
	//monster_1.speed = 4;
}

void display_story3()
{
	game_pause_i = 0;
	draw(image8, 0, g_Height, g_Width, g_Height);
	
}

void display_story4()
{
	game_pause_i = 0;
	draw(image9, 0, g_Height, g_Width, g_Height);
}

#include "maze.h"

void display_game()
{
	game_pause_i = 1;
	draw(background[current], 0, bg_posy, g_Width, g_Height);

	/*draw(background[0], 0, bg_yposition - 0 * g_Height, g_Width, g_Height);
	draw(background[1], 0, bg_yposition - 1 * g_Height, g_Width, g_Height);
	draw(background[2], 0, bg_yposition - 2 * g_Height, g_Width, g_Height);
	draw(background[3], 0, bg_yposition - 3 * g_Height, g_Width, g_Height);
	draw(background[4], 0, bg_yposition - 4 * g_Height, g_Width, g_Height);*/

	//lower hurdle
	if (current <= 1)
	{
		if (hurdle.direction < 0)
		draw(image17, hurdle.pos_x, hurdle.pos_y, hurdle.wd, hurdle.ht); //dolphin

		else if (hurdle.direction > 0)
		draw_i(image15, hurdle.pos_x, hurdle.pos_y, hurdle.wd, hurdle.ht); //dolphin inverted
	}
	else if (current == 2 )
	{
		draw(image10, hurdle.pos_x, hurdle.pos_y, hurdle.wd, hurdle.ht);
	}
	else if (current == 3)
	{
		draw(imagec1, hurdle.pos_x, hurdle.pos_y, hurdle.wd, hurdle.ht);
	}

	//upper hurdle
	if (current < 3)
	{
		if (current <= 1)
		{
			if (hurdle1.direction < 0)
			draw(image15, hurdle1.pos_x, hurdle1.pos_y, hurdle1.wd, hurdle1.ht);

			else if (hurdle1.direction > 0)
			draw_i(image16, hurdle1.pos_x, hurdle1.pos_y, hurdle1.wd, hurdle1.ht);
		}
		else
		{
			draw(image10, hurdle1.pos_x, hurdle1.pos_y, hurdle1.wd, hurdle1.ht);
		}
		
	}
	else if (current == 3)
	{
		draw(imagec2, hurdle1.pos_x, hurdle1.pos_y, hurdle1.wd, hurdle1.ht);
	}
	//strawbwrry
	if (current <= 1)
	{
		if (inverter == 0)
		{
			draw(image20, s_pos_x, s_pos_y, s_wd + 30, s_ht);
		}
		if (inverter == 1)
		{
			draw_i(image20, s_pos_x, s_pos_y, s_wd + 30, s_ht);
		}
	}
	else if (current == 2 || current == 3)
	{
			if (inverter == 0)
			{
				draw(image4, s_pos_x, s_pos_y, s_wd, s_ht);
			}
			if (inverter == 1)
			{
				draw_i(image4, s_pos_x, s_pos_y, s_wd, s_ht);
			}
		}
	
	else
	{
		if (inverter == 0)
		{
			draw_i(image22, s_pos_x, s_pos_y, s_wd + 10, s_ht +  9);
		}
		if (inverter == 1)
		{
			draw(image22, s_pos_x, s_pos_y, s_wd + 10, s_ht + 8);
		}
	}
	
	//Display of strawberrys bullets
		for (int i = 0; i < MAX_BULLET; i++)
		{
			if (bullets[i].exist == 1)
			{
				if (bullets[i].pos_x > s_pos_x + (s_wd / 2))
				{
					draw(image11, bullets[i].pos_x, bullets[i].pos_y, bullets[i].width, bullets[i].height);
				}
			}
		}
	
		//gate1
		//draw(image14, gate_x , gate_y, gate_wd - gate_wd , gate_ht - 20);

		//monster1
		if (monster_1.exists != 0)
		{
			if (current <= 1)
			{
				draw(image18, monster_1.pos_x, monster_1.pos_y, monster_1.wd, monster_1.ht);
			}
			else
			{
				draw(image24, monster_1.pos_x, monster_1.pos_y, monster_1.wd - 30, monster_1.ht);
			}
		}

		//gate2
		//draw(image14, gate2_x , gate2_y, gate2_wd - gate2_wd, gate2_ht - 20);

		//monster1
		if (monster_2.exists != 0)
		if (current <= 1)
		{
			draw(image19, monster_2.pos_x, monster_2.pos_y, monster_2.wd , monster_2.ht);
		}
		else
		{
			//monster_2.speed = 6;
			//monster_2frequency = 100;
				draw(image25, monster_2.pos_x, monster_2.pos_y, monster_2.wd, monster_2.ht);
			
		}
		//monster3d
		//draw(image12, monster_3d.x, monster_3d.y, monster_3d.wd * monster_3d.z, monster_2.ht * monster_3d.z);

		//machine
		if (current == 4)
		{
			draw(image23, machine1.pos_x, machine1.pos_y, machine1.wd, machine1.ht);
			PlaySound(TEXT("sound/mysterious.wav"), NULL, SND_ASYNC | SND_LOOP);
		}
		
		//fruits
		if (current > 3)
		{
			draw(fImage[current_fruit], fruits.pos_x, fruits.pos_y, fruits.wd - 10, fruits.ht - 10);
		}

		//Maze


		char buffer1[15];
		sprintf(buffer1, "Score: %d",f_score);
		printText(buffer1, 5, 15);

		char buffer2[15];
		glColor3f(1.0, 0.0, 0.0);
		sprintf(buffer2, "Lives: %d", lives);
		printText(buffer2, 5, 30);

		char buffer3[15];
		glColor3f(1.0, 0.0, 0.0);
		sprintf(buffer2, "Kills: %d", kills);
		printText(buffer2, 5, 45);
}

void display_end()
{

	

	if (f_score > 19 && kills > 20 && tamer < 2500 && berryx[2] > 780 && berry[2] > 580)
	{
		draw(image29, 0, g_Height, g_Width, g_Height);
		//char result[30] = { "You saved the Jungle" };
		//printText(result, 270, 370);

		glColor3f(0.0,0.0,0.0);
		char result1[30];
		sprintf(result1, "Score: %d", f_score);
		printText(result1, 230, 200);

		char result2[30];
		sprintf(result2, "Kills: %d",kills);
		printText(result2, 230, 230);

		char result3[30];
		//sprintf(result3, "Time Remaining: %d", tamer);
		//printText(result3, 230, 240);

		char result4[] = { "To return to main menu press enter " };
		printText(result4, 240, 260);

	}
	else
	{
		draw(image28, 0, g_Height, g_Width, g_Height);
		PlaySound(TEXT("sound/g_b1.wav"), NULL, SND_ASYNC);
		char result1[30];
		sprintf(result1, "Score: %d", f_score);
		printText(result1, 270, 370);

		char result2[30];
		sprintf(result2, "Kills: %d",kills);
		printText(result2, 270, 400);

		char result5[30] = {"Failed in the mission"};
		printText(result5, 270, 430);
	}
}

void myDisplayFunction()
{
	glClear( GL_COLOR_BUFFER_BIT );		//clears the screen after display
	
	if (curScreen == loadingg)
		display_loading();
	if (curScreen == menu)
		display_menu();
	if (curScreen == help)
		display_help();
	if (curScreen == sound)
		display_sound();
	if (curScreen == story1)
		display_story1();
	if (curScreen == story2)
		display_story2();
	if (curScreen == story3)
		display_story3();
	if (curScreen == story4)
		display_story4();
	if (curScreen == game)
		display_game();
	if (curScreen == maze)
		display_maze();
	if (curScreen == end)
		display_end();



	// brings the openGl window on the front
	glutSwapBuffers();
}