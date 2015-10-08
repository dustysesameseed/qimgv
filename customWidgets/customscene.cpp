#include "customscene.h"

CustomScene::CustomScene() {
}

CustomScene::~CustomScene()
{

}

void CustomScene::mousePressEvent(QGraphicsSceneMouseEvent *event) {
    if (event->button() == Qt::LeftButton){
        emit sceneClick(event->scenePos());
    }
}
