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
//		char str[]="172 277 80 174 266 173 107 44 378 364 116 75 317 56 397 410 294 312 269 247 465 232 137 212 106 176 198 272 367 303 49 408 482 102 235 484 2 155 28 500 399 428 297 17 407 470 357 376 104 23 183 217 219 263 322 66 100 262 406 20 169 309 199 275 81 134 242 425 321 439 165 499 229 0 335 135 336 214 458 395 379 287 404 316 462 120 464 41 308 118 248 299 34 136 84 361 419 97 139 304 159 380 251 396 473 451 208 392 257 246 390 46 92 147 58 93 184 261 370 441 340 89 487 325 38 278 239 254 349 286 201 283 268 10 228 475 494 405 205 170 259 151 313 386 87 194 220 311 477 48 3 171 55 45 264 112 348 152 27 202 328 149 339 344 36 333 447 319 26 85 150 323 96 423 52 227 454 207 492 250 394 345 115 154 8 330 352 29 39 258 468 362 460 140 230 15 51 131 298 366 497 252 141 371 1 318 360 403 412 238 37 60 138 327 221 145 241 187 280 337 213 22 186 18 91 435 69 128 72 430 236 33 449 377 144 293 59 448 166 42 256 21 148 190 474 83 478 95 347 240 498 418 43 391 90 427 57 253 356 354 177 274 63 133 53 476 73 111 167 426 420 35 359 459 305 179 483 79 440 471 411 276 161 273 125 6 489 105 393 143 216 389 353 469 324 185 285 429 434 129 307 119 168 381 180 218 409 295 384 86 32 375 156 231 453 226 124 78 481 210 77 101 450 415 189 71 271 326 40 223 225 310 181 142 188 5 195 446 270 466 245 130 343 291 132 479 76 445 368 282 182 414 249 122 431 64 175 260 320 382 332 302 472 365 211 490 331 334 197 314 31 24 338 244 114 237 117 480 372 422 346 424 442 113 267 255 369 233 109 438 456 350 209";
//		/*'124 236 58 272 66 371 258 246 249 340 151 98 376 9 29 295 279 291 35 157 224 235 389 367 199 296 104 273 323 139 207 255 32 84 215 119 344 247 205 171 244 281 158 397 162 242 395 396 155 317 212 343 179 324 113 7 306 106 284 336 229 95 270 24 129 217 67 120 277 140 263 392 384 265 309 381 302 40 352 125 334 181 169 282 345 350 12 314 90 361 126 30 5 206 87 110 382 197 385 393 165 377 202 369 294 17 97 172 210 333 93 8 54 356 53 305 136 254 65 144 107 253 118 185 178 47 137 10 49 252 111 303 52 288 77 386 82 337 328 192 62 222 14 100 198 363 180 59 38 250 121 18 19 51 351 290 227 128 81 21 300 289 379 318 234 45 115 308 359 387 26 131 316 71 122 105 141 168 194 130 174 269 297 56 154 383 91 74 127 260 4 99 231 213 92 13 175 237 37 346 164 16 370 69 326 31 187 380 204 239 201 57 163 167 276 360 61 160 43 189 310 0 372 195 96 102 138 166 223 339 366 275 338 76 42 335 216 307 394 299 325 228 301 85 63 330 170 285 233 329 262 79 225 283 116 159 149 196 274 33 218 293 214 152 1 46 3 117 112 176 257 375 354 186 209 23 268 109 315 378 391 114 400 319 150 230 22 232 221 220 200 103 70 134 240 145 261 146 83 373 143 11 25 238 133 190 88 183 304 331 327 203 86 20 251 399 241 193 89 39 161 6 259 266 41 15 368 320 36 73 188 44 321 349 287 332 362 298 156 365 191 55 60 355 219 75 280 312 135 153 64 388 390 264 2 364 398 132 278 48 358 313 108 101 271 142 94 322 34 68 28 248 226 148 80 256 177 182 211 123 357 286 245 341 342 147 267 347 72 78 348 311 27 173 353 184 243 292 374 208 50'*/
char *str;
	str = ft_strnew(2);
	str[0] = 0;
	if (argc > 1) {
		p = 1;
		while (p < argc) {
			if (p != 1)
				str = ft_strjoin(" ", str);
			str = ft_strjoin(argv[p++],str);
		}
	}else
		return 0;
	list = NULL;
	buff = NULL;

	queue = NULL;
//	visited = NULL;
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
		if (((t_ps_content *) buff->content)->serial > (size/2)) {


			if (((t_ps_content *) buff->content)->serial % (size / 2) > (size / 4)) {
				ft_operations(PA, &list, &buff);
				printf("pa\n");
				steps++;
			} else {
				ft_operations(PA, &list, &buff);
				printf("pa\n");
				ft_operations(RA, &list, &buff);
				printf("ra\n");
				steps++;
				steps++;
			}
		}else {
			if (((t_ps_content *) buff->content)->serial % (size / 2) <= (size / 4)) {
				ft_operations(PA, &list, &buff);
				printf("pa\n");
				steps++;
			} else {
				ft_operations(PA, &list, &buff);
				printf("pa\n");
				ft_operations(RA, &list, &buff);
				printf("ra\n");
				steps++;
				steps++;
			}
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
		if (((t_ps_content *) list->content)->operation != FREEZE ) {
			if ((((t_ps_content *) list->content)->serial % (size / 2) >= (size / 4))) {
				if (((t_ps_content *) list->content)->serial % (size / 4) <= (size / 8)) {
					ft_operations(PB, &list, &buff);
					printf("pb\n");
					steps++;
				} else {
					ft_operations(PB, &list, &buff);
					printf("pb\n");
					ft_operations(RB, &list, &buff);
					printf("rb\n");
					steps++;
					steps++;
				}
			}else{
					if (((t_ps_content *) list->content)->serial % (size / 4) > (size / 8)) {
						ft_operations(PB, &list, &buff);
						printf("pb\n");
						steps++;
					} else {
						ft_operations(PB, &list, &buff);
						printf("pb\n");
						ft_operations(RB, &list, &buff);
						printf("rb\n");
						steps++;
						steps++;
					}

				}

			} else {
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
//	ft_lstditer(list, &ft_lstprint);
//	printf("here :%d\n",ft_lstdlen(buff));
	ft_lstd_del_2(&list);
	ft_lstd_del_2(&buff);
//	ft_str_to_lstd(test, &list, &buff);

//	ft_lstditer(list, &ft_lstprint);

	printf("size %d\n", size);
	printf("steps: %d\n", steps);
	//ft_lstd_del(&visited);
	ft_lstd_del_3(&queue);
	return 0;
}