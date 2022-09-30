# Template for C project using waf builder

>Template files for C-language project employing waf build system

## Requirements

- python

## Usage

Download the latest `waf` from the [official web site](https://waf.io).

When I wrote this README, the latest version is 2.0.24.
I can download waf as:

```bash
curl -o waf https://waf.io/waf-2.0.24
chmod 755 waf
```

Copy `temp.c` and `temp.h` to make a new modules in your C project.

`wscript` also needs to be modified to include the new modules.
Set your main program name at `APPNAME` in `wscript`.
Version number can be set at `VERSION` in `wscript`.

## License

This template is released under the MIT license. See `LICENSE.txt`.

* Copyright (c) 2022, Shigemi ISHIDA
