#include "workerthread3.h"

WorkerThread3::WorkerThread3(QObject *parent) :
    QObject(parent)
{
    m_thread = new QThread();
    moveToThread(m_thread);
    m_thread->start();
}
