/* This file is part of the KDE project
   Copyright (C) 2004 Cedric Pasteur <cedric.pasteur@free.fr>
   Copyright (C) 2004  Alexander Dymo <cloudtemple@mskat.net>

   This library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Library General Public
   License as published by the Free Software Foundation; either
   version 2 of the License, or (at your option) any later version.

   This library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Library General Public License for more details.

   You should have received a copy of the GNU Library General Public License
   along with this library; see the file COPYING.LIB.  If not, write to
   the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.
*/

#ifndef KPROPERTY_PROPERTYEDITORITEM_H
#define KPROPERTY_PROPERTYEDITORITEM_H

#include <koffice_export.h>
#ifdef QT_ONLY
#include <qlistview.h>
#else
#include <klistview.h>
#endif

#define KPROPEDITOR_ITEM_MARGIN 2
#define KPROPEDITOR_ITEM_BORDER_COLOR QColor(200,200,200) //! \todo custom color?

template<class U> class QAsciiDict;


namespace KOProperty {

class EditorItemPrivate;
class Property;
class Editor;

/*! \brief
   \author Cedric Pasteur <cedric.pasteur@free.fr>
   \author Alexander Dymo <cloudtemple@mskat.net>
 */
#ifdef QT_ONLY
class KOPROPERTY_EXPORT EditorItem : public QListViewItem
#else
class KOPROPERTY_EXPORT EditorItem : public KListViewItem
#endif
{
	public:
		typedef QAsciiDict<EditorItem> Dict;

		/*! Creates an EditorItem child of \a parent, associated to \a property.
		 It \a property has not desctiption set, its name (i.e. not i18n'ed) is reused.
		*/
		EditorItem(Editor *editor, EditorItem *parent, Property *property,
			QListViewItem *after=0);

		//! Two helper contructors for subclass
		EditorItem(KListView *parent);
		EditorItem(EditorItem *parent, const QString &text);

		~EditorItem();

		//! \return a pointer to the property associated to this item.
		Property*	property();

	protected:
		/*! Reimplemented from KListViewItem to draw custom contents. Properties names are wriiten in bold if
		    modified. Also takes care of drawing borders around the cells as well as pixmaps or colors if necessary.
		*/
		virtual void paintCell(QPainter *p, const QColorGroup & cg, int column, int width, int align);

		/*! Reimplemented from KListViewItem to draw custom contents. It takes care of drawing the [+] and [-]
		    signs only if the item has children.
		*/
		virtual void paintBranches(QPainter *p, const QColorGroup &cg, int w, int y, int h);

		virtual void paintFocus(QPainter * p, const QColorGroup & cg, const QRect & r);

		virtual int compare( QListViewItem *i, int col, bool ascending ) const;

	protected:
		EditorItemPrivate  *d;
};

class KOPROPERTY_EXPORT EditorGroupItem : public EditorItem
{
	public:
		EditorGroupItem(EditorItem *parent, const QString &text);
		~EditorGroupItem();

	protected:
		/*! Reimplemented from KListViewItem to draw custom contents. */
		virtual void paintCell(QPainter *p, const QColorGroup & cg, int column, int width, int align);
		virtual void setup();
};

class KOPROPERTY_EXPORT EditorDummyItem : public EditorItem
{
	public:
		EditorDummyItem(KListView *parent);
		~EditorDummyItem();

	protected:
		virtual void setup();
		/*virtual void paintCell(QPainter *p, const QColorGroup & cg, int column, int width, int align);
		virtual void paintFocus(QPainter * p, const QColorGroup & cg, const QRect & r);*/
};


}

#endif