
        #include "stdio.h"
        
        int main()
        {
            char tape[20000] = {0};
            char *ptr = tape;

    		++*ptr;
		++*ptr;
		++ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
	while (*ptr) {;
		--ptr;
		++*ptr;
		++ptr;
		--*ptr;
	};
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
	while (*ptr) {;
		--ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++ptr;
		--*ptr;
	};
		--ptr;
		putchar(*ptr);
		++ptr;
		++ptr;
		++ptr;
		++*ptr;
		++*ptr;
		++ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
	while (*ptr) {;
		--ptr;
		++*ptr;
		++ptr;
		--*ptr;
	};
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
	while (*ptr) {;
		--ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++*ptr;
		++ptr;
		--*ptr;
	};
		--ptr;
		putchar(*ptr);
}
