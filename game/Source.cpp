//#include "glut.h"
//#include "GL.H"
//#include <stdio.h>
//#include <conio.h>
//#define SIZE 4
//
//#pragma comment(lib, "opengl32.lib")
//#pragma comment(lib, "glut32.lib")
//
//int g_Width = 800;				          // Width of GLUT window its the internal graphic window
//int g_Height = 600;
//
//
//
////Displaying the loading screen
//int d_pos_x = 110;
//int d_pos_y = 550;
//int d_wd = 100;
//int d_ht = 60;
//int start = 0;
//static int time = 0;
//
////Diplay main game
////character1(s1)
//float s_pos_x = 10;
//float s_pos_y = 499;
//int s_wd = 60;
//int s_ht = 50;
//int s_temp_up = 0;
//int s_temp_right = 0;
//int s_temp_left = 0;
//static int time1 = 0;
//int s_direction = 1;
//int s_speed = 10;
//float s_speed_up = 8;
//int s_limit_up = 400;
//int s_limit_down = 500;
//int s_limit = 500;
//int temporary = 0;
//float accel = 5;
//
////hurdle1
//struct HURDLE
//{
//	int pos_x;
//	int pos_y;
//	int wd;
//	int ht;
//	int speed;
//	int direction;
//
//};
////initialization for hurdle 1
//HURDLE hurdle = {
//	100, 440, 190, 70, 8, 1
//};
//
//
////levels
//int game_level = 1;                       // it will store number of levels
//int game_pause = 1;
//
//// Function prototypes
//GLuint loadTexture(char* name);
//void draw(GLuint _textureId, int x, int y, int wd, int ht);
//void init();
//void myMouseFunction(int button, int state, int mouseX, int mouseY);
//void myKeyboardFunction(unsigned char key, int mouseX, int mouseY);
//void mySpecialKeysUpFunction(int key, int x, int y);
//void mySpecialKeysFunction(int key, int x, int y);
//void myReshapeFunction(int width, int height);
//void myTimerFunction(int val);
//void drawButton(char * label, int x, int y, int wd, int ht);
//void loading();
//void display_menu();
//void display_story1();
//void display_story2();
//void display_story3();
//void display_story4();
//void display_game();
//void myDisplayFunction();
//
//
//GLuint image1;
//GLuint image2;
//GLuint image3;
//GLuint image4;
//GLuint image5;
//GLuint image6;
//GLuint image7;
//GLuint image8;
//GLuint image9;
//GLuint image10;
//GLuint image11;
//
//enum Screen{ loadingg, menu, game, story1, story2, story3, story4, help };
//Screen curScreen = Screen::loadingg;
//int selected = 0;
//
//
//void LoadResources()
//{
//	//image1 = loadTexture("load.tga");
//	//image2 = loadTexture("save_j.tga");
//	//image3 = loadTexture("all_running.tga");
//	image4 = loadTexture("s1.tga");
//	//image5 = loadTexture("level1.tga");
//	//image6 = loadTexture("story1.tga");
//	//image7 = loadTexture("story2.tga");
//	//image8 = loadTexture("story3.tga");
//	//image9 = loadTexture("welcome.tga");
//	//image10 = loadTexture("h_1..tga");
//	//image11 = loadTexture("load.tga");*/
//}
//
//int main(int argc, char** argv)
//{
//	glutInit(&argc, argv);		//initilize the GLUT libraray
//
//	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);		//has four colour components red, green,blue, and alpha 
//	glutInitWindowSize(800, 600);	//size of window outer window
//	glutInitWindowPosition(0, 0);		//poistion of window 
//	glutCreateWindow("My First OpenGL Appliction, Hooo Yeah");
//
//	LoadResources();
//
//	init();
//
//	glutMouseFunc(myMouseFunction);
//	glutKeyboardFunc(myKeyboardFunction);
//	glutSpecialFunc(mySpecialKeysFunction);
//	glutSpecialUpFunc(mySpecialKeysUpFunction);
//
//	glutReshapeFunc(myReshapeFunction);
//	glutDisplayFunc(myDisplayFunction);
//	glutTimerFunc(33, myTimerFunction, 0);
//
//	//glutFullScreen();	// make the screen fullscreen
//	glutSetCursor(GLUT_CURSOR_INFO);	//Displays the type of cursor u want
//
//	glutMainLoop();
//
//	return 0;
//}
//
//void printText(char *text, int x, int y)
//{
//	glRasterPos2f(x, y);
//
//	for (int i = 0; text[i] != '\0'; i++)
//		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, text[i]);
//}
//
//void init(void)
//{
//	glClearColor(150.f / 255, 220 / 255.0, 230 / 255.0, 0.0);		//background color of openGl window
//	//			 ^red, green, blue, alpha(opaquenss) 
//	glMatrixMode(GL_PROJECTION);		//glMatrixMode — specify which matrix is the current matrix ????
//	glLoadIdentity();		//glLoadIdentity — replace the current matrix with the identity matrix	????
//
//	glOrtho(0.0, g_Width, 0.0, g_Height, -1.0, 1.0);	//set (0,0) on left top
//}
//
//void myMouseFunction(int button, int state, int mouseX, int mouseY)
//{
//
//}
//
//void myKeyboardFunction(unsigned char key, int mouseX, int mouseY)
//{
//	if (curScreen == Screen::menu)
//	{
//		if (selected == 0)
//		{
//			if (key == 13)
//			{
//				curScreen = story1;
//			}
//		}
//	}
//
//	else if (curScreen == Screen::story1)
//	{
//
//		if (key == 13)
//			curScreen = story2;
//	}
//
//	else if (curScreen == Screen::story2)
//	{
//
//		if (key == 13)
//			curScreen = story3;
//	}
//
//	else if (curScreen == Screen::story3)
//	{
//
//		if (key == 13)
//			curScreen = story4;
//	}
//
//	else if (curScreen == Screen::story4)
//	{
//		if (key == 13)
//			curScreen = game;
//
//	}
//
//
//}
//
//void mySpecialKeysUpFunction(int key, int x, int y)
//{
//	if (curScreen == game)
//	{
//		switch (key)
//		{
//		case GLUT_KEY_UP:
//			//s_temp_up = 0;
//
//
//			break;
//		case GLUT_KEY_RIGHT:
//			s_temp_right = 0;
//			break;
//		case GLUT_KEY_LEFT:
//			s_temp_left = 0;
//			break;
//		}
//	}
//}
//
//void mySpecialKeysFunction(int key, int x, int y)
//{
//
//	if (curScreen == menu)
//	{
//		switch (key)
//		{
//		case GLUT_KEY_UP:
//			if (selected > 0)
//				selected--;
//			break;
//		case GLUT_KEY_DOWN:
//			if (selected < 3)
//				selected++;
//			break;
//
//
//		}
//	}
//
//	if (curScreen == game)
//	{
//		switch (key)
//		{
//		case GLUT_KEY_UP:
//			//s_temp_up = 1;
//			if (s_pos_y == 499 || s_pos_y == hurdle.pos_y - hurdle.ht){
//				s_speed_up = -250;
//				accel = 230;
//			}
//			break;
//		case GLUT_KEY_DOWN:
//			s_pos_y += s_speed;
//			break;
//		case GLUT_KEY_LEFT:
//			s_temp_left = 1;
//			break;
//		case GLUT_KEY_RIGHT:
//			s_temp_right = 1;
//			break;
//		case GLUT_KEY_HOME:
//			break;
//		case GLUT_KEY_END:
//			break;
//		case GLUT_KEY_PAGE_UP:
//			break;
//		case GLUT_KEY_PAGE_DOWN:
//			break;
//		}
//	}
//
//	glutPostRedisplay();
//}
//
//void myReshapeFunction(int width, int height)
//{
//	glClear(GL_COLOR_BUFFER_BIT);
//
//	g_Width = width;
//	g_Height = height;
//
//	glViewport(0, 0, g_Width, g_Height);
//
//	glMatrixMode(GL_PROJECTION);
//	glLoadIdentity();
//	glOrtho(0.0, g_Width, g_Height, 0.0, -1.0, 1.0);	// Set axis :: change the (0,0) to top left
//}
//
//void myTimerFunction(int val)                // to enter in a function right click go to def
//{
//	glutTimerFunc(33, myTimerFunction, 0);   // this function is called after every 33mili
//	//seconds (recursion but after a a delay)
//	if (start == 1 && d_wd < 596)
//	{
//		d_wd += 20;
//		time += 4;
//	}
//
//	//strawberry
//
//	s_pos_y = s_pos_y + s_speed_up * 33 / 1000;
//	s_speed_up += accel * 33 / 1000;            // s = ut
//
//	if (s_pos_y >= 499)
//	{
//		s_pos_y = 499;
//	}
//
//	if (s_pos_y >= hurdle.pos_y - hurdle.ht && s_pos_y <= hurdle.pos_y - 60 && s_speed_up > 0 && s_pos_x > hurdle.pos_x && s_pos_x < hurdle.pos_x + hurdle.wd)
//	{
//		s_pos_y = hurdle.pos_y - hurdle.ht;
//		//s_speed_up = 0;
//		//accel = 0;
//	}
//
//	if (s_pos_y - s_ht >= hurdle.pos_y && s_speed_up < 0 && s_pos_x + s_wd > hurdle.pos_x && s_pos_x < hurdle.pos_x + hurdle.wd)
//	{
//		//s_pos_x -= 2;
//		s_pos_y += 10;
//		s_speed_up = 0;
//
//	}
//
//	//forward
//	if (s_temp_right == 1)
//	{
//		s_pos_x += s_speed;
//
//	}
//
//	//Backwards
//	if (s_temp_left == 1)
//	{
//		s_pos_x -= s_speed;
//	}
//
//	//hudle1
//
//	hurdle.pos_x += hurdle.speed * hurdle.direction;
//
//	if (hurdle.pos_x > g_Width - hurdle.wd || hurdle.pos_x < 0)
//	{
//		hurdle.direction *= -1;
//	}
//
//	glutPostRedisplay();
//}
//
//
////DISPLAY
//void drawRectangle(int x, int y, int wd, int ht)
//{
//	glBegin(GL_POLYGON);
//
//	glVertex2f(x, y);          //left down vertex
//	glVertex2f(x + wd, y);     //right down vertex
//	glVertex2f(x + wd, y - ht);//right to vetec
//	glVertex2f(x, y - ht);     //right to vetex
//
//	glEnd();
//}
//
//void drawButton(char * label, int x, int y, int wd, int ht)
//{
//	//Draw shadow
//	glColor3f(0.0, 0.0, 0.0);
//	drawRectangle(x, y, wd, ht);
//
//	//Draw box
//	glColor3f(128 / 255.f, 255 / 255.f, 255 / 255.f);
//	drawRectangle(x - 2, y - 2, wd, ht);
//
//	//Text to be printed 
//	//if only char
//	glColor3f(0.0, 0.0, 0.0);
//	printText(label, x + 10, y - 3);
//
//
//}
//
//void display_loading()
//{
//	draw(image1, 0, g_Height, g_Width, g_Height);
//
//	//glColor4f(0.0, 0.0, 0.0, 0.2);
//	glColor3f(0.f, 0.0 / 255, 0.0 / 255);
//	drawRectangle(d_pos_x + 5, d_pos_y + 5, d_wd, d_ht);
//	glColor3f(1.f, 0.0 / 255, 0.0 / 255);
//	drawRectangle(d_pos_x, d_pos_y, d_wd, d_ht);
//
//	start = 1;
//
//	if (d_wd > 300)
//		draw(image2, 250, 120, 340, 120);
//
//	glColor3f(0.f, 0.f, 0.f);
//	char buffer[15];
//	sprintf(buffer, "LOADING: %d %", time);
//	printText(buffer, d_pos_x + 260, d_pos_y - 10);
//
//	if (time == 100)
//	{
//		curScreen = menu;
//	}
//
//
//}
//
//void display_menu() 
//{
//	game_pause = 1;                                       //So game only starts when user enters on start button
//	draw(image3, 0, g_Height, g_Width, g_Height);
//
//	glColor3f(0.0, 0.0, 1.0);
//	char back[37] = "Press BACKSPACE to get back to menu";
//	printText(back, 5, 35);
//
//	char back1[23] = "Press ENTER to select";
//	printText(back1, 5, 60);
//
//	int wd = 160;
//	int ht = 40;
//	int x = (g_Width / 2) - 80;
//	int y = 180;
//	int add = 80;
//
//	char*label[SIZE] = { "PLAY", "HELP", "SOUND", "EIXT" };
//
//	for (int i = 0; i < SIZE; i++)
//	{
//
//		glColor3f(128 / 255.f, 255 / 255.f, 255 / 255.f);
//		drawButton(label[i], x, y, wd, ht);
//
//		if (selected == i)
//		{
//			glColor3f(1, 0, 0);    //color of pointer
//			glBegin(GL_POLYGON);
//			glVertex2f(x - 40, y);
//			glVertex2f(x + 7, y - 20);
//			glVertex2f(x - 40, y - 40);
//			glEnd();
//		}
//		y += 70;
//	}
//
//
//}
//
//void display_story1()
//{
//	glColor3f(0.0, 1.0, 0.0);
//	draw(image6, 0, g_Height, g_Width, g_Height);
//}
//
//void display_story2()
//{
//	glColor3f(1.0, 0.0, 0.0);
//	draw(image7, 0, g_Height, g_Width, g_Height);
//}
//
//void display_story3()
//{
//	draw(image8, 0, g_Height, g_Width, g_Height);
//}
//
//void display_story4()
//{
//	draw(image9, 0, g_Height, g_Width, g_Height);
//}
//
//void display_game()
//
//{
//
//
//	draw(image10, hurdle.pos_x, hurdle.pos_y, hurdle.wd, hurdle.ht);
//
//	draw(image4, s_pos_x, s_pos_y, s_wd, s_ht);
//
//	//glColor3f(1.0, 0.0, 0.0);
//	//drawRectangle(0, 400, 200, 4);
//	//drawRectangle(0, 500, 200, 4);
//
//
//}
//
//void myDisplayFunction()
//{
//	glClear(GL_COLOR_BUFFER_BIT);		//clears the screen after display
//
//	if (curScreen == loadingg)
//		display_loading();
//	if (curScreen == menu)
//		display_menu();
//	if (curScreen == story1)
//		display_story1();
//	if (curScreen == story2)
//		display_story2();
//	if (curScreen == story3)
//		display_story3();
//	if (curScreen == story4)
//		display_story4();
//	if (curScreen == game)
//		display_game();
//
//	// brings the openGl window on the front
//	glutSwapBuffers();
//}
//
//
//
