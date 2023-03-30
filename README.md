<h1>Printf project</h1>
<hr>
<h2>Description</h2>
<p>
    The printf function (which derives its name from "print formatted") prints a message to the screen using a "format string" that includes instructions to mix multiple strings into the final string to be displayed on the screen.
</p>
<img src="https://www.it.uc3m.es/pbasanta/asng/course_notes/input_output_printf_example_es.png" alt="">
<hr>
<h2>Authorized functions and macros</h2>
<ul>
    <li>write (man 2 write)</li>
    <li>malloc (man 3 malloc)</li>
    <li>free (man 3 free)</li>
    <li>va_start (man 3 va_start)</li>
    <li>va_end (man 3 va_end)</li>
    <li>va_copy (man 3 va_copy)</li>
    <li>va_arg (man 3 va_arg)</li>
</ul>
<hr>
<h3>Compilator</h3>
```$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c```
<hr>
<h3>Prototype of function</h3>
```int _printf(const char *format, ...);```
<hr>
<h3>Format</h3>
<table>
    <tr>
        <td> Specifiers </td>
        <td> Description </td>
    </tr>
    <tr>
        <td> %c </td>
        <td> Print_c </td>
    </tr>
    <tr>
        <td> %s </td>
        <td> Print_s </td>
    </tr>
    <tr>
        <td> %i </td>
        <td> Print_d_i </td>
    </tr>
    <tr>
        <td> %d </td>
        <td> Print_d_i </td>
    </tr>
</table>
<hr>

<h3>Contributors</h3>
<p>Kevin Munoz || <a href="https://github.com/Kevinmunoz44">https://github.com/Kevinmunoz44</a></p>
<p>Miguel Angel Velez || <a href="https://github.com/sandro132">https://github.com/sandro132</a></p>
