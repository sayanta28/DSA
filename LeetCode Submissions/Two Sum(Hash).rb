def two_sum(nums, target)

  hash = {}
    
    nums.each_with_index do |i, index|
        
        if(hash.has_value? (target - i))
            
            return [index, hash.index(target - i)]
        
        else            
            hash[index] = i 
            
        end
    end 
        
end