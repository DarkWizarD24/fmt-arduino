# Ard{fmt}

Port of the {fmt} library to Arduino.

Currently this port is based on the version 10.1.1.

## Usage

To include the library:
```c++
#include <ardfmt.h>
```

Doing this only give you the core and format. You can include the other one after that but I do not test them.

## Update

To update, clone [libfmt](https://github.com/fmtlib/fmt).

Copy the folder `fmt` from the folder `include` to the folder `src` of this repository.

## Tests

Arduino files used to test the library on target.

I test them on an ESP32C3.

## License

Ard{fmt} is based on [{fmt}](https://github.com/fmtlib/fmt) that is distributed under the MIT license.

Ard{fmt} is distributed under the MIT license.