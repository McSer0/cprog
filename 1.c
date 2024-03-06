#include <stdio.h>
#include <stdlib.h>

char map[5][5];

void initMap();
void showMap();

int main() {
  initMap();
  showMap();
  // printf("%c", map[2][2]);
}

void initMap() {
  for (int i = 0; i < 5; i++) {
    for (int ii = 0; ii < 5; ii++) {
      map[i][ii] = '0';
    }
  }
}

void showMap() {
  for (int i = 0; i < 5; i++) {
    for (int ii = 0; ii < 5; ii++) {
      printf("%c", map[i][ii]);
      if (ii == 4) printf("\n");
    }
  }
}