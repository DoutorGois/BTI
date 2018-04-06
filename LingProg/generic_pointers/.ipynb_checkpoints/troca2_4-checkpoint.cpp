/*!
 * Programa exemplo que troca 3ro elemento com o 5to elemento
 * em um vetor de qualquer tipo utilizando ponteiro void.
 * @date March 22th, 2018
 */

#include <iostream>
#include <iterator>

// Apelido para o tipo byte
using byte = unsigned char; // ou usar: typedef unsigned char byte;

/*!
 * @brief Troca o elemento na posicao 2 (vetor iniciando em zero), com o elemento na posicao 4.
 * @param first ponteiro genérico para o início do vetor.
 * @param count quantidade de elementos no vetor (não utilizado).
 * @param size tamanho, em bytes, de um elemento do vetor (necessário para movimentar memória).
 */
void troca2_4( void *first, size_t count, size_t size )
{
    byte * temp = new byte [size]; // variável temporária necessária no processo de swap.
    byte * f = static_cast< byte * > ( first ); // Criando uma versão "operavel" do first.


    // ================================================================================
    // Precisamos usar memcpy para copiar "blocos" de bytes e não apenas 1 byte.
    // Se usarmos atribuição copiaríamos apenas 1 byte (errado).
    // ================================================================================
    //
    // WARNING, NAO FUNCIONA: *temp =  *(f+(2*size)); // Copia o 2 para temp.
    memcpy( temp, f+(2*size), size ); // equivale a: temp = f[2];

    //WARNING, NAO FUNCIONA: *(f+(2*size)) = *(f+(4*size)); // Copia o 4 para o 2.
    memcpy( f+(2*size), f+(4*size), size ); // equivale a: f[2] = f[4];

    //WARNING, NAO FUNCIONA: *(f+(4*size)) = *temp;
    memcpy( f+(4*size), temp, size ); // equivale a: f[4] = temp;

    delete [] temp;
}

int main()
{
    std::string V[] = { "um", "dois", "tres", "quatro", "cinco", "seis" };
    auto size_V = sizeof(V) / sizeof(V[0]);
    int A[] = { 1, 2, 3, 4, 5, 6 };
    auto size_A = sizeof(A) / sizeof(A[0]);
    char B[] = { '1', '2', '3', '4', '5', '6' };
    auto size_B = sizeof(B) / sizeof(B[0]);

    std::cout << ">>> Before V = [ ";
    std::copy( V, std::end(V), std::ostream_iterator<std::string>( std::cout, " " ) );
    std::cout << "]\n";
    std::cout << ">>> Before A = [ ";
    std::copy( A, std::end(A), std::ostream_iterator<int>( std::cout, " " ) );
    std::cout << "]\n";
    std::cout << ">>> Before B = [ ";
    std::copy( B, std::end(B), std::ostream_iterator<char>( std::cout, " " ) );
    std::cout << "]\n";

    troca2_4( V, size_V, sizeof(V[0]) );
    troca2_4( A , size_A, sizeof(A[0]) );
    troca2_4( B , size_B, sizeof(char) );

    std::cout << ">>> Tamanho de um int (em bytes): " << sizeof(int) << std::endl;
    std::cout << ">>> Tamanho de um char (em bytes): " << sizeof(char) << std::endl;
    std::cout << ">>> Tamanho de uma string (em bytes): " << sizeof(std::string) << std::endl;

    std::cout << ">>> Before V = [ ";
    std::copy( V, std::end(V), std::ostream_iterator<std::string>( std::cout, " " ) );
    std::cout << "]\n";
    std::cout << ">>> Before A = [ ";
    std::copy( A, std::end(A), std::ostream_iterator<int>( std::cout, " " ) );
    std::cout << "]\n";
    std::cout << ">>> Before B = [ ";
    std::copy( B, std::end(B), std::ostream_iterator<char>( std::cout, " " ) );
    std::cout << "]\n";

    return 0;
}
