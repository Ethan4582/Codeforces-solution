1. expand  [ on the right]
2. shrinking  [ on the left ]

we start with window size of 1 

question : sum<k
expand if the sum is less than k move right 

false condition : 
we try shring from left till the condtion valid and go with pattern 1 upadate the lenght of the valid subarry with sum valid for condtion 

fixed_window()
{
    int low = 0, high = 0, windowsize = k;
    while (i < sizeofarray)
    {
        // Step 1: Create a window that is one element smaller than the desired window size
        if (high - low + 1 < windowsize)
        {
            // Generate the window by increasing the high index
            high++;
        }
        // Step 2: Process the window
        else
        {
            // Window size is now equal to the desired window size
            // Step 2a: Calculate the answer based on the elements in the window
            // Step 2b: Remove the oldest element (at low index) from the window for the next window

            // Proceed to the next window by incrementing the low and high indices
        }
    }
}




