#ifndef V2ROCKET_H
#define V2ROCKET_H
#include "Enemy.h"
#include "TextureManager.h"
#include "Bullet.h"

class BF109 : public Enemy
{
    public:
        BF109(float pos_x, float pos_y,TextureManager& textureManager,std::vector<Bullet*>& bullets);
        virtual ~BF109();
        void shoot();
        void loseHp(int dmg);
    protected:
        sf::Texture V2RocketTexture;
        sf::Texture BF109Hitted;
        sf::Texture* bulletTexture;
        sf::Clock clock;
        bool hitted;
        const bool canAttack();
        virtual void update();
        virtual void render(sf::RenderTarget& target);
        virtual void initVariables();
        virtual void initSprite();
        std::vector<Bullet*>& enemyBullets;
    private:
};
#endif // V2ROCKET_H
