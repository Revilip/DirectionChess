#ifndef __DIRCHESS_H
#define __DIRCHESS_H

#define DIRCHESS_SIDE_DI 1
#define DIRCHESS_SIDE_DO 2

#define DIRCHESS_ROTATE_RIGHT 1
#define DIRCHESS_ROTATE_LEFT 3

#define DIRCHESS_TYPE_LEFT_ARROW 1
#define DIRCHESS_TYPE_UP_ARROW 2
#define DIRCHESS_TYPE_RIGHT_ARROW 3
#define DIRCHESS_TYPE_DOWN_ARROW 4
#define DIRCHESS_TYPE_DOUBLE_ARROW 5
#define DIRCHESS_TYPE_LEFT_BLOCK 6
#define DIRCHESS_TYPE_UP_BLOCK 7
#define DIRCHESS_TYPE_RIGHT_BLOCK 8
#define DIRCHESS_TYPE_DOWN_BLOCK 9
#define DIRCHESS_TYPE_BOSS 10
#define DIRCHESS_TYPE_CENTER_BLOCK 11

typedef struct Struct_DirStone{
	int type;
	int side;
}DirStone;

class DirChess{
public:
	DirChess();
	void Init();//Init or reset
	bool Move(int,int,int,int);//Move x0,y0 to x,y
	bool Rotate(int,int,int);//Rotate x0,y0 by angle
	bool Check();//Check if the player should rotate
	int Side();//Return the side of the current player
	int Win();//Return the winning side
	DirStone Get(int,int);
private:
	DirStone chess[35];
	int side=DIRCHESS_SIDE_DI;
};

#endif
