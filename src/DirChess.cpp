#include <string.h>
#include "DirChess.h"

DirChess::DirChess()
{

}

void DirChess::Init()
{
	memset(chess,0,sizeof(chess));
	chess[7].side = DIRCHESS_SIDE_DO;
	chess[7].type = DIRCHESS_TYPE_BOSS;
	chess[27].side = DIRCHESS_SIDE_DI;
	chess[27].type = DIRCHESS_TYPE_BOSS;
}

bool DirChess::Move(int x0,int y0,int x,int y)
{
	return false;	
}

bool DirChess::Rotate(int x0,int y0,int dir)
{
	return false;
}

bool DirChess::Check()
{
	return false;
}

int DirChess::Side()
{
	return DIRCHESS_SIDE_DO;	
}

int DirChess::Win()
{
	return DIRCHESS_SIDE_DI;
}
