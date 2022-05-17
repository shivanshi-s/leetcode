can just sit in a for loop because we're
5:29
going to be looping over all of those
5:30
elements however the pointer for our
5:33
popped array will have to live outside
5:35
so we can say in I is equal to zero and
5:38
then let's also extract the length of
5:41
either pushed or pop they will always be
5:43
the same length so it doesn't matter
5:45
which one we use
5:46
so we could say n is equal to pushed dot
5:51
length now we want to loop over all the
5:55
elements in our pushed array so we could
5:57
say for int num and pushed every time we
6:04
loop over a new number we're going to
6:06
immediately add it to the stack so we
6:09
can say stack dot push num and now this
6:14
is the interesting part so after we've
6:16
added that new number into our stack we
6:19
need to check if the number that we have
6:22
just added is the number that we're
6:25
currently looking at in our popped array
6:27
if the number on the top of our stack is