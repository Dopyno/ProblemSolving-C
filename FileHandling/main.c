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

// Reading one character at a time 

#include <stdio.h>

int main() {
  FILE *fptr;
  char ch;

  // Open file for reading
  fptr = fopen("myfile.txt", "r");
  if (fptr == NULL) {
    printf("Error: Could not open file for reading!\n");
    return 1;
  }

  while ((ch = fgetc(fptr)) != EOF) {
    putchar(ch);
  }

  fclose(fptr);

  return 0;
}

// Reading one line at a time
#include <stdio.h>

    int
    main() {

  FILE *fptr;
  char buffer[256];

  // Open file for reading
  fptr = fopen("myfile.txt", "r");
  if (fptr == NULL) {
    printf("Error: Could not open file for reading!\n");
    return 1;
  }

  while (fgets(buffer, sizeof(buffer), fptr) != NULL) {
    printf("%s", buffer);
  }

  fclose(fptr);

  return 0;
}

// i) Create and Open a File called customers.txt with error detection.
// ii) Write the following Data to the File, close it and error check it.

// Customer 1 - Account: 12345, Balance: $5000
// Customer 2 - Account: 54333, Balance: $7400
// iii) Open the File again in Read Mode and read in the data using fgets(), ensure to handle errors.
// iv) Print the data read from the file to the screen, close it and handle errors if needed.