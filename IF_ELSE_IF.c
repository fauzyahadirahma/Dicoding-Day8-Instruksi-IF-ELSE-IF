/* File         : IF_ELSE_IF */
/* Penulis      : Fauzyah Hadirahma, email faubelajar@gmail.com */
/* Deskripsi    : contoh pemakaian IF tiga kasus 
                  Membaca sebuah nilai dan menuliskan
                  'Nilai a positif , nilai a', jika a >0 
                  'Nilai Nol , nilai a', jika a = 0  
                  'Nilai a negatif , nilai a', jika a <0  */

#include <stdio.h>
int main ()
{
    /* KAMUS */
    int a;
    
    /* PROGRAM */
    printf ("Contoh IF tiga kasus \n");
    printf ("Ketikkan suatu nilai integer : ");
    scanf ("%d", &a);
    
    if (a > 0)
        {
            printf ("NIali a positif %d \n", a);
        }
    else if (a == 0)
        {
            printf ("Niali Nol %d \n", a);
        }
    else /* a < 0 */
        {
            printf ("Nilai a negatif %d \n", a);
        }
    
    return 0;
}
