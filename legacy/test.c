#include <stdio.h>

// ANSI ���� �ڵ� ����
#define RESET       "\x1b[0m"
#define RED         "\x1b[41m"
#define YELLOW      "\x1b[43m"
#define BLUE        "\x1b[44m"
#define GREEN_TEXT  "\x1b[32m"
#define MAGENTA_BG  "\x1b[45m"

int main() {
    // �ؽ�Ʈ ��� (���� �� 2ĭ ��)
    printf("\n\n     " MAGENTA_BG GREEN_TEXT "���� �� ������ �����ֳ�?" RESET "\n");

    // ��ü ���
    printf(YELLOW "       _________        \n");
    printf("      /         \\       \n");
    printf("     /           \\      \n");
    printf(RED "    /             \\     \n");
    printf("   /               \\    \n");
    printf("  /       " YELLOW "[��]" RED "       \\   \n");
    printf(" /_________________\\  \n");
    printf(YELLOW "|   [��]     [��]    | \n");
    printf("|        ___        | \n");
    printf("|_______|___|_______| \n" RESET);

    // ��� ��� ���� ����
    return 0;
}
