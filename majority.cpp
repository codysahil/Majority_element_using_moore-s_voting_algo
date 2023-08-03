int majorityElement(int a[], int size)
    {
        
        // your code here
        if(size==1){
            return a[0];
        }
        int cnt = 0; 
        int ele;
        
        for(int i = 0; i<size; i++){
            if(cnt==0){
                cnt = 1;
                ele = a[i];
            }
            else if(a[i]==ele){
                cnt++;
            }
            else {
                cnt--;
            }
        }
        
        int cnt1 = 0;
        
        for(int i = 0; i<size; i++){
            if(a[i]==ele){
                cnt1++;
            }
        }
        if(cnt1>size/2){
            return ele;
        }
        else{
            return -1;
        }
        
    }
