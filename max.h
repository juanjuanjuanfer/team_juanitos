int maximo(int arr[], int length)
{
    int max = 0;
  for (int c = 0; c < length; c++)
    if (arr[c] > arr[max])
      max = c;
  return max;
}

