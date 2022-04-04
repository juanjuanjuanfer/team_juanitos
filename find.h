int search(int arr[], int length, int num)
{
  int i = 0;
  int back = 0;
  for (int i = 0; i < length; i++){
      if(arr[i] == num){
          back = i;
          break;
      }
  }
  return back;
}