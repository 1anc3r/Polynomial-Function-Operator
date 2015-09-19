void Goto(int x,int y)
{
	COORD pos = { x - 1, y - 1 };
	HANDLE Out = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(Out,pos);
}
