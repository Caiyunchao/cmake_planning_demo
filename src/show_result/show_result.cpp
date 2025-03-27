#include<iostream>
#include "show_result.h"
#include<graphics.h>

using namespace std;

void ShowResult::showResult() {  // Changed from showResult to showResult()
    initgraph(1000, 1000);  // Changed from initgraph to initgraph()
    setbkcolor(BLACK);  // Changed from setbkcolor to setbkcolor()
    cleardevice();  // Changed from cleardevice to cleardevice()

    cout<<"draw circle"<<endl;
    setlinecolor(RED);  // 修正拼写错误 setlillcolor → setlinecolor
    setlinestyle(PS_SOLID,4);  // 修正常量拼写 PS_SOULD → PS_SOLID
    circle(500, 500, 100);
    circle(500, 500, 200);
    circle(500, 500, 300);
    circle(500, 500, 400);
        
    system("pause");
    closegraph();  // Changed from closegraph to closegraph()
}

