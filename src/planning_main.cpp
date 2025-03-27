#include<iostream>
#include"process.h"
#include"show_result.h"
using namespace std;
int main()
{
    cout<<"planing start!"<<endl;
    Process my_process;
    my_process.planProcess();
    cout<<"planing end!"<<endl;
    ShowResult my_show_result;
    my_show_result.showResult();
    cout<<"show result end!"<<endl;
    return 0;

}

