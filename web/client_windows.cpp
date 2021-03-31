#include <stdio.h>
#include "DirChess.h"

int main()
{
	DirChess s;
	s.Init();
	printf("%d",s.Side());
	return 0;
}
