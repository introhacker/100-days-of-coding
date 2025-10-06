# include <stdio.h>
void updateValue(int y){
    y = y+10;
}
int main(){
    int x=50;

    printf("Before function call: %d\n",x);
updateValue(&x);
printf("After function call: %d\n",x);

return 0;
}