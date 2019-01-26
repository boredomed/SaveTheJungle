
#include <stdlib.h>
#include "glut.h"
#include <stdio.h>
#include <conio.h>

int g_Width = 400;		//define size of the window
int g_Height = 400;

//global mouse position
int mouse_X = 0;	//xcod
int mouse_Y = 0;	//ycodz

void init();
void myMouseFunction(int button, int state, int mouseX, int mouseY);
void myKeyboardFunction(unsigned char key, int mouseX, int mouseY);
void mySpecialKeysFunction(int key, int x, int y);
void myReshapeFunction(int width, int height);
void myTimerFunction(int val);
void myDisplayFunction();


int main(int argc, char** argv)
{
	glutInit(&argc, argv);		//initilize the GLUT libraray

	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);		//has four colour components red, green,blue, and alpha 
	glutInitWindowSize(600, 600);	//size of window
	glutInitWindowPosition(0, 0);		//poistion of window
	glutCreateWindow("My First OpenGL Appliction, Hooo Yeah");

	init();

	glutMouseFunc(myMouseFunction);
	glutKeyboardFunc(myKeyboardFunction);
	glutSpecialFunc(mySpecialKeysFunction);

	glutReshapeFunc(myReshapeFunction);
	glutDisplayFunc(myDisplayFunction);
	glutTimerFunc(33, myTimerFunction, 0);

	//	glutFullScreen();	// make the screen fullscreen
	glutSetCursor(GLUT_CURSOR_INFO);	//Displays the type of cursor u want

	glutMainLoop();

	return 0;
}

void init(void)
{
	glClearColor(0.6, 0.3, 0.1, 0.0);		//background color of openGl window
	//			 ^red, green, blue, alpha(opaquenss) 
	glMatrixMode(GL_PROJECTION);		//glMatrixMode — specify which matrix is the current matrix ????
	glLoadIdentity();		//glLoadIdentity — replace the current matrix with the identity matrix	????

	glOrtho(0.0, g_Width, 0.0, g_Height, -1.0, 1.0);	//set (0,0) on left top
}

void myMouseFunction(int button, int state, int mouseX, int mouseY)
{
	mouse_X = mouseX;
	mouse_Y = mouseY;

	if (button == 1 && state == 0) //Click
	{
		printf("mouse clicked \n");
		printf("\nmouseX: %d mouseY: %d, State: %d", mouseX, mouseY, state);
	}

}

void myKeyboardFunction(unsigned char key, int mouseX, int mouseY)
{
	//mouse_X=mouseX;
	//mouse_Y=mouseY;

	if (key == '4') // i.e.left
	{
		mouse_X = mouse_X - 5;
		mouse_Y = mouse_Y;
		printf("\nmouseX: %d mouseY: %d", mouseX, mouseY);
	}
	if (key == '6') // i.e.right
	{
		mouse_X = mouse_X + 5;
		mouse_Y = mouse_Y;
		printf("\nmouseX: %d mouseY: %d", mouseX, mouseY);
	}
	if (key == '2') // i.e.down
	{
		mouse_X = mouse_X;
		mouse_Y = mouse_Y + 5;
		printf("\nmouseX: %d mouseY: %d", mouseX, mouseY);
	}
	if (key == '8') // i.e. up
	{
		mouse_X = mouse_X;
		mouse_Y = mouse_Y - 5;
		printf("\nmouseX: %d mouseY: %d", mouseX, mouseY);
	}
}

void mySpecialKeysFunction(int key, int x, int y)
{
	switch (key)
	{
	case GLUT_KEY_UP:
		mouse_X = mouse_X;
		mouse_Y = mouse_Y - 5;

		break;
	case GLUT_KEY_DOWN:
		break;
	case GLUT_KEY_LEFT:
		break;
	case GLUT_KEY_RIGHT:
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

void myReshapeFunction(int width, int height)
{
	glClear(GL_COLOR_BUFFER_BIT);

	g_Width = width;
	g_Height = height;

	glViewport(0, 0, g_Width, g_Height);

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0.0, g_Width, g_Height, 0.0, -1.0, 1.0);	//change the (0,0) to top left
}

void myTimerFunction(int val)
{
	glutTimerFunc(33, myTimerFunction, 0);
	myDisplayFunction();
}

int i = 0;
void myDisplayFunction()
{
	//glClear( GL_COLOR_BUFFER_BIT );		//clers the screen after display

	glBegin(GL_POLYGON);

	glColor3f(0.4, 0.7, 0.9);		//to display colored objects

	glVertex2f(mouse_X, mouse_Y);		//f indicates floating points arguments
	glVertex2f(mouse_X, mouse_Y + 30.0);
	glVertex2f(mouse_X + 30.5, mouse_Y + 30.0);
	glVertex2f(mouse_X + 30.0, mouse_Y);

	glEnd();

	glutSwapBuffers();		//brings the openGl window on the front
	printf("\n.");


}

