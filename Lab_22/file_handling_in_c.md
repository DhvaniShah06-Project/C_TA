# File Handling in C - Quick Guide

## 1. File Pointer (`FILE *fp`)
A file pointer references an opened file stream, enabling all file input/output operations.

## 2. Opening & Closing Files
* **`fopen(filename, mode)`**: Opens a file (`"r"`, `"w"`, `"a"`). Returns `NULL` on failure.
* **`fclose(fp)`**: Closes the file stream and frees resources.

## 3. Character I/O
* **`fgetc(fp)` / `getc(fp)`**: Reads a single character (returns `EOF` at end).
* **`fputc(ch, fp)` / `putc(ch, fp)`**: Writes a character `ch` to the file.

## 4. `fprintf` Arguments & Working Explained
`fprintf` writes formatted output to a stream. Its signature is:
$$\text{int fprintf(FILE *stream, const char *format, \dots);}$$
Argument 1 (FILE *stream): The destination file pointer (e.g., fp). Tells the function where to write the output (use stdout for the console).

Argument 2 (const char *format): The format string containing text and format specifiers (e.g., "%d", "%s").

Additional Arguments (...): The variables or values matching the format specifiers.

* **Argument 1 (`FILE *stream`)**: The destination file pointer (e.g., `fp`). Tells the function *where* to write the output (use `stdout` for the console).
* **Argument 2 (`const char *format`)**: The format string containing text and format specifiers (e.g., `"%d"`, `"%s"`).
* **Additional Arguments (`...`)**: The variables or values matching the format specifiers.

## 5. Other Functions
* **`fscanf`**: Reads formatted data from a file stream.
* **`fseek(fp, offset, origin)`**: Moves the file pointer to a specific location.
* **`rewind(fp)`**: Resets the file pointer to the beginning.