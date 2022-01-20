def single_cycle(array):
    visted = [0 for i in range(0, len(array))]
    # current_iterator
    current_it = array[0]
    for current_it in array:
        if current_it > 0 and current_it < len(array):
            # go forward
        elif current_it < 0 and current_it > 0:
            # go backward
        elif current_it == len(array):
            # set it to 0 and go forward the remaining length
        elif current_it == 0:
            # set it to len and go backward the remaining length


# this is horrible code.
# the trick in this is to use the modulus operator for each jump
# we need to keep cycling through the array

# another way to save space, is instead of using space to store 0/1 for 
# unvisited/visted elements in the array just keep a count of the visited elements
# make sure it's less than the total number of elements
