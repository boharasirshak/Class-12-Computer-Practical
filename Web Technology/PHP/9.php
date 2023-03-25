<?php

// 9. WAP to retrieve the data from the database using php and sql.

include "7.php";

$query = "SELECT * FROM student";

$result = mysqli_query($conn, $query);

if (mysqli_num_rows($result)  === 0) {
    die("No data found");
}

echo "Data Found";

?>