#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QApplication>
#include <QMouseEvent>
#include <role.h>
#include <obstacle.h>
#include <QLCDNumber>
#include "easymusic.h"
#include "start_page.h"
#include "bg.h"
#include "floor.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    int score;
protected:
    void paintEvent(QPaintEvent *);    //繪製背景圖
    void mousePressEvent(QMouseEvent *event);	//滑鼠點下事件
    void keyPressEvent(QKeyEvent *event);	//鍵盤事件
    void keyReleaseEvent(QKeyEvent *event);

private slots:
    void birdAction();			//鳥的動作
    void pipeAction();			//綠色管子的動作
    void collisDete();			//碰撞偵測
    void birdAround();          //鳥繞圈
private:

    void birdup();              // 設定鳥飛行速度參數
    void createPipe();			// 產生水管
    void createBird();          // 產生角色 - 鳥
    void createBird2();
    void gameLose();			 //遊戲結束
    void gameStart();			 //遊戲開始
    void gameRedy();             //遊戲預備

    QString s[10];
    int r;
    bool key_space_down; //空白鍵按下
    floors *flr;
    bg *bgs;
    ROLE *birds;			// 建立一隻角色 - 鳥
    double birdV;			// 鳥的速度
    int    up;              // 鳥的上下
    QTimer *birdTimer;
    QTimer *birdTimer2;
    double timedata;        // birdTimer interval
    double timedata2;
    double birdV_array[15];
    double index_birdV;
    enum{lose=0,start=1,redy=2};  // Enum三個參數, 代表遊戲狀態
    int gamemod;		//目前遊戲狀態, 0=lose, 1=start, 2=redy
    // 遊戲狀態預設流程： redy -> start -> lose -> redy -> start .... 不斷循環
    enum{pipeCount=5};		//  pipe 數量
    OBSTACLE *pipe[pipeCount];	// 建立水管
    QTimer *pipeTimer;
    int pipeTValue;     // pipeTimer interval
    int pipeXgap;		// 管子間距
    int lastPipe;		// the flag of rightest pipe

    int win_width;      // 視窗寬度
    int win_height;     // 視窗高度

    bool rt;   // floor moves right
    start_page *spg;
    easyMusic *bgm;     //音樂
    easyMusic *fgm;
};

#endif // MAINWINDOW_H
