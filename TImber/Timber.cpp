// #include<SFML/Graphics.hpp>
// using namespace sf;

// int main()
// {
//     //create videomode object
//     VideoMode vm(1920,1080);
//     //create window
//     RenderWindow window(vm, "winTimber");
//     //create texture
//     Texture backgroundTexture;
//     backgroundTexture.loadFromFile("graphics/background.png");
//     Sprite backgroundSprite;
//     backgroundSprite.setTexture(backgroundTexture);
//     backgroundSprite.setPosition(0,0);
//     Texture treeTexture;
//     treeTexture.loadFromFile("graphics/tree.png");
//     Sprite treeSprite;
//     treeSprite.setTexture(treeTexture);
//     treeSprite.setPosition(810,0);
//     Texture cloudTexture;
//     cloudTexture.loadFromFile("graphics/cloud.png");
//     Sprite cloudSprite1;
//     cloudSprite1.setTexture(cloudTexture);
//     cloudSprite1.setPosition(0,0);
//     Sprite cloudSprite2;
//     cloudSprite2.setTexture(cloudTexture);
//     cloudSprite2.setPosition(150,0);
//     Sprite cloudSprite3;
//     cloudSprite3.setTexture(cloudTexture);
//     cloudSprite3.setPosition(300,0);
//     Texture beeTexture;
//     beeTexture.loadFromFile("graphics/bee.png");
//     Sprite beeSprite;
//     beeSprite.setTexture(beeTexture);
//     beeSprite.setPosition(1100,600);
//     bool beeActive=false;
//     float beeSpeed=0.0f;
//     float beeHight=0.0f;
//     Clock clock;

//     //Main loop
//     while (window.isOpen())
//     { 
//         //handle usr input
//         if(Keyboard::isKeyPressed(Keyboard::Escape)){
//             window.close();
//         }
//         //update the screen
//         Time dt=clock.restart();
//         //Handling bee
//         if(!beeActive){
//             srand((int)time(0)*10);
//             beeSpeed=(rand()%200)+200;
//             srand((int)time(0)*20);
//             //beeHight=(rand()%500)+500;
//             //beeSprite.setPosition(2000,beeHight);
//             beeActive=true;

//         }
//         else{
//             //move tne bee
//             beeSprite.setPosition(beeSprite.getPosition().x - beeSpeed*dt.asSeconds(),beeSprite.getPosition().y);
//             if(beeSprite.getPosition().x<-100){
//                 beeActive=false;
//             }
//         }

//        //clear window
//        window.clear();
//        //display
//        window.draw(backgroundSprite);
//        window.draw(cloudSprite1);
//        window.draw(cloudSprite2);
//        window.draw(cloudSprite3);
//        window.draw(treeSprite);
//        window.draw(beeSprite);

//        window.display();
       

//         /* code */
//     }
//     return 0;
    
// }


#include <SFML/Graphics.hpp>
using namespace sf;

int main()

{
    // Create videomode object
    VideoMode vm(1920,1080);
    // Create window
    RenderWindow window(vm, "winTimber");
    // Create texture
    Texture backgroundTexture;
    backgroundTexture.loadFromFile("graphics/background.png");
    Sprite backgroundSprite;
    backgroundSprite.setTexture(backgroundTexture);
    backgroundSprite.setPosition(0,0);
    Texture treeTexture;
    treeTexture.loadFromFile("graphics/tree.png");
    Sprite treeSprite;
    treeSprite.setTexture(treeTexture);
    treeSprite.setPosition(810,0);
    Texture cloudTexture;
    cloudTexture.loadFromFile("graphics/cloud.png");
    Sprite cloudSprite1;
    cloudSprite1.setTexture(cloudTexture);
    cloudSprite1.setPosition(0,0);
    Sprite cloudSprite2;
    cloudSprite2.setTexture(cloudTexture);
    cloudSprite2.setPosition(150,0);
    Sprite cloudSprite3;
    cloudSprite3.setTexture(cloudTexture);
    cloudSprite3.setPosition(300,0);
    Texture beeTexture;
    beeTexture.loadFromFile("graphics/bee.png");
    Sprite beeSprite;
    beeSprite.setTexture(beeTexture);

    // Initialize the bee's position at the right edge
    beeSprite.setPosition(1920, 600); 
    bool beeActive = true; // Bee is active from the start
    float beeSpeed = 300.0f; // Speed of the bee
    float cloudSpeed = 5.0f; // Speed of the clouds
    Clock clock;

    // Main loop
    while (window.isOpen())
    { 
        // Handle user input
        if (Keyboard::isKeyPressed(Keyboard::Escape)) {
            window.close();
        }

        // Update the screen
        Time dt = clock.restart();

        // Move the bee from right to left
        beeSprite.setPosition(beeSprite.getPosition().x - beeSpeed * dt.asSeconds(), beeSprite.getPosition().y);

        // Reset the bee's position if it moves off-screen
        if (beeSprite.getPosition().x < -100) {
            beeSprite.setPosition(1920, rand() % 500 + 100); // Reset to a random height on the right edge
        }

        // Move the clouds to the right
        cloudSprite1.setPosition(cloudSprite1.getPosition().x + cloudSpeed * dt.asSeconds(), cloudSprite1.getPosition().y);
        cloudSprite2.setPosition(cloudSprite2.getPosition().x + cloudSpeed * dt.asSeconds(), cloudSprite2.getPosition().y);
        cloudSprite3.setPosition(cloudSprite3.getPosition().x + cloudSpeed * dt.asSeconds(), cloudSprite3.getPosition().y);

        // Reset cloud positions if they go off-screen
        if (cloudSprite1.getPosition().x > 1920) {
            cloudSprite1.setPosition(-cloudSprite1.getGlobalBounds().width, cloudSprite1.getPosition().y);
        }
        if (cloudSprite2.getPosition().x > 1920) {
            cloudSprite2.setPosition(-cloudSprite2.getGlobalBounds().width, cloudSprite2.getPosition().y);
        }
        if (cloudSprite3.getPosition().x > 1920) {
            cloudSprite3.setPosition(-cloudSprite3.getGlobalBounds().width, cloudSprite3.getPosition().y);
        }

        // Clear window
        window.clear();
        
        // Draw everything on screen
        window.draw(backgroundSprite);
        window.draw(cloudSprite1);
        window.draw(cloudSprite2);
        window.draw(cloudSprite3);
        window.draw(treeSprite);
        window.draw(beeSprite);

        window.display();
    }
    
    return 0;
}
