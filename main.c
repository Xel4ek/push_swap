#include <stdio.h>
#include "push_swap.h"
#include <stdlib.h>

int main(int argc, char **argv) {
	t_list *list;
	t_list *buff;
	t_list *visited[4096] = {NULL};
	t_list *queue;
	int size;
	int *vector;
	int value;

	char *string;
	int max_steps;
	int deep;
	int p;
		char str[]="348 132 59 140 253 256 350 380 243 407 477 62 214 441 204 172 468 368 50 226 377 129 105 110 314 84 290 387 476 245 286 2 338 355 121 333 80 34 437 148 497 336 108 55 120 299 145 155 60 244 300 411 119 39 103 16 217 466 440 0 8 392 356 11 458 117 43 270 417 158 149 94 68 444 481 258 146 123 485 442 261 451 38 343 17 156 181 327 405 260 184 24 161 66 213 433 107 394 457 4 157 267 136 276 74 319 273 428 408 231 354 73 56 281 168 424 346 85 301 494 150 71 492 393 456 429 112 72 376 278 347 340 143 271 353 35 138 139 401 225 227 131 10 420 378 9 160 250 365 104 453 102 434 233 455 304 100 76 205 208 306 385 164 369 18 144 423 362 46 234 341 345 14 87 425 177 460 185 321 3 279 92 180 137 130 363 375 495 240 398 151 209 296 206 439 409 435 473 289 88 99 324 259 238 483 489 19 493 496 446 464 126 28 186 370 182 449 490 470 257 152 211 42 90 216 381 75 1 431 293 109 414 153 118 114 20 367 373 480 317 500 288 116 287 486 323 228 171 51 386 232 174 426 101 134 5 124 12 142 178 33 447 436 36 315 488 266 64 89 268 322 318 191 248 175 391 399 406 400 215 382 179 388 65 359 254 199 167 474 412 207 295 147 469 255 478 141 339 44 221 371 265 320 41 364 67 272 26 462 283 316 78 31 302 275 198 459 280 83 309 329 98 202 303 395 135 23 237 159 498 491 37 298 222 264 465 326 448 220 479 230 54 163 342 403 69 48 125 173 212 344 396 421 418 352 415 413 252 484 461 40 45 334 263 390 349 410 328 176 427 29 81 472 277 82 305 210 384 70 200 361 241 389 169 310 115 63 416 203 249 162 471 402 325 166 15 274 247 229 113 193 499 269 223 383 351 79 61 13 307 292 332 91 154 7 122 49 430 127 93 246 58 6 165 311 443 374 239 190 189 358 475 133 201 106 53 313 404 25 192 454 86 285 195 218 360 97 372 197 335 467 450 308 366 32 330 196 482 445 111 235 194 337 77 52 57 188 297 432 47 357 27 312 21 251 236 183 422 463 419 438 96 452 30 187 294 284 331 22 95 262 291 379 128 242 282 224 397 219 487 170";
				/*'124 236 58 272 66 371 258 246 249 340 151 98 376 9 29 295 279 291 35 157 224 235 389 367 199 296 104 273 323 139 207 255 32 84 215 119 344 247 205 171 244 281 158 397 162 242 395 396 155 317 212 343 179 324 113 7 306 106 284 336 229 95 270 24 129 217 67 120 277 140 263 392 384 265 309 381 302 40 352 125 334 181 169 282 345 350 12 314 90 361 126 30 5 206 87 110 382 197 385 393 165 377 202 369 294 17 97 172 210 333 93 8 54 356 53 305 136 254 65 144 107 253 118 185 178 47 137 10 49 252 111 303 52 288 77 386 82 337 328 192 62 222 14 100 198 363 180 59 38 250 121 18 19 51 351 290 227 128 81 21 300 289 379 318 234 45 115 308 359 387 26 131 316 71 122 105 141 168 194 130 174 269 297 56 154 383 91 74 127 260 4 99 231 213 92 13 175 237 37 346 164 16 370 69 326 31 187 380 204 239 201 57 163 167 276 360 61 160 43 189 310 0 372 195 96 102 138 166 223 339 366 275 338 76 42 335 216 307 394 299 325 228 301 85 63 330 170 285 233 329 262 79 225 283 116 159 149 196 274 33 218 293 214 152 1 46 3 117 112 176 257 375 354 186 209 23 268 109 315 378 391 114 400 319 150 230 22 232 221 220 200 103 70 134 240 145 261 146 83 373 143 11 25 238 133 190 88 183 304 331 327 203 86 20 251 399 241 193 89 39 161 6 259 266 41 15 368 320 36 73 188 44 321 349 287 332 362 298 156 365 191 55 60 355 219 75 280 312 135 153 64 388 390 264 2 364 398 132 278 48 358 313 108 101 271 142 94 322 34 68 28 248 226 148 80 256 177 182 211 123 357 286 245 341 342 147 267 347 72 78 348 311 27 173 353 184 243 292 374 208 50'*/
//char *str;
//	str = ft_strnew(2);
//	str[0] = 0;
//	if (argc > 1) {
//		p = 1;
//		while (p < argc) {
//			if (p != 1)
//				str = ft_strjoin(" ", str);
//			str = ft_strjoin(argv[p++],str);
//		}
//	}else
//		return 0;
	list = NULL;
	buff = NULL;

	queue = NULL;
	deep = 0;
	list = ft_strsplit_to_lstd(str);
	size = ft_strsplit_to_inttab(&vector, str);

//	printf("we get %d numbers\n",size);
	int steps;
	steps = 0;
//	ft_operations(PB,&list, &buff);
//	ft_lstditer_two(list, buff, &ft_lstprint);
//	printf("--------------------------------------\n");
	int i = 0;
//	while (i < size)
//		printf(" %2d", vector[i++]);
	ft_quick_sort(vector, vector + size -1);
//	printf("\n");
//	i = 0;
//	while (i < size)
//		printf(" %2d", vector[i++]);
//	i = 0;
//	printf("\n");
//	while (i < size)
//		printf(" %2d",i++);
//	printf("\n--------------------------------------\n");
	i = 0;
	int j;

	while (i < size){
		j = 0;
		while (j < size) {
			if (vector[j] == ((t_ps_content *) list->content)->value)
				((t_ps_content *) list->content)->serial = j;
		++j;
		}
		list= list->next;
		++i;
	}
	ft_memdel((void**)&vector);
//	ft_operations(SA, &list, &buff);
//	ft_lstditer_two(list, buff, &ft_lstprint);
//	printf("--------------------------------------\n");
//	int i = 0;
//	int len = ft_lstdlen(list);
int m;
	int k;


	i = size;
	int move;


	steps = 0;
	i = size;
	while (i--) {
				if (((t_ps_content *) list->content)->serial > (size/2)) {
					ft_operations(PB, &list, &buff);
					printf("pb\n");
					steps++;
				}else{
					ft_operations(PB, &list, &buff);
					printf("pb\n");
					ft_operations(RB, &list, &buff);
					printf("rb\n");
					steps++;
					steps++;
				}
	}


	i = size;
	while (i--) {
		if (((t_ps_content *) buff->content)->serial % (size / 2) < (size/4)) {
			ft_operations(PA, &list, &buff);
			printf("pa\n");
			steps++;
		}else{
			ft_operations(PA, &list, &buff);
			printf("pa\n");
			ft_operations(RA, &list, &buff);
			printf("ra\n");
			steps++;
			steps++;
		}
	}



	i = size;
	int take_it = 0;
	while (i--) {
		max_steps = longes_subsequence(list, &buff);
		if (max_steps > take_it)
		{
			take_it = max_steps;

			j = size;
			while(j--) {
				((t_ps_content *) list->content)->operation = -1;
				list=list->next;
			}
			k = take_it;
			while(k--){
				m = size;
				while(m--) {
					if (((t_ps_content *) list->content)->serial == ((t_ps_content *) buff->content)->value)
						((t_ps_content *) list->content)->operation = FREEZE;
					list = list->next;
				}
				buff = buff->next;
			}

		}
		ft_lstd_del(&buff);
		list = list->next;
	}



	i = size;
	while (i--) {
		if (((t_ps_content *) list->content)->operation != FREEZE ){
			if (((t_ps_content *) list->content)->serial % (size / 4) / (size / 8)) {
				ft_operations(PB, &list, &buff);
				printf("pb\n");
				steps++;
			}else{
				ft_operations(PB, &list, &buff);
				printf("pb\n");
				ft_operations(RB, &list, &buff);
				printf("rb\n");
				steps++;
				steps++;
			}
		}else
		{
			ft_operations(RA, &list, &buff);
			printf("ra\n");
			steps++;
		}

	}

//	printf("--------------------------------------\n");
//	ft_lstditer_two(list, buff, &ft_lstprint3);
//	printf("--------------------------------------\n");
//	printf("steps: %d\n", steps);


	steps += bfs(&list, &buff, visited, &queue);



//	ft_lstditer_two(list, buff, &ft_lstprint3);
//	printf("--------------------------------------\n");
//	printf("steps: %d\n", steps);

//	char *test;
//	test = ft_lstd_to_str(list, buff, 250, 0, ft_lstdlen(list),ft_lstdlen(buff));
//	printf("%s\n", test);
//	ft_lstditer_two(list, buff, &ft_lstprint3);
	ft_lstd_del_2(&list);
	ft_lstd_del_2(&buff);
//	ft_str_to_lstd(test, &list, &buff);

//	ft_lstditer(queue, &ft_lstprint2);
	printf("size %d\n", size);
	printf("steps: %d\n", steps);
	//ft_lstd_del(&visited);
	ft_lstd_del_3(&queue);
	return 0;
}