local function bubblesort(ar)
    local n = #ar

    for i = 1, n - 1 do
        for j = i, n - i do
            if ar[j] > ar[j + 1] then
                ar[j], ar[j + 1] = ar[j+ 1], ar[j]
            end
        end
    end
    return ar
end

local arey = {2, 3, 5 , 2, 6}


bubblesort(arey)

for i, v in ipairs(arey) do
    print(i, v)
end
