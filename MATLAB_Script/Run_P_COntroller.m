new_system('P_COntroller_Model','model');
open_system('P_COntroller_Model');
add_block('simulink/Sources/Step','P_COntroller_Model/step');
add_block('simulink/Sinks/Scope','P_COntroller_Model/scope');
add_block('p_controller_Libr/sub','P_COntroller_Model/P');
 add_line('P_COntroller_Model','step/1','P/1');
 add_line('P_COntroller_Model','P/1','scope/1');
 sim('P_COntroller_Model');