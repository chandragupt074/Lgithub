

    for(int i=0;i<=n;i++){
        for(int j=n-1;j<=i;j--){
            int temp;
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    for(int k=0;k<=0;k++){
        cout<<arr[k];
    }