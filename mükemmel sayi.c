#include <stdio.h>

int main (){
	
	
	int n;
	int mukemmeltoplam = 0;
	int bolen;
	int mod;
	
	printf("m�kemmel sayi olup olmad���n� kontrol etmek istediginiz sayiyi girinz:");
	scanf("%d",&n);
	
	
	for(bolen=1; bolen<n; bolen++){
		
		mod =n%bolen;
	
		
		if(mod==0){
			
			mukemmeltoplam= mukemmeltoplam +bolen;
		}
		
	}
	if(mukemmeltoplam==n){
	printf("sayiniz m�kemmel sayidir");
	}
		else {
			printf("sayiniz m�kemmel sayi de�ildir.");
}
	

	return 0;
}
