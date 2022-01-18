<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Search Page</title>
</head>
<body>
    <form method="post">
        <input type="text" name="search" required/>
        <input type="submit" value="Search" />
    </form>
    <?php
        if(isset($_POST['search']))
        {
            require "search.php";
            if (count(#results)>0){
                foreach(#results as $r)
                {
                    echo "<div>" . $r['Name'] ."-".$r['Rollno']."-".$r['Total'] ."</div>";
                }
            }
            else{
                 echo "<div>No results</div>";
            }

        }
    ?>
</body>
</html>