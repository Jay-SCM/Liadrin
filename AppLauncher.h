#ifndef APPLAUNCHER_H
#define APPLAUNCHER_H

#include <QMainWindow>
#include <QListWidget>
#include <QLineEdit>
#include <QScrollArea>
#include <QGridLayout>
#include <QPushButton>
#include <QLabel>
#include <QTextEdit>

QT_BEGIN_NAMESPACE
namespace Ui { class AppLauncher; }
QT_END_NAMESPACE

class AppLauncher : public QMainWindow {
    Q_OBJECT

public:
    explicit AppLauncher(QWidget *parent = nullptr);
    ~AppLauncher();

private slots:
    void onCategoryChanged();
    void onSearch();
    void onAppClicked(const QString &appPath);

private:
    Ui::AppLauncher *ui;
    QGridLayout *appGridLayout;
    QTextEdit *notepad; // Declare QTextEdit member

    void populateCategories();
    void populateApps(const QString &category);
    void addAppCard(const QString &appName, const QString &iconPath, const QString &appPath);
};

#endif // APPLAUNCHER_H
