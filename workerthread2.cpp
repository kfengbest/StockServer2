#include "workerthread2.h"

WorkerThread2::WorkerThread2(QObject *parent) :
    QObject(parent)
{
    m_thread = new QThread();
    moveToThread(m_thread);
    m_thread->start();
}

void WorkerThread2::print()
{
    // qDebug() << print();
}
