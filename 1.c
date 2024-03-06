#include <stdio.h>
#include <stdlib.h>

#define Ymap 20
#define Xmap 50

char map[Ymap][Xmap];

struct SOb1;

void initMap();
void initSOb1();
void putSOb1();
void showMap();

int main() {
  initMap();
  initSOb1();
  putSOb1();
  showMap();
}

struct SOb1 {
  int y, x, wy, wx;
} si;

void initSOb1() {
  si.y = 2;
  si.x = 2;
  si.wy = 2;
  si.wx = 2;
}

void initMap() {
  for (int i = 0; i < Ymap; i++) {
    for (int ii = 0; ii < Xmap; ii++) {
      map[i][ii] = '0';
    }
  }
}

void showMap() {
  for (int i = 0; i < Ymap; i++) {
    for (int ii = 0; ii < Xmap; ii++) {
      printf("%c", map[i][ii]);
      if (ii == Xmap - 1) printf("\n");
    }
  }
}

void putSOb1() {
  for (int i = si.y; i < si.y + si.wy; i++) {
    for (int ii = si.x; ii < si.x + si.wx + 1; ii++) {
      map[i][ii] = '1';
    }
  }
}