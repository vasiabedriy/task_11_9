#include "task_9.h"
#include "ui_task_9.h"

task_9::task_9(QWidget *parent) :
    QMainWindow(parent)
{
    this->setGeometry(20,50, 300,170);

    m_layout = new QGridLayout(this);
    setLayout(m_layout);
    m_layout->setSizeConstraint(QLayout::SetMaximumSize);

    QLabel* lab;
    QLineEdit* line;
    QPushButton* butt;

    for (auto i = 0; i < N; ++i) {
        lab = new QLabel("label "+QString::number(i),this);
        lab->setGeometry(QRect(QPoint(30,30+40*i),QSize(50,20)));
        lab->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
        m_layout->addWidget(lab, i, 0);

        line = new QLineEdit(this);
        line->setGeometry(QRect(QPoint(110,30+40*i),QSize(50,20)));
        line->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
        m_layout->addWidget(line, i, 1);

        butt = new QPushButton("button "+QString::number(i),this);
        butt->setGeometry(QRect(QPoint(190,30+40*i),QSize(50,20)));
        butt->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
        m_layout->addWidget(butt, i, 2);
    }

    //QSpacerItem* up = new QSpacerItem()
}

task_9::~task_9()
{
    delete m_layout;
}
