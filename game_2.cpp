#include <SFML/Graphics.hpp>
#include <iostream>
#include <time.h>
#include <random>
#include <stdlib.h>
#include <list>
#include <string>
#include <sstream>

int width_limit = 1360;
int height_limit = 768;
bool projectile_shoot = 0;
bool projectile_draw = 0;
bool set1_spawned = 0;
int miss_counter = 0;
int destroyed_counter = 0;
bool ast1_draw = 1;
bool ast2_draw = 1;
bool ast3_draw = 1;
bool ast4_draw = 1;
bool ast5_draw = 1;
bool ast6_draw = 1;
bool ast7_draw = 1;
bool ast8_draw = 1;
bool ast9_draw = 1;
int score = 0;
int timer = 0;
int inst_click = 0;
int diff_time = 0;
int counter = 0;
bool player_alive = 1;
int exp_fig = 0;
bool exp_dsp = 0;
int player_death_time_elapsed = 0;
int player_death_time_elapsed_diff = 0;
int player_health = 4;
int player_death_ini = 0;
int player_death_elap_diff = 0;
bool untouchable = false;
int projectile_fig = 0;

sf::RectangleShape player(sf::Vector2f(100, 100));
sf::RectangleShape player_health1(sf::Vector2f(20, 20));
sf::RectangleShape player_health2(sf::Vector2f(20, 20));
sf::RectangleShape player_health3(sf::Vector2f(20, 20));
sf::RectangleShape player_health4(sf::Vector2f(20, 20));
sf::RectangleShape projectile(sf::Vector2f(100, 100));
sf::RectangleShape asteroid1(sf::Vector2f(100, 100));
sf::RectangleShape asteroid2(sf::Vector2f(100, 100));
sf::RectangleShape asteroid3(sf::Vector2f(100, 100));
sf::RectangleShape asteroid4(sf::Vector2f(100, 100));
sf::RectangleShape asteroid5(sf::Vector2f(100, 100));
sf::RectangleShape asteroid6(sf::Vector2f(100, 100));
sf::RectangleShape asteroid7(sf::Vector2f(100, 100));
sf::RectangleShape asteroid8(sf::Vector2f(100, 100));
sf::RectangleShape asteroid9(sf::Vector2f(100, 100));
sf::RectangleShape asteroid10(sf::Vector2f(100, 100));
sf::RectangleShape asteroid11(sf::Vector2f(100, 100));
sf::RectangleShape asteroid12(sf::Vector2f(100, 100));
sf::RectangleShape asteroid13(sf::Vector2f(100, 100));
sf::RectangleShape asteroid14(sf::Vector2f(100, 100));
sf::RectangleShape asteroid15(sf::Vector2f(100, 100));
sf::RectangleShape asteroid16(sf::Vector2f(100, 100));
sf::RectangleShape asteroid17(sf::Vector2f(100, 100));
sf::RectangleShape asteroid18(sf::Vector2f(100, 100));
sf::RectangleShape asteroid19(sf::Vector2f(100, 100));
sf::RectangleShape asteroid20(sf::Vector2f(100, 100));
sf::RectangleShape asteroid21(sf::Vector2f(100, 100));
sf::RectangleShape asteroid22(sf::Vector2f(100, 100));
sf::RectangleShape asteroid23(sf::Vector2f(100, 100));
sf::RectangleShape asteroid24(sf::Vector2f(100, 100));
sf::RectangleShape asteroid25(sf::Vector2f(100, 100));
sf::RectangleShape asteroid26(sf::Vector2f(100, 100));
sf::RectangleShape asteroid27(sf::Vector2f(100, 100));
sf::RectangleShape asteroid28(sf::Vector2f(100, 100));
sf::RectangleShape asteroid29(sf::Vector2f(100, 100));
sf::RectangleShape asteroid30(sf::Vector2f(100, 100));
sf::RectangleShape asteroid31(sf::Vector2f(100, 100));
sf::RectangleShape asteroid32(sf::Vector2f(100, 100));

