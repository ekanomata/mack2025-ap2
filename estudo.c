#include <stdio.h>

int main() {

  float p1, p2, p3, med;

  printf("Aresente a nota das provas 1, 2 e 3, respectivamente (separá-las com espaço): ");
  scanf("%f %f %f", p1, p2, p3);

  med = (p1 + p2 + p3) / 3;

  if (med <= 100 && med >= 90) {
    printf("Sua media e %.2f, nota A", med);
      } else-if (med <= 89 && med >= 80 ) {
    printf("Sua media e %.2f, nota B", med);
      } else-if (med <= 79 && med >= 70 ) {
    printf("Sua media e %.2f, nota C", med);
      } else-if (med <= 69 && med >= 60 ) {
    printf("Sua media e %.2f, nota D", med);
      } else-if (med < 60) {
    printf("Sua media e %.2f, nota F", med);
      } else (med < 0) {
    printf("Media invalida, reveja os valores e tente novamente.")
    }

return 0;
     
}
