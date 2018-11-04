#include <stdlib.h>
#include <stdio.h>
#include <sys/stat.h>
#include <time.h>

int main(){
	struct stat * pointy = malloc(sizeof(struct stat));
	stat("tester.txt",pointy);
	
	printf("Tester.txt Size- %ld\n  Tester.txt UID- %d\n  Tester.txt GID- %d\n  Tester.txt- Time last opened %s\n  Tester.txt-Mode %o\n",pointy->st_size,pointy->st_uid,pointy->st_gid,ctime(&(pointy->st_atime)),pointy->st_mode);
	return 0;
}
	