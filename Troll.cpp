#include <stdio.h>
#include <windows.h>
#include <shellapi.h>

void OpenNotepadWithText(const char *text) {
    char tempPath[MAX_PATH];
    char tempFile[MAX_PATH];
    FILE *file;

    
    GetTempPath(MAX_PATH, tempPath);

    
    GetTempFileName(tempPath, "WHYY", 0, tempFile);


    file = fopen(tempFile, "w");
    if (file != NULL) {
        fprintf(file, "%s", text);
        fclose(file);
    }

    
    ShellExecute(0, "open", "notepad.exe", tempFile, NULL, SW_SHOWMAXIMIZED);
}

int main() {
    const char *asciiArt = 
        "   ,., '                              .·¨'`;        ,.·´¨;\\       ,-·-.          ,'´¨;    \n"
        " ,'   '`;                 ,·;'        ';   ;'\\       ';   ;::\\      ';   ';\\      ,'´  ,':\\'  \n"
        " ;    ,':\\     ,'´¨';     '; ;'\\       ;   ;::'\\      ,'   ;::';      ;   ';:\\   .'   ,'´::'\\ \n"
        " ;    ';::'\\  ,'   ,'\\   ,' ,'::'\\      ;  ;::_';,. ,.'   ;:::';°     '\\   ';::;'´  ,'´::::;'  \n"
        " ',    ';::;','    ,'::\\,'  ,':::;    .'     ,. -·~-·,   ;:::'; '       \\  '·:'  ,'´:::::;' '  \n"
        "  ';   ';:';,'     ;:::;' ,'::::;'    ';   ;'\\::::::::;  '/::::;          '·,   ,'::::::;'´    \n"
        "   ';  ';:;' ,:';  ';:;'  ,'::::;      ;  ';:\\;::-··;  ;::::;            ,'  /::::::;'  '    \n"
        "    ';  '·' ,'::';  '·´ ,':::::;       ':,.·´\\;'    ;' ,' :::/  '         ,´  ';/::::;'  '      \n"
        "     \\   /::::;\\·-·'´\\::::;·''        \\:::::\\    \\·.'::::;            \\`*ª'´\\\\::/‘         \n"
        "      \\'´\\:::;'  '\\::::'\\;'´             \\;:·´     \\:\\::';              '\\:::::\\';  '        \n"
        "       '\\:'\\:/     '·-·'´'                          `·\\;'                 `*ª'´‘            \n"
        "         '´                                          '                    '               ";

    int Result = MessageBox(0, "I̷ ̸l̵o̷v̶e̸ ̶y̵o̷u̷ ̶c̸o̵m̵p̶u̴t̶e̸r̶ ̷c̵a̸n̶ ̴i̸ ̷h̴a̶v̶e̵ ̴i̴t̸?̴", "3Rr0r C0d1n6", MB_ICONWARNING | MB_YESNO);
    if (Result == IDYES) {
        MessageBox(0, "Jk!", "It only joke LOL", MB_ICONQUESTION | MB_OK | SW_SHOW);
        Sleep(500);
        ShellExecute(0, "open", "https://www.youtube.com/watch?v=dQw4w9WgXcQ", NULL, NULL, SW_HIDE);
        
    } else {
        MessageBox(0, "WHyyyyyyyyyyy!1!1!!!11!!!!", "Skibidi dom dom dom yes yes!!q1!q1q1", MB_ICONERROR);
        OpenNotepadWithText(asciiArt);
        Sleep(1000);
        ShellExecute(0, "open", "https://www.youtube.com/watch?v=dQw4w9WgXcQ", NULL, NULL, SW_SHOW);
        Sleep(2000);
        keybd_event(VK_F11, 0, 0, 0);
        keybd_event(VK_F11, 0, KEYEVENTF_KEYUP, 0);
        ShellExecute(0, "open", "https://fakebsod.com/windows-8-and-10", NULL, NULL, SW_SHOWMAXIMIZED);
    }
    return 0;
}
