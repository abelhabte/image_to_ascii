# Image to Ascii

This is program that takes images files (jpg, png) and turns it into ascii text using the character set ^\",:;Il!i~+_-?][}(1)(|\/tfjrxnuvczXYUJCLQ0OZmwqpdbkhao#MW&8%B@S to represent brightness.

## Instructions

```
gcc -o image_to_ascii image_to_ascii.c -lm
./image_to_ascii image_of_choice.jpg
```

if you want to save the acsii output to a txt file, run `./image_to_ascii image_of_choice.jpg > result.txt`
