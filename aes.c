#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

int main(int argc, char **argv) {
	unsigned char key[16] = {0x20,0x21,0x22,0x23,0x24,0x25,0x26,0x27,0x28,0x29,0x2a,0x2b,0x2c,0x2d,0x2e,0x2f};
	int keylen = 16;
	char buffer[256];
	int ret;
	ret = aes_p8_set_encrypt_key(key, keylen * 8, buffer);
	return 0;
}