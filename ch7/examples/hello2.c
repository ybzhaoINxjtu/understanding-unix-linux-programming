/* hello2.c
 *
 * */
#include <stdio.h>
#include <curses.h>

void main()
{
    int i;
    
    initscr();
    clear();

    for(i = 0;i < LINES; i++) {
        move(i, i + i);

        if(i % 2) {
            standout();
        }

        addstr("hello world");

        if(i % 2) {
            standend();
        }
    }

    refresh();
    getch();
    endwin();
}
