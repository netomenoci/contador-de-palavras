#include <stdio.h>

int main() {
    char c;
    char a = 0;
    char before;
    int counter = 0;
    char aux;
    do{
        scanf("%c", &c);
        if( (c>='0' && c<='9')  || (c >= 'a' && c <= 'z') || (c>='A' && c<='Z') ){
            counter++;

            while(c != ' ' && c != '.' && c != ',' && c != '-' && c != '\n' ){
                scanf("%c", &c);
            }
            if(c == '.' || c == ','){
                scanf("%c", &c);
                if((c>='0' && c<='9')){
                    counter--;
                    ungetc(c, stdin);
                }
            }
        }
    }while(c != '\n');

    printf("%d\n", counter);
    return 0;
}
