// #include <stdio.h>

// int createFile() {
//   FILE *fileAccess;
//   fileAccess = fopen("welcome.txt", "w");

//   if (fileAccess == NULL) {
//     printf("Error: Could not create the file!");
//     return 1;
//   } else {
//     if (fprintf(fileAccess, "This file has been accessed!") < 0) {
//       printf("Error: Could not write to file!");
//       return 0;
//     } else {
//       printf("Success: your data has bees written!");
//       return 0;
//     }
//     fclose(fileAccess);
//   }
// }

// int main() {
//   createFile();
//   return 0;
// }

// #include <stdio.h>

// int main() {
//   FILE *fptr = fopen("logfile.txt", "a");

//   if (fptr == NULL) {
//     printf("Error: Could not open file!\n");
//     return 1;
//   } else if (fprintf(fptr, "Your files have been scanned.\n") < 0) {
//     printf("Error: Could not write first message!\n");
//     fclose(fptr);
//     return 1;
//   } else if (fprintf(fptr, "No viruses have been found.\n") < 0) {
//     printf("Error: Could not write second message!\n");
//     fclose(fptr);
//     return 1;
//   } else {
//     fclose(fptr);
//     printf("Data appended successfully.\n");
//   }

//   return 0;
// }
#include <stdio.h>

int main() {
  FILE *fptr = fopen("logfile.txt", "a");

  if (fptr == NULL) {
    printf("Error: Could not open file!\n");
    return 1;
  } else if (fprintf(fptr, "Your files have been scanned.\n") < 0) {
    printf("Error: Could not write first message!\n");
    fclose(fptr);
    return 1;
  } else if (fprintf(fptr, "No viruses have been found.\n") < 0) {
    printf("Error: Could not write second message!\n");
    fclose(fptr);
    return 1;
  } else {
    fclose(fptr);
    printf("Data appended successfully.\n");
  }

  return 0;
}