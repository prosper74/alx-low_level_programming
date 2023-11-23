# Bit manipulation, bitwise operations

## The Crackme password advanced task

### Find the password for this program.
- Save the password in the file 101-password
- Your file should contain the exact password, no new line, no extra space

### Follow this instructions
- Goto the <a href="https://github.com/alx-tools/0x13.c" target="_blank">repo</a> and clone it inside your `0x14-bit_manipulation directory`
- cd into the `0x13.c` and mv the crackme file to your `0x14-bit_manipulation directory` directory
  ```
  mv crackme3 ../
  ```
- Go back to the `0x14-bit_manipulation directory`, then remove the `0x13.c`
- run this command to create the `101-password` file
  ```
  curl https://raw.githubusercontent.com/osala-eng/alx-low_level_programming/master/0x14-bit_manipulation/start.sh -o start.xt
  ```
  ```
  chmod u+x start.xt
  ```
  ```
  ./start.xt
  ```
- Test the file 
  ```
  ./crackme3 `cat 101-password`
  ```

You should get the output
```
Congratulations!
```

