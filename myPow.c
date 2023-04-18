double myPow(double x, int n){
    int negative=0;
    if(n==0){
        return 1;
    }
    if(n<0){
        n=-1*n;
        negative=1;
    }
    double y=x;
    for(int i=0; i<n-1; i++){
        x=x*y;
    }
    if(negative==1){
        x=1/x;
    }
    return x;
}