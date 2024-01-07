person = struct('name','mona','age',25,'city','Helwan');
person.age=27;
person_field='city';
disp( person.(person_field) );
