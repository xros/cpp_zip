#include "mainwindow.h"
#include <QApplication>
#include <QDebug>
#include <QFile>
#include <JlCompress.h>

void CompressDir(QString ZipFile, QString Directory)
{
    if (JlCompress::compressDir(ZipFile, Directory))
    {
        qDebug() << "Created: " << ZipFile;
    }else{
        qDebug() << "Could not create: " << ZipFile;
    }
}

void DecompressDir(QString ZipFile, QString Directory)
{
    QStringList list= JlCompress::extractDir(ZipFile, Directory);
    foreach (QString item, list)
    {
        qDebug() << "Extraced: " << item;
    }
}

void CompressFiles(QString ZipFile, QStringList Files)
{
    if (JlCompress::compressFiles(ZipFile, Files))
    {
        qDebug() << "Created: " << ZipFile;
    }else{
        qDebug() << "Could not create: " << ZipFile;
    }
}

void DecompressFiles(QString ZipFile, QStringList Files, QString Directory)
{
    QStringList list = JlCompress::extractFiles(ZipFile, Files, Directory);

    foreach(QString item, list)
    {
        qDebug() << "Extracted: " << item;
    }
}

void ListContents(QString ZipFile)
{
    QFile File(ZipFile);
    if (!File.exists())
    {
        qDebug() << "Zip file not found!";
        return;
    }

    QStringList list = JlCompress::getFileList(ZipFile);
    foreach(QString item, list)
    {
        qDebug() << item;
    }

}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // write some thing here
    QString ZipFile = "/home/alex/joy/cpp_zip/test.zip";
    QString OriginalDir = "/home/alex/joy/cpp_zip/Original";
    QString NewDir = "/home/alex/joy/cpp_zip/NewDir";
    QString SingleFile = OriginalDir + "/drones.jpg";

    // Compress a directory
    CompressDir(ZipFile, OriginalDir);

    // Compress file(s)
    //CompressFiles(ZipFile, QStringList() << SingleFile);

    // List contents of a zip file
    ListContents(ZipFile);

    // Decompress an archive to a directory
    //DecompressDir(ZipFile, NewDir);

    // Decompress a single file from a zipped file
    DecompressFiles(ZipFile,QStringList() << "future.jpg", NewDir );


    MainWindow w;
    w.show();

    return a.exec();
}
