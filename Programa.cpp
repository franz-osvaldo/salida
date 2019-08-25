#include<iostream> // std::cout(objeto), std::-endl(manipulador de flujo)
#include<iomanip>  // std::setw(), std::setfill()
int main()
{   
    std::cout<< "HOLA MUNDO";
    std::cout.put('W') << std::endl;
    std::cout.put(87);
    std::cout << 'W'<< std::endl << "HOLA"<<std::endl;
    
    std::cout << "-----------------------------------------------------------NUEVA LINEA" << std::endl ;
    std::cout << "Quien ama la practica sin teoria" << std::endl;
    std::cout << "es como el marinero que se embarca sin timon ni brujula" << std::endl;
    std::cout << "y nunca sabe donde ir." << std::endl;
    std::cout << "-Leornardo da Vinci" << std::endl;

    std::cout << "---------------------------------------------------FORMATEAR LA SALIDA" << std::endl ;
    ////////////////////////////////////////////////////////////////////////////////////////////////////
    // Estamos construyendo una agenda telefonica                                                     //
    //                                                                                                // 
    //                               NOMBRE      TELEFONO                                             //  
    //                        Franz Beltran     759368942                                             //  
    //                          Juan Peredo     758524556                                             // 
    //                            Ana Ortiz     759235585                                             //
    ////////////////////////////////////////////////////////////////////////////////////////////////////
    std::cout << "ANCHO DE CAMPO:" << std::endl;
    std::cout << "El ancho del campo actual es: " << std::cout.width() << std::endl;
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
    ////////////////////////////////////////////////////////////////////////////////////////////////////
    // Estamos construyendo una nomina de pagos:                                                      //
    //                                                                                                // 
    //                               NOMBRE       MONTO                                               //  
    //                        Franz Beltran: $*****8942                                               //  
    //                          Juan Peredo: $***524556                                               // 
    //                            Ana Ortiz: $*59235585                                               //
    ////////////////////////////////////////////////////////////////////////////////////////////////////
    std::cout << "CARACTER DE RELLENO:" << std::endl;
    std::cout.width(9);
    std::cout << "Franz: $";
    std::cout.fill('*');
    std::cout.width(8);
    std::cout << 1500 << std::endl;

    std::cout.width(9);
    std::cout << "Carlos: $";
    std::cout.fill('*');
    std::cout.width(8);
    std::cout << 37500 << std::endl;

    std::cout.fill(' ');

    std::cout << "---------------------------------------------MANIPULADORES ADICIONALES" << std::endl ;
    ////////////////////////////////////////////////////////////////////////////////////////////////////
    // Estamos construyendo una agenda telefonica                                                     //
    //                                                                                                // 
    //                               NOMBRE      TELEFONO                                             //  
    //                        Franz Beltran     759368942                                             //  
    //                          Juan Peredo     758524556                                             // 
    //                            Ana Ortiz     759235585                                             //
    ////////////////////////////////////////////////////////////////////////////////////////////////////
    std::cout << "ANCHO DE CAMPO:" << std::endl;

    std::cout<< std::setw(18) <<"NOMBRE" << std::setw(13) << "TELEFONO" << std::endl;
    std::cout<< std::setw(18) <<"Franz Beltran" << std::setw(13) << "75239368" << std::endl;
    std::cout<< std::setw(18) <<"Juan Peredo" << std::setw(13) << "75239542" << std::endl;
    std::cout<< std::setw(18) <<"Ana Ortiz" << std::setw(13) << "68539368" << std::endl;
     // solo afecta al elemento siguiente

    ////////////////////////////////////////////////////////////////////////////////////////////////////
    // Estamos construyendo una nomina de pagos:                                                      //
    //                                                                                                // 
    //                               NOMBRE       MONTO                                               //  
    //                        Franz Beltran: $*****8942                                               //  
    //                          Juan Peredo: $***524556                                               // 
    //                            Ana Ortiz: $*59235585                                               //
    ////////////////////////////////////////////////////////////////////////////////////////////////////
    std::cout << "CARACTER DE RELLENO:" << std::endl;

    std::cout<< std::setw(18) <<"NOMBRE" << std::setw(13) << "TELEFONO" << std::endl;
    std::cout<< std::setw(18) <<"Franz Beltran: $" << std::setw(13) << std::setfill('*') << "8942" << std::setfill(' ') << std::endl;
    std::cout<< std::setw(18) <<"Juan Peredo: $" << std::setw(13) << std::setfill('*') << "524556" << std::setfill(' ') << std::endl;
    std::cout<< std::setw(18) <<"Ana Ortiz: $" << std::setw(13) << std::setfill('*') << "59235585" << std::setfill(' ') << std::endl;
    // efecto permanente

    return 0;
}