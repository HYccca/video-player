#ifndef AIANALYSIS_H
#define AIANALYSIS_H

#include <QDialog>

namespace Ui {
class AIanalysis;
}

class AIanalysis : public QDialog
{
    Q_OBJECT

public:
    explicit AIanalysis(QWidget *parent = nullptr);
    ~AIanalysis();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_clicked();

signals:
    int theme(int type);
    void changeenanbel(bool en);
private:
    Ui::AIanalysis *ui;
    enum themetype{musicnow=2000,musiclike,videonow,videolike};
    int currenttheme;

    // QWidget interface
protected:
    virtual void closeEvent(QCloseEvent *event) override;
    virtual void showEvent(QShowEvent *event) override;
};

#endif // AIANALYSIS_H
