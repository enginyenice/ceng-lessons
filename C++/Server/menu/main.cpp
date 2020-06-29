#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    while(1){
        int secim = 0;
        printf("1- Location\n");
        printf("2- Tech\n");
        printf("3- Cost\n");
        printf("4- Report\n");
        printf("5- Exit\n");
        printf("Secim: ");
        scanf("%d",&secim);
        switch(secim)
        {
        case 1:
             ShellExecute(NULL, "open", "..\\location\\location.exe", NULL, NULL, SW_SHOWDEFAULT);
            //system("location.exe");
            break;
        case 2:
            ShellExecute(NULL, "open", "..\\tech\\tech.exe", NULL, NULL, SW_SHOWDEFAULT);
            //system("tech.exe");
            break;
        case 3:
            //system("cost.exe");
            ShellExecute(NULL, "open", "..\\cost\\cost.exe", NULL, NULL, SW_SHOWDEFAULT);
            break;
        case 4:
            //system("report.exe");
            ShellExecute(NULL, "open", "..\\report\\report.exe", NULL, NULL, SW_SHOWDEFAULT);
            break;
        case 5:
            return 0;
            break;
        }
    system("cls");
    }
    return 0;
}

