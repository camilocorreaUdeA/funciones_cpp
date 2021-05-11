void bubbleSort(int arr[], int n){
    int var_aux = 0;
    bool cambios = 0;
    do{
        cambios = 0;
        for(int i=0; i<n-1; ++i){
            if(arr[i] > arr[i+1]){
                var_aux = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = var_aux;
                cambios = 1;
            }
        }

    }while(cambios);
}