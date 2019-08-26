#include<iostream> // std::cout(objeto), std::endl(manipulador de flujo)
#include<iomanip>  // std::setw(), std::setfill()
int main()
{   
    std::cout << "\n----------------------------------------------------------------------------PROGRAMA MAS ORGINAL DEL MUNDO\n";
    std::cout<< "HOLA MUNDO";
    
    std::cout << "\n-----------------------------------------------------------------------------------MOSTRAR NUMEROS ENTEROS\n";
    std::cout << 100;
    
    std::cout << "\n------------------------------------------------------------------------------------MOSTRAR NUMEROS REALES\n";
    std::cout << 10.5; 
    
    std::cout << "\n-------------------------------------------------------------------------------------------MOSTRAR CADENAS\n";
    std::cout << "Se amable con los nerds: es muy probable que termines trabajando para uno de ellos (Bill Gates)";
    
    std::cout << "\n---------------------------------------------------------------------------------------------VARIAS LINEAS\n";
    std::cout << "Quien ama la practica sin teoria" << std::endl;
    std::cout << "es como el marinero que se embarca sin timon ni brujula" << std::endl;
    std::cout << "y nunca sabe donde ir." << std::endl;
    std::cout << "-Leornardo da Vinci" << std::endl;
    
    std::cout << "\n---------------------------------------------------------------------------------------------CONCATENACION\n";
    std::cout << "Si tengo " << 10 << " manzanas, y me como "<< 8 << ", entonces me quedan " << 10-8 << std::endl;  

    std::cout << "\n---------------------------------------------------------------------------------------FORMATEAR LA SALIDA\n";
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // Estamos construyendo una agenda telefonica                                                                               //
    //                                                                                                                          // 
    //                                                  NOMBRE      TELEFONO                                                    //  
    //                                           Franz Beltran     759368942                                                    //  
    //                                             Juan Peredo     758524556                                                    // 
    //                                               Ana Ortiz     759235585                                                    //
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    std::cout << "ANCHO DE CAMPO ACTUAL ES :" << std::cout.width() << std::endl;
    std::cout.width(18);    
    std::cout << "NOMBRE";
    std::cout.width(13);    
    std::cout << "TELEFONO" << std::endl;
    std::cout.width(18);    
    std::cout << "Ana";
    std::cout.width(13);    
    std::cout << "4260296" << std::endl;
    std::cout.width(18);    
    std::cout << "Juan";
    std::cout.width(13);    
    std::cout << "4269865" << std::endl;
    std::cout.width(18);    
    std::cout << "Pedro";
    std::cout.width(13);    
    std::cout << "4260111" << std::endl;
    // std::cout.width(18);    
    // std::cout << "Jhon";
    // std::cout.width(13);    
    // std::cout << "80257777785264260111" << std::endl;
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // Estamos construyendo una nomina de pagos:                                                                                //
    //                                                                                                                          // 
    //                                                    NOMBRE    MONTO                                                       //  
    //                                          Franz Beltran: $*****8942                                                       //  
    //                                            Juan Peredo: $***524556                                                       // 
    //                                              Ana Ortiz: $*59235585                                                       //
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    std::cout << "CARACTER DE RELLENO ACTUAL ES:" << std::cout.fill() << std::endl;
    std::cout.width(18);
    std::cout << "NOMBRE";
    std::cout.width(13);
    std::cout << "MONTO" << std::endl;
    std::cout.width(18);
    std::cout << "Franz Beltran: $";
    std::cout.width(13);
    std::cout.fill('*');
    std::cout << 8942 << std::endl;
    std::cout.width(18);
    std::cout.fill(' ');
    std::cout << "Juan Peredo: $";
    std::cout.fill('*');
    std::cout.width(13);
    std::cout << 524556 << std::endl;
    std::cout.width(18);
    std::cout.fill(' ');
    std::cout << "Ana Ortiz: $";
    std::cout.fill('*');
    std::cout.width(13);
    std::cout << 59235585 << std::endl;
    std::cout.fill(' ');

    
    std::cout << "\n----------------------------------------------------VALORES BOOL COMO TRUE O FALSE-USO EXPLICITO DE setf()\n";
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // Deseamos mostrar el resultado de evaluar expresiones logicas:                                                            //
    // El resultado de evaluar la expresion ( 3 > 2 ) es: true                                                                  // 
    // El resultado de evaluar la expresion ( 3 < 2 ) es: false                                                                 // 
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    std::cout << "El resultado de evaluar ( 3 > 2 ) es: " << ( 3 > 2 ) << std::endl;
    std::cout << "El resultado de evaluar ( 3 > 2 ) es: " << true << std::endl;
    std::cout << "El resultado de evaluar ( 3 < 2 ) es: " << ( 3 < 2  ) << std::endl;
    std::cout << "El resultado de evaluar ( 3 > 2 ) es: " << false << std::endl;

    std::cout.setf(std::ios_base::boolalpha);
    std::cout << "El resultado de evaluar ( 3 > 2 ) es: " << ( 3 > 2 ) << std::endl;
    std::cout << "El resultado de evaluar ( 3 > 2 ) es: " << true << std::endl;
    std::cout << "El resultado de evaluar ( 3 < 2 ) es: " << ( 3 < 2  ) << std::endl;
    std::cout << "El resultado de evaluar ( 3 > 2 ) es: " << false << std::endl;

    std::cout.unsetf(std::ios_base::boolalpha);
    std::cout << "El resultado de evaluar ( 3 > 2 ) es: " << ( 3 > 2 ) << std::endl;
    std::cout << "El resultado de evaluar ( 3 > 2 ) es: " << true << std::endl;
    std::cout << "El resultado de evaluar ( 3 < 2 ) es: " << ( 3 < 2  ) << std::endl;
    std::cout << "El resultado de evaluar ( 3 > 2 ) es: " << false << std::endl;
    
    std::cout << "\n------------------------------------------------------------MANIPULADORES ESTANDAR-USO IMPLICITO DE setf()\n";
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // Deseamos mostrar el resultado de evaluar expresiones logicas:                                                            //
    // El resultado de evaluar la expresion ( 3 > 2 ) es: true                                                                  // 
    // El resultado de evaluar la expresion ( 3 < 2 ) es: false                                                                 // 
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    std::cout << "El resultado de evaluar ( 3 > 2 ) es: " << ( 3 > 2 ) << std::endl;
    std::cout << "El resultado de evaluar ( 3 > 2 ) es: " << true << std::endl;
    std::cout << "El resultado de evaluar ( 3 < 2 ) es: " << ( 3 < 2  ) << std::endl;
    std::cout << "El resultado de evaluar ( 3 > 2 ) es: " << false << std::endl;

    std::cout << std::boolalpha;
    std::cout << "El resultado de evaluar ( 3 > 2 ) es: " << ( 3 > 2 ) << std::endl;
    std::cout << "El resultado de evaluar ( 3 > 2 ) es: " << true << std::endl;
    std::cout << "El resultado de evaluar ( 3 < 2 ) es: " << ( 3 < 2  ) << std::endl;
    std::cout << "El resultado de evaluar ( 3 > 2 ) es: " << false << std::endl;

    std::cout << std::noboolalpha;
    std::cout << "El resultado de evaluar ( 3 > 2 ) es: " << ( 3 > 2 ) << std::endl;
    std::cout << "El resultado de evaluar ( 3 > 2 ) es: " << true << std::endl;
    std::cout << "El resultado de evaluar ( 3 < 2 ) es: " << ( 3 < 2  ) << std::endl;
    std::cout << "El resultado de evaluar ( 3 > 2 ) es: " << false << std::endl;

    std::cout << "\n---------------------------------------------------------------------------------MANIPULADORES ADICIONALES\n";
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // Estamos construyendo una agenda telefonica                                                                               //
    //                                                                                                                          // 
    //                                                  NOMBRE      TELEFONO                                                    //  
    //                                           Franz Beltran     759368942                                                    //  
    //                                             Juan Peredo     758524556                                                    // 
    //                                               Ana Ortiz     759235585                                                    //
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    std::cout << "ANCHO DE CAMPO:" << std::endl;
    std::cout<< std::setw(18) <<"NOMBRE" << "TELEFONO" << std::endl;
    std::cout<< std::setw(18) <<"NOMBRE" << std::setw(13) << "TELEFONO" << std::endl;
    std::cout<< std::setw(18) <<"Franz Beltran" << std::setw(13) << "75239368" << std::endl;
    std::cout<< std::setw(18) <<"Juan Peredo" << std::setw(13) << "75239542" << std::endl;
    std::cout<< std::setw(18) <<"Ana Ortiz" << std::setw(13) << "68539368" << std::endl;
     // solo afecta al elemento siguiente

    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // Estamos construyendo una nomina de pagos:                                                                                //
    //                                                                                                                          // 
    //                                                    NOMBRE    MONTO                                                       //  
    //                                          Franz Beltran: $*****8942                                                       //  
    //                                            Juan Peredo: $***524556                                                       // 
    //                                              Ana Ortiz: $*59235585                                                       //
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    std::cout << "CARACTER DE RELLENO:" << std::endl;
    std::cout<< std::setw(18) << std::setfill('*') <<"Franz Beltran: $" << std::setw(13) << 8942 << std::setfill(' ') << std::endl;

    std::cout<< std::setw(18) <<"NOMBRE" << std::setw(13) << "TELEFONO" << std::endl;
    std::cout<< std::setw(18) <<"Franz Beltran: $" << std::setw(13) << std::setfill('*') << "8942" << std::setfill(' ') << std::endl;
    std::cout<< std::setw(18) <<"Juan Peredo: $" << std::setw(13) << std::setfill('*') << "524556" << std::setfill(' ') << std::endl;
    std::cout<< std::setw(18) <<"Ana Ortiz: $" << std::setw(13) << std::setfill('*') << "59235585" << std::setfill(' ') << std::endl;
    // efecto permanente

    return 0;
}