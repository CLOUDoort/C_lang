void main() {
    int a;
    int max, min;
    for(int i = 0;; i++) {
        scanf("%d", &a);
        if(!a) {
            break;
        }
        if(!i) {
            max = a;
            min = a;
        } else {
            if(max < a) {
                max = a;
            } 
            if(min > a) {
                min = a;
            }
        }
    }
    printf("%d %d", max, min);
}