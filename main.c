#include <stdio.h>
int pointer(int *);

int main(){
	int value1;
	for(value1=0; value1 < 31; pointer(&value1)){
		printf("value=%d\n",value1);
	}
}

int pointer(int *value){
	*value +=1;
}