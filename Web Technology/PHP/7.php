<?php

// 7. WAP to display “successful” when the connection to a user defined database established using PHP.

$server = "localhost";
$user = "root";
$pass = "";
$db = "test";

$conn = mysqli_connect($server, $user, $pass, $db);
if (!$conn) {
    die("failed");
}
echo "successful";
?>