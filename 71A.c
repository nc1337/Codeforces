#include <stdio.h>
#include <string.h>

int main() {
  char s[100];
  int t;
  scanf("%d", &t);
  while(t--) {
    scanf("%s", s);
    int length = strlen(s);
    if (length > 10) {
      char temp[4];
      /* strcat(temp, s[0]); */
      temp[0] = s[0];

      char temp2[length-2];
      snprintf(temp2, length-2, "%d", length -2);

      printf("%s\n", temp2);

      strcat(temp, temp2);

      /* strcat(temp, s[length-1]); */
      temp[3] = s[length-1];
      printf("%s\n", temp);
    } else {
      printf("%s\n", s);
    }
  }
  return 0;
}
