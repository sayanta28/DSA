def two_sum(nums, target)
  hash = {}
    
    nums.each_with_index do |i, index|
        
        if hash[target-i]
            return [index, hash[target - i]]
        end
        
        hash[i] = index  
    end 
        
end