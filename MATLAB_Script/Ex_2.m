unitDelayBlock = find_system('EX2','BlockType','UnitDelay');

for num = 1 : length(unitDelayBlock)
    set_param(unitDelayBlock{num},'showName','off');
end