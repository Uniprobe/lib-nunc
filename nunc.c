#include <stdio.h>
#include <stdlib.h>
#include <uk/config.h>

#include "nunc.h"

int main()
{
#ifdef CONFIG_LIBNUNC_MAIN_EXAMPLE
  // short nunc example
  float data[1000] = {5.77, 5.49, 5, 6.5, 5.63, 10.55, 6.4, 10.96, 12.67, -1.54, 12.78, 4.43, -1.12, 4.61, 3.53, 20.54, 10.37, 15.47, 12.87, 4.67, 11.8, 7.19, 2.57, 14.07, 12.05, 2.43, 3.44, 3.16, 4.43, 21.94, 3.56, 4.32, 4.5, 6.21, 4.82, 9.83, 0.44, 6.39, 6.38, 5.14, 9.39, 20.27, 21.05, 8.69, 4.74, 14.03, 6.46, 4.93, 15.23, -3.39, -7.1, 7.98, 8.56, 10.66, 2.89, 10.25, 10.7, 1.35, 8.53, 19.73, 2.54, 5.57, 6.58, 9.77, 5.74, 8.65, -0.25, 14.64, -0.88, 8.99, 9.99, 6.18, 9.05, -3.89, 2.04, 8.89, 13.09, 10.13, 3.07, 2.04, 0.25, 8.8, -3.12, 6.8, 4.3, 3.44, 2.49, 1.53, 12.45, 14.45, 6.07, 10.22, 7.8, 10.51, 9.47, 6.62, -3.28, 8.46, -4.42, 0.49, 10.02, 2.83, 9.98, 7.38, 8.15, 0.8, 15.65, 5.06, 3.5, 11.48, 9.37, 17.79, 5.22, 12.25, 4.99, 5.41, 1.07, -3.66, 6.86, 2.26, 6.3, 5.84, 6.26, -2.2, 11.9, -6.69, 2.58, 9.86, 7.87, -1.83, 15.12, -0.54, 2.06, 8.7, -3.21, 3.07, 3.6, 10.94, 13.39, 8.47, 5.81, 10.87, 9.04, 7.88, 10.39, 8.67, 5.32, 8.5, 1.53, -3.97, 0.43, 8.46, -0.21, -0.39, 6.93, 1.01, 9.3, 0.1, 7.67, 5.34, -0.81, 1.15, -2.07, -1.63, 6.27, 17.24, 5.51, 7.44, 2.64, 1.86, 6.26, -6.16, 6.46, 4.02, 4.74, 8.41, 8.78, 8.38, 9.02, 11.45, 10.6, 11.91, 4.33, 12.12, -2.49, 4.76, 0.13, 7.65, 5.26, 1.75, 0.07, 0.82, 8.57, 11.13, 11.2, 8.46, -2.04, -0.64, 17.76, 15.49, 10.71, -0.87, -1.59, 14.67, 11.28, 3.45, 11, 4.9, 5.89, 3.36, 11.44, 12.85, 5.07, 3.4, 5.59, 7.87, 2.2, 4.98, 7.67, 2.02, 13.24, -2.78, 10.93, 9.05, 5.12, 4.67, 10.03, 2.96, 8.54, 3.92, 4.1, 3.59, 18.02, -3.45, 12.75, 18.38, -3.58, 5.72, 13.74, 3.3, 8.14, 18.6, 6.46, 7.65, 1.56, 0.38, -3.7, 7.26, 13.92, 7.56, -2.77, 3.08, 11.84, 0.15, -1.29, 8.22, 3.07, 4.14, 0.95, 6.22, 1.38, 6.8, 8.72, 0.95, -7.28, 12.78, 2.6, 3.84, 5.83, 11.38, 2.8, 4.43, 1.25, 11.28, 10, 8.65, 7.02, 0.81, 10.59, 6.03, 7.83, 3.83, 6.1, 3.77, 2.58, 6.24, 7.19, 13.98, -1.65, 7.68, 3.41, 10.73, 11.21, 5.24, 16.09, 12.82, 11.08, 0.16, 12.19, 8.86, 11.94, 4.07, 9.76, 10.43, 12.01, 8.86, 6.48, 5.37, 6.52, 5.42, 4.53, 2.14, 2.21, 10.43, 10.17, 6.08, 6.27, 13.78, 3.4, 2.49, -1.77, 2.95, 15.62, 11.53, 7.21, 8.94, 4.77, 0.88, 13.44, 3.29, -4.56, 5.61, 5.13, 4.49, 10.48, 2.87, 11.42, 9.77, 0.18, 10.77, 4.93, 0.57, 1.88, 3.72, 5.83, 6.41, 3.62, 4.34, 7.81, -4.45, 7.38, 11.25, 8.62, 7.76, 5.78, 5.35, 6.56, 0.77, 6.82, 3.06, 10.68, 19.51, 2.24, 4.94, -8.98, 0.9, 9.05, 1.89, -2.33, 6.17, 2.56, 8.26, 17.55, 2.82, -3.35, 9.72, 3.77, 3.64, 4.09, 6.3, 9.48, 5.85, 2.09, -1.28, 11.03, 7.54, 13.44, 7.42, 3.3, 4.23, 13.42, -8.6, 6.69, 12.88, 15.25, 6.91, 2.64, 0.26, 3.86, 12.49, 9.58, 7.23, 10.86, -2.1, 0.56, -2.55, 2.23, -1.64, 4.02, 4.22, 15.06, 5.8, 13.1, 3.61, 5.08, 4.55, 7.88, 8.88, 0.95, 11.98, 6.65, 2.4, -4.03, 14.43, 14.25, 12.76, 4.86, 4.98, -3.15, 3.36, 9.02, -0.86, 6.82, -0.72, -0.64, 9.88, 16.74, 5.65, 3.97, 13.18, -0.38, 4.6, 9.88, 1.77, 4.72, 7.2, 3.84, 5.11, 6.45, 3.96, 12.49, 9.79, 2.7, 16.3, -0.48, 2.62, 8.61, -5.21, 8.83, 13.02, 10.56, 5.2, 1.81, 5.2, 11.43, -0.54, 6.41, 6.53, 8.46, 5.42, 1.73, 2.6, 13.76, -0.27, 10.64, -6.26, 9.3, 6.65, 10.63, 2.2, 11.9, 1.38, 11.72, 5.31, 7.11, 7.87, 7.67, 6.33, 7.88, 7.98, -1.01, 8.13, 2.78, 1.91, 8.07, 4.67, 7.84, 6.68, 8.29, 2.51, 117.71, 14.24, 78.16, 118.29, 117.55, 55.11, 67.09, 158.6, 137.08, 150.21, 46.56, 102.55, 94.03, 93.36, 190.5, 14.19, 13.76, 28.15, 122.64, 124.35, 150.52, 25.38, 41.33, 104.4, 109.63, 228.25, 136.36, -73.72, 31.65, 40.36, 9.55, -11.93, 22.32, 87.03, 71.1, 39.5, -39.36, 65.27, 127.05, 79.43, -69.19, 85.6, 148.73, 114.64, 144.15, 87.12, 69.47, 174.89, 187.21, 92.51, 90.47, 41.66, 140.1, 94.31, 216.37, 76.33, 26.16, 126.38, 226.35, 125.02, -0.25, 45.02, 71.96, 60.44, 248.92, 205.71, 146.81, 76.3, 123.41, 168.38, 242.73, 168.56, 108.63, 102.18, 79.5, 218.84, -34.39, 61.21, 66.77, 151.29, 249.22, 233.22, 41.58, 141.71, 53.08, 111.69, 67.75, 111.48, 194.7, 207.51, -86.64, 73.1, -0.49, 32.71, 4.25, 104.36, 138.2, 85.95, 166.06, 88.53, 111.8, 151.01, 13.63, 59.9, 96.4, 102.12, 122.75, 22.67, 223.14, 180.15, 12.97, 108.23, 9.35, -3.93, 98.3, 103.24, 83.2, -10.53, 84.79, 103.15, 156.81, 67.8, 159.53, 81.53, 148.79, 236.16, 102.78, -17.18, -47.92, 56.33, 130.16, 145.53, -30.93, 15.38, 106.51, -78, -31, 103.18, 141.45, 75.85, 177.32, 19.85, 181.98, 168.38, 254.45, 109.15, 89.12, 108.48, 161.41, -1.03, 42.2, 105.98, 35.25, 270.39, 25.81, 37.44, 109.75, 236.69, 190.95, 109.61, 150.87, 9.52, 84.04, 86.8, 44.18, 119.76, 113.32, 74.09, 160.76, 136.65, 93.97, 136.19, 176.03, 139.67, 220.52, 85.29, 309.81, -47.35, 135.73, 132.16, -28.96, 186.68, 103.25, -92.48, 171.94, 142.04, 46.2, 90.75, 237.1, 10.62, 234.6, 159.97, 90.9, 133.89, 84.05, 122.29, 229.41, 123.18, -39.74, 164.11, 131.77, 110.83, 53.97, 135.36, 51.05, 20.93, 15.59, 102.27, 198.1, 170.14, 68.71, 52.08, 130.5, 157.04, 162.91, 120, 1.24, 114.35, 21.19, 15.66, 14.24, 140.03, 30.67, 15.58, 38.95, 211.09, 138.81, 89.37, 142.24, 26.17, 73.6, 98.83, 35.46, 181.35, 139.74, -4.78, 78.36, 133.26, -16.66, 35.25, 46.25, 140.36, 32.35, 83.25, 129.2, 62.66, 118.38, 12.54, 67.95, 17.99, 104.15, 2.82, 124.26, 59.98, 130.57, 252.85, 20.77, 118.82, 157.56, 42.42, 100.01, 54.1, -20.43, -10.65, 93.64, 96.06, 105, 135.63, 26.4, 53.82, 90.79, 118.72, 23.02, 128.16, 46.19, -33.82, 90.39, 129.29, 65.63, 176.59, 186.64, 121.92, 133.72, -26.8, 73.45, 157.97, 200.84, 195.24, 102.14, 153.22, 150.11, 128.75, 116.7, 51.48, 182.46, 146.65, 154.3, 118.01, 55.34, 115.76, 75.29, 210.33, 167.65, 130.8, 83.21, 103.95, 181.23, 61.39, 215.19, -76.23, -23.62, 19.01, 31.63, 168.55, 87.9, 108.81, 185.95, 74.97, 137.16, 143.1, 163.57, 149.01, 52.7, 96.18, 56.94, 188.24, 68.54, 58.68, 1.1, 158.18, 188.29, 63.96, 177.54, 113, 64.64, 55.87, 267.45, 53.19, -73.23, 37.34, 152.66, 90.15, 22.37, -7.32, 82.66, 45.73, 264.87, 239.32, 325.82, 131.43, 81.87, 249.95, 142.15, 102.07, 97.33, 110.43, 93.93, 34.6, -51.88, -61.27, 182.3, 0.09, -21.38, 264.65, 201.47, 41.43, 67.38, 145.09, 40.35, 74.12, 195.22, 11.52, 94.94, 5.05, 108.73, 65.67, 155.3, 98.52, 96.06, 15.37, 37.42, 182.67, 122.95, 149.28, 71.55, 107.83, 29.91, 61.71, 202.59, 164.37, 127.95, 286.06, 17.3, 3.17, 189.78, 109.09, 111.73, 138.57, 119.85, 161.03, 204.2, 27.09, 184.33, 62.85, 133.46, 126.21, 137.21, 116.1, 86.08, 67.13, 185.51, 62.44, 96.35, 76.68, 95.23, 177.42, 41.65, 65.11, 52.64, 169.59, 74.4, 0.85, 157.22, 92.96, -21.94, 23.28, 46.58, 95.01, 142.51, 153.31, 162.58, 123.17, 21.46, -3.09, 156, 226.93, 61.06, 13.48, 40, 203.64, 191.9, -63.79, 146.9, 158.87, 163.82, 124.1, 92.4, 119.7, 35.96, 113.22, 58.83, 79.37, 193.72, 57.74, 167.62, 144.68, 11, 186.03, 21.95, 23.42, 231.81, 93.39, -38.8, 117.38, 212.78, 237.31, 167.02, 1.69, 35.15, 126.55, 58.58, 242, 12.32, 56.19, 27.03, -19.52, 165.65, 140.45, 132.64, 12.39, 98.9, 104.07, 142.21, 122.37, -111.24, -24.96, 6.63, 77.37, 126.95, 59.53, 85.21, 50.88, 149.75, 73.34, 58.07, -26.61, 105.53, 168.71, 88.76, 38.13};
  int windowSize = 150;
  int quantileCount = 3;
  nunc nuncProcessor;
  if (nuncInit(&nuncProcessor, windowSize, quantileCount))
  {
    printf("nunc could not be initialized with the given values\n");
    return 1;
  }
  float threshold = nuncThreshold(&nuncProcessor, 0.3, 200);
  printf("feeding data...\n");
  cost *maxCost = (cost *)malloc(sizeof(cost));
  for (int i = 0; i < 1000; i++)
  {
    nuncPush(&nuncProcessor, data[i], maxCost);
    if (maxCost->value > threshold)
    {
      printf("changepoint at index: %d (cost: %f)\n", maxCost->index, maxCost->value);
    }
  }
  free(maxCost);
  nuncFree(&nuncProcessor);
  printf("...done\n");
#endif
  return 0;
}
