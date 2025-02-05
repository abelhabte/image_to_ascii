#include <stdio.h>
#include <string.h>

#define STB_IMAGE_IMPLEMENTATION
#include "stb_image.h"

int main(int argc,char *argv[]) {
	char chars[] = "`^\",:;Il!i~+_-?][}(1)(|\\/tfjrxnuvczXYUJCLQ0OZmwqpdbkhao#MW&8%B@S";
	int chars_len = strlen(chars);
	int width,height,pixel_size;
	unsigned char *image_data = stbi_load(argv[1],&width,&height,&pixel_size,0);

	if (image_data) {
		unsigned char *pixels = image_data;
		for (int row = 0; row < height; row++) {
			for (int col = 0; col < width; col++) {
				unsigned char r = *pixels++;
				unsigned char g = *pixels++;
				unsigned char b = *pixels++;
				if (pixel_size > 3) {
					unsigned char a = *pixels++;
				}
				float avg = (r+g+b)/3.0f;
				int char_index = (int)(chars_len*(avg/255.0f));
				putchar(chars[char_index]);
			}
			putchar('\n');
		}
	}
	else {
		printf("Failed to load image %s\n",argv[1]);
	}

	return 0;
}
