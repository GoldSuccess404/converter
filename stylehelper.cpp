#include "stylehelper.h"



QString styleHelper::getStyleLineEdit()
{
    return "QLineEdit{"
           "border: none;"
           "border: 3px solid rgb(103, 255, 230);"
           "border-left: none;"
           "background: none;"
           "background-color: #202e42;"
           "font-family: Lucida Sans Typewriter;"
           "font-weight: bold;"
           "font-size: 17px;"
           "color: white;"
           "}";
}

QString styleHelper::getStyleComboBox()
{
  return "QComboBox{"
          "background: none;"
          "background-color: #202e42;"
          "border: 3px solid rgb(103, 255, 230);"
          "border-right: none;"
          "color: rgb(255, 178, 238);"
          "font-family: Showcard Gothic;"

          "font-size: 13px;"
          "}"
          "QComboBox QAbstractItemView {"
          "color: rgb(255, 178, 238);"
          "padding:6px;"
          "border: 2px solid rgb(103,255,230);"
          "}"
          "QComboBox QAbstractItemView::item {"
          "height: 30px;"
          "}"
          "QComboBox QAbstractScrollArea QScrollBar:vertical {"
          "width: 8px;"
          "background: none;"
          "background-color:  #d0d2d4;"
          "}"
          "QComboBox QAbstractScrollArea QScrollBar::handle:vertical {"
          "border-radius: 4px;"
          "background: rgb(77, 57, 67);"
          "}"
          "QComboBox QAbstractScrollArea QScrollBar::handle:vertical:hover {"
          "background: rgb(77, 57, 120);"
          "}"
          ;

}

QString styleHelper::getStyleLabel()
{
  return "QLabel{"
         "color: white;"
         "font-family: Arial Black;"
         "font-size: 25px"
         "}";
}

QString styleHelper::getStylePushButton()
{
  return "QPushButton{"
         "background: none;"
         "background-color:#3a3a3a;"
         "border: 1px solid rgb(103, 255, 230);"
         "border-radius: 10px;"
         "font-family: Arial Black;"
         "margin-bottom:5px;"
         "color: white;"
         "padding-bottom: 2px;"
         "font-size:14px;"
         "}"
         "QPushButton:hover{"
         "background-color:#666666;"
         "}"
         "QPushButton:pressed{"
         "background-color:#3a3a33;"
         "}";
}
