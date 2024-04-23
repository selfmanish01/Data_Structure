// selection sort

 void selectionSOrt(int arr[], int n){
     for (int i = 0; i < n-1; i++){
         int min = arr[i];
         int j;
         for ( j = i + 1; j < n;j++){
           if(min > arr[j]){
               min = arr[j];
           }
         }
         int temp = arr[i];
         arr[i] = min;
         arr[j] = temp;
     }
 }



// Bubble sort
void BubbleSort(int arr[], int n){
    for (int i = 0; i < n; i ++){
        int first = arr[i];
       for (int j = i+1; j < n; j++){
           if(first>arr[j]){
               int temp = arr[i];
               arr[i] = arr[j];
               arr[j] = temp;
           }

        }
    }
}

// quick sort
void quicKSort(int arr[], int n ){
    for (int i = 1; i < n; i ++){
        int current = arr[i];
        int j;
        for (j = i - 1; j >= 0; j--){
            if(current < arr[j]){
                arr[j + 1] = arr[j];
            }else{
                break;
            }
        }
        arr[j] = current;
    }
}

// merge sort
void MergeFunction(int *arr[], int s, int e){
    int mid = s + (e - s) / 2;
    int *arr1 = new int [mid - s + 1];
    int *arr2 = new int[e - mid];
    int mainIndex = s;
    for (int i = s; i < mid - s + 1; i++){
        arr1[i] = arr[mainIndex++];
    }
    mainIndex = mid + 1;
    for (int i = 0; i < (e - mid); i++){
        arr2[i] = arr[mainIndex++];
    }
    // now merge two sorted array
    int index1 = 0;
    int index2 = 0;
    mainIndex = s;
    while(index1 <mid-s+1 && index2< e-mid){
        if(arr1[index1]<arr2[index2]){
            arr[mainIndex++] = arr1[index1++];
        }else{
            arr[mainIndex++] = arr2[index2++];
        }

    }
    while(index1<mid-s+1){
        arr[mainIndex++] = arr1[index1++];
    }
    while(index2<e-mid){
        arr[mainIndex++] = arr2[index2++];
    }
    delete[] arr1;
    delete[] arr2;
}
void mergeSort(int *arr[], int s, int e){
    if(s>=e){
        return;
    }
    int mid = s + (e - s) / 2;
    mergeSort(arr, s, mid);
    mergeSort(arr, mid + 1, e);
    MergeFunction(arr, s, e);
}


// Quick Sort


    int partition( int arr[], int s , int e){
        int pivot = arr[s];
        int count = 0;
        for (int i = s + 1; i <= e;i++){
            if(arr[i]<= pivot){
                count++;
            }
        }
        //place pivot at right place
        int pivotIndex = s + count;
        swap(arr[pivotIndex], arr[s]);
        //left and right part
        int i = s;
        int j = e;
        while(i<pivotIndex && j>pivotIndex){
            while(arr[i]<=pivot){
                i++;
            }
            while(arr[j]>pivot){
                j--;
            }
            if(i < pivotIndex && j >pivotIndex){
                swap(arr[i++], arr[j--]);
            }
        }
        return pivotIndex;
    }
void QuickSort(int arr[], int s, int e){
     //base case
     if(s>=e){
         return;
     }
     int p = partition(arr, s, e);
     //left part sort
     QuickSort(arr, s, p - 1);
     //right part sort
     QuickSort(arr, p + 1, e);
}