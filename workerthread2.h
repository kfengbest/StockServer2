#ifndef WORKERTHREAD2_H
#define WORKERTHREAD2_H

#include <QObject>
#include <QThread>

class WorkerThread2 : public QObject
{
    Q_OBJECT
public:
    explicit WorkerThread2(QObject *parent = 0);

    void print();

signals:

public slots:

private:
    QThread* m_thread;
};

#endif // WORKERTHREAD2_H
