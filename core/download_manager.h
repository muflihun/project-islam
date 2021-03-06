#ifndef DOWNLOAD_MANAGER_H
#define DOWNLOAD_MANAGER_H

#include <QString>
#include <QList>

#include <QNetworkAccessManager>
class QEventLoop;

class DownloadManager : public QNetworkAccessManager
{
    Q_OBJECT
public:
    explicit DownloadManager(QObject* parent = 0);
    virtual ~DownloadManager();
    bool downloadFile(const QString& url, const QString& filename);
    QByteArray downloadBytes(const QString& url, bool* ok = nullptr);
signals:
    void downloadProgress(qint64 done, qint64 total);
private:
    QList<QEventLoop*> m_downloadingEventLoops;
};

#endif // DOWNLOAD_MANAGER_H
