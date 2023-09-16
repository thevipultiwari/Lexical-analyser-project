#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    FILE *input, *output;
    int l = 1;
    int t = 0;
    int i, flag;
    char ch, str[20];

    // List of C keywords
    char keywords[6][10] = {"int", "main", "if", "else", "do", "while"};

    input = fopen("input.txt", "r");
    output = fopen("output.txt", "w");

    if (input == NULL || output == NULL) {
        printf("File open error.\n");
        return 1;
    }

    fprintf(output, "Line no.\tToken no.\tToken\tLexeme\n\n");

    while ((ch = fgetc(input)) != EOF) {
        i = 0;
        flag = 0;

        if (ch == '+' || ch == '-' || ch == '*' || ch == '/') {
            fprintf(output, "%7d\t%7d\tOperator\t%c\n", l, t, ch);
            t++;
        } else if (ch == ';' || ch == '{' || ch == '}' || ch == '(' || ch == ')' || ch == '?' ||
                   ch == '@' || ch == '!' || ch == '%') {
            fprintf(output, "%7d\t%7d\tSpecial symbol\t%c\n", l, t, ch);
            t++;
        } else if (isdigit(ch)) {
            fprintf(output, "%7d\t%7d\tDigit\t%c\n", l, t, ch);
            t++;
        } else if (isalpha(ch)) {
            str[i] = ch;
            i++;
            while (isalnum(ch = fgetc(input)) && ch != ' ' && i < 19) {
                str[i] = ch;
                i++;
            }
            str[i] = '\0';
            
            for (int j = 0; j < 6; j++) {
                if (strcmp(str, keywords[j]) == 0) {
                    flag = 1;
                    break;
                }
            }

            if (flag == 1) {
                fprintf(output, "%7d\t%7d\tKeyword\t%s\n", l, t, str);
                t++;
            } else {
                fprintf(output, "%7d\t%7d\tIdentifier\t%s\n", l, t, str);
                t++;
            }
        } else if (ch == '\n') {
            l++;
        }
    }

    fclose(input);
    fclose(output);
    
    printf("Lexical analysis completed. Results written to output.txt.\n");

    return 0;
}
