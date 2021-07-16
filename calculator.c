int main(void){

      
     float imc, peso, altura;
     
     printf("Digite 1 para calcularmos seu IMC. \n");
     scanf("%f", &imc);
     
     printf("Digite seu peso: \n");
     scanf("%f", &peso);
     
     printf("Digite sua altura: \n");
     scanf("%f", &altura);
       
    if (imc == 1){
     
        imc = peso / (altura * altura);
        
        printf("IMC é: %f \n", imc);
  }
  

    if(imc <= 18.5){
      
    printf("Seu IMC está muito baixo");

}
   
    
    else if(imc <= 24.9){

      printf("Seu IMC está Normal");
      
  } 
    

   else if(imc <= 29.9){

      printf("Seu IMC está sobrepeso");
    
  }
  

   else if(imc <= 34.9){

      printf("Seu IMC está obsidade grau 1");
  }

    else if(imc <= 39.9){
    

      printf("Seu IMC está obsidade grau 2");
  }


     else if(imc >= 40){

      printf("Seu IMC está obsidade grau 3");
  }

  
   return 0;
}