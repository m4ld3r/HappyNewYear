#include <iostream>
#include <Windows.h>
using namespace std;

enum Colors {
    Black, Blue, Green, Cyan, Red, Magenta, Brown, LightGray,
    DarkGray, LightBlue, LightGreen, LightCyan, LightRed, LightMagenta, Yellow, White
};

template<Colors txt = LightGray, Colors bg = Black>
ostream& color(ostream& text) {
    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hStdOut, (WORD)((bg << 4) | txt));
    return text;
}

void gotoxy(short x, short y) {
    COORD p = { x,y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),p);
}

void Music();

void Print(int index) {
    
    if (index == 1) {
        cout << color << "Смотри какая ёлочка ^^\n\n" << color<Green, Black>
            << "            *\n"
            << "          * * *\n" << color<Brown, Black>
            << "            |\n" << color<Green, Black>
            << "        * * * * *\n" << color<Brown, Black>
            << "            |\n" << color<Green, Black>
            << "      * * * * * * *\n" << color<Brown, Black>
            << "            |\n" << color<Green, Black>
            << "    * * * * * * * * *\n" << color<Brown, Black>
            << "            |\n" << color<Green, Black>
            << "  * * * * * * * * * * *\n" << color<Brown, Black>
            << "           /|\\        \n\n" << color
            << "Давай её немного украсим ;)";
        Music();
        system("mode con cols=40 lines=17");
    }

    gotoxy(0, 0);

    cout << color << "Ну какова красота, она ещё и подросла :3\n\n";
    gotoxy(0, 2);

    if (index % 2 == 0 && index % 3 != 0 && index % 5 != 0 && index % 7 != 0 && index % 10 != 0) {
        cout << color<Red, Black>
            << "                  |         \n"
            << "                  ^         \n" << color<LightCyan, Black>
            << "                +" << color<Green, Black> << " *" << color<LightCyan, Black> << " +  \n"
            << color<LightCyan, Black> << "              +" << color<Green, Black> << " *" << color<LightCyan, Black> << " +" << color<Green, Black> << " *" << color<LightCyan, Black> << " +  \n" << color<Brown, Black>
            << "                 |||                  \n" << color<Green, Black>
            << "            *" << color<LightCyan, Black> << " +" << color<Green, Black> << " * " << color<LightCyan, Black> << "+" << color<Green, Black> << " *" << color<LightCyan, Black> << " +" << color<Green, Black> << " *  \n" << color<Brown, Black>
            << "                 |||                  \n" << color<LightCyan, Black>
            << "          +" << color<Green, Black> << " *" << color<LightCyan, Black> << " +" << color<Green, Black> << " * " << color<LightCyan, Black> << "+" << color<Green, Black> << " *" << color<LightCyan, Black> << " +" << color<Green, Black> << " * " << color<LightCyan, Black> << "+  \n" << color<Brown, Black>
            << "                 |||                  \n" << color<Green, Black>
            << "        * " << color<LightCyan, Black> << "+" << color<Green, Black> << " * " << color<LightCyan, Black> << "+" << color<Green, Black> << " * " << color<LightCyan, Black> << "+" << color<Green, Black> << " *" << color<LightCyan, Black> << " +" << color<Green, Black> << " *" << color<LightCyan, Black> << " + " << color<Green, Black> << "*  \n" << color<Brown, Black>
            << "                 |||                  \n" << color<LightCyan, Black>
            << "       +" << color<Green, Black> << " *" << color<LightCyan, Black> << " +" << color<Green, Black> << " *" << color<LightCyan, Black> << " +" << color<Green, Black> << " * *" << color<LightCyan, Black> << " +" << color<Green, Black> << " *" << color<LightCyan, Black> << " +" << color<Green, Black> << " *" << color<LightCyan, Black> << " +   \n" << color<Brown, Black>
            << "                 |||               \n"
            << "                / | \\ " << color;
        Sleep(2000);
    }

    if (index % 3 == 0 && index % 5 != 0 && index % 7 != 0) {
        cout << color<Red, Black>
            << "                  |         \n"
            << "                  ^         \n" << color<LightMagenta, Black>
            << "                +" << color<Green, Black> << " *" << color<LightMagenta, Black> << " +  \n"
            << color<LightMagenta, Black> << "              +" << color<Green, Black> << " *" << color<LightMagenta, Black> << " +" << color<Green, Black> << " *" << color<LightMagenta, Black> << " +  \n" << color<Brown, Black>
            << "                 |||                  \n" << color<Green, Black>
            << "            *" << color<LightMagenta, Black> << " +" << color<Green, Black> << " * " << color<LightMagenta, Black> << "+" << color<Green, Black> << " *" << color<LightMagenta, Black> << " +" << color<Green, Black> << " *  \n" << color<Brown, Black>
            << "                 |||                  \n" << color<LightMagenta, Black>
            << "          +" << color<Green, Black> << " *" << color<LightMagenta, Black> << " +" << color<Green, Black> << " * " << color<LightMagenta, Black> << "+" << color<Green, Black> << " *" << color<LightMagenta, Black> << " +" << color<Green, Black> << " * " << color<LightMagenta, Black> << "+  \n" << color<Brown, Black>
            << "                 |||                  \n" << color<Green, Black>
            << "        * " << color<LightMagenta, Black> << "+" << color<Green, Black> << " * " << color<LightMagenta, Black> << "+" << color<Green, Black> << " * " << color<LightMagenta, Black> << "+" << color<Green, Black> << " *" << color<LightMagenta, Black> << " +" << color<Green, Black> << " *" << color<LightMagenta, Black> << " + " << color<Green, Black> << "*  \n" << color<Brown, Black>
            << "                 |||                  \n" << color<LightMagenta, Black>
            << "       +" << color<Green, Black> << " *" << color<LightMagenta, Black> << " +" << color<Green, Black> << " *" << color<LightMagenta, Black> << " +" << color<Green, Black> << " * *" << color<LightMagenta, Black> << " +" << color<Green, Black> << " *" << color<LightMagenta, Black> << " +" << color<Green, Black> << " *" << color<LightMagenta, Black> << " +   \n" << color<Brown, Black>
            << "                 |||               \n"
            << "                / | \\ " << color;
        Sleep(2000);
    }

    if (index % 5 == 0 && index % 10 != 0) {
        cout << color<Red, Black>
            << "                  |         \n"
            << "                  ^         \n" << color<LightRed, Black>
            << "                +" << color<Green, Black> << " *" << color<LightRed, Black> << " +  \n"
            << color<LightRed, Black> << "              +" << color<Green, Black> << " *" << color<LightRed, Black> << " +" << color<Green, Black> << " *" << color<LightRed, Black> << " +  \n" << color<Brown, Black>
            << "                 |||                  \n" << color<Green, Black>
            << "            *" << color<LightRed, Black> << " +" << color<Green, Black> << " * " << color<LightRed, Black> << "+" << color<Green, Black> << " *" << color<LightRed, Black> << " +" << color<Green, Black> << " *  \n" << color<Brown, Black>
            << "                 |||                  \n" << color<LightRed, Black>
            << "          +" << color<Green, Black> << " *" << color<LightRed, Black> << " +" << color<Green, Black> << " * " << color<LightRed, Black> << "+" << color<Green, Black> << " *" << color<LightRed, Black> << " +" << color<Green, Black> << " * " << color<LightRed, Black> << "+  \n" << color<Brown, Black>
            << "                 |||                  \n" << color<Green, Black>
            << "        * " << color<LightRed, Black> << "+" << color<Green, Black> << " * " << color<LightRed, Black> << "+" << color<Green, Black> << " * " << color<LightRed, Black> << "+" << color<Green, Black> << " *" << color<LightRed, Black> << " +" << color<Green, Black> << " *" << color<LightRed, Black> << " + " << color<Green, Black> << "*  \n" << color<Brown, Black>
            << "                 |||                  \n" << color<LightRed, Black>
            << "       +" << color<Green, Black> << " *" << color<LightRed, Black> << " +" << color<Green, Black> << " *" << color<LightRed, Black> << " +" << color<Green, Black> << " * *" << color<LightRed, Black> << " +" << color<Green, Black> << " *" << color<LightRed, Black> << " +" << color<Green, Black> << " *" << color<LightRed, Black> << " +   \n" << color<Brown, Black>
            << "                 |||               \n"
            << "                / | \\ " << color;
        Sleep(2000);
    }

    if (index % 7 == 0) {
        cout << color<Red, Black>
            << "                  |         \n"
            << "                  ^         \n" << color<Yellow, Black>
            << "                +" << color<Green, Black> << " *" << color<Yellow, Black> << " +  \n"
            << color<Yellow, Black> << "              +" << color<Green, Black> << " *" << color<Yellow, Black> << " +" << color<Green, Black> << " *" << color<Yellow, Black> << " +  \n" << color<Brown, Black>
            << "                 |||                  \n" << color<Green, Black>
            << "            *" << color<Yellow, Black> << " +" << color<Green, Black> << " * " << color<Yellow, Black> << "+" << color<Green, Black> << " *" << color<Yellow, Black> << " +" << color<Green, Black> << " *  \n" << color<Brown, Black>
            << "                 |||                  \n" << color<Yellow, Black>
            << "          +" << color<Green, Black> << " *" << color<Yellow, Black> << " +" << color<Green, Black> << " * " << color<Yellow, Black> << "+" << color<Green, Black> << " *" << color<Yellow, Black> << " +" << color<Green, Black> << " * " << color<Yellow, Black> << "+  \n" << color<Brown, Black>
            << "                 |||                  \n" << color<Green, Black>
            << "        * " << color<Yellow, Black> << "+" << color<Green, Black> << " * " << color<Yellow, Black> << "+" << color<Green, Black> << " * " << color<Yellow, Black> << "+" << color<Green, Black> << " *" << color<Yellow, Black> << " +" << color<Green, Black> << " *" << color<Yellow, Black> << " + " << color<Green, Black> << "*  \n" << color<Brown, Black>
            << "                 |||                  \n" << color<Yellow, Black>
            << "       +" << color<Green, Black> << " *" << color<Yellow, Black> << " +" << color<Green, Black> << " *" << color<Yellow, Black> << " +" << color<Green, Black> << " * *" << color<Yellow, Black> << " +" << color<Green, Black> << " *" << color<Yellow, Black> << " +" << color<Green, Black> << " *" << color<Yellow, Black> << " +   \n" << color<Brown, Black>
            << "                 |||               \n"
            << "                / | \\ " << color;
        Sleep(2000);
    }

    if (index % 10 == 0) {
        cout << color<Red, Black>
            << "                  |         \n"
            << "                  ^         \n" << color<White, Black>
            << "                +" << color<Green, Black> << " *" << color<White, Black> << " +  \n"
            << color<White, Black> << "              +" << color<Green, Black> << " *" << color<White, Black> << " +" << color<Green, Black> << " *" << color<White, Black> << " +  \n" << color<Brown, Black>
            << "                 |||                  \n" << color<Green, Black>
            << "            *" << color<White, Black> << " +" << color<Green, Black> << " * " << color<White, Black> << "+" << color<Green, Black> << " *" << color<White, Black> << " +" << color<Green, Black> << " *  \n" << color<Brown, Black>
            << "                 |||                  \n" << color<White, Black>
            << "          +" << color<Green, Black> << " *" << color<White, Black> << " +" << color<Green, Black> << " * " << color<White, Black> << "+" << color<Green, Black> << " *" << color<White, Black> << " +" << color<Green, Black> << " * " << color<White, Black> << "+  \n" << color<Brown, Black>
            << "                 |||                  \n" << color<Green, Black>
            << "        * " << color<White, Black> << "+" << color<Green, Black> << " * " << color<White, Black> << "+" << color<Green, Black> << " * " << color<White, Black> << "+" << color<Green, Black> << " *" << color<White, Black> << " +" << color<Green, Black> << " *" << color<White, Black> << " + " << color<Green, Black> << "*  \n" << color<Brown, Black>
            << "                 |||                  \n" << color<White, Black>
            << "       +" << color<Green, Black> << " *" << color<White, Black> << " +" << color<Green, Black> << " *" << color<White, Black> << " +" << color<Green, Black> << " * *" << color<White, Black> << " +" << color<Green, Black> << " *" << color<White, Black> << " +" << color<Green, Black> << " *" << color<White, Black> << " +   \n" << color<Brown, Black>
            << "                 |||               \n"
            << "                / | \\ " << color;
        Sleep(2000);
    }
}

int main() {
    
    setlocale(LC_ALL, "Rus");    
    system("mode con cols=28 lines=15");

    int index = 1;

    while (true) {
        Print(index);
        if (index < 10) index++;
        else index = 2;
    }

    return 0;
}

void Music() {
    Beep(247, 500);
    Beep(417, 500);
    Beep(417, 500);
    Beep(370, 500);
    Beep(417, 500);
    Beep(329, 500);
    Beep(247, 500);
    Beep(247, 500);
    Beep(247, 500);
    Beep(417, 500);
    Beep(417, 500);
    Beep(370, 500);
    Beep(417, 500);
    Beep(497, 500);
    Sleep(250);
    Beep(497, 500);
    Beep(277, 500);
    Beep(277, 500);
    Beep(440, 500);
    Beep(440, 500);
    Beep(417, 500);
    Beep(370, 500);
    Beep(329, 500);
    Beep(247, 500);
    Beep(417, 500);
    Beep(417, 500);
    Beep(370, 500);
    Beep(417, 500);
    Beep(329, 500);
}