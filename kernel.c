// this is cool, no need for libraries



void kmain(void){
    const char *str = "This is my first kernel, this is pretty basic";
    char *vidptr = (char *)0xb80000;


    unsigned int i = 0;
    unsigned int j = 0;


    while(j < 80 * 25 * 2) {
		vidptr[j] = ' ';
		vidptr[j+1] = 0x07;
		j = j + 2;
	}

	j = 0;

	while(str[j] != '\0') {
		vidptr[i] = str[j];
		vidptr[i+1] = 0x07;
		++j;
		i = i + 2;
	}
	return;






}


