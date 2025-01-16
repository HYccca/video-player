#include "aianalysis.h"
#include "ui_aianalysis.h"

AIanalysis::AIanalysis(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AIanalysis)
{
    ui->setupUi(this);
}

AIanalysis::~AIanalysis()
{
    delete ui;
}

void AIanalysis::on_pushButton_2_clicked()
{
    currenttheme=musicnow;
    ui->plainTextEdit->clear();
    ui->plainTextEdit->appendPlainText("这曲子XXXX，应该是XX类吧，我这有一款XX风格的主题");
}

void AIanalysis::on_pushButton_3_clicked()
{
    currenttheme=musiclike;
    ui->plainTextEdit->clear();
    ui->plainTextEdit->appendPlainText("你的收藏夹里音频文件一共有XX个，其中包括XX类音乐XX个，占比高达XX%。你播放包含XX元素的音乐长达XX分钟，位列第一，我这有一款XX风格的主题，想试试吗");
}

void AIanalysis::on_pushButton_4_clicked()
{
    currenttheme=videonow;
    ui->plainTextEdit->clear();
    ui->plainTextEdit->appendPlainText("这视频里的人物XXXX，传达出XXX的情感，我这有一款XX风格的主题");
}

void AIanalysis::on_pushButton_5_clicked()
{
    currenttheme=videolike;
    ui->plainTextEdit->clear();
    ui->plainTextEdit->appendPlainText("你的收藏夹里视频文件一共有XX个，其中包括XX类视频XX个，占比高达XX%。你播放包含XX元素的视频长达XX分钟，位列第一，我这有一款XX风格的主题，你要试试吗");
}


void AIanalysis::on_pushButton_clicked()
{
    emit theme(currenttheme);
}

void AIanalysis::closeEvent(QCloseEvent *event)
{
    event->accept();
    emit changeenanbel(true);
}

void AIanalysis::showEvent(QShowEvent *event)
{
    event->accept();
    emit changeenanbel(false);
}

