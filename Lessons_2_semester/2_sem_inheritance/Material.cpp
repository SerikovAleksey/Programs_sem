class Material{
public:
    // Принимает на вход величину деформации.
    // Возвращает величину напряжения, посчитанную с учётом реологии материала.
    virtual float getStress(float strain) = 0;
};

class ElasticMaterial : public Material {
public:
    ElasticMaterial(float elasticModulus) : elasticModulus(elasticModulus) {};
    float getStress(float strain) override {
        return strain * elasticModulus;
    }

private:
    float elasticModulus;
};

class PlasticMaterial : public Material {
public:
    PlasticMaterial(float elasticModulus, float strainLimit) : elasticModulus(elasticModulus), strainLimit(strainLimit){};

    float getStress(float strain) override {
        if (strainLimit < strain)return strainLimit * elasticModulus;
        return strain * elasticModulus;
    }

private:
    float elasticModulus;
    float strainLimit;
};