
int fat( int n ){
    int acumulator;
    for(acumulator = 1, n ; n > 1; n--){
        acumulator *= n ;
    }
    return acumulator;
}

int areaSquare( int l){
    return l*l;
}