#ifndef WORKERTHREAD3_H
#define WORKERTHREAD3_H

#include <QObject>
#include <QThread>

class WorkerThread3 : public QObject
{
    Q_OBJECT
public:
    explicit WorkerThread3(QObject *parent = 0);
    
    void run();

signals:
    
public slots:
    
private:
    QThread* m_thread;

};

#endif // WORKERTHREAD3_H
