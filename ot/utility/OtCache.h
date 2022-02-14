//	ObjectTalk Scripting Language
//	Copyright (c) 1993-2022 Johan A. Goossens. All rights reserved.
//
//	This work is licensed under the terms of the MIT license.
//	For a copy, see <https://opensource.org/licenses/MIT>.


#pragma once


//
//	Include files
//

#include <list>
#include <unordered_map>

#include "OtException.h"


//
//	OtCache class (using Least Recently Used (LRU) algorithm)
//

template<typename K, typename V, size_t S = 1024>
class OtCache
{
public:
	// change the cache size
	void setSize(size_t s) {
		size = s;

		// remove entries if required
		while (index.size() > size) {
			index.erase(items.back().first);
			items.pop_back();
		}
	}

	// return the cache size
	size_t getSize() {
		return size;
	}

	// return number of cache entries
	size_t getNumberOfEntries() {
		return items.size();
	}

	// remove all entries
	void clear() {
		items.clear();
		index.clear();
	}

	// set or update an entry
	void set(const K key, const V value) {
		// see if this is a known entry
		auto pos = index.find(key);

		if (pos == index.end()) {
			// add new cache entry
			items.emplace_front(key, value);
			index.emplace(key, items.begin());

			// trim cache if required
			if (index.size() > size) {
				index.erase(items.back().first);
				items.pop_back();
			}

		} else {
			// replace existing cache entry
			pos->second->second = value;
			items.splice(items.begin(), items, pos->second);
		}
	}

	// see if entry is in cache
	bool has(const K key) {
		return index.find(key) != index.end();
	}

	// get a cache entry and move it to the front for LRU
	V get(const K key) {
		auto pos = index.find(key);

		if (pos == index.end()) {
			OtExcept("Invalid key for cache");
		}

		items.splice(items.begin(), items, pos->second);
		return pos->second->second;
	}

private:
	std::list<std::pair<K, V>> items;
	std::unordered_map<K, typename std::list<std::pair<K, V>>::iterator> index;
	size_t size = S;
};
