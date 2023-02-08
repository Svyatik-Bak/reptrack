# include <stdio.h>

char input[255];
char audio_input[255];
char output[255];
char command[1024];

int main()
{
   printf("Input: ");
   gets(input);
   printf("Audio input: ");
   gets(audio_input);
   printf("Output: ");
   gets(output);
   snprintf(command, sizeof(command), "ffmpeg -i %s -i %s -c:v copy -map 0:v:0 -map 1:a:0 %s", input, audio_input, output);
   system(command);
}
