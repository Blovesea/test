#include <stdio.h>
#include <iostream>
/*
1.    Jack  love Rose
-->   Rose love Jack

2.    123 45 678
-->   678 45 123
*/
int main()
{
    using std::cout;
    using std::endl;
    char szRec[256] = {0};

    cout << "请输入一句话:" << endl;
    //gets_s(szRec, sizeof(szRec));
    gets(szRec);

    int i = 0;
    while(szRec[i])
    {
        while(szRec[i] == ' ') i++;

        int j = i;
        while(szRec[j] && szRec[j] != ' ') j++;

        for(int m = i, n = j - 1; m < n; m++, n--)
        {
            char cTemp = szRec[m];
            szRec[m] = szRec[n];
            szRec[n] = cTemp;
        }

        i = j;
    }

    for(int m = 0, n = i -1; m < n; m++, n--)
    {
        char cTemp = szRec[m];
        szRec[m] = szRec[n];
        szRec[n] = cTemp;
    }

    cout << szRec << endl;
    getchar();
    return 0;
}
