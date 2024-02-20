#pragma once

class Alimento
{
private:
    int Energia;
public:
    Alimento(int Energia) {
        this->Energia = Energia;
    }
    ~Alimento() {}
    int ExtraerEnergia(){
        return Energia;
    }
};