#include<stdio.h>
#include<math.h>
#include<conio.h>

int main(){
	float sayi1,sayi2,sonuc=0;
	char islem;
	scanf("%f",&sayi1);
	sonuc = sayi1;
	while(islem != '='){
		
		scanf(" %c",&islem);
		
		scanf("%f",&sayi2);
		
		switch(islem){
			
			case '+':
			    sonuc += sayi2;
			    
			    break;
			
			case '-' :
				sonuc -= sayi2;
				
				break;
			
			case '*' :
				sonuc *= sayi2;
				
				break;
			case '/' :
			    sonuc /= sayi2;
			    
			    break;
	
	}   
	    
		printf("= %.2f",sonuc);
		sayi2=0;
		
		
	}
	
	
	
	
	
	return 0;
}
