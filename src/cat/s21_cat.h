#include <getopt.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct options {
  int b;  // нумерует только непустые строки
  int e;  // также отображает символы конца строки как $
  int n;  // нумерует все выходные строки
  int s;  // сжимает несколько смежных пустых строк
  int t;  // также отображает табы как ^I
  int v;
} opt;

void parser(int argc, char **argv, opt *options);
void reader(char **argv, opt *options);
