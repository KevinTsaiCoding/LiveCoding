<?php
// $studentName = "Elsa";
// $studentGender = "female";
//定義學生的類別(模板長相)
class Student{
    public $name = "Elsa Lin";
    public $gender  = "female";
    function greeting(){
        echo "Hi!I'm ".$this->name."!<br>";
    }
}
$student = new Student();
echo $student->name."<br>";
$student->greeting();

?>