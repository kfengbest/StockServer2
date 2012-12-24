#include "workerthread.h"

WorkerThread::WorkerThread(QObject *parent) :
    QObject(parent)
{
    m_thread = new QThread();
    moveToThread(m_thread);
    m_thread->start();
}
