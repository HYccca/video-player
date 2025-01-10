#ifndef MAINWINDOW_H
#define MAINWINDOW_H
class QPushButton;
class QLabel;
class QFileSystemModel;
class QDropEvent;
class QDragEnterEvent;
class QPixmap;
class QTreeWidgetItem;
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
private:
    QPushButton *ptn;
    int width;
    QFileSystemModel *m_model;
    enum itemtype{itgroup=1000,itmusic,itvedio,ittop};
    QPixmap m_pixmap;
    float m_ratio;
    QTreeWidgetItem *like;
private slots:
    void on_action1_0_triggered(bool checked);

    void on_action1_5_triggered(bool checked);

    void on_action0_5_triggered(bool checked);

    void on_action2_0_triggered(bool checked);

    void on_addfolder_triggered();

    void on_addfile_triggered();

    void on_pushButton_2_clicked(bool checked);
    void on_actshun_triggered(bool checked);
    void on_actxun_triggered(bool checked);
    void on_actrandom_triggered(bool checked);

    void on_treeWidget_currentItemChanged(QTreeWidgetItem *current, QTreeWidgetItem *previous);


    void on_pushButton_6_clicked();

protected:
    virtual void dragEnterEvent(QDragEnterEvent *event) override;
    virtual void dropEvent(QDropEvent *event) override;


    // QObject interface
public:
    virtual bool eventFilter(QObject *watched, QEvent *event) override;

};



#endif // MAINWINDOW_H
