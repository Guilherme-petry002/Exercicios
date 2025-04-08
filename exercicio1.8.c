void main(){
    int a = 5;
    int b = 9;
    printf("a = %d, b = %d\n", a, b);
    a = a + b;
    b = a - b;
    a = a -b;
    printf("a = %d, b = %d\n", a, b);
}