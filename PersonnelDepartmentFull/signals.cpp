#include "signals.h"
#include "config.h"
#include "mainwidget.h"
#include <QFile>
#include <QVBoxLayout>
#include <QDebug>
#include "user.h"
#include <widget_Sign.h>
#include <widget_SignUp.h>

Signals::Signals(QWidget *parent)
    : QWidget(parent),
      m_currentWidget(nullptr)
{
    setWindowTitle(Config::nameApplication);

    if (!QFile(Config::Usersbin).exists())
    {
        m_currentWidget = new SignUp(this);
        connect(m_currentWidget, SIGNAL(openAuthorization()),
                this, SLOT(Authorization()));
    }
    else
    {
        m_currentWidget = new Sign(this);
        connect(m_currentWidget, SIGNAL(succesfulEntry(Users*)),
                this, SLOT(slotMainWidget(Users*)));
    }

    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->setMargin(0);
    layout->addWidget(m_currentWidget);
    setLayout(layout);
}


Signals::~Signals()
{
    delete m_currentWidget;
}

void Signals::Authorization()
{
    delete m_currentWidget;
    m_currentWidget = new Sign(this);
    this->resize(400, 300);
    connect(m_currentWidget, SIGNAL(succesfulEntry(Users*)),
            this, SLOT(slotMainWidget(Users*)));

    layout()->addWidget(m_currentWidget);
}

void Signals::slotMainWidget(Users *user)
{
    delete m_currentWidget;
    m_currentWidget = new MainWidget(*user, this);
    this->resize(1400, 600);
    connect(m_currentWidget, SIGNAL(changeUser()),
            this, SLOT(Authorization()));
    layout()->addWidget(m_currentWidget);
}
