#include <stdio.h>
int PI = 3.14;
//void print ();			//if a function is not returning anything it will be a void
void getR(double x);
double value;
int
main ()
{
    getR(3);
    printf("%lf", &value);

}
void getR(double x){
    double r;
    printf("Please enter radious: ");
    scanf("%lf", &r);
    value =  r*r*PI;
    
    
}
//sayının basamakları içindeki olasılıkları kontrol ederek 25in katı olup olmadığını tespit edecek
//eğer içindeki herhangi bir kombinasyon 25in katı ise o sayının başlangıç ve bitiş digitlerine göre diğer sayıları çıkarıcak 
//ve çıkardığı her sayı için bir basamak sayacak