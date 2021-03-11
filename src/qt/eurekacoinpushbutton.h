#ifndef EUREKACOINPUSHBUTTON_H
#define EUREKACOINPUSHBUTTON_H
#include <QPushButton>
#include <QStyleOptionButton>
#include <QIcon>

class EurekacoinPushButton : public QPushButton
{
public:
    explicit EurekacoinPushButton(QWidget * parent = Q_NULLPTR);
    explicit EurekacoinPushButton(const QString &text, QWidget *parent = Q_NULLPTR);

protected:
    void paintEvent(QPaintEvent *) Q_DECL_OVERRIDE;

private:
    void updateIcon(QStyleOptionButton &pushbutton);

private:
    bool m_iconCached;
    QIcon m_downIcon;
};

#endif // EUREKACOINPUSHBUTTON_H
