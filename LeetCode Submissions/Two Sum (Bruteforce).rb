def two_sum(nums, target)
    
    sum = 0
    indexes = []
    i = 0
    
    while (i < nums.length)        
        
        sum = sum + nums [i]
        
        j = i + 1
        
        while (j < nums.length)

            if (nums[i] + nums[j] == target)
                
                indexes.push (i)
                indexes.push (j)
                
                return indexes
            end
            
            j = j + 1
        end
        
        i = i + 1
    end 
        
end