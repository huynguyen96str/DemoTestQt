#include "widget.h"

#include <QApplication>
#include <QStandardItemModel>
#include <QTableView>
#include <QTextBrowser>
#include <QVBoxLayout>
#include <QtWebView/QtWebView>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

//    // Tạo một QTextBrowser

       QString html=
           "<html >                                                                   "
           "        <meta charset='UTF-8'>                                                    "
           "         <meta http-equiv='X-UA-Compatible' content='IE=edge'>                    "
           "         <meta name='viewport' content='width=device-width, initial-scale=1.0'>   "
           "    <head>                                                                         "
           "        <style type='text/css'>                                                                    "
           "            table {                                                                "

           "                border-collapse:collapse;                                          "
           "                padding:5px;                                                       "
           "    background: #a0a0a0;"
               "border-width: 0;"
               "border-style: solid;"
               "border-color: red;"
           "            }                                                                      "

           "            table th {                                                             "

           "                padding:5px;                                                       "
           "                background: #f0f0f0;                                               "
           "                color: #313030;                                                    "
           "            }                                                                      "
           "            table td {                                                             "

           "                text-align:center;                                                 "
           "                padding:5px;                                                       "
           "                background: #ffffff;                                               "
           "                color: #313030;                                                    "
           "            }                                                                      "
           "        </style>                                                                   "
           "    </head>                                                                        "
           "                                                                                   "
           "    <body>                                                                         "
           "        <table >                                                                    "
           "            <thead>                                                                "
           "                <tr>                                                               "
           "                    <th rowspan='2'>Header 1</th>                                  "
           "                    <th>Header 2</th>                                              "
           "                    <th>Header 3</th>                                              "
           "                    <th>Header 4</th>                                              "
           "                </tr>                                                              "
           "                <tr>                                                               "
           "                    <!-- //<th>Header 1.1</th> -->                                 "
           "                    <th>Header 2.1</th>                                            "
           "                    <th>Header 3.1</th>                                            "
           "                    <th>Header 4.1</th>                                            "
           "                </tr>                                                              "
           "            </thead>                                                               "
           "            <tbody>                                                                "
           "                <tr>                                                               "
           "                    <td>1</td>                                                     "
           "                    <td>2</td>                                                     "
           "                    <td>3</td>                                                     "
           "                    <td>4</td>                                                     "
           "                </tr>                                                              "
           "                <tr>                                                               "
           "                    <td>5</td>                                                     "
           "                    <td>6</td>                                                     "
           "                    <td>7</td>                                                     "
           "                    <td>8</td>                                                     "
           "                </tr>                                                              "
           "                <tr>                                                               "
           "                    <td>9</td>                                                     "
           "                    <td>0</td>                                                     "
           "                    <td>1</td>                                                     "
           "                    <td>2</td>                                                     "
           "                </tr>                                                              "
           "                <tr>                                                               "
           "                    <td>3</td>                                                     "
           "                    <td>4</td>                                                     "
           "                    <td>5</td>                                                     "
           "                    <td>6</td>                                                     "
           "                </tr>                                                              "
           "            </tbody>                                                               "
           "            <tfoot>                                                                "
           "                <tr>                                                               "
           "                    <th>Header 1.1</th>                                            "
           "                    <th>Header 2.1</th>                                            "
           "                    <th>Header 3.1</th>                                            "
           "                    <th>Header 4.1</th>                                            "
           "                </tr>                                                              "
           "            </tfoot>                                                               "
           "        </table>                                                                   "
           "                                                                                   "
           "    </body>                                                                        "
           "                                                                                   "
           "    </html>                                                                        ";

        QTextBrowser *browser = new QTextBrowser();
         QTextDocument *doc = new QTextDocument;
         doc->setHtml(html);

         browser->setDocument(doc);
        //browser->setHtml(html);
       browser->show();


//    QWidget window;
//       QVBoxLayout *layout = new QVBoxLayout(&window);
//       QTextBrowser *browser = new QTextBrowser;

//       // Tạo bảng với 2 cột và 3 hàng
//       QString html = "<html><head><style>table { border-collapse: collapse; width: 100%; } th, td { border: 1px solid black; padding: 10px; } th { background-color: gray; color: white; }</style></head><body>";
//       html += "<table><tr><th>Name</th><th>Age</th></tr>";
//       html += "<tr><td>John Doe</td><td>30</td></tr>";
//       html += "<tr><td>Jane Doe</td><td>28</td></tr>";
//       html += "<tr><td>Jim Smith</td><td>35</td></tr></table></body></html>";

//       browser->setHtml(html);
//       layout->addWidget(browser);
//       window.show();

    return a.exec();
}
