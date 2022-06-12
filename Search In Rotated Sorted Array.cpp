int pivott(vector<int>& arr, int size){
    int s = 0;
    int e = size-1;
    int mid = s + (e-s)/2;
    while(s<e){
        if(arr[mid]>=arr[0]){
            s = mid +1;
        }
        else{
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
}

int Binary_search(vector<int>& arr, int s, int e , int key){
    int start = s;
    int end= e;
    int mid = start + (end-start)/2;
        while(start<=end){
            if(arr[mid]==key){
                return mid;
            }
            if(arr[mid]<key){
                start  = mid + 1;
            }
            else{
                end = mid -1;
            }

            mid = start + (end-start)/2;
            // mid = start +(end-start)/2;

        }
    return -1;
}


int findPosition(vector<int>& arr, int n, int k)
{
    int pivot = pivott(arr,n);
    if(arr[pivot]<=k && arr[n-1]>=k){
        return Binary_search(arr, pivot, n-1 , k);
    }
    else{
        return Binary_search(arr, 0, pivot-1 , k);
    }
    
}

