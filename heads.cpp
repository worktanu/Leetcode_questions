 int setSetBit(int x, int y, int l, int r){
        // code here
        int cnt=0;
        for(int i=l-1;i<r;i++){
            if((y&(1<<i))!=0) {
                x=(x|(1<<i));
            }
        }
        return x;
    }
