[33mcommit d26ace791a2d33b62a796166b9f48ef2b1c4170a[m[33m ([m[1;36mHEAD[m[33m -> [m[1;32mmaster[m[33m)[m
Author: Dharun-0123 <dharunkavin123@outlook.com>
Date:   Tue Apr 8 10:18:36 2025 +0530

    asdias

[1mdiff --git a/animatio_2.html b/animatio_2.html[m
[1mnew file mode 100644[m
[1mindex 0000000..aa6529e[m
[1m--- /dev/null[m
[1m+++ b/animatio_2.html[m
[36m@@ -0,0 +1,43 @@[m
[32m+[m[32m<!DOCTYPE html>[m
[32m+[m[32m<html lang="en">[m
[32m+[m[32m<head>[m
[32m+[m[32m    <meta charset="UTF-8" />[m
[32m+[m[32m    <meta name="viewport" content="width=device-width, initial-scale=1.0" />[m
[32m+[m[32m    <title>Document</title>[m
[32m+[m[32m    <style>[m
[32m+[m[32m      div {[m
[32m+[m[41m   [m
[32m+[m[32m        width: 250px;[m
[32m+[m[32m        height: 250px;[m
[32m+[m[32m        background-color: aqua;[m
[32m+[m[32m        animation: move 1s alternate-reverse infinite;[m
[32m+[m[32m        position: relative;[m
[32m+[m[32m        border-radius: 50%;[m
[32m+[m[32m      }[m
[32m+[m[32m      @keyframes move {[m
[32m+[m[32m     from{[m
[32m+[m[32m        top: 00%;[m
[32m+[m[32m     }[m
[32m+[m[32m     to{[m
[32m+[m[32m        top: 50%;[m
[32m+[m[32m     }[m
[32m+[m[32m      }[m
[32m+[m[32m    </style>[m
[32m+[m[32m</head>[m
[32m+[m[32m<body>[m
[32m+[m[32m    <div class="div"></div>[m
[32m+[m[32m</body>[m
[32m+[m[32m</html>[m
[32m+[m
[32m+[m
[32m+[m[32m<!DOCTYPE html>[m
[32m+[m[32m<html lang="en">[m
[32m+[m[32m<head>[m
[32m+[m[32m  <meta charset="UTF-8">[m
[32m+[m[32m  <meta name="viewport" content="width=device-width, initial-scale=1.0">[m
[32m+[m[32m  <title>Document</title>[m
[32m+[m[32m</head>[m
[32m+[m[32m<body>[m
[32m+[m[41m  [m
[32m+[m[32m</body>[m
[32m+[m[32m</html>[m
\ No newline at end of file[m
[1mdiff --git a/animation.html b/animation.html[m
[1mnew file mode 100644[m
[1mindex 0000000..c3f22de[m
[1m--- /dev/null[m
[1m+++ b/animation.html[m
[36m@@ -0,0 +1,59 @@[m
[32m+[m[32m<!DOCTYPE html>[m
[32m+[m[32m<html lang="en">[m
[32m+[m[32m  <head>[m
[32m+[m[32m    <meta charset="UTF-8" />[m
[32m+[m[32m    <meta name="viewport" content="width=device-width, initial-scale=1.0" />[m
[32m+[m[32m    <title>Document</title>[m
[32m+[m[32m    <style>[m
[32m+[m[32m      body {[m
[32m+[m[32m        background-color: rgb(74, 67, 67);[m
[32m+[m[32m        width: 100vw;[m
[32m+[m[32m        height: 1000px;[m
[32m+[m[32m      }[m
[32m+[m[32m      .div1 {[m
[32m+[m[32m        font-family: cursive;[m
[32m+[m[32m        font-size: 25px;[m
[32m+[m[32m        position: relative;[m
[32m+[m[41m       [m
[32m+[m[32m        animation: colorChange 2s backwards infinite, ani 3s backwards infinite;[m
[32m+[m[32m      }[m
[32m+[m[32m      .outer{[m
[32m+[m[32m        background-color: rgb(208, 196, 196);[m
[32m+[m[32m        margin: 50px;[m
[32m+[m[32m        overflow: hidden;[m
[32m+[m[32m        width: 80%;[m
[32m+[m
[32m+[m[32m      }[m
[32m+[m
[32m+[m[32m      @keyframes ani {[m
[32m+[m[32m        from {[m
[32m+[m[32m          left: 0%;[m
[32m+[m[32m        }[m
[32m+[m[32m        to {[m
[32m+[m[32m          left: 100%;[m
[32m+[m[32m        }[m
[32m+[m[32m      }[m
[32m+[m[32m      @keyframes colorChange {[m
[32m+[m[32m        0% {[m
[32m+[m[32m          color: rgb(153, 255, 0);[m
[32m+[m[32m        }[m
[32m+[m[32m        25% {[m
[32m+[m[32m          color: rgb(9, 3, 8);[m
[32m+[m[32m        }[m
[32m+[m[32m        50% {[m
[32m+[m[32m          color: rgb(176, 30, 205);[m
[32m+[m[32m        }[m
[32m+[m[32m        75%{[m
[32m+[m[32m            color: rgb(226, 21, 21) ;[m
[32m+[m[32m        }[m
[32m+[m[32m        100% {[m
[32m+[m[32m          color: rgb(0, 13, 255);[m
[32m+[m[32m        }[m
[32m+[m[32m      }[m
[32m+[m[32m    </style>[m
[32m+[m[32m  </head>[m
[32m+[m[32m  <body>[m
[32m+[m[32m    <div class="outer">[m
[32m+[m[32m    <div class="div1">This is infinity</div></div>[m
[32m+[m[32m  </body>[m
[32m+[m[32m</html>[m
[1mdiff --git a/grid-float.html b/grid-float.html[m
[1mnew file mode 100644[m
[1mindex 0000000..355a933[m
[1m--- /dev/null[m
[1m+++ b/grid-float.html[m
[36m@@ -0,0 +1,54 @@[m
[32m+[m[32m<!DOCTYPE html>[m
[32m+[m[32m<html lang="en">[m
[32m+[m[32m  <head>[m
[32m+[m[32m    <meta charset="UTF-8" />[m
[32m+[m[32m    <meta name="viewport" content="width=device-width, initial-scale=1.0" />[m
[32m+[m[32m    <title>Document</title>[m
[32m+[m[32m    <style>[m
[32m+[m[32m      .container{[m
[32m+[m[32m          width: 800px;[m
[32m+[m[32m          height: 1000px;[m
[32m+[m[32m          background-color: rgb(206, 182, 159);[m
[32m+[m[32m          margin-left: 100px;[m
[32m+[m[32m          display: flex;[m
[32m+[m[32m          justify-content: center;[m
[32m+[m[32m          align-items: center;[m
[32m+[m[32m      }[m
[32m+[m[32m      .item{[m
[32m+[m
[32m+[m[32m          width: 400px;[m
[32m+[m[32m          height: 550px;[m
[32m+[m[32m          background-color: blue;[m
[32m+[m[32m          border-radius: 5px 100px 5px 100px;[m
[32m+[m[32m          background-color: rgb(236, 239, 239);[m
[32m+[m[32m          padding: 10px;[m
[32m+[m[32m          box-shadow: rgba(0, 0, 0, 0.17) 0px -23px 25px 0px inset, rgba(0, 0, 0, 0.15) 0px -36px 30px 0px inset, rgba(0, 0, 0, 0.1) 0px -79px 40px 0px inset, rgba(0, 0, 0, 0.06) 0px 2px 1px, rgba(0, 0, 0, 0.09) 0px 4px 2px, rgba(0, 0, 0, 0.09) 0px 8px 4px, rgba(0, 0, 0, 0.09) 0px 16px 8px, rgba(0, 0, 0, 0.09) 0px 32px 16px;[m
[32m+[m[41m        [m
[32m+[m[32m            position: relative;[m
[32m+[m[32m            animation: bounceSkew 2.3s infinite alternate;[m
[32m+[m[32m     }[m
[32m+[m[32m     @keyframes bounceSkew {[m
[32m+[m[32m  0% {[m
[32m+[m[32m    transform: translateY(0) skewX(-10deg);[m
[32m+[m[32m  }[m
[32m+[m
[32m+[m[32m  50% {[m
[32m+[m[32m    transform: translateY(-12px) skewX(-10deg); /* Adjust the values as needed */[m
[32m+[m[32m  }[m
[32m+[m
[32m+[m[32m  100% {[m
[32m+[m[32m    transform: translateY(0) skewX(-10deg);[m
[32m+[m[32m  }[m
[32m+[m[32m}[m
[32m+[m[32m    </style>[m
[32m+[m[32m  </head>[m
[32m+[m[32m  <body>[m
[32m+[m[32m    <div class="container">[m
[32m+[m[32m      <div class="item"><h3>The Heavenlit Library</h3><p>[m
[32m+[m[32m        A Sanctuary of Divine Literature[m
[32m+[m[32m The concept of a book library, rooted in the essence of the Temple of Heaven, evokes a vision of a serene and sacred space dedicated to the pursuit of knowledge and spiritual growth. The Temple of Heaven, an architectural marvel located in Beijing, China, stands as a symbol of harmony, spirituality, and celestial reverence. This library, aptly named "Heavenlit," would embody the timeless principles and ethereal beauty of this historic site, providing an oasis for readers and seekers of wisdom.</p>[m
[32m+[m[32m <h3>Timeless Classics</h3>[m
[32m+[m[32m <p>In the divine library, the classics undoubtedly hold a place of honor. Works like Homer's The Iliad and The Odyssey transport us to a time of heroic exploits and epic journeys, while Shakespeare's masterpieces, such as Hamlet and Macbeth, explore the depths of human nature, the struggle between good and evil, and the timeless themes of love and betrayal. These classics continue to be relevant, offering profound insights that transcend generations.</p></div>[m
[32m+[m[32m    </div>[m
[32m+[m[32m  </body>[m
[32m+[m[32m</html>[m
[1mdiff --git a/item-added.html b/item-added.html[m
[1mnew file mode 100644[m
[1mindex 0000000..854755e[m
[1m--- /dev/null[m
[1m+++ b/item-added.html[m
[36m@@ -0,0 +1,104 @@[m
[32m+[m[32m<!-- <!DOCTYPE html>[m
[32m+[m[32m<html lang="en">[m
[32m+[m[32m<head>[m
[32m+[m[32m    <meta charset="UTF-8">[m
[32m+[m[32m    <meta name="viewport" content="width=device-width, initial-scale=1.0">[m
[32m+[m[32m    <title>Document</title>[m
[32m+[m[32m    <style>[m
[32m+[m[32m        .contain {[m
[32m+[m
[32m+[m[32m            margin: 150px;[m
[32m+[m[32m            display: flex;[m
[32m+[m[32m            justify-content: center;[m
[32m+[m[32m            align-items: center;[m
[32m+[m[32m            height: 50vh;[m
[32m+[m[32m            text-align: center;[m
[32m+[m[32m            background-color: #a6bacd;[m
[32m+[m[32m            border-radius: 10px;[m
[32m+[m[32m        }[m
[32m+[m[32m        .card {[m
[32m+[m[32m            border: 1px solid #dee2e6;[m
[32m+[m[32m            border-radius: 50px;[m
[32m+[m[32m            padding: 20px;[m
[32m+[m[32m            background-color: #d1caca;[m
[32m+[m[32m            box-shadow: 0 4px 8px rgba(0, 0, 0, 0.1);[m
[32m+[m[32m            font-family: Arial, sans-serif;[m
[32m+[m[32m            font-size: 18px;[m
[32m+[m[32m            color: #333333;[m
[32m+[m[32m            letter-spacing: 2px;[m
[32m+[m[32m            line-height: 30px;[m
[32m+[m[32m            word-spacing: 7px;[m
[32m+[m[32m            padding: 20px;[m
[32m+[m[32m            font-weight: 600;[m
[32m+[m[32m        }[m
[32m+[m[32m    </style>[m
[32m+[m[32m</head>[m
[32m+[m[32m<body>[m
[32m+[m[32m    <div class="contain">[m
[32m+[m[32m        <div class="card">THE ITEM HAS BEEN ADDED TO THE CART</div>[m
[32m+[m[32m    </div>[m
[32m+[m[32m</body>[m
[32m+[m[32m</html>[m
[32m+[m
[32m+[m[32m/* @keyframes ki {[m
[32m+[m[32m    0% {[m
[32m+[m[32m        transform: translateY(0);[m
[32m+[m[32m        transform: skewX(175deg);[m
[32m+[m[41m    [m
[32m+[m[41m       [m
[32m+[m[32m    }[m
[32m+[m[41m  [m
[32m+[m[32m    50% {[m
[32m+[m[32m        transform: translateY(-5px);[m
[32m+[m[32m        transform: skewX(175deg);[m
[32m+[m[41m        [m
[32m+[m[41m      [m
[32m+[m[32m    }[m
[32m+[m[41m  [m
[32m+[m[32m    100% {[m
[32m+[m[32m        transform: translateY(0);[m
[32m+[m[32m        transform: skewX(175deg);[m
[32m+[m[32m        top:30px;[m
[32m+[m[41m        [m
[32m+[m[41m  [m
[32m+[m[32m    }[m
[32m+[m[32m  }[m
[32m+[m[32m  @keyframes bounce{[m
[32m+[m[32m    0% {top: 0;}[m
[32m+[m[41m    [m
[32m+[m[32m  }[m
[32m+[m[32m   */ -->[m
[32m+[m[32m<!DOCTYPE html>[m
[32m+[m[32m<html lang="en">[m
[32m+[m[32m  <head>[m
[32m+[m[32m    <meta charset="UTF-8" />[m
[32m+[m[32m    <meta name="viewport" content="width=device-width, initial-scale=1.0" />[m
[32m+[m[32m    <title>Document</title>[m
[32m+[m[32m  </head>[m
[32m+[m[32m  <body>[m
[32m+[m[32m    <div class="item">[m
[32m+[m[32m      <div class="o">[m
[32m+[m[32m        <div class="one">aaa</div>[m
[32m+[m[32m        <div class="one">bbb</div>[m
[32m+[m[32m      </div>[m
[32m+[m[32m      <div class="t">[m
[32m+[m[32m        <div class="two">ascasc</div>[m
[32m+[m
[32m+[m[32m        <div class="two">asasc</div>[m
[32m+[m[32m      </div>[m
[32m+[m[32m    </div>[m
[32m+[m[32m  </body>[m
[32m+[m[32m</html>[m
[32m+[m
[32m+[m[32m<!DOCTYPE html>[m
[32m+[m[32m<html lang="en">[m
[32m+[m[32m<head>[m
[32m+[m[32m  <meta charset="UTF-8">[m
[32m+[m[32m  <meta name="viewport" content="width=device-width, initial-scale=1.0">[m
[32m+[m[32m  <title>Document</title>[m
[32m+[m[32m  <link rel="stylesheet" href="">[m
[32m+[m[32m</head>[m
[32m+[m[32m<body>[m
[32m+[m[41m  [m
[32m+[m[32m</body>[m
[32m+[m[32m</html>[m
[1mdiff --git a/navbar.html b/navbar.html[m
[1mnew file mode 100644[m
[1mindex 0000000..7566708[m
[1m--- /dev/null[m
[1m+++ b/navbar.html[m
[36m@@ -0,0 +1,157 @@[m
[32m+[m[32m<!DOCTYPE html>[m
[32m+[m[32m<html lang="en">[m
[32m+[m[32m<head>[m
[32m+[m[32m    <meta charset="UTF-8">[m
[32m+[m[32m    <meta name="viewport" content="width=device-width, initial-scale=1.0">[m
[32m+[m[32m    <title>Document</title>[m
[32m+[m[32m    <link[m
[32m+[m[32m    href="https://fonts.googleapis.com/css2?family=Zen+Kurenaido&display=swap"[m
[32m+[m[32m    rel="stylesheet"[m
[32m+[m[32m  />[m
[32m+[m[32m  <link[m
[32m+[m[32m  href="https://cdn.jsdelivr.net/npm/bootstrap@5.1.1/dist/css/bootstrap.min.css"[m
[32m+[m[32m  rel="stylesheet"[m
[32m+[m[32m/>[m
[32m+[m[32m  <script src="https://cdn.jsdelivr.net/npm/bootstrap@5.1.1/dist/js/bootstrap.bundle.min.js"></script>[m
[32m+[m
[32m+[m[32m    <style>[m
[32m+[m[32m.nav{[m
[32m+[m[41m  [m
[32m+[m[32m    background-color: black;[m
[32m+[m[32m    color: white;[m
[32m+[m[32m    justify-content: space-evenly;[m
[32m+[m[32m    border: 2px solid black;[m
[32m+[m[41m    [m
[32m+[m[32m}[m
[32m+[m[32m.item{[m
[32m+[m[32mpadding: 20px;[m
[32m+[m
[32m+[m[32m}[m
[32m+[m[32m.item:hover{[m
[32m+[m[32mbackground-color: white;[m
[32m+[m[32mcolor: black;[m
[32m+[m[32mcursor: pointer;[m
[32m+[m[32m}[m
[32m+[m
[32m+[m[32m  .nav{[m
[32m+[m[32m  display: flex;[m
[32m+[m[32m  background-color: black;[m
[32m+[m[32m  color: white;[m
[32m+[m[32m  justify-content: space-evenly;[m
[32m+[m[32m  border: 2px solid black;[m
[32m+[m[41m  [m
[32m+[m[32m}[m
[32m+[m
[32m+[m
[32m+[m[32m    </style>[m
[32m+[m[32m</head>[m
[32m+[m[32m<body>[m
[32m+[m[32m    <div class="nav">[m
[32m+[m[32m        <div class="item">HOME</div>[m
[32m+[m[32m        <div class="item">ABOUT</div>[m
[32m+[m[32m        <div class="item">HELP</div>[m
[32m+[m[32m        <div class="item">CONTACT</div>[m
[32m+[m[32m    </div>[m
[32m+[m[32m    <div class="row">[m
[32m+[m[32m      <div class="col-9 ms-5">[m
[32m+[m[32m        <div class="card">[m
[32m+[m[32m          <img src="https://picsum.photos/300/200" alt="" class="img-fluid rounded ">[m
[32m+[m[32m          <div class="card-body text-center">[m
[32m+[m[41m    [m
[32m+[m[32m              <h1>Post one 1</h1>[m
[32m+[m[32m              <p class="">Date:May 5 2022</p>[m
[32m+[m[32m              <p>Lorem ipsum dolor sit, amet consectetur adipisicing elit. Libero sunt incidunt illo eos tenetur magni reiciendis, corporis pariatur quas ipsa asperiores, tempora omnis laborum sed autem commodi maiores a minima.</p>[m
[32m+[m[32m          </div>[m
[32m+[m[32m      </div>[m
[32m+[m[32m    </div>[m[41m  [m
[32m+[m[41m    [m
[32m+[m[32m      </div>[m
[32m+[m[32m    </div>[m
[32m+[m
[32m+[m[32m   <button type="button" class="btn btn-primary" data-bs-toggle="modal" data-bs-target="#lol">click</button>[m[41m [m
[32m+[m
[32m+[m
[32m+[m
[32m+[m[32m   <div[m[41m [m
[32m+[m[41m   [m
[32m+[m[32m    class="modal fade"[m
[32m+[m[32m    id="lol"[m
[32m+[m[32m    >[m
[32m+[m[32m    <div class="modal-dialog">[m
[32m+[m[32m      <div class="modal-header">[m
[32m+[m[32m       ascasc[m
[32m+[m[41m      [m
[32m+[m[32m      <div class="modal-content">[m
[32m+[m[32m        <p>Lorem ipsum, dolor sit amet consectetur adipisicing elit. Numquam, ut. Harum laudantium perferendis nobis architecto saepe laboriosam odio nulla minima rem eveniet natus deleniti aperiam ullam sed, blanditiis aut neque?</p>[m
[32m+[m[32m      </div>[m
[32m+[m[32m    </div>[m
[32m+[m[32m  </div>[m
[32m+[m[32m  </div>[m
[32m+[m
[32m+[m[32m   <!-- Button trigger modal -->[m
[32m+[m[32m   <button[m
[32m+[m[32m    type="button"[m
[32m+[m[32m    class="btn btn-primary btn-lg"[m
[32m+[m[32m    data-bs-toggle="modal"[m
[32m+[m[32m    data-bs-target="#modalId1"[m
[32m+[m[32m   >[m
[32m+[m[32m    Launch[m
[32m+[m[32m   </button>[m
[32m+[m[41m   [m
[32m+[m[32m   <!-- Modal -->[m
[32m+[m[32m   <div[m
[32m+[m[32m    class="modal fade"[m
[32m+[m[32m    id="modalId1"[m
[32m+[m[32m    tabindex="-1"[m
[32m+[m[32m    role="dialog"[m
[32m+[m[32m    aria-labelledby="modalTitleId"[m
[32m+[m[32m    aria-hidden="true"[m
[32m+[m[32m   >[m
[32m+[m[32m    <div class="modal-dialog" role="document">[m
[32m+[m[32m      <div class="modal-content">[m
[32m+[m[32m        <div class="modal-header">[m
[32m+[m[32m          <h5 class="modal-title" id="modalTitleId">[m
[32m+[m[32m            Modal title[m
[32m+[m[32m          </h5>[m
[32m+[m[32m          <button[m
[32m+[m[32m            type="button"[m
[32m+[m[32m            class="btn-close"[m
[32m+[m[32m            data-bs-dismiss="modal"[m
[32m+[m[32m            aria-label="Close"[m
[32m+[m[32m          ></button>[m
[32m+[m[32m        </div>[m
[32m+[m[32m        <div class="modal-body">[m
[32m+[m[32m          <div class="container-fluid">Add rows here</div>[m
[32m+[m[32m        </div>[m
[32m+[m[32m        <div class="modal-footer">[m
[32m+[m[32m          <button[m
[32m+[m[32m            type="button"[m
[32m+[m[32m            class="btn btn-secondary"[m
[32m+[m[32m            data-bs-dismiss="modal"[m
[32m+[m[32m          >[m
[32m+[m[32m            Close[m
[32m+[m[32m          </button>[m
[32m+[m[32m          <button type="button" class="btn btn-primary">Save</button>[m
[32m+[m[32m        </div>[m
[32m+[m[32m      </div>[m
[32m+[m[32m    </div>[m
[32m+[m[32m   </div>[m
[32m+[m[41m   [m
[32m+[m[32m   <script>[m
[32m+[m[32m    var modalId = document.getElementById('modalId');[m
[32m+[m[41m   [m
[32m+[m[32m    modalId.addEventListener('show.bs.modal', function (event) {[m
[32m+[m[32m        // Button that triggered the modal[m
[32m+[m[32m        let button = event.relatedTarget;[m
[32m+[m[32m        // Extract info from data-bs-* attributes[m
[32m+[m[32m        let recipient = button.getAttribute('data-bs-whatever');[m
[32m+[m[41m   [m
[32m+[m[32m      // Use above variables to manipulate the DOM[m
[32m+[m[32m    });[m
[32m+[m[32m   </script>[m
[32m+[m[41m   [m
[32m+[m
[32m+[m[32m</body>[m
[32m+[m[32m</html>[m
[32m+[m
[32m+[m
