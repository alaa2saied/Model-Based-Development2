function model
close all;
new_system('PID_controller_mode','Model');
%open model
open_system('PID_controller_mode');
%add input function step
add_block('simulink/Sources/Step','PID_controller_mode/step');
%add transfer function
add_block('simulink/Continuous/PID Controller','PID_controller_mode/controller');
%add PID Controller to benifit system
add_block('simulink/Continuous/Transfer Fcn','PID_controller_mode/Transfer_function');
%to run transfer function by scope
add_block('simulink/Sinks/Scope','PID_controller_mode/scope');
%to connect step to transfer function
add_line('PID_controller_mode','step/1','Transfer_function/1');
%to connect transfer function to PID Controller
add_line('PID_controller_mode','Transfer_function/1','controller/1');
%to connect PID Controller to scope
add_line('PID_controller_mode','controller/1','scope/1');
%to set parameter of transfer function
set_param('PID_controller_mode/Transfer_function','Numerator','2','Denominator','[1 1 2]');
%to set oarameter PID Controller
set_param('PID_controller_mode/controller','P','2','I','2','D','2');
%to run simulation
sim('PID_controller_mode');

end