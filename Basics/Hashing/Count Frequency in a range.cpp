vector<int> countFrequency(int n, int x, vector<int> &nums){
    vector<int>hash(n);
    for(int i=0;i<n;i++){
        if(nums[i]<=n) hash[nums[i]-1]++;
    }
    return hash;
}
https://www.codingninjas.com/studio/problems/count-frequency-in-a-range_8365446?leftPanelTabValue=PROBLEM

/*
    Time Complexity: O(n^2)
    Space Complexity: O(n)
    where n is the size of the array 'arr'.
*/

// Function to count the frequency of numbers from 1 to n in the given array 'arr'.
vector<int> countFrequency(int n, int x, vector<int> &arr)
{
    // Create a frequency array 'freq' of size 'n'
    // with all elements initialized to 0.
    vector<int> freq(n, 0);

    // Iterate from 1 to 'n'.
    for (int i = 1; i <= n; i++)
    {
        // Iterate through the array 'arr' to find the frequency of element 'i'.
        for (int j = 0; j < arr.size(); j++)
        {
            // If the element 'i' is found in 'arr', increment its frequency in 'freq'.
            if (arr[j] == i)
                freq[i - 1]++;
        }
    }

    // Return the frequency array 'freq'.
    return freq;
}

/*
    Time Complexity: O(n)
    Space Complexity: O(n)
    where n is the size of the input array 'nums'
*/

// Function to count the frequency of numbers from 1 to n in the given array 'nums'.
vector<int> countFrequency(int n, int x, vector<int> &nums)
{
    // Create a vector 'ans' of size n initialized with zeros to store the frequencies.
    vector<int> ans(n, 0);

    // Traverse the input array 'nums'.
    for (int num : nums)
    {
        // Check if the element 'num' is within the range of 1 to n.
        if (num <= n)
        {
            // Increment the frequency of 'num' in 'ans'.
            ans[num - 1]++;
        }
    }

    // Return the vector 'ans' containing the frequencies.
    return ans;
}

/*
    Time Complexity: O(n)
    Space Complexity: O(1)
    where n is the size of the input array 'nums'
*/

// Function to count the frequency of numbers from 1 to n in the given array 'nums'.
vector<int> countFrequency(int n, int x, vector<int> &nums)
{
    // Iterate through the array and modify the elements to track the frequency.
    int i = 0;
    while (i < n)
    {
        // Skip the element if it is not within our range.
        if (nums[i] > n || nums[i] < 1)
        {
            i++;
            continue;
        }

        // Calculate the index of the element.
        int j = nums[i] - 1;

        // Update the frequencies.
        if (nums[j] < 0)
        {
            nums[i] = 0;
            nums[j]--;
            i++;
            continue;
        }
        else
        {
            swap(nums[j], nums[i]);
            nums[j] = -1;
        }
    }

    // Adjust the negative values to positive frequencies.
    for (int &x : nums)
    {
        if (x < 0)
            x *= -1;
        else
            x = 0;
    }

    // Return the array with frequencies.
    return nums;
}
