ls -1 -R | grep '\.sh$'| sed 's/\.sh//' 


# to test this create a couple of .sh files with touch test.sh test2.sh test3.sh
# ls -1 was used over ls because i wanted the results in separate lines for the next command
# -R stands for recursively
# grep considers only .sh at the end of the line ($) '\' says that I actually mean a dot and not anything
# first sed replaces .sh with nothing
# second sed adds $ to line endings. deleted because exercises used cat -e