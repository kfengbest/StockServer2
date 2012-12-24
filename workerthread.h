#ifndef WORKERTHREAD_H
#define WORKERTHREAD_H

#include <QObject>
#include <QThread>

class WorkerThread : public QObject
{
    Q_OBJECT
public:
    explicit WorkerThread(QObject *parent = 0);

signals:

public slots:

private:
    QThread* m_thread;
};

#endif // WORKERTHREAD_H
