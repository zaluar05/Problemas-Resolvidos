// algumas das funções para a manipulação de strings em c++
// string exemplo;
// exemplo.length() ou exemplo.size() -> retorna o tamanho da string
// exemplo.substr(inicio,quantidade) -> retorna uma substring a partir do índice
// inicio exemplo.find(string) -> retorna o índice da primeira ocorrência da
// string passada como parâmetro exemplo.find(string,inicio) -> retorna o índice
// da primeira ocorrência da string passada como parâmetro a partir do índice
// inicio exemplo.find_first_of(string) -> retorna o índice
// exemplo.erase(inicio,quantidade) -> apaga da string a partir do índice inicio
// a quantidade de caracteres passada como parâmetro
// exemplo.replace(inicio,quantidade,string) -> substitui na string a partir do
// exemplo.append(string) -> adiciona a string passada como parâmetro no final
// da string exemplo.compare(string) -> retorna 0 se as strings forem iguais, um
// valor negativo exemplo.remove(inicio,quantidade) -> remove da string a partir
// do índice inicio a quantidade de caracteres passada como parâmetro
// exemplo.reverse() -> inverte a string
// exemplo.sort() -> ordena a string em ordem crescente
// exemplo.tolower() -> transforma todos os caracteres da string em minúsculo
// exemplo.toupper() -> transforma todos os caracteres da string em maiúsculo
// exemplo.push_back(char) -> adiciona o caractere passado como parâmetro no
// final da string exemplo.pop_back() -> remove o último caractere da string
// exemplo.clear() -> limpa a string
// exemplo.empty() -> retorna true se a string estiver vazia e false caso
// contrário exemplo.begin() -> retorna um iterador para o início da string
// exemplo.end() -> retorna um iterador para o final da string
// isalpha(exemplo[i]) -> ve se é letra;
// stoi(exemplo) - > transforma a string em int
// cout << setw(4) << setfill('0') << m << '\n'; seta a largura para 4 chars e
// completa com 0s a esquerda back() -> retorna o último caractere da string ou
// do vetor front() -> retorna o primeiro caractere da string ou do vetor1

// entrada.replace(i,1,"mudança") muda a string;
// usar loops ao contrário quando se trata de strings é fundamental,
// já que voce pode alterar o tamanho durante o loops
// quando se itera de tras para frente voce não vai mudar os indices dos
// elementos que ainda tem que visitar
// 10^5 de entradas significa que provavelmente será um algoritmo O(nlogn)
