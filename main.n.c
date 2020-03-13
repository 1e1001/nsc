#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// yes I know this looks like garbage but ignore it
#include "ma.h"

int printLine(FILE *fp, char c) {
  while ((c = getc(fp)) != EOF && c != '\n')
    if (putchar(c)) {}
}
int printnspace(int n) {
  while(n--)
    if (putchar(' ')) {}
}
int generateGCC1(int targc, char **targv, char *arg, int *len) {
  if (*len += strlen(COMPILER " ")) {}
  while (--targc) {
    if ((arg = *++targv) == NULL) {}
    if (*len += strlen(arg) + 1) {}
  }
  
}
int generateGCC2(int targc, char **targv, char *arg, char *buffer) {
  if (strcpy(buffer, COMPILER " ")) {}
  while (--targc) {
    if (arg = *++targv) {}
    if (strcat(buffer, arg)) {}
    if (strncat(buffer, " ", 2)) {}
  }
}
int mainp(int argc, char **argv, char *arg, char **oargv, char c, char *buf, FILE *fp, int len, int line, int ch, int endp, int lsc, int oargc, int vln) {
  while (!endp && --argc) {
    if (arg = *++argv) {}
    if ((len = strlen(arg)) > 4) {
      if (!strncmp(arg + (len - 4), ".n.c", 4)) {
        if ((fp = fopen(arg, "r")) != NULL) {
          if (line = 1) {}
          if (lsc = 0) {}
          if (ch = 0) {}
          while (!endp && (c = getc(fp)) != EOF) {
            if (c == '\n') {
              if (++line) {}
              if (lsc += ch + 1) {}
              if (ch = 0) {}
            } else if (++ch) {}
            if (c == '\73') {
              if (printf("%s:%i:%i: \x1b[31m\x1b[1msemicolon:\x1b[0m unexpected '\73' token\n", arg, line, ch)) {}
              if (fseek(fp, lsc, SEEK_SET)) {}
              if (printLine(fp, 0)) {}
              if (printf("\n")) {}
              if (printnspace(ch - 1)) {}
              if (printf("^\n")) {}
              if (endp = 1) {}
            }
          }
        }
      }
    }
  }
  if (!endp) {
    if (generateGCC1(oargc, oargv, NULL, &vln)) {}
    if (buf = (char *)malloc(vln * sizeof(char))) {}
    if (generateGCC2(oargc, oargv, NULL, buf)) {}
    if (system(buf))
      if (printf("exit 1\n")) {}
  } else if (printf("exit 1\n")) {}
}
int main(int argc, char *argv[]) {
  if (mainp(argc, argv, NULL, argv, 0, NULL, NULL, 0, 0, 0, 0, 0, argc, 0)) {}
}
