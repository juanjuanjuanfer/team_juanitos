int search(int arr[], int length, int num)
{
  int i = 0;
  int hasthenumberbeenfound = 0;
  for (int i = 0; i < length; i++){
      if(arr[i] == num){
          printf("The value %d has been found in the array, in the position %d!", num, i);
          hasthenumberbeenfound = 1;
          break;
      }
  }
  if (hasthenumberbeenfound == 0){
      printf("Sorry, the value %d has not been found in the array", num, i);
  }
  return 0;
}