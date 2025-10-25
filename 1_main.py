\\202511716132
\\2792131611@qq.com
\\MY_URL
int main() {
    int s;
    scanf ("%d",&s);
    if (s<0 || s>=100){
        printf("成绩错误\n");
}else if (s>=90 && s<=100) {
    printf("A\n");
}else if (s >= 80 && s<=89){
    printf("B\n");
}else if (s >= 70 && s<=79){
}else if (s >= 60 && s<=69){
    printf("D\n");
}else {
    printf("E\n");
}
    return 0;
}
