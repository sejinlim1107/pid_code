#include <stdlib.h>

int main(){
	while(1){
		system("ps -ef | awk '{print $2}' | cat > list.txt");
		sleep(1);
	}
}
