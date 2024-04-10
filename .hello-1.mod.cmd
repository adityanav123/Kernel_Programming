savedcmd_/home/aditya/kernel_codes/hello-1.mod := printf '%s\n'   hello-1.o | awk '!x[$$0]++ { print("/home/aditya/kernel_codes/"$$0) }' > /home/aditya/kernel_codes/hello-1.mod
