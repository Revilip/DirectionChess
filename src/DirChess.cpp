#include <string.h>
#include "DirChess.h"

DirChess::DirChess()
{

}

void DirChess::Init()
{
	side=DIRCHESS_SIDE_DO;
	memset(chess,0,sizeof(chess));
	chess[7].side = DIRCHESS_SIDE_DO;
	chess[7].type = DIRCHESS_TYPE_BOSS;
	chess[27].side = DIRCHESS_SIDE_DI;
	chess[27].type = DIRCHESS_TYPE_BOSS;
}

bool DirChess::Move(int x0,int y0,int x,int y)
{
	DirStone c = Get(x0,y0);
	if(c.side!=side)
	{
		return false;
	}
	//Add checking code
	return false;	
}

bool DirChess::Rotate(int x0,int y0,int dir)
{
	if(y0!=3)
		return false;
	if(x0!=0&&x0!=4)
		return false;
	return false;
}

bool DirChess::Check()
{
	return false;
}

int DirChess::Side()
{
	return side;	
}

int DirChess::Win()
{
	return DIRCHESS_SIDE_DI;
}

DirStone DirChess::Get(int x,int y)
{
	return chess[x+y*5];
}