void rotate_ast()
{
        asteroid1.rotate(0.1);
        asteroid2.rotate(0.1);
        asteroid3.rotate(0.1);
        asteroid4.rotate(0.1);
        asteroid5.rotate(0.1);
        asteroid6.rotate(0.1);
        asteroid7.rotate(0.1);
        asteroid8.rotate(0.1);
        asteroid9.rotate(0.1);
        asteroid1.setOrigin(50, 50);
        asteroid2.setOrigin(50, 50);
        asteroid3.setOrigin(50, 50);
        asteroid4.setOrigin(50, 50);
        asteroid5.setOrigin(50, 50);
        asteroid6.setOrigin(50, 50);
        asteroid7.setOrigin(50, 50);
        asteroid8.setOrigin(50, 50);
        asteroid9.setOrigin(50, 50);
}

void set_asteroid_texture()
{
        sf::Texture asteroid1_texture;
        if (!asteroid1_texture.loadFromFile("textures/stone1.jpg"))
        {
                std::cout << "Couldn't load asteroid1_texture" << std::endl;
        }
        asteroid1.setTexture(&asteroid1_texture);
        sf::Texture asteroid2_texture;
        if (!asteroid2_texture.loadFromFile("textures/stone2.jpg"))
        {
                std::cout << "Couldn't load asteroid2_texture" << std::endl;
        }
        asteroid2.setTexture(&asteroid2_texture);
        sf::Texture asteroid3_texture;
        if (!asteroid3_texture.loadFromFile("textures/stone3r.jpg"))
        {
                std::cout << "Couldn't load asteroid3_texture" << std::endl;
        }
        asteroid3.setTexture(&asteroid3_texture);
        sf::Texture asteroid4_texture;
        if (!asteroid4_texture.loadFromFile("textures/stone4r.jpg"))
        {
                std::cout << "Couldn't load asteroid4_texture" << std::endl;
        }
        asteroid4.setTexture(&asteroid4_texture);
        sf::Texture asteroid5_texture;
        if (!asteroid5_texture.loadFromFile("textures/stone5r.jpg"))
        {
                std::cout << "Couldn't load asteroid5_texture" << std::endl;
        }
        asteroid5.setTexture(&asteroid5_texture);
        sf::Texture asteroid6_texture;
        if (!asteroid6_texture.loadFromFile("textures/stone6r.jpg"))
        {
                std::cout << "Couldn't load asteroid6_texture" << std::endl;
        }
        asteroid6.setTexture(&asteroid6_texture);
        sf::Texture asteroid7_texture;
        if (!asteroid7_texture.loadFromFile("textures/stone7r.jpg"))
        {
                std::cout << "Couldn't load asteroid7_texture" << std::endl;
        }
        asteroid7.setTexture(&asteroid7_texture);
        sf::Texture asteroid8_texture;
        if (!asteroid8_texture.loadFromFile("textures/stone1r.jpg"))
        {
                std::cout << "Couldn't load asteroid8_texture" << std::endl;
        }
        asteroid8.setTexture(&asteroid8_texture);
        sf::Texture asteroid9_texture;
        if (!asteroid9_texture.loadFromFile("textures/stone2r.jpg"))
        {
                std::cout << "Couldn't load asteroid9_texture" << std::endl;
        }
        asteroid9.setTexture(&asteroid9_texture);
}

void reset_ast1()
{
        srand(time(NULL));
        sf::Vector2f asteroid1_pos = sf::Vector2f(1260 + (rand() % 4000), rand()% 768);
        asteroid1.setPosition(asteroid1_pos);
        ast1_draw = 1;
}
void reset_ast2()
{
        srand(time(NULL));
        sf::Vector2f asteroid2_pos = sf::Vector2f(1260 + (rand() % 4000), rand()% 768);
        asteroid2.setPosition(asteroid2_pos);
}
void reset_ast3()
{
        srand(time(NULL));
        sf::Vector2f asteroid3_pos = sf::Vector2f(1260 + (rand() % 4000), rand()% 768);
        asteroid3.setPosition(asteroid3_pos);
}
void reset_ast4()
{
        srand(time(NULL));
        sf::Vector2f asteroid4_pos = sf::Vector2f(1260 + (rand() % 4000), rand()% 768);
        asteroid4.setPosition(asteroid4_pos);
}
void reset_ast5()
{
        srand(time(NULL));
        sf::Vector2f asteroid5_pos = sf::Vector2f(1260 + (rand() % 4000), rand()% 768);
        asteroid5.setPosition(asteroid5_pos);
}
void reset_ast6()
{
        srand(time(NULL));
        sf::Vector2f asteroid6_pos = sf::Vector2f(1260 + (rand() % 4000), rand()% 768);
        asteroid6.setPosition(asteroid6_pos);
}
void reset_ast7()
{
        srand(time(NULL));
        sf::Vector2f asteroid7_pos = sf::Vector2f(1260 + (rand() % 4000), rand()% 768);
        asteroid7.setPosition(asteroid7_pos);
}
void reset_ast8()
{
        srand(time(NULL));
        sf::Vector2f asteroid8_pos = sf::Vector2f(1260 + (rand() % 4000), rand()% 768);
        asteroid8.setPosition(asteroid8_pos);
}
void reset_ast9()
{
        srand(time(NULL));
        sf::Vector2f asteroid9_pos = sf::Vector2f(1260 + (rand() % 4000), rand()% 768);
        asteroid9.setPosition(asteroid9_pos);
}


