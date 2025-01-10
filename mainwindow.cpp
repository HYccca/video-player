#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include<QPushButton>
#include<QLabel>
#include<QVBoxLayout>
#include<QTextEdit>
#include<QMenu>
#include<QActionGroup>
#include<QFileSystemModel>
#include<QFileDialog>
#include<QMimeData>
#include<QDropEvent>
#include<QDragEnterEvent>
#include<QPainter>
#include<QAbstractItemView>
#include<QPixmap>
#include<QTreeWidgetItem>
#include<QPixmap>
#include<QMessageBox>
#include<QSizePolicy>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->centralwidget->setAttribute(Qt::WA_Hover,true);
    setAcceptDrops(true);
    ui->pushButton->setStyleSheet("QPushButton{background-color:transparent;}");
    ui->pushButton_2->setStyleSheet("QPushButton{background-color:transparent;}");
    ui->pushButton_3->setStyleSheet("QPushButton{background-color:transparent;}");

    ui->pushButton_4->setStyleSheet("QPushButton{background-color:transparent;}");
    ui->showfull->setStyleSheet("QPushButton{background-color:transparent;}");
    ui->speedbutton->setStyleSheet("QToolButton{background-color:transparent;}");
    ui->label_3->setStyleSheet("QLabel{background-color:transparent;}");

    auto menu=new QMenu("设");
    auto menutheme=new QMenu("主题");
    auto themegroup=new QActionGroup(menutheme);
    themegroup->addAction(ui->actthemeblack);
    themegroup->addAction(ui->actthemewhite);
    menutheme->addAction(ui->actthemeblack);
    menutheme->addAction(ui->actthemewhite);
    auto menubofang=new QMenu("播放");
    auto menuhot=new QMenu("热键");
    menu->addMenu(menutheme);
    menu->addMenu(menubofang);
    menu->addMenu(menuhot);
    ui->menuwidget->setMenu(menu);

    auto bofanggroup=new QActionGroup(menubofang);
    menubofang->addAction(ui->actrandom);
    menubofang->addAction(ui->actxun);
    menubofang->addAction(ui->actshun);
    bofanggroup->addAction(ui->actrandom);
    bofanggroup->addAction(ui->actxun);
    bofanggroup->addAction(ui->actshun);
    ui->toolButton_2->setMenu(menubofang);


    auto menuspeed=new QMenu("倍速播放");
    auto speedgroup=new QActionGroup(menuspeed);
    menuspeed->addAction(ui->action1_0);
    menuspeed->addAction(ui->action1_5);
    menuspeed->addAction(ui->action0_5);
    menuspeed->addAction(ui->action2_0);
    speedgroup->addAction(ui->action1_0);
    speedgroup->addAction(ui->action1_5);
    speedgroup->addAction(ui->action2_0);
    speedgroup->addAction(ui->action0_5);
    ui->speedbutton->setMenu(menuspeed);

    ui->treeWidget->clear();
    QTreeWidgetItem *header = new QTreeWidgetItem();
    header->setText(0,"name");
    header->setTextAlignment(0,Qt::AlignHCenter|Qt::AlignVCenter);
    ui->treeWidget->setHeaderItem(header);


    QTreeWidgetItem *history=new QTreeWidgetItem(ittop);
    history->setText(0,"播放列表");
    history->setFlags(Qt::ItemIsSelectable|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
    //history->setCheckState(0,Qt::Checked);
    like=new QTreeWidgetItem(ittop);
    like->setText(0,"收藏夹");
    like->setFlags(Qt::ItemIsSelectable|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
    ui->treeWidget->addTopLevelItem(history);
    ui->treeWidget->addTopLevelItem(like);
    ui->treeWidget->setCurrentItem(history);

    ui->centralwidget->installEventFilter(this);
    ui->treeWidget->installEventFilter(this);


    ui->treeWidget->setDragEnabled(true);
    ui->treeWidget->setAcceptDrops(true);
    ui->treeWidget->setDefaultDropAction(Qt::CopyAction);
    ui->treeWidget->setDragDropMode(QAbstractItemView::DragDrop);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::dragEnterEvent(QDragEnterEvent *event)
{
    if(event->mimeData()->hasUrls())
    {
        QString filename=event->mimeData()->urls().at(0).fileName();
        QFileInfo fileinfo(filename);
        QString ex=fileinfo.suffix().toUpper();
        if(ex=="MOV"||ex=="JPG")
        {
            event->acceptProposedAction();//接受这个东西进来
        }
        else
        {
            event->ignore();
        }
    }
    else
        event->ignore();
}


void MainWindow::on_action1_0_triggered(bool checked)
{
    if(checked)
    {
        ui->speedbutton->setText("X1.0");
    }
    //函数
}


void MainWindow::on_action1_5_triggered(bool checked)
{
    if(checked)
    {
        ui->speedbutton->setText("X1.5");
    }
    //函数
}


void MainWindow::on_action0_5_triggered(bool checked)
{
    if(checked)
    {
        ui->speedbutton->setText("X0.5");
    }
    //函数
}


void MainWindow::on_action2_0_triggered(bool checked)
{
    if(checked)
    {
        ui->speedbutton->setText("X2.0");
    }
    //函数
}

bool MainWindow::eventFilter(QObject *watched, QEvent *event)
{
    if(watched==ui->centralwidget)
    {
        if(event->type()==QEvent::HoverEnter)
        {
            ui->progressbar->setHidden(false);
        }
        if(event->type()==QEvent::HoverLeave)
        {
            ui->progressbar->setHidden(true);
        }
    }
    if(watched==ui->treeWidget)
    { if(event->type()==QEvent::KeyPress)
        {
            QKeyEvent *keyevent=static_cast<QKeyEvent*>(event);
            if(keyevent->key()!=Qt::Key_Delete)
                return QWidget::eventFilter(watched,event);
            if(ui->treeWidget->currentItem()->type()==ittop)
            {
                return QWidget::eventFilter(watched,event);
            }
            QString dlgtitle="删除";
            QString strinfo="是否删除";
            int result=QMessageBox::question(this,dlgtitle,strinfo,
                                               QMessageBox::Yes|QMessageBox::No|QMessageBox::Cancel,
                                               QMessageBox::NoButton);
            if(result==QMessageBox::Yes)
            {
                QTreeWidgetItem *curitem=ui->treeWidget->currentItem();
                if(curitem->parent()!=nullptr){
                    curitem->parent()->removeChild(curitem);
                }
            }
            else if(result==QMessageBox::No)
                return QWidget::eventFilter(watched,event);
            else if(result==QMessageBox::Cancel)
                return QWidget::eventFilter(watched,event);
        }
        return QWidget::eventFilter(watched,event);
    }
    return true;
}
void MainWindow::on_addfolder_triggered()
{
    QString dir=QFileDialog::getExistingDirectory();
    if(dir.isEmpty())return;
    QTreeWidgetItem *paritem,*item;
    item=ui->treeWidget->currentItem();
    if(item->type()==itmusic|item->type()==itvedio)
    {
        paritem=item->parent();
    }
    else
        paritem=item;

    QTreeWidgetItem *folderItem = new QTreeWidgetItem(itgroup);
    folderItem->setText(0, dir);
    folderItem->setFlags(Qt::ItemIsSelectable | Qt::ItemIsUserCheckable | Qt::ItemIsEnabled);
    paritem->addChild(folderItem);
    QDir directory(dir);
    QFileInfoList fileList = directory.entryInfoList(QStringList("*.MOV"), QDir::Files | QDir::NoDotAndDotDot);
    foreach (QFileInfo fileInfo, fileList)
    {
        // 为每个 .mp3 文件创建一个新的 QTreeWidgetItem
        QTreeWidgetItem *fileItem = new QTreeWidgetItem(itvedio);
        fileItem->setText(0, fileInfo.fileName());
        fileItem->setFlags(Qt::ItemIsSelectable | Qt::ItemIsUserCheckable | Qt::ItemIsEnabled);
        folderItem->addChild(fileItem);
    }
    paritem->setExpanded(true);
}



void MainWindow::on_addfile_triggered()
{
    QStringList files=QFileDialog::getOpenFileNames(this,"选择文件","","视频文件(*.MOV);;音频文件(*.JPG)");
    if(files.isEmpty())return;

    QTreeWidgetItem *paritem,*item;
    item=ui->treeWidget->currentItem();
    if(item->type()==itmusic|item->type()==itvedio)
    {
        paritem=item->parent();
    }
    else
        paritem=item;
    for(int i=0;i<files.size();i++)
    {
        //文件载入
        QString filename=files.at(i);
        QFileInfo fileinfo(filename);
        QString nodetext=fileinfo.fileName();
        QTreeWidgetItem *item=new QTreeWidgetItem(itvedio);
        item->setText(0,nodetext);
        item->setFlags(Qt::ItemIsSelectable|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        item->setData(0,Qt::UserRole,QVariant(filename));
        paritem->addChild(item);
        //图片显示
        m_pixmap.load(filename);
        int w=ui->label->width();
        int realw=m_pixmap.width();
        m_ratio=float(w)/realw;
        QPixmap pix=m_pixmap.scaledToWidth(w);
        ui->label->setPixmap(pix);
        width=w;
    }
    paritem->setExpanded(true);
}
void MainWindow::dropEvent(QDropEvent *event)
{
    QString filename=event->mimeData()->urls().at(0).path();
    filename=filename.right(filename.length()-1);
    QTreeWidgetItem *paritem,*item;
    item=ui->treeWidget->currentItem();
    if(item->type()==itmusic|item->type()==itvedio)
    {
        paritem=item->parent();
    }
    else
        paritem=item;
    QFileInfo fileinfo(filename);
    QString nodetext=fileinfo.fileName();
    QTreeWidgetItem *item1=new QTreeWidgetItem(itvedio);
    item1->setText(0,nodetext);
    item1->setFlags(Qt::ItemIsSelectable|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
    item1->setData(0,Qt::UserRole,QVariant(filename));
    m_pixmap.load(filename);
    int w=ui->label->width();
    int realw=m_pixmap.width();
    m_ratio=float(w)/realw;
    QPixmap pix=m_pixmap.scaledToWidth(w);
    ui->label->setPixmap(pix);
    width=w;
    paritem->addChild(item1);
    paritem->setExpanded(true);

}
// void MainWindow::paintEvent(QPaintEvent *event)
// {
//     QPainter painter(this);
//     painter.drawPixmap(0,0,1000,this->height(),QPixmap(":/resource/source/1.JPG"));
// }


void MainWindow::on_pushButton_2_clicked(bool checked)
{
    if(checked==true)
    {
        ui->widget_2->setHidden(false);
        int w=width;
        int realw=m_pixmap.width();
        m_ratio=float(w)/realw;
        QPixmap pix=m_pixmap.scaledToWidth(w);
        ui->label->setPixmap(pix);
    }
    else
    {
        ui->widget_2->setHidden(true);
        int w=ui->splitter_2->width()-20;
        int realw=m_pixmap.width();
        m_ratio=float(w)/realw;
        QPixmap pix=m_pixmap.scaledToWidth(w);
        ui->label->setPixmap(pix);
    }
}


void MainWindow::on_actshun_triggered(bool checked)
{
    if(checked)
    {
        ui->toolButton_2->setText("顺序播放");
    }
}

void MainWindow::on_actxun_triggered(bool checked)
{
    if(checked)
    {
        ui->toolButton_2->setText("循环播放");
    }
}

void MainWindow::on_actrandom_triggered(bool checked)
{
    if(checked)
    {
        ui->toolButton_2->setText("随机播放");
    }
}

void MainWindow::on_treeWidget_currentItemChanged(QTreeWidgetItem *current, QTreeWidgetItem *previous)
{
    if(current==nullptr) return;
    if(current->type()==itvedio)
    {
        ui->pushButton_6->setEnabled(true);
        QString filename=current->data(0,Qt::UserRole).toString();
        m_pixmap.load(filename);

        int w=ui->label->width()-10;
        int realw=m_pixmap.width();
        m_ratio=float(w)/realw;
        QPixmap pix=m_pixmap.scaledToWidth(w);
        ui->label->setPixmap(pix);
        width=ui->label->width();
    }
    if(current->type()==ittop||current->type()==itgroup)
    {
        ui->pushButton_6->setEnabled(false);
    }
}


void MainWindow::on_pushButton_6_clicked()
{
    QTreeWidgetItem *paritem,*item;
    item=ui->treeWidget->currentItem();
    paritem=like;

    //文件载入
    QString filename=item->data(0,Qt::UserRole).toString();
    QFileInfo fileinfo(filename);
    QString nodetext=fileinfo.fileName();
    QTreeWidgetItem *item1=new QTreeWidgetItem(itvedio);
    item1->setText(0,nodetext);
    item1->setFlags(Qt::ItemIsSelectable|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
    item1->setData(0,Qt::UserRole,QVariant(filename));
    paritem->addChild(item1);
    paritem->setExpanded(true);
}

