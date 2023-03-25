<?php

// 8. WAP to insert data in the connected database using php and sql.

include "7.php";

$name = "Sirshak";
$roll = 459;
$city = "Kathmandu";
$contact = 69420;

$query = "INSERT INTO student (name, roll, city, contact) 
            VALUES ('$name', '$roll', '$city', '$contact') ";

$result = mysqli_query($conn, $query);

if($result){
    echo "Data inserted successfully";
}
else{
    echo "Data not inserted";
}

?>