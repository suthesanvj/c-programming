#include<stdio.h>

int main(){
	int num = 145;
	int temp = num;
	int rem, sum = 0;
	
	while (temp != 0) {
		int fact = 1;
		rem = temp % 10;
		
		for (int i = 1; i <= rem; i++) {
			fact *=i;
			
	}
	sum += fact;
	temp /= 10;
	
}

if (num == sum) {
	printf("%d is a strong number.",num);
} else {
    printf("%d is not a strong number.", num);
}

return 0;
}


