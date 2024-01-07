%create system model
new_system('Position_sensor','Model');
open_system('Position_sensor');

%create subsystem
add_block('built-in/Subsystem','Position_sensor/system');

%add block in subsystm
add_block('simulink/Sources/In1','Position_sensor/system/App_vSensor1');
add_block('simulink/Sources/In1','Position_sensor/system/App_vSensor2');
add_block('simulink/Sinks/Out1','Position_sensor/system/App_bSensor1Failure');
add_block('simulink/Sinks/Out1','Position_sensor/system/App_bSensor2Failure');
add_block('simulink/Sinks/Out1','Position_sensor/system/App_bCoherencyFailure');
add_block('simulink/Quick Insert/Logic and Bit Operations/Less Than','Position_sensor/system/less1');
add_block('simulink/Quick Insert/Logic and Bit Operations/GreaterThan','Position_sensor/system/greater1');
add_block('simulink/Quick Insert/Logic and Bit Operations/OR','Position_sensor/system/OR1');
add_block('simulink/Quick Insert/Logic and Bit Operations/Less Than','Position_sensor/system/less2');
add_block('simulink/Quick Insert/Logic and Bit Operations/GreaterThan','Position_sensor/system/greater2');
add_block('simulink/Quick Insert/Logic and Bit Operations/OR','Position_sensor/system/OR2');
add_block('simulink/Quick Insert/Logic and Bit Operations/NotEqual','Position_sensor/system/not');
add_block('simulink/Math Operations/Add','Position_sensor/system/add');
add_block('simulink/Sources/Constant','Position_sensor/system/const1');
add_block('simulink/Sources/Constant','Position_sensor/system/const2');
add_block('simulink/Sources/Constant','Position_sensor/system/const3');
add_block('simulink/Sources/Constant','Position_sensor/system/const4');
add_block('simulink/Sources/Constant','Position_sensor/system/const5');

%set parameter
set_param('Position_sensor/system/const1','value','0.5');
set_param('Position_sensor/system/const2','value','4.5');
set_param('Position_sensor/system/const3','value','0.5');
set_param('Position_sensor/system/const4','value','4.5');
set_param('Position_sensor/system/const5','value','5');
set_param('Position_sensor/system/OR1','IconShape','rectangular');
set_param('Position_sensor/system/OR2','IconShape','rectangular');

%add sensor1 in subsytem
 add_line('Position_sensor/system','App_vSensor1/1','less1/1');
 add_line('Position_sensor/system','const1/1','less1/2');
 add_line('Position_sensor/system','App_vSensor1/1','greater1/1');
 add_line('Position_sensor/system','const2/1','greater1/2');
 add_line('Position_sensor/system','less1/1','OR1/1');
 add_line('Position_sensor/system','greater1/1','OR1/2');
 add_line('Position_sensor/system','OR1/1','App_bSensor1Failure/1');

%add sensor2 in subsytem
 add_line('Position_sensor/system','App_vSensor2/1','less2/1');
 add_line('Position_sensor/system','const3/1','less2/2');
 add_line('Position_sensor/system','App_vSensor2/1','greater2/1');
 add_line('Position_sensor/system','const4/1','greater2/2');
 add_line('Position_sensor/system','less2/1','OR2/1');
 add_line('Position_sensor/system','greater2/1','OR2/2');
 add_line('Position_sensor/system','OR2/1','App_bSensor2Failure/1');

%add coherency sesor
 add_line('Position_sensor/system','App_vSensor1/1','add/2');
 add_line('Position_sensor/system','App_vSensor2/1','add/1');
 add_line('Position_sensor/system','add/1','not/1');
 add_line('Position_sensor/system','const5/1','not/2');
 add_line('Position_sensor/system','not/1','App_bCoherencyFailure/1');


%add inport&outport
 add_block('simulink/Sources/Ramp','Position_sensor/App_vSensor1');
 add_block('simulink/Sources/Ramp','Position_sensor/App_vSensor2');
 add_block('simulink/Sinks/Out1','Position_sensor/App_bSensor1Failure');
 add_block('simulink/Sinks/Out1','Position_sensor/App_bSensor2Failure');
 add_block('simulink/Sinks/Out1','Position_sensor/App_bConherencyFailure');

%connect subsystem to inport&export
 add_line('Position_sensor','App_vSensor1/1','system/1');
 add_line('Position_sensor','App_vSensor2/1','system/2');
 add_line('Position_sensor','system/1','App_bSensor1Failure/1');
 add_line('Position_sensor','system/2','App_bSensor2Failure/1');
 add_line('Position_sensor','system/3','App_bConherencyFailure/1');

%set prameter
set_param('Position_sensor/App_vSensor1','Slope','0.4');
set_param('Position_sensor/App_vSensor1','InitialOutput','0.5');
set_param('Position_sensor/App_vSensor2','Slope','-0.4');
set_param('Position_sensor/App_vSensor2','InitialOutput','4.5');
