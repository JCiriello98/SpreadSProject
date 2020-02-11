#pragma once
#ifndef ELEMENT_H
#define ELEMENT_H

class element {
	private
		static int elemCount = 0;
		string elemName;

	public
		//constructor
		element(string name) {
		elemCount++;
		elemName = name;
	}
};
#endif