// 4.asciiweights.cpp
// juanfc 2020-01-30
// Let us call \textbf{weight} of a word the sum of the ASCII codes of its
// chars. Design a program \fbox{\texttt{4.asciiweights.cpp}} that reads an
// indefinite number of words ended in the word \texttt{END} and then shows on
// the screen those words with a weight smaller than the weight of the
// \emph{first} entered word.  The output must be \textbf{sorted} and without
// repetitions.\\
// Example:
// {\footnotesize
// \begin{verbatim}
// Input:
// Enter words (enter word END to finish):
// CREO QUE VOY A IR ESTA TARDE AL CINE Y LUEGO VOY A IR A CENAR MAS TARDE END

// Output:
// Words smaller than CREO:
// A AL CINE IR MAS QUE VOY Y
// \end{verbatim}
// }
// NOTES:
// \begin{itemize}
//   \item The number of words is indefinite
//   \item Last and not included word is END
//   \item Each word has an indefinite but limited number of  characters
//   between |'A'| and |'Z'| both included.
//   \item There is a limited number of \emph{different} words
//   |MAX_DIF_WORDS=100|
// \end{itemize}

// CREO QUE VOY A IR ESTA TARDE AL CINE Y LUEGO VOY A IR A CENAR MAS TARDE END

#include <iostream>
#include <array>
using namespace std;

const int MAX_DIF_WORDS = 100;

typedef array<string,MAX_DIF_WORDS> TWords;

TWords add(TWords ws, string w);
bool isIn(TWords ws, string w);
int weight(string w);
void printWs(TWords ws);

int main()
{
    TWords ws;
    string w;
    string first;
    cin >> first;
    int firstWeight = weight(first);
    while (cin >> w and w != "END")
        if (weight(w) < firstWeight and not isIn(ws, w))
            ws = add(ws, w);
    printWs(ws);
    return 0;
}

TWords add(TWords ws, string w)
{
    TWords r;
    int ir = 0;
    int ior = 0;
    while (ws[ior].size() > 0 and ws[ior] <= w)
        r[ir++] = ws[ior++];
    r[ir++] = w;
    while (ws[ior].size() > 0)
        r[ir++] = ws[ior++];
    return r;
}
bool isIn(TWords ws, string w)
{
    int i = 0;
    while (ws[i].size() > 0 and ws[i] != w)
        ++i;
    return ws[i].size() != 0;
}

int weight(string w)
{
    int s = 0;
    for (int i = 0; i < w.size(); ++i)
        s += w[i];
    return s;
}

void printWs(TWords ws)
{
    for (int i = 0; ws[i].size() > 0; ++i)
        cout << ws[i] << " ";
    cout << endl;
}
