int Optition(int up,int down,int left,int right,int backspace,int step)
{
    char ch;
    int line=up;
    Goto(left,line);
    printf(">>");
    Goto(right,line);
    printf("<<");
    while((ch=getch())!=0x0d)
    {
        while(ch==0x48)
        {
            if(line==up)
            {
                break;
            }
            else
            {
                Goto(left,line);
                printf("  ");
                Goto(right,line);
                printf("  ");
                line-=step;
                Goto(left,line);
                printf(">>");
                Goto(right,line);
                printf("<<");
                break;
            }
        }
        while(ch==0x50)
        {
            if(line==down)
            {
                break;
            }
            else
            {
                Goto(left,line);
                printf("  ");
                Goto(right,line);
                printf("  ");
                line+=step;
                Goto(left,line);
                printf(">>");
                Goto(right,line);
                printf("<<");
                break;
            }
        }
        if(ch==0x1b)
        {
            line=backspace;
            break;
        }
    }
    return line;
}
