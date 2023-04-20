int a[10][10];
int *b[10]; 

// initialize a
for (int i = 0; i < 10; i++) {
  for (int j = 0; j < 10; j++) {
    a[i][j] = i * j;
  }
}

// allocate memory for each row and store the pointers in b
for (int i = 0; i < 10; i++) {
  b[i] = (int*) malloc(10 * sizeof(int));
  for (int j = 0; j < 10; j++) {
    b[i][j] = i * j;
  }
}

// access a and b in a similar way
int x = a[5][5];
int y = b[5][5];