void move_ast_set_1()
{
        asteroid1.move(-0.1,0);
        asteroid2.move(-0.04,0);
        asteroid3.move(-0.06,0);
        asteroid4.move(-0.06,0);
        asteroid5.move(-0.08,0);
        asteroid6.move(-0.04,0);
        asteroid7.move(-0.2,0);
        asteroid8.move(-0.04,0);
        asteroid9.move(-0.4,0);
        asteroid10.move(-0.04,0);
}

void spawn_ast()
{
        srand(time(NULL));
        for (int i = 0; i < 9; i++)
        {
                if (i == 0)
                {
                        asteroid1.setPosition(1260 + (rand() % 4000), rand()% 768);
                }
                if (i == 1)
                {
                        asteroid2.setPosition(1260 + (rand() % 4000), rand()% 768);
                }
                if (i == 2)
                {
                        asteroid3.setPosition(1260 + (rand() % 4000), rand()% 768);
                }
                if (i == 3)
                {
                        asteroid4.setPosition(1260 + (rand() % 4000), rand()% 768);
                }
                if (i == 4)
                {
                        asteroid5.setPosition(1260 + (rand() % 4000), rand()% 768);
                }
                if (i == 5)
                {
                        asteroid6.setPosition(1260 + (rand() % 4000), rand()% 768);
                }
                if (i == 6)
                {
                        asteroid7.setPosition(1260 + (rand() % 4000), rand()% 768);
                }
                if (i == 7)
                {
                        asteroid8.setPosition(1260 + (rand() % 4000), rand()% 768);
                }
                if (i == 8)
                {
                        asteroid9.setPosition(1260 + (rand() % 4000), rand()% 768);
                }



        }
        /*asteroid1.setPosition(1260, rand()% 768);
        asteroid2.setPosition(1260, rand()% 768);
        asteroid3.setPosition(1260, rand()% 768);
        asteroid4.setPosition(1260, rand()% 768);
        asteroid5.setPosition(1260, rand()% 768);
        asteroid6.setPosition(1260, rand()% 768);
        asteroid7.setPosition(1260, rand()% 768);
        asteroid8.setPosition(1260, rand()% 768);
        asteroid9.setPosition(1260, rand()% 768);*/
        /*asteroid1.setFillColor(sf::Color(0,0,255));
        asteroid2.setFillColor(sf::Color(0,0,255));
        asteroid3.setFillColor(sf::Color(0,0,255));
        asteroid4.setFillColor(sf::Color(0,0,255));
        asteroid5.setFillColor(sf::Color(0,0,255));
        asteroid6.setFillColor(sf::Color(0,0,255));
        asteroid7.setFillColor(sf::Color(0,0,255));
        asteroid8.setFillColor(sf::Color(0,0,255));
        asteroid9.setFillColor(sf::Color(0,0,255));*/
        set1_spawned = 1;
}

void projectile_reset()
{
        projectile.setPosition(player.getPosition().x, player.getPosition().y+10);
        projectile_shoot = 0;
}

