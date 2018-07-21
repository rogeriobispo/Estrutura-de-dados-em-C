#include <stdio.h>

int mat[5][5] = {
	      			{0, 0, 1, 0, 0},
					{0, 0, 1, 0, 0},
					{1, 1, 0, 1, 1},
					{0, 0, 1, 0, 1},
					{0, 0, 1, 1, 0}
				  };

int tem_ligacao(int x, int y){
	return mat[x][y];
}

int grau(){
	int i, j, grau;
	
	  for(i =0; i < 5; i++){
	 	grau = 0;
		for(j = 0; j < 5; j++){
			if(tem_ligacao(i,j) == 1)
				grau++;
		}
		printf("\n");
		printf("O vértice: ");
		printf("%d", i);
		printf(" Tem grau: ");
	    printf("%d ", grau);
	}
	
}

int main(){
  
  if(tem_ligacao(0, 2) == 0)
  	printf("Não tem ligação de A para C \n");
  else
  	printf("Tem ligação de A para C \n");
  	
  grau();
return 0;
				
}