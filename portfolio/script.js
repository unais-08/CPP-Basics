const navmenu = document.getElementById("navmenu");
const btn = document.querySelector(".hamburgerMenu");
var navbar =document.getElementById('navmenu');
function crossSymbol() {
    btn.classList.toggle("iconclass");
}


btn.addEventListener("click", () => {
    const datavisible = navmenu.getAttribute("data-hidden");
    navbar.classList.toggle('visible');

    if (datavisible === "true") {
        navmenu.setAttribute("data-hidden", false);
    }
    else {
        navmenu.setAttribute("data-hidden", true);
    }
});
