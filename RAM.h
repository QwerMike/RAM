#pragma once

#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::getline;
using std::stoi;
using std::to_string;

string _separator = " ";
string _input = ""; // example: "10 21 -33 12" or "23"
int _inputPosition = 0;
int* _r = nullptr;
int _adder = 0;

int _read()
{
    int i = 0;
    auto retVal =
        stoi(
            _input.substr(
                _inputPosition,
                (i = _input.find(_separator, _inputPosition))
                - _inputPosition));
    _inputPosition = i + 1;
    return retVal;
}

#define RAM(rN)				\
    int main() { try {		\
    _r = new int[rN];		\
    cout << "Input: ";		\
    getline(cin, _input);   \
    cout << "Output: ";

#define END_RAM				\
    } catch(...) { cout <<	\
    "An error occurred";}	\
    _end_:					\
    delete[] _r;            \
    system("pause");		\
    return 0; }

#define LOAD(i)				\
    _adder = _r[i];

#define LOADr(i)			\
    _adder = _r[_r[i]];

#define LOADv(value)		\
    _adder = value;

#define STORE(i)			\
    _r[i] = _adder;

#define STOREr(i)			\
    _r[_r[i]] = _adder;

#define ADD(i)				\
    _adder += _r[i];	

#define ADDr(i)				\
    _adder += _r[_r[i]];

#define ADDv(value)			\
    _adder += value;

#define SUB(i)				\
    _adder -= _r[i];	

#define SUBr(i)				\
    _adder -= _r[_r[i]];

#define SUBv(value)			\
    _adder -= value;

#define MULT(i)				\
    _adder *= _r[i];	

#define MULTr(i)			\
    _adder *= _r[_r[i]];

#define MULTv(value)		\
    _adder *= value;

#define DIV(i)				\
    _adder /= _r[i];	

#define DIVr(i)				\
    _adder /= _r[_r[i]];

#define DIVv(value)			\
    _adder /= value;

#define READ(i)				\
    _r[i] = _read();

#define READr(i)			\
    _r[_r[i]] = _read();	

#define WRITE(i)			\
    cout << _r[i]			\
	    << _separator;

#define WRITEr(i)			\
    cout << _r[_r[i]]		\
	    << _separator;		\

#define WRITEv(value)		\
    cout << value			\
	    << _separator;

#define JUMP(label)			\
    goto label;

#define JGTZ(label)			\
    if (_adder > 0)			\
	    goto label;

#define JZERO(label)		\
    if (_adder == 0)		\
	    goto label;

#define HALT				\
    cout << "\n";			\
    goto _end_;

/* RAM
 * 20.05.2016
 * Created by Michael Kaskun
 * Contacts: tmikent@gmail.com
 */
