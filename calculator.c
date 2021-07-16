    #include<stdio.h>

    int main(void){

      
     float imc, peso, altura;
     int comeco, continua;
     comeco = 1;
     continua = 2;
     
        
    while(2){
            
     printf("\nDigite 1 para calcularmos seu IMC. \n");
     scanf("%d", &comeco);
     
     printf("Digite seu peso: \n");
     scanf("%f", &peso);
     
     printf("Digite sua altura: \n");
     scanf("%f", &altura);
     
    
       
    if (imc == 0){
     
        imc = peso / (altura * altura);
        
        printf("IMC é: %f \n", imc);
  }
  

    if(imc <= 18.5){
      
    printf("Seu IMC esta muito baixo");

}
   
    
    else if(imc <= 24.9){

      printf("Seu IMC esta Normal");
      
  } 
    

   else if(imc <= 29.9){

      printf("Seu IMC esta sobrepeso");
    
  }
  

   else if(imc <= 34.9){

      printf("Seu IMC esta obsidade grau 1");
  }

    else if(imc <= 39.9){
    

      printf("Seu IMC esta obsidade grau 2");
  }


     else if(imc >= 40){

      printf("Seu IMC esta obsidade grau 3");
   
  }
        
      else
            
         (continua == 2);
        printf("\nDeseja repetir? Aperte 2. \n");
        scanf("%d", &continua);
        
            
        
        
}
    
   return 0;
}