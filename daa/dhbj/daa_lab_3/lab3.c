#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#define maxsize 30
float arr[30][3];

// Partition function for QuickSort
int partition(int low, int high) {
  float pivot = arr[high][0];
  int i = low - 1;

  for (int j = low; j < high; j++) {
    if (arr[j][0] < pivot) {
      i++;
      float temp0 = arr[i][0], temp1 = arr[i][1], temp2 = arr[i][2];
      arr[i][0] = arr[j][0];
      arr[i][1] = arr[j][1];
      arr[i][2] = arr[j][2];
      arr[j][0] = temp0;
      arr[j][1] = temp1;
      arr[j][2] = temp2;
    }
  }

  float temp0 = arr[i + 1][0], temp1 = arr[i + 1][1], temp2 = arr[i + 1][2];
  arr[i + 1][0] = arr[high][0];
  arr[i + 1][1] = arr[high][1];
  arr[i + 1][2] = arr[high][2];
  arr[high][0] = temp0;
  arr[high][1] = temp1;
  arr[high][2] = temp2;

  return i + 1;
}

// QuickSort algorithm
void quickSort(int low, int high) {
  if (low < high) {
    int pi = partition(low, high);
    quickSort(low, pi - 1);
    quickSort(pi + 1, high);
  }
}

// Function to find the maximum of two integers
int max(int x,int y)
{
  if(x > y) return x;
  return y;
}

// Function to find the minimum of two floats
float min(float x,float y)
{
  if(x < y) return x;
  return y;
}

// Function to print the intervals
void print(int n)
{
  for(int i=0; i < n; i++)
  {
    printf("%f %f\n", arr[i][0], arr[i][1]);
  }
}

int main()
{
  int n;
  time_t t;
  srand((unsigned) time(&t));
  printf("Enter the no. of intervals:\n");
  scanf("%d", &n);

  // Generating random intervals
  for(int i = 0; i < n; i++) {
    float x = (rand() % 10) / 11.23;
    float y = (rand() % 10) / 11.23;
    if(x > y) {
      arr[i][0] = y;
      arr[i][1] = x;
    }
    else {
      arr[i][0] = x;
      arr[i][1] = y;
    }
    arr[i][2] = i; // Assigning an index to the interval for identification
  }

  // Sorting the intervals using QuickSort
  quickSort(0, n - 1);

  // Printing the sorted intervals
  print(n);

  float store[n][3];
  float s = arr[0][0], e = arr[0][1];
  int k = 0, c = 1, maxi = 0;
  printf("%d\n", n);

  // Merging overlapping intervals and finding the maximum overlapping segment
  for(int i = 1; i < n; i++) {
    printf("%f %f\n", s, e);
    if(arr[i][0] < e) {
      s = arr[i][0];
      e = min(e, arr[i][1]);
      c++;
    }
    else {
      maxi = max(maxi, c);
      store[k][0] = s;
      store[k][1] = e;
      store[k][2] = i - 1;
      s = arr[i][0];
      e = arr[i][1];
      c = 1;
      k++;
    }
  }

  maxi = max(maxi, c);
  store[k][0] = s;
  store[k][1] = e;
  store[k][2] = n - 1;
  printf("The maximum overlapping Interval: %d", maxi);
  printf("\n");

  // Printing the maximum overlapping segment or intervals
  if(store[0][2] + 1 == maxi) {
    for(int i = 0; i < maxi; i++)
      printf("%f:- %f %f\n", arr[i][2], arr[i][0], arr[i][1]);
  }
  else {
    for(int i = 1; i <= k; i++) {
      if(store[i][2] - store[i - 1][2] == maxi) {
        for(int j = store[i - 1][2] + 1; j <= store[i][2]; j++)
          printf("%d:- %f %f\n", (int)arr[j][2], arr[j][0], arr[j][1]);
        break;
      }
    }
  }

  return 0;
}
