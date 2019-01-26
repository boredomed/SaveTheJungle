int g_Width = 800;
int g_Height = 600;

int bg_posy = g_Height;


//Displaying the loading screen
int d_pos_x = 110;
int d_pos_y = 550;
int d_wd = 100;
int d_ht = 60;
int start = 0;
static int Time = 0;

//Diplay main game
//character1(s1)
float s_pos_x = 10;
float s_pos_y = 499;
int s_wd = 60;
int s_ht = 50;
int s_temp_up = 0;
int s_temp_right = 0;
int s_temp_left = 0;
int s_direction = 1;
int s_speed = 10;
float s_speed_up = 8;
int s_limit_up = 400;
int s_limit_down = 500;
int s_limit = 500;
int temporary = 0;
float accel = 5;
int inverter = 0;
int inverter_1 = 0;
int inverter_2 = 0;

//hurdle1
struct HURDLE
{
	int pos_x;
	int pos_y;
	int wd;
	int ht;
	int speed;
	int direction;

};
//initialization for hurdle 1
HURDLE hurdle = {
	100, 440, 190, 70, 8, 1
};
int check = 0;

//hurdle 1
HURDLE hurdle1 = {
	400, 210, 190, 70, 4, 1
};
int check1 = 0;

//bullets structure
struct BULLETS {
	int pos_x;
	int pos_y;
	float speed;
	int width;
	int height;
	int exist;
};
BULLETS bullets1 = { s_pos_x + (s_wd / 2),
s_pos_y - 20,
8.f,
20,
20,
0 };
//bullets
const int MAX_BULLET = 10;
BULLETS bullets[MAX_BULLET];
int bullet_frequency = 5;

//gate of monster
int gate_wd = 110;
int gate_x = g_Width + 40;
int gate_y = 499;
int gate_ht = 110;

//structure monster
struct MONSTER
{
	int pos_x;
	int pos_y;
	int wd;
	int ht;
	int speed;
	int exists;

};
//intializing monster 1
MONSTER monster_1 =
{
	gate_x - 5, gate_y, 65, 95, 8, 0
};
int monster_frequency = 100;

//gate 2
//gate of monster
int gate2_wd = 110;
int gate2_x = g_Width + 40;
int gate2_y = 349;
int gate2_ht = 110;

struct Machine{
	int pos_x;
	int pos_y;
	int wd;
	int ht;
	int speed;
	int direction;
};
Machine machine1 = {
	0, 100, 50, 100, 10, 1
};


MONSTER monster_2 =
{
	gate2_x - 5, gate2_y, 65, 95, 15, 0
};
int monster_2frequency = 55;

// Fruit machine
//Fruits
struct Fruits{
	int pos_x;
	int pos_y;
	int wd;
	int ht;
	int speed;
	int direction;
	int exist;
};


int f_score = 0;

//levels
int game_level = 1;                       // it will store number of levels
int game_pause = 1;                       // to pause and resume game by r an p
int game_pause_i = 0;                     // to pause game when on other screens
int lives = 3;

int sounds = 1;
int kills = 0;

int control_c5 = 0;

// MAZE pART
//                     ---------------------
//                     ---------------------
//				       	---------------------

//global mouse position
int mouse_X = 0;	//xcod
int mouse_Y = 0;	//ycod

int berryx[] = { 40, 60, 60, 40 };
int  berry[] = { 30, 30, 50, 50 };
int speedxl = 5;
int speedxr = 5;
int speedyu = 5;
int speedyd = 5;
int counter1 = 0;// for fruit dissappearing
int counter2 = 0;
int counter3 = 0;
int counter4 = 0;
int counter5 = 0;
int counter6 = 0;
int win = 0;
int static tamer = 0;





