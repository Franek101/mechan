  function f()
        {
            let y=0;
             let x=0;
             let s=0;
             let suma=0;
             let srednia=1;
             let suma_wag=0;
            
            for(i=0;i<=4;i++)
                {
                    x = document.getElementById("pole"+i).value;
                    y =parseInt( document.getElementById("waga"+i).value);
                    s=parseInt(x*y);
                    suma=parseInt(suma+(x*y));
                    suma_wag=parseInt(suma_wag+y);
                    
                    
                }
            
            srednia=suma/suma_wag;
            
            document.getElementById("siemanko").innerHTML = srednia;
           
            
        }
    
    