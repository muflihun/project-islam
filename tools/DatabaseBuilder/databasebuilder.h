#ifndef DATABASEBUILDER_H
#define DATABASEBUILDER_H

#include <QDialog>
#include <vector>
#include "dataconverter.h"
namespace Ui {
class DatabaseBuilder;
}

class DatabaseBuilder : public QDialog
{
    Q_OBJECT
    
public:
    explicit DatabaseBuilder(QWidget *parent = 0);
    ~DatabaseBuilder();
    
private slots:
    void on_btnBrowse_clicked();
    
    void on_btnBrowse2_clicked();
    
    void on_btnBrowse3_clicked();
    
    void on_pushButton_clicked();
    
    void on_btnBrowse4_clicked();
    
    void on_btnBrowse5_clicked();
    
    void on_btnBuild_clicked();
    
    void on_btnReset_clicked();
    
    void on_btnReset_2_clicked();
    
    void on_btnAdd_clicked();
    
    void on_pushButton_2_clicked();
    
    void on_pushButton_3_clicked();
    
    void on_btnAdd_2_clicked();
    
private:
    QStringList m_sqlFiles;
    Ui::DatabaseBuilder *ui;
    std::vector<ConvertData> m_convertDataList;
};

#endif // DATABASEBUILDER_H
