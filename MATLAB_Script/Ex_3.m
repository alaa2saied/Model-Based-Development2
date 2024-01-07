GainBlock = find_system('EX3','BlockType','Gain');

for num = 1 : length(GainBlock)
    set_param(GainBlock{num},'SampleTime','-1');
end