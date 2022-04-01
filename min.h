int mini(int arr[], int length)
{
  int min = 0;
  for (int c = 1; c < length; c++)
    if (arr[c] < arr[min])
      min = c;
  return min;
}