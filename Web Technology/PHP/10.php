<?php

// 10.WAP to display the data retrieved from the database using php and sql in a web page

include "7.php";

$query = "SELECT * FROM student";

$result = mysqli_query($conn, $query);

if (mysqli_num_rows($result) > 0) {
    while ($row = mysqli_fetch_assoc($result)) {
        echo "Name: " . $row['name'] . "<br>";
        echo "Roll: " . $row['roll'] . "<br>";
        echo "City: " . $row['city'] . "<br>";
        echo "Contact: " . $row['contact'] . "<br>";
        echo "<br>";
    }
    
} else {
    echo "No data found";
}

?>