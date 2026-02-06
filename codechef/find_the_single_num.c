int singleNumber(int nums[], int n) {
    int single;
    int arr[n];
    
    for (int i = 0; i < n; i++){
        arr[i] = 0;
    }
    
    for (int i = 0; i < n; i++) {
        int num = nums[i];
        for (int j = i + 1; j < n; j++){
            if (num == nums[j]){
                arr[i] = 1;
                arr[j] = 1;
            }
        }
    }

    
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0)
            single = nums[i];
    }
    
    return single;
}

//Single number in multiple numbers
//You are given a non-empty array of integers 

/*In this array, every number occurs exactly twice except for one number that occurs only once.
Your task is to find and return that unique number.
The solution must run in O(n) and use O(1).*/
