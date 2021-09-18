#include <iostream>
#include <stdio.h>

using namespace std;

int main(void)
{
            char name1[11], name2[11], name3[11];  // Input names
            char sa1, sa2, sa3;
            float cxz1, cxz2, cxz3;
            int sd1, sd2, sd3;
            printf("1. Введите процессор, частоту, RAM, тип >");
            scanf("%s %s %f %d", name1, &sa1, &cxz1, &sd1);
            printf("2. Введите процессор, частоту, RAM, тип >");
            scanf("%s %s %f %d", name2, &sa2, &cxz2, &sd2);            
            printf("3. Введите процессор, частоту, RAM, тип >");
            scanf("%s %s %f %d", name3, &sa3, &cxz3, &sd3);

            printf("\n");
            printf("|----------------------------------------------|\n");
            printf("|             Характеристики ПЭВМ              |\n");
            printf("|----------------------------------------------|\n");
            printf("| Процессор  | Частота(Mgz)  | RAM(Mb)  | Тип  |\n");
            printf("|------------|---------------|-----------|-----|\n");
            printf("| %11s | %d | %-5.11f | %3d |\n", name1, sa1, cxz1, sd1);
            printf("| %11s | %d | %-5.11f | %3d |\n", name2, sa2, cxz2, sd2);
            printf("| %11s | %d | %-5.11f | %3d |\n", name3, sa3, cxz3, sd3);
            printf("|----------------------------------------------|\n");
            printf("| Тип: C - CISC-процессор, R - RISC-процессор  |\n");
            printf("|----------------------------------------------|\n");
            return 0;
}
