#ifndef MOVEMENTSVIEWER_H
#define MOVEMENTSVIEWER_H
#include <QWidget>

namespace Ui{
    class MovementsViewerWidget;
}

class movementsViewer:public QWidget{
    Q_OBJECT
    public :
        movementsViewer(QWidget * parent = 0);
        ~movementsViewer();
    private slots :
        void recordMovement();
        void deleteMovement();
        void validMovement();
    private :
        Ui::MovementsViewerWidget * ui;
};

#endif

