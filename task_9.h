#ifndef TASK_9_H
#define TASK_9_H

#include <QMainWindow>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QGridLayout>
#include <QSpacerItem>

const int N=3;

namespace Ui {
class task_9;
}

class task_9 : public QMainWindow
{
    Q_OBJECT

public:
    explicit task_9(QWidget *parent = 0);
    ~task_9();

private:
    QGridLayout* m_layout;
};

#endif // TASK_9_H
