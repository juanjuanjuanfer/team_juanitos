int maximo(int arr[], int length){
    int max=0;
    for(int i=0; i<length; i++){
        if(arr[i]>arr[i+1]){
            max=i;
    }
       
}
return max;
}


