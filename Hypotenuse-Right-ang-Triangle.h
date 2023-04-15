<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Find the Hypotenuse in Right Angle Triangle </title>
</head>
<body>
    <label id="aLabel">Side A :</label><br>
    <input type="text" id="aTextBox"><br>
    <label id="bLabel">Side B :</label><br>
    <input type="text" id="bTextBox"><br><br>
    <button type="button" id="SubmitButton">Submit</button><br><br>
    <label id="cLabel"></label><br>

    <!-- <script>
        //User Input from Windows.prompt
        let a;
        let b;
        let c;
        a = window.prompt("Enter the Side of A :");
        a = Number(a);
        b = window.prompt("Enter the Side of B :");
        b = Number(b);
        c = Math.sqrt(Math.pow(a,2)+Math.pow(b,2));
        console.log("side of C :",c);
   </script> -->
   <script>
    document.getElementById("SubmitButton").onclick=function(){
        a = document.getElementById("aTextBox").value;
        a = Number(a);
        b = document.getElementById("bTextBox").value;
        b = Number(b);
        c = Math.sqrt(Math.pow(a,2)+Math.pow(b,2));
        document.getElementById("cLabel").innerHTML="Side C : " +c;
    }
   </script>
</body>
</html>
