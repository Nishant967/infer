/*
 * Copyright (c) 2013 - Facebook.
 * All rights reserved.
 */

#include<stdio.h>

struct { int a; int b; } *x;

union {
  int e; 
  int f; 
  
  struct { int w; int u;} g;
  
  int h;  
} y;


int main() {
  int l;
  
  x->a=1;
  y.f =7;
  y.g.u=y.f;
  
  y.g.w = x->b;
  return 0;
}