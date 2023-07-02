function validateForm() {
    var name = document.getElementById("name").value;
    var email = document.getElementById("email").value;
    var phone = document.getElementById("phone").value;
    var password = document.getElementById("password").value;
    var age = document.getElementById("age").value;
    var gender = document.getElementById("gender").value;
    var date = document.getElementById("date").value;
    var color = document.getElementById("color").value;

    var nameRegex = /^[a-zA-Z\s]+$/;
    var emailRegex = /^[^\s@]+@[^\s@]+\.[^\s@]+$/;
    var phoneRegex = /^\d{10}$/;
    var passwordRegex = /^(?=.*\d)(?=.*[a-z])(?=.*[A-Z])(?=.*[!@#$%^&*]).{8,}$/;

    if (!nameRegex.test(name)) {
        alert("Please enter a valid name.");
        return false;
    }

    if (!emailRegex.test(email)) {
        alert("Please enter a valid email address.");
        return false;
    }

    if (!phoneRegex.test(phone)) {
        alert("Please enter a valid phone number (10 digits).");
        return false;
    }

    if (!passwordRegex.test(password)) {
        alert("Please enter a valid password (at least 8 characters long and containing at least one uppercase letter, one lowercase letter, one digit, and one special character).");
        return false;
    }

    if (age < 18) {
        alert("You must be at least 18 years old to submit this");
    }
    if (gender === "") {
        alert("Please select a gender.");
        return false;
      }
}