int main()
{
        sf::RenderWindow win(sf::VideoMode(1360, 768), "GAME", sf::Style::Close | sf::Style::Resize | sf::Style::Fullscreen);
        timer = clock();
        //sf::RenderWindow win(sf::VideoMode(1300, 700), "GAME", sf::Style::Close);
        /*player_health1.setFillColor(sf::Color(10, 0, 0));
        player_health2.setFillColor(sf::Color(10, 0, 0));
        player_health3.setFillColor(sf::Color(10, 0, 0));
        player_health4.setFillColor(sf::Color(10, 0, 0));*/
        player_health1.setPosition(1000, 40);
        player_health2.setPosition(980, 40);
        player_health3.setPosition(960, 40);
        player_health4.setPosition(940, 40);
        //player.setOrigin(0,0);
        //player.setFillColor(sf::Color(0,0,0));
        sf::Font font;
        if (!font.loadFromFile("FONTS/raleway/Raleway-Regular.ttf"))
        {
                std::cout << "Couldn't load font!!" << std::endl;
        }
        sf::Sprite exp_spr;
        sf::Texture exp_tex;
        if (!exp_tex.loadFromFile("SPRITES/ybr.png"))
        {
                std::cout << "Failed to load sprite!!" << std::endl;
        }
        exp_spr.setTexture(exp_tex);
        exp_spr.setScale(sf::Vector2f(1, 1));
        exp_spr.setTextureRect(sf::IntRect(0, 0, 186, 151)); //y = 158 = x
        exp_spr.setPosition(player.getPosition().x, player.getPosition().y);
        sf::Sprite projectile_spr;
        sf::Texture projectile_spr_texture;
        if (!projectile_spr_texture.loadFromFile("SPRITES/projectile_spr2.png"))
        {
                std::cout << "Couldn't load projectile_spr" << std::endl;
        }
        projectile_spr.setTexture(projectile_spr_texture);
        projectile_spr.setScale(sf::Vector2f(2, 2));
        int pro_spw = 32;
        projectile_spr.setTextureRect(sf::IntRect(0, 0, pro_spw, 32));
        //projectile_spr.setPosition(200, 200);
        sf::Text text;
        text.setFont(font);
        text.setString("SCORE: 0");
        text.setCharacterSize(24);
        text.setFillColor(sf::Color::White);
        text.setStyle(sf::Text::Bold | sf::Text::Underlined);
        text.setPosition(1120, 40);
        sf::Texture player_health1_texture;
        player_health1_texture.loadFromFile("playerr.png");
        player_health1.setTexture(&player_health1_texture);
        player_health2.setTexture(&player_health1_texture);
        player_health3.setTexture(&player_health1_texture);
        player_health4.setTexture(&player_health1_texture);
        sf::Texture player_untouchable_texture;
        if (!player_untouchable_texture.loadFromFile("playertr.png"))
        {
                std::cout << "Couldn't load player_untouchable_texture.png" << std::endl;
        }
        sf::Texture player_texture;
        /*if (!player_texture.loadFromFile("textures/spaceshiphd.png"))
        {
                std::cout << "Couldn't load player_texture" << std::endl;
        }*/
        if (!player_texture.loadFromFile("playerr.png"))
        {
                std::cout << "Couldn't load player_texture" << std::endl;
        }
        sf::Texture projectile_texture;
        player.setTexture(&player_texture);
        if (!projectile_texture.loadFromFile("textures/bullet_beam.jpg"))
        {
                std::cout << "Couldn't load projectile_texture" << std::endl;
        }
        projectile.setTexture(&projectile_texture);
        //asteroid1.setFillColor(sf::Color(0,0,255));
        sf::Texture asteroid1_texture;
        if (!asteroid1_texture.loadFromFile("textures/stone1.jpg"))
        {
                std::cout << "Couldn't load asteroid1_texture" << std::endl;
        }
        asteroid1.setTexture(&asteroid1_texture);
        sf::Texture asteroid2_texture;
        if (!asteroid2_texture.loadFromFile("textures/stone2.jpg"))
        {
                std::cout << "Couldn't load asteroid2_texture" << std::endl;
        }
        asteroid2.setTexture(&asteroid2_texture);
        sf::Texture asteroid3_texture;
        if (!asteroid3_texture.loadFromFile("textures/stone3.jpg"))
        {
                std::cout << "Couldn't load asteroid3_texture" << std::endl;
        }
        asteroid3.setTexture(&asteroid3_texture);
        sf::Texture asteroid4_texture;
        if (!asteroid4_texture.loadFromFile("textures/stone4.jpg"))
        {
                std::cout << "Couldn't load asteroid4_texture" << std::endl;
        }
        asteroid4.setTexture(&asteroid4_texture);
        sf::Texture asteroid5_texture;
        if (!asteroid5_texture.loadFromFile("textures/stone5.jpg"))
        {
                std::cout << "Couldn't load asteroid5_texture" << std::endl;
        }
        asteroid5.setTexture(&asteroid5_texture);
        sf::Texture asteroid6_texture;
        if (!asteroid6_texture.loadFromFile("textures/stone6.jpg"))
        {
                std::cout << "Couldn't load asteroid6_texture" << std::endl;
        }
        asteroid6.setTexture(&asteroid6_texture);
        sf::Texture asteroid7_texture;
        if (!asteroid7_texture.loadFromFile("textures/stone7.jpg"))
        {
                std::cout << "Couldn't load asteroid7_texture" << std::endl;
        }
        asteroid7.setTexture(&asteroid7_texture);
        sf::Texture asteroid8_texture;
        if (!asteroid8_texture.loadFromFile("textures/stone1.jpg"))
        {
                std::cout << "Couldn't load asteroid8_texture" << std::endl;
        }
        asteroid8.setTexture(&asteroid8_texture);
        sf::Texture asteroid9_texture;
        if (!asteroid9_texture.loadFromFile("textures/stone2.jpg"))
        {
                std::cout << "Couldn't load asteroid9_texture" << std::endl;
        }
        asteroid9.setTexture(&asteroid9_texture);
        sf::Transform transform;
        while (win.isOpen())
        {
                win.draw(projectile_spr);
                if (player_health == 0)
                {
                        player_alive = 0;
                        player_death_time_elapsed = clock() / 200000;
                        exp_spr.setPosition(player.getPosition().x, player.getPosition().y);
                }
                if (player_health == 4)
                {
                        win.draw(player_health1);
                        win.draw(player_health2);
                        win.draw(player_health3);
                        win.draw(player_health4);
                }
                if (player_health == 3)
                {
                        win.draw(player_health1);
                        win.draw(player_health2);
                        win.draw(player_health3);
                }
                if (player_health == 2)
                {
                        win.draw(player_health1);
                        win.draw(player_health2);
                }
                if (player_health == 1)
                {
                        win.draw(player_health1);
                }
                win.draw(text);
                if (!player_alive)
                {
                        win.draw(exp_spr);
                }
                exp_fig = counter/800%7*186;
                counter++;
                exp_spr.setTextureRect(sf::IntRect(exp_fig, 0, 186, 151));
                projectile_fig = counter/400%4*32;
                projectile_spr.setTextureRect(sf::IntRect(projectile_fig, 0, pro_spw, 32));
                if (player_alive)
                {
                        win.draw(player);
                }
                if (ast1_draw)
                {
                        win.draw(asteroid1);
                }
                if (ast2_draw)
                {
                        win.draw(asteroid2);
                }
                if (ast3_draw)
                {
                        win.draw(asteroid3);
                }
                if (ast4_draw)
                {
                        win.draw(asteroid4);
                }
                if (ast5_draw)
                {
                        win.draw(asteroid5);
                }
                if (ast6_draw)
                {
                        win.draw(asteroid6);
                }
                if (ast7_draw)
                {
                        win.draw(asteroid7);
                }
                if (ast8_draw)
                {
                        win.draw(asteroid8);
                }
                if (ast9_draw)
                {
                        win.draw(asteroid9);
                }
                win.display();
                sf::Event evt;
                while (win.pollEvent(evt))
                {
                        switch (evt.type)
                        {
                                case sf::Event::Closed:
                                {
                                        win.close();
                                }
                                case sf::Event::MouseMoved:
                                {
                                        //player.setPosition(sf::Mouse::getPosition(win).x, sf::Mouse::getPosition(win).y);
                                        if (player_alive)
                                        {
                                                player.setPosition(0, sf::Mouse::getPosition(win).y);
                                        }
                                }
                        }
                        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
                        {
                                win.close();
                        }
                        if (sf::Keyboard::isKeyPressed(sf::Keyboard::BackSpace))
                        {
                                score = 0;
                                player_alive = 1;
                                player_health = 4;
                        }
                }
                if (!set1_spawned)
                {
                        spawn_ast();
                }
                //std::srand(std::time(NULL));
                //win.clear(sf::Color(255, 255, 255));
                win.clear(sf::Color(0, 0, 0));
                //projectile.setFillColor(sf::Color(255, 0, 0));
                if (!untouchable)
                {
                        player.setTexture(&player_texture);
                }
                else
                {
                        player.setTexture(&player_untouchable_texture);
                }
                sf::Vector2f player_pos = player.getPosition();
                timer = clock();
                if ((((timer / 200000) - inst_click) > 1) && (player_alive == 1))
                {
                        if ((sf::Mouse::isButtonPressed(sf::Mouse::Left)) && (projectile.getPosition().x == player_pos.x))
                        {
                                inst_click = timer / 200000;
                                //projectile_shoot = 1;
                                projectile_draw = 1;
                        }
                }
                if (projectile_draw)
                {
                        win.draw(projectile);
                        //projectile.setPosition(player_pos.x, player_pos.y);
                        if (!projectile_shoot)
                        {
                                projectile.setPosition(player.getPosition().x, player.getPosition().y);
                        }
                        projectile_shoot = 1;
                }
                if (projectile_shoot)
                {
                        projectile.move(1,0);
                }
                if (projectile.getPosition().x > 1360)
                {
                        projectile_draw = 0;
                        projectile_reset();
                        projectile_shoot = 0;
                }
                if (asteroid1.getPosition().x < -100)
                {
                        reset_ast1();
                }
                if (asteroid2.getPosition().x < -100)
                {
                        reset_ast2();
                }
                if (asteroid3.getPosition().x < -100)
                {
                        reset_ast3();
                }
                if (asteroid4.getPosition().x < -100)
                {
                        reset_ast4();
                }
                if (asteroid5.getPosition().x < -100)
                {
                        reset_ast5();
                }
                if (asteroid6.getPosition().x < -100)
                {
                        reset_ast6();
                }
                if (asteroid7.getPosition().x < -100)
                {
                        reset_ast7();
                }
                if (asteroid8.getPosition().x < -100)
                {
                        reset_ast8();
                }
                if (asteroid9.getPosition().x < -100)
                {
                        reset_ast9();
                }
                move_ast_set_1();
                rotate_ast();
                transform.rotate(0.1, sf::Vector2f(200, 200));
                std::stringstream s;
                s << score;
                std::string scr;
                s >> scr;
                std::string fscr = "SCORE: " + scr;
                text.setString(fscr);
                player_death_elap_diff = (clock() / 200000) - player_death_ini;
                if (player_death_elap_diff == 3)
                {
                        if (untouchable)
                        {
                                untouchable = false;
                        }
                }
                if (projectile.getGlobalBounds().intersects(asteroid1.getGlobalBounds()))
                {
                        projectile_reset();
                        reset_ast1();
                        if (player_alive)
                        {
                                score++;
                        }
                        //ast1_draw = 0;
                        //std::cout << score << std::endl;
                        projectile_draw = 0;
                        projectile_shoot = 0;
                }
                if (projectile.getGlobalBounds().intersects(asteroid2.getGlobalBounds()))
                {
                        projectile_reset();
                        reset_ast2();
                        if (player_alive)
                        {
                                score++;
                        }
                        //ast2_draw = 0;
                        //std::cout << score << std::endl;
                        projectile_draw = 0;
                        projectile_shoot = 0;
                }
                if (projectile.getGlobalBounds().intersects(asteroid3.getGlobalBounds()))
                {
                        projectile_reset();
                        reset_ast3();
                        if (player_alive)
                        {
                                score++;
                        }
                        //ast3_draw = 0;
                        //std::cout << score << std::endl;
                        projectile_draw = 0;
                        projectile_shoot = 0;
                }
                if (projectile.getGlobalBounds().intersects(asteroid4.getGlobalBounds()))
                {
                        projectile_reset();
                        reset_ast4();
                        if (player_alive)
                        {
                                score++;
                        }
                        //ast4_draw = 0;
                        //std::cout << score <<std::endl;
                        projectile_draw = 0;
                        projectile_shoot = 0;
                }
                if (projectile.getGlobalBounds().intersects(asteroid5.getGlobalBounds()))
                {
                        projectile_reset();
                        reset_ast5();
                        if (player_alive)
                        {
                                score++;
                        }
                        //ast5_draw = 0;
                        //std::cout << score << std::endl;
                        projectile_draw = 0;
                        projectile_shoot = 0;
                }
                if (projectile.getGlobalBounds().intersects(asteroid6.getGlobalBounds()))
                {
                        projectile_reset();
                        reset_ast6();
                        if (player_alive)
                        {
                                score++;
                        }
                        //ast6_draw = 0;
                        //std::cout << score << std::endl;
                        projectile_draw = 0;
                        projectile_shoot = 0;
                }
                if (projectile.getGlobalBounds().intersects(asteroid7.getGlobalBounds()))
                {
                        projectile_reset();
                        reset_ast7();
                        if (player_alive)
                        {
                                score++;
                        }
                        //ast7_draw = 0;
                        //std::cout << score << std::endl;
                        projectile_draw = 0;
                        projectile_shoot = 0;
                }
                if (projectile.getGlobalBounds().intersects(asteroid8.getGlobalBounds()))
                {
                        projectile_reset();
                        reset_ast8();
                        if (player_alive)
                        {
                                score++;
                        }
                        //ast8_draw = 0;
                        //std::cout << score << std::endl;
                        projectile_draw = 0;
                        projectile_shoot = 0;
                }
                if (projectile.getGlobalBounds().intersects(asteroid9.getGlobalBounds()))
                {
                        projectile_reset();
                        reset_ast9();
                        if (player_alive)
                        {
                                score++;
                        }
                        //ast9_draw = 0;
                        //std::cout << score << std::endl;
                        projectile_draw = 0;
                        projectile_shoot = 0;
                }
                //to change
                if (asteroid1.getGlobalBounds().intersects(player.getGlobalBounds()))
                {
                        if (!untouchable)
                        {
                                player_health -= 1;
                                player_death_ini = clock() / 200000;
                                untouchable = 1;
                        }
                }
                if (asteroid2.getGlobalBounds().intersects(player.getGlobalBounds()))
                {
                        if (!untouchable)
                        {
                                player_health -= 1;
                                player_death_ini = clock() / 200000;
                                untouchable = 1;
                        }
                }
                if (asteroid3.getGlobalBounds().intersects(player.getGlobalBounds()))
                {
                        if (!untouchable)
                        {
                                player_health -= 1;
                                player_death_ini = clock() / 200000;
                                untouchable = 1;
                        }
                }
                if (asteroid4.getGlobalBounds().intersects(player.getGlobalBounds()))
                {
                        if (!untouchable)
                        {
                                player_health -= 1;
                                player_death_ini = clock() / 200000;
                                untouchable = 1;
                        }
                }
                if (asteroid5.getGlobalBounds().intersects(player.getGlobalBounds()))
                {
                        if (!untouchable)
                        {
                                player_health -= 1;
                                player_death_ini = clock() / 200000;
                                untouchable = 1;
                        }
                }
                if (asteroid6.getGlobalBounds().intersects(player.getGlobalBounds()))
                {
                        if (!untouchable)
                        {
                                player_health -= 1;
                                player_death_ini = clock() / 200000;
                                untouchable = 1;
                        }
                }
                if (asteroid7.getGlobalBounds().intersects(player.getGlobalBounds()))
                {
                        if (!untouchable)
                        {
                                player_health -= 1;
                                player_death_ini = clock() / 200000;
                                untouchable = 1;
                        }
                }
                if (asteroid8.getGlobalBounds().intersects(player.getGlobalBounds()))
                {
                        if (!untouchable)
                        {
                                player_health -= 1;
                                player_death_ini = clock() / 200000;
                                untouchable = 1;
                        }
                }
                if (asteroid9.getGlobalBounds().intersects(player.getGlobalBounds()))
                {
                        if (!untouchable)
                        {
                                player_health -= 1;
                                player_death_ini = clock() / 200000;
                                untouchable = 1;
                        }
                }
        }
        return 0;
}