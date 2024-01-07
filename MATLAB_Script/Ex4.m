BlockSystem = find_system('EX3','regexp','on','BlockType','.*');
%to find the name of block without block number
Block_Name = get_param(BlockSystem,'BlockType');

for num = 1 : length(BlockSystem)
    switch Block_Name{num}
        case 'Step'
            set_param(BlockSystem{num},'BackgroundColor','Orange');
        case 'Gain'
            set_param(BlockSystem{num},'BackgroundColor','Cyan');
        case 'Sum'
            set_param(BlockSystem{num},'BackgroundColor','Magenta');
        case 'UnitDelay'
            set_param(BlockSystem{num},'BackgroundColor','Green');
        case 'Outport'
            set_param(BlockSystem{num},'BackgroundColor','Red');
    end
end
