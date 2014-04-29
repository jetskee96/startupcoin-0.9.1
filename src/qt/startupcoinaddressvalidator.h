// Copyright (c) 2011-2014 The StartUpcoin developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef STARTUPCOINADDRESSVALIDATOR_H
#define STARTUPCOINADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class StartUpcoinAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit StartUpcoinAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** StartUpcoin address widget validator, checks for a valid startupcoin address.
 */
class StartUpcoinAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit StartUpcoinAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // STARTUPCOINADDRESSVALIDATOR_H
