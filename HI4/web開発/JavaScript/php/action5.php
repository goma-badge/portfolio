<!DOCTYPE html>
<html>
<head>
  <title>Bootstrap & php Example bs8</title>
  <meta charset="utf-8">
  <meta name="viewport" content="width=device-width, initial-scale=1">
  <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.1.1/dist/css/bootstrap.min.css" rel="stylesheet">
  <script src="https://cdn.jsdelivr.net/npm/bootstrap@5.1.1/dist/js/bootstrap.bundle.min.js"></script>
</head>
<body>

<div class="container mt-3">

<?php

	if(isset($_POST['submit'])){
		$fname = $_POST['phase1'];
		$mname = $_POST['phase2'];
		$lname = $_POST['phase3'];

		if($fname != NULL && $lname != NULL){
			print "<h5 class='text-danger'>入力したデータ</h5>"; 
			print "<p class='display-6'> first name: ".$fname."</p>"; 
			print "<p class='display-6'> middle name:".$mname." </p>";
			print "<p class='display-6'> last name : ".$lname. "</p>";

		}else{
			print "<p class='display-6'>入力されていない箇所があります。</p>";
		}
	}

?>

</div>

</body>
</html>
