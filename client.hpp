﻿#include <QDialog>
#include <QComboBox>
#include <QPushButton>
#include <QMessageBox>
#include <QLineEdit>
#include <QTimer>
#include <QLabel>
#include <QString>
#include <QVector>
#include <QThread>
#include <QMetaType>
#include <thread>
#include <string>
#include <utility>

static constexpr int MESSAGE_UPDATE_TYPE = 1;
static constexpr int COMMANDS_UPDATE_TYPE = 2;

typedef std::map<int, std::string> CommandMap;
typedef std::map<int, std::vector<std::string>> CommandArgMap;
typedef QVector<QString> StringVec;
Q_DECLARE_METATYPE(StringVec)

class Client : public QDialog
{
    Q_OBJECT
    QThread workerThread;

public:

    class MessageHandler {
    public:
        MessageHandler(std::function<void()> cb) : m_cb(cb) {}

        void operator()() { m_cb(); }

    private:
        std::function<void()> m_cb;
    };

    Client(QWidget *parent = nullptr);
    Client(QWidget *parent, int count, char** arguments);
    ~Client();
    void start();
    void closeConnection();
    void execute();
    MessageHandler createMessageHandler(std::function<void()> cb);

public slots:
    void sendMessage(const QString& s);
    void sendEncoded(std::string message);
    void sendFileEncoded(QByteArray bytes);
    void setSelectedApp(std::vector<QString> app_names);
    void sendFile(QByteArray bytes);

signals:
    void messageReceived(int t, QString s,QVector<QString> args);

private:
    void handleMessages();
    void sendPackets(uint8_t* data, int size);
    int argc;
    char** argv;
    int m_client_socket_fd;
    bool executing;
    CommandMap m_commands;
    CommandArgMap m_command_arg_map;
    std::vector<int> selected_commands;
    QByteArray outgoing_file;
};
