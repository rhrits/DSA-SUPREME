// Alert box:
alert("This is an alert box!");

// Confirm box:
let isConfirmed = confirm("Are you sure you want to proceed?");
if (isConfirmed) {
    alert("You clicked OK!");
} else {
    alert("You canceled the operation.");
}

// Prompt box:
let name = prompt("What is your name?");
alert("Hello, " + name + "!");