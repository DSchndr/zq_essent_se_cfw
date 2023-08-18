put your homebrew code at (0x0800)f2e0 and modify the code of a function 
(for example when both buttons are pressed when powered off to show the version info)
with a jump to your code (0x0800f2e0) to execute your homebrew code (ex. a game, if it fits in the limited space)

after flashing the patched binary the code can be debugged with stmcubeide