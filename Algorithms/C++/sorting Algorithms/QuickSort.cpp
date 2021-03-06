    /* **
            Quick Sort is a Divide and Conquer algorithm.
            It picks an element as pivot and partitions the given array around the picked pivot
            We can pick pivot element from array in different ways
            
            1. Always pick first element as pivot.
            2. Always pick last element as pivot (implemented below)
            3. Pick a random element as pivot.
            4. Pick median as pivot.

            Time Complexity : Theta (n^2) for worst case
                                    (nLogn) for best and average case
            
            Note : Although the worst case time complexity of QuickSort is O(n^2) 
            which is more than many other sorting algorithms like Merge Sort and Heap Sort, 
            QuickSort is faster in practice.

        */
            // C++ for Qucik Sort



        /* This function takes last element as pivot, 
           places the pivot element at its correct 
           position in sorted array, and places all 
           smaller (smaller than pivot) to left of 
           pivot and all greater elements to right 
           of pivot */
        int partition(int arr[], int low, int high) 
        { 
            int pivot = arr[high];  
            int i = (low-1); // index of smaller element 
            for (int j=low; j<high; j++) 
            { 
                // If current element is smaller than or 
                // equal to pivot 
                if (arr[j] <= pivot) 
                { 
                    i++; 
      
                    // swap arr[i] and arr[j] 
                    int temp = arr[i]; 
                    arr[i] = arr[j]; 
                    arr[j] = temp; 
                } 
            } 
      
            // swap arr[i+1] and arr[high] (or pivot) 
            int temp = arr[i+1]; 
            arr[i+1] = arr[high]; 
            arr[high] = temp; 
      
            return i+1; 
        } 
      
      
        /* The main function that implements QuickSort() 
          arr[] --> Array to be sorted, 
          low  --> Starting index, 
          high  --> Ending index */
        void qucikSort(int arr[], int low, int high) 
        { 
            if (low < high) 
            { 
                /* pi is partitioning index, arr[pi] is  
                  now at right place */
                int pi = partition(arr, low, high); 
      
                // Recursively sort elements before 
                // partition and after partition 
                sort(arr, low, pi-1); 
                sort(arr, pi+1, high); 
            } 
        } 

      /* 
            Implementation : unsorted Array : arr[n]
                             int main(){
                            //call the sort function
                                quickSort(arr, 0, n-1);
                                return 0; 
                            }
                              Example Output : 
                                  Given Array
                                    10 7 8 9 1 5 
                                  Sorted array
                                    1 5 7 8 9 10 
                                               
        */