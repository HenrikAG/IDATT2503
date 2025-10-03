#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *replace_chars(const char *input);

int main() {
  printf("Eksempel 1\n");
  const char *original_1 = "Testing & testing";
  char *updated_1 = replace_chars(original_1);
  if (updated_1 != NULL) {
    printf("Original: %s\n", original_1);
    printf("Ny: %s\n", updated_1);
    free(updated_1);
  } else {
    printf("Failed\n");
  }

  printf("Eksempel 2\n");
  const char *original_2 = "Hei << &&><";
  char *updated_2 = replace_chars(original_2);
  if (updated_1 != NULL) {
    printf("Original: %s\n", original_2);
    printf("Ny: %s\n", updated_2);
    free(updated_2);
  } else {
    printf("Failed\n");
  }

  return 0;
}

char *replace_chars(const char *input) {
  size_t new_length = 0;
  for (size_t i = 0; i < sizeof(input); i++) {
    switch (input[i]) {
    case '&':
      new_length += 5;
      break;
    case '<':
    case '>':
      new_length += 4;
      break;
    default:
      new_length += 1;
      break;
    }
  }

  char *output = malloc(new_length + 1);
  if (output == NULL)
    return NULL;

  size_t j = 0;
  for (size_t i = 0; i < strlen(input); i++) {
    switch (input[i]) {
    case '&':
      strcpy(output + j, "&amp;");
      j += 5;
      break;
    case '<':
      strcpy(output + j, "&lt;");
      j += 4;
      break;
    case '>':
      strcpy(output + j, "&gt;");
      j += 4;
      break;
    default:
      output[j++] = input[i];
      break;
    }
  }

  output[j] = '\0';

  return output;
}
