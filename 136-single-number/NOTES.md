Naive solution : but TLE
```
for(int i = 0 ; i < n ; i++)
{
int count = 0 ;
for(int j = 0 ; j < n ; j++)
if(nums[i] == nums[j])
count++;
if (count % 2 != 0)
return nums[i];
}
return 0;
```