#include <emscripten.h>
#include <stdio.h>
#include <stdarg.h>
#include <malloc.h>
#include <string.h>

EM_JS(void, js_print, (const char *line), {
    output = UTF8ToString(line);

    output = output.replace("\u000B", "");
    output = output.replace("\u0002", "");
    output = output.replace("                  P", "                  ");

    const field_output = document.getElementById('output');
    field_output.value += output;
    field_output.scrollTop = field_output.scrollHeight;
});

EM_JS(int, js_is_value_of_input_null, (), {
    return value_of_input == null;
});

EM_JS(char*, js_get_value_of_input, (), {
    // var lengthBytes = lengthBytesUTF8(value_of_input)+1;
    console.log(value_of_input);
    var lengthBytes = 512;
    var stringOnWasmHeap = _malloc(lengthBytes);
    stringToUTF8(value_of_input, stringOnWasmHeap, lengthBytes);
    value_of_input = null;
    return stringOnWasmHeap;
});

void PRINT(const char *format, ...) {
    va_list args;
    va_start(args, format);

    char *print_buffer = malloc(512);
    vsprintf(print_buffer, format, args);
    va_end(args);

    js_print(print_buffer);
    emscripten_sleep(20);
}

void input(char *target) {
    while (js_is_value_of_input_null()) {
        emscripten_sleep(100);
    }

    strcpy(target, js_get_value_of_input());
    js_print(target);
    js_print("\n");
}