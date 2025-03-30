int fibonacciSeries(int n){
    int first=0, second = 1, next;

    for(int i=0; i<n; i++){
        printf("%d ", first);
        next = first + second;
        first = second;
        second = next;
    }
}