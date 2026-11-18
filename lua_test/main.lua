local function bubblesort(arr)
    local n = #arr

    for i = 1, n - 1 do
        for j = 1, n - i do
            if arr[j] > arr[j + 1] then
                arr[j], arr[j + 1] = arr[j+ 1], arr[j]
            end
        end
    end
    return arr
end

local f = assert(io.open(arg[1], "r"))
local arr = {}
for num in f:read("a"):gmatch("%S+") do
    arr[#arr + 1] = tonumber(num)
end
f:close()

bubblesort(arr)

local out = assert(io.open(arg[2] or "sorted_lua.txt", "w"))
out:write(table.concat(arr, " "), "\n")
out:close()
