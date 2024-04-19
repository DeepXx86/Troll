#include <windows.h>
#include <shellapi.h>

int main()
{
    int result = MessageBox(0, "Wanna see my skill?", "Something", MB_ICONEXCLAMATION | MB_OKCANCEL);
    if (result == IDOK){
        ShellExecute(0, "open", "https://www.youtube.com/watch?v=dQw4w9WgXcQ&ab_channel=RickAstley", NULL, NULL, SW_NORMAL);
    };
    if (result == IDCANCEL){
        ShellExecute(0, "open", "https://www.youtube.com/watch?v=dQw4w9WgXcQ&ab_channel=RickAstley", NULL, NULL, SW_NORMAL);
    };
    if (result == IDCLOSE){
        ShellExecute(0, "open", "https://www.youtube.com/watch?v=dQw4w9WgXcQ&ab_channel=RickAstley", NULL, NULL, SW_NORMAL);
        return 1;    
    }
}
