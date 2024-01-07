 close all
 clear
 clc
%  new_system('Add_Model','model');
%   open_system('Add_Model');
%   sub_handler=add_block('built-in/Subsystem','Add_Model/sub');
%  open_system('Add_Model/sub');
%   add_block('simulink/Sources/In1','Add_Model/sub/NumberOne');
%   add_block('simulink/Sources/In1','Add_Model/sub/NumberTwo');
%   add_block('simulink/Sinks/Out1','Add_Model/sub/Summation');
%   add_block('simulink/Math Operations/Add','Add_Model/sub/Add_block');
%   add_line('Add_Model/sub','NumberOne/1','Add_block/1');
%   add_line('Add_Model/sub','NumberTwo/1','Add_block/2');
%   add_line('Add_Model/sub','Add_block/1','Summation/1');
%  set_param(sub_handler,'Name','ADD Two Numbers');
%  set_param(sub_handler,'Mask','on');
%   set_param(sub_handler,'MaskDisplay','disp("AddTwoNumbers")','MaskDescription','AddTwo','MaskType','AddTwoNumbers');


new_system('Add_Model','model');
open_system('Add_Model');
add_block('simulink/Sources/Step','Add_Model/step');
add_block('simulink/Sinks/Scope','Add_Model/scope');
add_line('Add_Model','step/1','scope/1');
sim('Add_Model');
