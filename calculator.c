#include<stdio.h>
#include<math.h>
#include<conio.h>

int main(){
	float sayi1,sayi2,sonuc=0,i,yertutma;
	char islem;
	scanf("%f",&sayi1);
	sonuc = sayi1;
	while(islem != '='){
		
		scanf(" %c",&islem);
		if(islem !='!'){
		
		scanf("%f",&sayi2);
	   }
		
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
		        case '^':
		    	    if(sonuc<0 && sayi2<1 && sayi2>0){
		    		printf("undefined\n ");
				}
		    	    else{
				sonuc=pow(sonuc, sayi2);
			       }
				break;
			case '!':
				yertutma=sonuc;
				sonuc=1;
			    for(i=1;i<=yertutma;i++){
			       sonuc*=i;	
				}
				
			    
				break;	
    	}  
	    
		printf("= %.2f",sonuc);
		sayi2=0;	
	}
	
	 return 0;
			}
