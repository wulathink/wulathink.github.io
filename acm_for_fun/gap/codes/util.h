#ifndef UTIL_H
#define UTIL_H

#include<iostream>

void print_line(ushort* line, int len);

void exchange(ushort* line, int* gap, int to);

int find_pos(ushort* line, int len, ushort key);
#endif