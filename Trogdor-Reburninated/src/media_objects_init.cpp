#include "media_objects_init.h"

void InitializeFontsAndText() {
	TTF_Init();

	setFont(&font_serif_white_14, "fonts/serif_v01.ttf", 14, 14, TTF_STYLE_NORMAL, color_white);
	SET_TEXT("loading...", text_0_loading, font_serif_white_14,
		OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_0_loading), OBJ_TO_MID_SCREEN_Y(gameHiResHeight, text_0_loading));
	TTF_CloseFont(font_serif_white_14.font);

	setFont(&font_serif_white_6_mult, "fonts/serif_v01.ttf", 8, 5, TTF_STYLE_NORMAL, color_white);
	setFont(&font_serif_red_6_mult, "fonts/serif_v01.ttf", 8, 5, TTF_STYLE_NORMAL, color_red);
	setFont(&font_serif_red_8_mult, "fonts/serif_v01.ttf", 8, 6.666, TTF_STYLE_NORMAL, color_red);
	initializeFont_numbers(&font_serif_white_6_mult);
	if (gameHiResMult < 2) {
		SET_TEXT("(1/5)", text_3_page, font_serif_white_6_mult,
			OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_3_page), 157 * gameHiResMult);
#if defined(WII_U) || defined(VITA) || defined(SWITCH) || defined(WII) || defined(GAMECUBE) || defined(ANDROID) || defined(PSP)
		SET_TEXT("Use the D-pad to control Trogdor", text_3_instructions_1, font_serif_white_6_mult,
			OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_3_instructions_1), 59 * gameHiResMult);
#else
		SET_TEXT("Use the arrows to control Trogdor", text_3_instructions_1, font_serif_white_6_mult,
			OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_3_instructions_1), 59 * gameHiResMult);
#endif
		SET_TEXT("Stomp 10 peasants to achieve", text_3_instructions_2, font_serif_white_6_mult,
			OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_3_instructions_2), 73 * gameHiResMult);
		SET_TEXT("burnination.", text_3_instructions_2a, font_serif_white_6_mult,
			OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_3_instructions_2a), 87 * gameHiResMult);
		SET_TEXT("Burn all cottages to advance.", text_3_instructions_3, font_serif_white_6_mult,
			OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_3_instructions_3), 101 * gameHiResMult);
		SET_TEXT("Avoid knights and archers!", text_3_instructions_4, font_serif_white_6_mult,
			OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_3_instructions_4), 115 * gameHiResMult);
#if defined(WII_U) || defined(VITA) || defined(WII) || defined(GAMECUBE) || defined(ANDROID) || defined(PSP)
		SET_TEXT("Press START to pause.", text_3_instructions_5, font_serif_white_6_mult,
			OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_3_instructions_5), 129 * gameHiResMult);
		SET_TEXT("press START to START", text_3_click_anywhere_to_start, font_serif_red_8_mult,
			OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_3_click_anywhere_to_start), 129 * gameHiResMult);
#if defined(GAMECUBE)
		SET_TEXT("Press Z to QUIT.", text_3_quit, font_serif_white_6_mult,
			OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_3_quit), 143 * gameHiResMult);
#else
		SET_TEXT("Press SELECT to QUIT.", text_3_quit, font_serif_white_6_mult,
			OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_3_quit), 143 * gameHiResMult);
#endif
#elif defined(SWITCH)
		SET_TEXT("Press + to pause.", text_3_instructions_5, font_serif_white_6_mult,
			OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_3_instructions_5), 129 * gameHiResMult);
		SET_TEXT("press + to START", text_3_click_anywhere_to_start, font_serif_red_8_mult,
			OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_3_click_anywhere_to_start), 129 * gameHiResMult);
		SET_TEXT("Press - to QUIT.", text_3_quit, font_serif_white_6_mult,
			OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_3_quit), 143 * gameHiResMult);
#else
		SET_TEXT("Press ENTER/START to pause.", text_3_instructions_5, font_serif_white_6_mult,
			OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_3_instructions_5), 129 * gameHiResMult);
		SET_TEXT("press ENTER/START to START", text_3_click_anywhere_to_start, font_serif_red_8_mult,
			OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_3_click_anywhere_to_start), 129 * gameHiResMult);
		SET_TEXT("Press SELECT/BACKSPACE to QUIT.", text_3_quit, font_serif_white_6_mult,
			OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_3_quit), 143 * gameHiResMult);
#endif
		SET_TEXT("SECRET HINTS!!", text_3_hints_1, font_serif_red_6_mult,
			OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_3_hints_1), 59 * gameHiResMult);
		SET_TEXT("-Don't let the peasants return", text_3_hints_2, font_serif_white_6_mult,
			OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_3_hints_2), 73 * gameHiResMult);
		SET_TEXT("to their cottages", text_3_hints_2a, font_serif_white_6_mult,
			OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_3_hints_2a), 87 * gameHiResMult);
		SET_TEXT("-Once you\'re burninating,", text_3_hints_3, font_serif_white_6_mult,
			OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_3_hints_3), 101 * gameHiResMult);
		SET_TEXT("you\'re invincible", text_3_hints_3a, font_serif_white_6_mult,
			OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_3_hints_3a), 115 * gameHiResMult);
		SET_TEXT("-Burninated peasants set their", text_3_hints_4, font_serif_white_6_mult,
			OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_3_hints_4), 129 * gameHiResMult);
		SET_TEXT("cottages on fire", text_3_hints_4a, font_serif_white_6_mult,
			OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_3_hints_4a), 143 * gameHiResMult);
		SET_TEXT("-Get an extra man every", text_3_hints_5, font_serif_white_6_mult,
			OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_3_hints_5), 87 * gameHiResMult);
		SET_TEXT("300 points", text_3_hints_5a, font_serif_white_6_mult,
			OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_3_hints_5a), 101 * gameHiResMult);
		SET_TEXT("-What\'s a treasure hut?!?!", text_3_hints_6, font_serif_red_6_mult,
			OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_3_hints_6), 115 * gameHiResMult);
		SET_TEXT("- Secret Code?!?!", text_3_hints_7, font_serif_red_6_mult,
			OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_3_hints_7), 129 * gameHiResMult);
		SET_TEXT("CREDITS", text_3_credits_1, font_serif_red_6_mult,
			OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_3_credits_1), 59 * gameHiResMult);
		SET_TEXT("- ORIGINAL FLASH GAME -", text_3_credits_2, font_serif_white_6_mult,
			OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_3_credits_2), 73 * gameHiResMult);
		SET_TEXT("Programming: Jonathan Howe", text_3_credits_3, font_serif_white_6_mult,
			OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_3_credits_3), 87 * gameHiResMult);
		// credits for the HTML5 version will be added when stuff from the HTML5 version is added to this version
		SET_TEXT("Design: Mike & Matt Chapman", text_3_credits_4, font_serif_white_6_mult,
			OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_3_credits_4), 101 * gameHiResMult);
		SET_TEXT("- THIS RECREATION -", text_3_credits_5, font_serif_white_6_mult,
			OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_3_credits_5), 115 * gameHiResMult);
		SET_TEXT("Mips96", text_3_credits_6, font_serif_white_6_mult,
			OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_3_credits_6), 129 * gameHiResMult);
		SET_TEXT("https://github.com/Mips96", text_3_credits_7, font_serif_white_6_mult,
			OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_3_credits_7), 143 * gameHiResMult);
		SET_TEXT("v0.9", text_3_credits_8, font_serif_white_6_mult,
			gameHiResWidth - (text_3_credits_8.dstrect.w * 1.5), gameHiResHeight - (text_3_credits_8.dstrect.h * 1.5));
		SET_TEXT("COMING SOON (?)", text_3_coming_soon_1, font_serif_red_6_mult,
			OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_3_coming_soon_1), 59 * gameHiResMult);
		SET_TEXT("\"Trogdor Classic\"", text_3_coming_soon_2, font_serif_white_6_mult,
			OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_3_coming_soon_2), 73 * gameHiResMult);
		SET_TEXT("-Fully implemented cutscenes!", text_3_coming_soon_3, font_serif_white_6_mult,
			OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_3_coming_soon_3), 87 * gameHiResMult);
		SET_TEXT("-Level Beaten / Game Over", text_3_coming_soon_4, font_serif_white_6_mult,
			OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_3_coming_soon_4), 101 * gameHiResMult);
		SET_TEXT("animations!", text_3_coming_soon_4a, font_serif_white_6_mult,
			OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_3_coming_soon_4a), 115 * gameHiResMult);
		SET_TEXT("-Customizable options!", text_3_coming_soon_5, font_serif_white_6_mult,
			OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_3_coming_soon_5), 129 * gameHiResMult);
		SET_TEXT("-More polish!", text_3_coming_soon_6, font_serif_white_6_mult,
			OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_3_coming_soon_6), 143 * gameHiResMult);
	} else {
		SET_TEXT("(1/4)", text_3_page, font_serif_white_6_mult,
			OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_3_page), 157 * gameHiResMult);
#if defined(WII_U) || defined(VITA) || defined(SWITCH) || defined(WII) || defined(GAMECUBE) || defined(ANDROID) || defined(PSP)
		SET_TEXT("Use the D-pad to control Trogdor", text_3_instructions_1, font_serif_white_6_mult,
			OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_3_instructions_1), 59 * gameHiResMult);
#else
		SET_TEXT("Use the arrow keys to control Trogdor", text_3_instructions_1, font_serif_white_6_mult,
			OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_3_instructions_1), 59 * gameHiResMult);
#endif
		SET_TEXT("Stomp 10 peasants to achieve burnination.", text_3_instructions_2, font_serif_white_6_mult,
			OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_3_instructions_2), 73 * gameHiResMult);
		SET_TEXT("Burn all cottages to advance a level.", text_3_instructions_3, font_serif_white_6_mult,
			OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_3_instructions_3), 87 * gameHiResMult);
		SET_TEXT("Avoid knights and archers!", text_3_instructions_4, font_serif_white_6_mult,
			OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_3_instructions_4), 101 * gameHiResMult);
#if defined(WII_U) || defined(VITA) || defined(WII) || defined(GAMECUBE) || defined(ANDROID) || defined(PSP)
		SET_TEXT("Press START to pause.", text_3_instructions_5, font_serif_white_6_mult,
			OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_3_instructions_5), 115 * gameHiResMult);
		SET_TEXT("press START to START", text_3_click_anywhere_to_start, font_serif_red_8_mult,
			OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_3_click_anywhere_to_start), 129 * gameHiResMult);
#if defined(GAMECUBE)
		SET_TEXT("Press Z to QUIT.", text_3_quit, font_serif_white_6_mult,
			OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_3_quit), 143 * gameHiResMult);
#else
		SET_TEXT("Press SELECT to QUIT.", text_3_quit, font_serif_white_6_mult,
			OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_3_quit), 143 * gameHiResMult);
#endif
#elif defined(SWITCH)
		SET_TEXT("Press + to pause.", text_3_instructions_5, font_serif_white_6_mult,
			OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_3_instructions_5), 115 * gameHiResMult);
		SET_TEXT("press + to START", text_3_click_anywhere_to_start, font_serif_red_8_mult,
			OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_3_click_anywhere_to_start), 129 * gameHiResMult);
		SET_TEXT("Press - to QUIT.", text_3_quit, font_serif_white_6_mult,
			OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_3_quit), 143 * gameHiResMult);
#else
		SET_TEXT("Press ENTER/START to pause.", text_3_instructions_5, font_serif_white_6_mult,
			OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_3_instructions_5), 115 * gameHiResMult);
		SET_TEXT("press ENTER/START to START", text_3_click_anywhere_to_start, font_serif_red_8_mult,
			OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_3_click_anywhere_to_start), 129 * gameHiResMult);
		SET_TEXT("Press SELECT/BACKSPACE to QUIT.", text_3_quit, font_serif_white_6_mult,
			OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_3_quit), 143 * gameHiResMult);
#endif
		SET_TEXT("SECRET HINTS!!", text_3_hints_1, font_serif_red_6_mult,
			OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_3_hints_1), 59 * gameHiResMult);
		SET_TEXT("-Don't let the peasants return to their cottages", text_3_hints_2, font_serif_white_6_mult,
			OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_3_hints_2), 73 * gameHiResMult);
		SET_TEXT("-Once you\'re burninating, you\'re invincible", text_3_hints_3, font_serif_white_6_mult,
			OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_3_hints_3), 87 * gameHiResMult);
		SET_TEXT("-Burninated peasants set their cottages on fire", text_3_hints_4, font_serif_white_6_mult,
			OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_3_hints_4), 101 * gameHiResMult);
		SET_TEXT("-Get an extra man every 300 points", text_3_hints_5, font_serif_white_6_mult,
			OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_3_hints_5), 115 * gameHiResMult);
		SET_TEXT("-What\'s a treasure hut?!?!", text_3_hints_6, font_serif_red_6_mult,
			OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_3_hints_6), 129 * gameHiResMult);
		SET_TEXT("- Secret Code?!?!", text_3_hints_7, font_serif_red_6_mult,
			OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_3_hints_7), 143 * gameHiResMult);
		SET_TEXT("CREDITS", text_3_credits_1, font_serif_red_6_mult,
			OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_3_credits_1), 59 * gameHiResMult);
		SET_TEXT("- ORIGINAL FLASH GAME -", text_3_credits_2, font_serif_white_6_mult,
			OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_3_credits_2), 73 * gameHiResMult);
		SET_TEXT("Programming: Jonathan Howe", text_3_credits_3, font_serif_white_6_mult,
			OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_3_credits_3), 87 * gameHiResMult);
		// credits for the HTML5 version will be added when stuff from the HTML5 version is added to this version
		SET_TEXT("Design: Mike Chapman, Matt Chapman", text_3_credits_4, font_serif_white_6_mult,
			OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_3_credits_4), 101 * gameHiResMult);
		SET_TEXT("- THIS RECREATION -", text_3_credits_5, font_serif_white_6_mult,
			OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_3_credits_5), 115 * gameHiResMult);
		SET_TEXT("Mips96", text_3_credits_6, font_serif_white_6_mult,
			OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_3_credits_6), 129 * gameHiResMult);
		SET_TEXT("https://github.com/Mips96/Trogdor-Reburninated", text_3_credits_7, font_serif_white_6_mult,
			OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_3_credits_7), 143 * gameHiResMult);
		SET_TEXT("v0.9", text_3_credits_8, font_serif_white_6_mult,
			gameHiResWidth - (text_3_credits_8.dstrect.w * 1.5), gameHiResHeight - (text_3_credits_8.dstrect.h * 1.5));
		SET_TEXT("COMING SOON (?)", text_3_coming_soon_1, font_serif_red_6_mult,
			OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_3_coming_soon_1), 59 * gameHiResMult);
		SET_TEXT("\"Trogdor Classic\"", text_3_coming_soon_2, font_serif_white_6_mult,
			OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_3_coming_soon_2), 73 * gameHiResMult);
		SET_TEXT("-Fully implemented cutscenes!", text_3_coming_soon_3, font_serif_white_6_mult,
			OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_3_coming_soon_3), 87 * gameHiResMult);
		SET_TEXT("-Level Beaten / Game Over animations!", text_3_coming_soon_4, font_serif_white_6_mult,
			OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_3_coming_soon_4), 101 * gameHiResMult);
		SET_TEXT("-Customizable options!", text_3_coming_soon_5, font_serif_white_6_mult,
			OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_3_coming_soon_5), 115 * gameHiResMult);
		SET_TEXT("-More polish!", text_3_coming_soon_6, font_serif_white_6_mult,
			OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_3_coming_soon_6), 129 * gameHiResMult);
	}
	TTF_CloseFont(font_serif_white_6_mult.font);
	TTF_CloseFont(font_serif_red_6_mult.font);
	TTF_CloseFont(font_serif_red_8_mult.font);

	//setFont(&font_serif_brown_6, "fonts/serif_v01.ttf", 6, 6, TTF_STYLE_NORMAL, color_brown);
	//TTF_CloseFont(font_serif_brown_6.font);

	//setFont(&font_serif_brown_8, "fonts/serif_v01.ttf", 8, 8, TTF_STYLE_NORMAL, color_brown);
	//TTF_CloseFont(font_serif_brown_8.font);

	//setFont(&font_serif_gray_6, "fonts/serif_v01.ttf", 6, 6, TTF_STYLE_NORMAL, color_gray);
	//TTF_CloseFont(font_serif_gray_6.font);

	//setFont(&font_serif_gray_12, "fonts/serif_v01.ttf", 12, 12, TTF_STYLE_NORMAL, color_gray);
	//TTF_CloseFont(font_serif_gray_12.font);

	//setFont(&font_serif_orange_6, "fonts/serif_v01.ttf", 6, 6, TTF_STYLE_NORMAL, color_orange);
	//TTF_CloseFont(font_serif_orange_6.font);

	setFont(&font_serif_red_6, "fonts/serif_v01.ttf", 8, 6, TTF_STYLE_NORMAL, color_red);
	initializeFont_numbers(&font_serif_red_6);
	SET_TEXT("??????", text_4_score_val, font_serif_red_6,
		5 * gameHiResMult, 11 * gameHiResMult);
	SET_TEXT("??", text_4_mans_val, font_serif_red_6,
		230 * gameHiResMult, 1 * gameHiResMult);
	SET_TEXT("??", text_4_level_val, font_serif_red_6,
		230 * gameHiResMult, 11 * gameHiResMult);
	if (font_serif_red_6.size == 8) {
		text_4_score_val.dstrect.y -= 1;
		text_4_mans_val.dstrect.y -= 2;
		text_4_level_val.dstrect.y -= 1;
	}
	TTF_CloseFont(font_serif_red_6.font);

	setFont(&font_serif_red_8, "fonts/serif_v01.ttf", 8, 8, TTF_STYLE_NORMAL, color_red);
	/* Cutscene Placeholder Message */
	SET_TEXT("cutscenes aren't finished yet!", text_placeholder_cutscene, font_serif_red_8,
		OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_placeholder_cutscene), OBJ_TO_SCREEN_AT_FRACTION_Y(gameHiResHeight, text_placeholder_cutscene, 0.6));
	TTF_CloseFont(font_serif_red_8.font);

	//setFont(&font_serif_red_12, "fonts/serif_v01.ttf", 12, 12, TTF_STYLE_NORMAL, color_red);
	//TTF_CloseFont(font_serif_red_12.font);

	setFont(&font_serif_white_6, "fonts/serif_v01.ttf", 6, 6, TTF_STYLE_NORMAL, color_white);
	SET_TEXT("paused", text_4_paused_1, font_serif_white_6,
		OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_4_paused_1), 130 * gameHiResMult);
#if defined(WII_U) || defined(GAMECUBE) || defined(ANDROID)
	SET_TEXT("press 'START' to resume", text_4_paused_2, font_serif_white_6,
		OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_4_paused_2), 145 * gameHiResMult);
	SET_TEXT("press 'A+SELECT' to quit", text_4_paused_3, font_serif_white_6,
		OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_4_paused_3), 160 * gameHiResMult);
#elif defined(WII)
	SET_TEXT("press 'START' to resume", text_4_paused_2, font_serif_white_6,
		OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_4_paused_2), 145 * gameHiResMult);
	SET_TEXT("press '2+SELECT' to quit", text_4_paused_3, font_serif_white_6,
		OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_4_paused_3), 160 * gameHiResMult);
#elif defined(VITA) || defined(PSP)
	SET_TEXT("press 'START' to resume", text_4_paused_2, font_serif_white_6,
		OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_4_paused_2), 145 * gameHiResMult);
	SET_TEXT("press 'X+SELECT' to quit", text_4_paused_3, font_serif_white_6,
		OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_4_paused_3), 160 * gameHiResMult);
#elif defined(SWITCH)
	SET_TEXT("press '+' to resume", text_4_paused_2, font_serif_white_6,
		OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_4_paused_2), 145 * gameHiResMult);
	SET_TEXT("press 'A and -' to quit", text_4_paused_3, font_serif_white_6,
		OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_4_paused_3), 160 * gameHiResMult);
#else
	SET_TEXT("press 'START/ENTER' to resume", text_4_paused_2, font_serif_white_6,
		OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_4_paused_2), 145 * gameHiResMult);
	SET_TEXT("press 'A+SELECT/Z+BACKSPACE' to quit", text_4_paused_3, font_serif_white_6,
		OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_4_paused_3), 160 * gameHiResMult);
#endif
	TTF_CloseFont(font_serif_white_6.font);

	setFont(&font_serif_white_9, "fonts/serif_v01.ttf", 9, 9, TTF_STYLE_NORMAL, color_white);
	/* 11: Level 4 Interlude */
	SET_TEXT("stompin' good!", text_11_cutscene, font_serif_white_9,
		OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_11_cutscene), OBJ_TO_SCREEN_AT_FRACTION_Y(gameHiResHeight, text_11_cutscene, 0.25));
	/* 12: Level 8 Interlude */
	SET_TEXT("fry 'em up dan.", text_12_cutscene, font_serif_white_9,
		OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_12_cutscene), OBJ_TO_SCREEN_AT_FRACTION_Y(gameHiResHeight, text_12_cutscene, 0.25));
	/* 13: Level 12 Interlude */
	SET_TEXT("parade of trogdors", text_13_cutscene, font_serif_white_9,
		OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_13_cutscene), OBJ_TO_SCREEN_AT_FRACTION_Y(gameHiResHeight, text_13_cutscene, 0.25));
	/* 14: Level 16 Interlude */
	SET_TEXT("dancin' time", text_14_cutscene, font_serif_white_9,
		OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_14_cutscene), OBJ_TO_SCREEN_AT_FRACTION_Y(gameHiResHeight, text_14_cutscene, 0.25));
	/* 15: Level 20 Interlude */
	SET_TEXT("flex it, troggie.", text_15_cutscene, font_serif_white_9,
		OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_15_cutscene), OBJ_TO_SCREEN_AT_FRACTION_Y(gameHiResHeight, text_15_cutscene, 0.25));
	/* 16: Level 24 Interlude */
	SET_TEXT("peasant dominoes", text_16_cutscene, font_serif_white_9,
		OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_16_cutscene), OBJ_TO_SCREEN_AT_FRACTION_Y(gameHiResHeight, text_16_cutscene, 0.25));
	/* 17: Level 30 Interlude */
	SET_TEXT("trogdor incognito", text_17_cutscene, font_serif_white_9,
		OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_17_cutscene), OBJ_TO_SCREEN_AT_FRACTION_Y(gameHiResHeight, text_17_cutscene, 0.25));
	/* 18: Level 34 Interlude */
	SET_TEXT("go trogdor # 2!", text_18_cutscene, font_serif_white_9,
		OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_18_cutscene), OBJ_TO_SCREEN_AT_FRACTION_Y(gameHiResHeight, text_18_cutscene, 0.25));
	/* 19: Level 38 Interlude */
	SET_TEXT("forbidden peasant love", text_19_cutscene, font_serif_white_9,
		OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_19_cutscene), OBJ_TO_SCREEN_AT_FRACTION_Y(gameHiResHeight, text_19_cutscene, 0.25));
	/* 20: Level 42 Interlude */
	SET_TEXT("2 cottages", text_20_cutscene, font_serif_white_9,
		OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_20_cutscene), OBJ_TO_SCREEN_AT_FRACTION_Y(gameHiResHeight, text_20_cutscene, 0.25));
	/* 21: Level 46 Interlude */
	SET_TEXT("a funny joke", text_21_cutscene, font_serif_white_9,
		OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_21_cutscene), OBJ_TO_SCREEN_AT_FRACTION_Y(gameHiResHeight, text_21_cutscene, 0.25));
	/* 22: Level 50 Interlude */
	SET_TEXT("smote that kerrek!", text_22_cutscene, font_serif_white_9,
		OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_22_cutscene), OBJ_TO_SCREEN_AT_FRACTION_Y(gameHiResHeight, text_22_cutscene, 0.25));
	/* 23: Level 100 Interlude (Credits) */
	SET_TEXT("congratulations.", text_23_cutscene_1, font_serif_white_9,
		OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_23_cutscene_1), OBJ_TO_SCREEN_AT_FRACTION_Y(gameHiResHeight, text_23_cutscene_1, 0.25));
	SET_TEXT("you got", text_23_cutscene_2, font_serif_white_9,
		OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_23_cutscene_2), OBJ_TO_SCREEN_AT_FRACTION_Y(gameHiResHeight, text_23_cutscene_2, 0.35));
	SET_TEXT("good score", text_23_cutscene_3, font_serif_white_9,
		OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_23_cutscene_3), OBJ_TO_SCREEN_AT_FRACTION_Y(gameHiResHeight, text_23_cutscene_3, 0.45));
	SET_TEXT("cast", text_23_cutscene_4, font_serif_white_9,
		OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_23_cutscene_4), OBJ_TO_SCREEN_AT_FRACTION_Y(gameHiResHeight, text_23_cutscene_4, 0.25));
	SET_TEXT("trogdor", text_23_cutscene_5, font_serif_white_9,
		OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_23_cutscene_5), OBJ_TO_SCREEN_AT_FRACTION_Y(gameHiResHeight, text_23_cutscene_5, 0.25));
	SET_TEXT("perez", text_23_cutscene_6, font_serif_white_9,
		OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_23_cutscene_6), OBJ_TO_SCREEN_AT_FRACTION_Y(gameHiResHeight, text_23_cutscene_6, 0.25));
	SET_TEXT("hackworth", text_23_cutscene_7, font_serif_white_9,
		OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_23_cutscene_7), OBJ_TO_SCREEN_AT_FRACTION_Y(gameHiResHeight, text_23_cutscene_7, 0.25));
	SET_TEXT("\'the steve\'", text_23_cutscene_8, font_serif_white_9,
		OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_23_cutscene_8), OBJ_TO_SCREEN_AT_FRACTION_Y(gameHiResHeight, text_23_cutscene_8, 0.25));
	SET_TEXT("the blue knight", text_23_cutscene_9, font_serif_white_9,
		OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_23_cutscene_9), OBJ_TO_SCREEN_AT_FRACTION_Y(gameHiResHeight, text_23_cutscene_9, 0.25));
	SET_TEXT("the red knight", text_23_cutscene_10, font_serif_white_9,
		OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_23_cutscene_10), OBJ_TO_SCREEN_AT_FRACTION_Y(gameHiResHeight, text_23_cutscene_10, 0.25));
	SET_TEXT("the siamese archers", text_23_cutscene_11, font_serif_white_9,
		OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_23_cutscene_11), OBJ_TO_SCREEN_AT_FRACTION_Y(gameHiResHeight, text_23_cutscene_11, 0.25));
	SET_TEXT("and Wordly Wise", text_23_cutscene_12, font_serif_white_9,
		OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_23_cutscene_12), OBJ_TO_SCREEN_AT_FRACTION_Y(gameHiResHeight, text_23_cutscene_12, 0.25));
	SET_TEXT("as The Kerrek", text_23_cutscene_13, font_serif_white_9,
		OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_23_cutscene_13), OBJ_TO_SCREEN_AT_FRACTION_Y(gameHiResHeight, text_23_cutscene_13, 0.25));
	SET_TEXT("keep playing!", text_23_cutscene_14, font_serif_white_9,
		OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_23_cutscene_14), OBJ_TO_SCREEN_AT_FRACTION_Y(gameHiResHeight, text_23_cutscene_14, 0.25));
	TTF_CloseFont(font_serif_white_9.font);

	setFont(&font_serif_white_10, "fonts/serif_v01.ttf", 10, 10, TTF_STYLE_NORMAL, color_white);
	SET_TEXT("nice work!", text_9_nice_work, font_serif_white_10,
		OBJ_TO_SCREEN_AT_FRACTION_X(gameHiResWidth, text_9_nice_work, 0.77), OBJ_TO_SCREEN_AT_FRACTION_Y(gameHiResHeight, text_9_nice_work, 0.45));
	TTF_CloseFont(font_serif_white_10.font);

	setFont(&font_nokia_12, "fonts/29_NOKIA 5110 FontSet.ttf", 12, 12, TTF_STYLE_NORMAL, color_white);
	SET_TEXT("presents", text_1_presents, font_nokia_12,
		OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_1_presents), OBJ_TO_SCREEN_AT_FRACTION_Y(gameHiResHeight, text_1_presents, 0.7));
	TTF_CloseFont(font_nokia_12.font);

	//setFont(font_serif_2_bold_black_23, "fonts/54_serif_v01.ttf", 23, 23, TTF_STYLE_BOLD, color_black);
	//setFont(font_serif_2_bold_red_23, "fonts/54_serif_v01.ttf", 23, 23, TTF_STYLE_BOLD, color_red);
	setFont(&font_serif_2_red_6, "fonts/serif_v01.ttf", 8, 6, TTF_STYLE_NORMAL, color_red);
	SET_TEXT("SCORE:", text_4_score, font_serif_2_red_6,
		5 * gameHiResMult, 1 * gameHiResMult);
	SET_TEXT("MANS:", text_4_mans, font_serif_2_red_6,
		200 * gameHiResMult, 1 * gameHiResMult);
	SET_TEXT("LEVEL:", text_4_level, font_serif_2_red_6,
		195 * gameHiResMult, 11 * gameHiResMult);
	if (font_serif_2_red_6.size == 8) {
		text_4_score.dstrect.y -= 2;
		text_4_mans.dstrect.x -= font_serif_2_red_6.size;
		text_4_mans.dstrect.y -= 2;
		text_4_level.dstrect.x -= font_serif_2_red_6.size;
		text_4_level.dstrect.y -= 1;
	}
	TTF_CloseFont(font_serif_2_red_6.font);

	//setFont(&font_serif_2_red_13, "fonts/54_serif_v01.ttf", 13, 13, TTF_STYLE_NORMAL, color_red);
	//TTF_CloseFont(font_serif_2_red_13.font);

	//SET_TEXT("nice work!", text_nice_work, font_serif_white_10,
	//	OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_nice_work), OBJ_TO_MID_SCREEN_Y(gameHiResHeight, text_nice_work));
	//SET_TEXT("send'em", text_send_em, font_serif_gray_6,
	//	OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_send_em), OBJ_TO_MID_SCREEN_Y(gameHiResHeight, text_send_em));
	//SET_TEXT("YE       OLDE       HI-SCORES", text_ye_olde_hi_scores, font_serif_2_red_13,
	//	OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_ye_olde_hi_scores), OBJ_TO_MID_SCREEN_Y(gameHiResHeight, text_ye_olde_hi_scores));
	//SET_TEXT("1", text_one, font_serif_brown_8,
	//	OBJ_TO_MID_SCREEN_X(gameHiResWidth, text_one), OBJ_TO_MID_SCREEN_Y(gameHiResHeight, text_one));

	TTF_Quit();
}

void InitializeMusic() {
}

void InitializeSFX() {
	sfxArr[0] = &sfx_burn_hut;
	sfx_burn_hut.path = "sfx/burn_hut.wav";
	makeSoundStatic(sfxArr[0]);
	sfxArr[1] = &sfx_goldget;
	sfx_goldget.path = "sfx/trog_goldget.wav";
	makeSoundStatic(sfxArr[1]);
	sfxArr[2] = &sfx_peasantscream;
	sfx_peasantscream.path = "sfx/trog_peasantscream.wav";
	makeSoundStatic(sfxArr[2]);
	sfxArr[3] = &sfx_sfx2;
	sfx_sfx2.path = "sfx/trog_sfx2.wav";
	sfxArr[4] = &sfx_trogador;
	sfx_trogador.path = "sfx/trogador.wav";
	sfxArr[5] = &sfx_arrow;
	sfx_arrow.path = "sfx/arrow.wav";
	makeSoundStatic(sfxArr[5]);
	sfxArr[6] = &sfx_squish;
	sfx_squish.path = "sfx/squish.wav";
	makeSoundStatic(sfxArr[6]);
	sfxArr[7] = &sfx_death;
	sfx_death.path = "sfx/death.wav";
	sfxArr[8] = &sfx_kick;
	sfx_kick.path = "sfx/kick.wav";
	sfxArr[9] = &sfx_burninate;
	sfx_burninate.path = "sfx/burninate.wav";
	sfxArr[10] = &sfx_cutscene;
	sfx_cutscene.path = "sfx/cutscene.wav";
	sfxArr[11] = &sfx_gameover;
	sfx_gameover.path = "sfx/gameover.wav";
	sfxArr[12] = &sfx_shutup;
	sfx_shutup.path = "sfx/shutup.wav";
	sfxArr_strongBad[0] = &sfx_sb1;
	sfx_sb1.path = "sfx/trog_sb1.wav";
	sfxArr_strongBad[1] = &sfx_sb2;
	sfx_sb2.path = "sfx/trog_sb2.wav";
	sfxArr_strongBad[2] = &sfx_sb3;
	sfx_sb3.path = "sfx/trog_sb3.wav";
	sfxArr_strongBad[3] = &sfx_sb4;
	sfx_sb4.path = "sfx/trog_sb4.wav";
	sfxArr_strongBad[4] = &sfx_sb5;
	sfx_sb5.path = "sfx/trog_sb5.wav";
	sfxArr_strongBad[5] = &sfx_sb6;
	sfx_sb6.path = "sfx/trog_sb6.wav";
	sfxArr_strongBad[6] = &sfx_sb7;
	sfx_sb7.path = "sfx/trog_sb7.wav";
	sfxArr_strongBad[7] = &sfx_sbarch;
	sfx_sbarch.path = "sfx/trog_sbarch.wav";
	sfxArr_strongBad[8] = &sfx_sbarchend;
	sfx_sbarchend.path = "sfx/trog_sbarchend.wav";
	sfxArr_strongBad[9] = &sfx_sbbest;
	sfx_sbbest.path = "sfx/trog_sbbest.wav";
	sfxArr_strongBad[10] = &sfx_sbdooj;
	sfx_sbdooj.path = "sfx/trog_sbdooj.wav";
	sfxArr_strongBad[11] = &sfx_sbgameover;
	sfx_sbgameover.path = "sfx/trog_sbgameover.wav";
	sfxArr_strongBad[12] = &sfx_sbkerrek;
	sfx_sbkerrek.path = "sfx/trog_sbkerrek.wav";
	sfxArr_strongBad[13] = &sfx_sblevelbeat;
	sfx_sblevelbeat.path = "sfx/trog_sblevelbeat.wav";
	sfxArr_strongBad[14] = &sfx_sbscore;
	sfx_sbscore.path = "sfx/trog_sbscore.wav";
	sfxArr_strongBad[15] = &sfx_sbsecret;
	sfx_sbsecret.path = "sfx/trog_sbsecret.wav";
	sfxArr_strongBad[16] = &sfx_sbsquish1;
	sfx_sbsquish1.path = "sfx/trog_sbsquish1.wav";
	sfxArr_strongBad[17] = &sfx_sbsquish2;
	sfx_sbsquish2.path = "sfx/trog_sbsquish2.wav";
	sfxArr_strongBad[18] = &sfx_sbwin;
	sfx_sbwin.path = "sfx/trog_sbwin.wav";
	sfxArr_strongBad[19] = &sfx_sbwin2;
	sfx_sbwin2.path = "sfx/trog_sbwin2.wav";
	sfxArr_strongBad[20] = &sfx_sbworst;
	sfx_sbworst.path = "sfx/trog_sbworst.wav";
	for (i = 0; i < NUM_SOUND_EFFECTS_STRONG_BAD; i++) {
		sfxArr_strongBad[i]->type = 1;
	}
#if defined(VITA)
	for (i = 0; i < NUM_SOUND_EFFECTS_SFX; i++) {
		makeSoundStatic(sfxArr[i]);
	}
	for (i = 0; i < NUM_SOUND_EFFECTS_STRONG_BAD; i++) {
		makeSoundStatic(sfxArr_strongBad[i]);
	}
#endif
}

void InitializeSpritesPart1() {
	PREPARE_SPRITE(sprite_videlectrix_logo, (rootDir + "graphics/videlectrix_logo_big.bmp").c_str(),
		OBJ_FRAME_TO_MID_SCREEN_X(appWidth, sprite_videlectrix_logo), OBJ_FRAME_TO_MID_SCREEN_Y(appHeight, sprite_videlectrix_logo), 1, 1, 1);
	// I'm gonna be lazy and just use the title screen directly instead of its separate components
	PREPARE_SPRITE(sprite_title_screen, (rootDir + "graphics/title_screen.bmp").c_str(),
		0, 0, 1, 1, 1);
	PREPARE_SPRITE(sprite_trogdor_logo, (rootDir + "graphics/trogdor_logo.bmp").c_str(),
		OBJ_FRAME_TO_MID_SCREEN_X(gameWidth, sprite_trogdor_logo), 15, 1, 1, 1);
	// ((2466 + 23) / 5000.0) = 0.4978
	// (2466 / 5000.0) = 0.4932
	// ((2183 - 133) / 3600.0) = 0.5694
	// (2183 / 3600.0) = 0.6064
	PREPARE_SPRITE(sprite_level_background_1, (rootDir + "graphics/backgrounds/1.bmp").c_str(),
		0, 25, 1, 1, 1);
	PREPARE_SPRITE(sprite_level_background_2, (rootDir + "graphics/backgrounds/2.bmp").c_str(),
		0, 25, 1, 1, 1);
	PREPARE_SPRITE(sprite_level_background_3, (rootDir + "graphics/backgrounds/3.bmp").c_str(),
		0, 25, 1, 1, 1);
	PREPARE_SPRITE(sprite_level_background_4, (rootDir + "graphics/backgrounds/4.bmp").c_str(),
		0, 25, 1, 1, 1);
	PREPARE_SPRITE(sprite_level_background_th, (rootDir + "graphics/backgrounds/treasure_hut.bmp").c_str(),
		0, 25, 1, 1, 1);
	PREPARE_SPRITE(sprite_burnination_meter_full, (rootDir + "graphics/burnination_meter/full.bmp").c_str(),
		OBJ_FRAME_TO_MID_SCREEN_X(gameWidth, sprite_burnination_meter_full), 8, 1, 1, 1);
	PREPARE_SPRITE(sprite_burnination_meter_empty, (rootDir + "graphics/burnination_meter/empty.bmp").c_str(),
		OBJ_FRAME_TO_MID_SCREEN_X(gameWidth, sprite_burnination_meter_empty), 8, 1, 1, 1);
	PREPARE_SPRITE(sprite_end_of_level_flash, (rootDir + "graphics/end_of_level_flash.bmp").c_str(),
		65, 53, 1, 1, 1);
	PREPARE_SPRITE(sprite_death_message, (rootDir + "graphics/death_message.bmp").c_str(),
		OBJ_FRAME_TO_MID_SCREEN_X(gameWidth, sprite_death_message), OBJ_FRAME_TO_MID_SCREEN_Y(gameHeight, sprite_death_message), 2, 5, 1);
	PREPARE_SPRITE(sprite_burninate_text, (rootDir + "graphics/burninate_text.bmp").c_str(),
		OBJ_FRAME_TO_MID_SCREEN_X(gameWidth, sprite_burninate_text), OBJ_FRAME_TO_MID_SCREEN_Y(gameHeight, sprite_burninate_text), 1, 1, 1);
	PREPARE_SPRITE(sprite_burninate_fire, (rootDir + "graphics/burninate_message_fire.bmp").c_str(),
		OBJ_FRAME_TO_MID_SCREEN_X(gameWidth, sprite_burninate_fire), OBJ_FRAME_TO_MID_SCREEN_Y(gameHeight, sprite_burninate_fire), 1, 14, 1);
	PREPARE_SPRITE(sprite_level_beaten_trogdor, (rootDir + "graphics/level_beaten_trogdor_scaled.bmp").c_str(),
		-5, 41, 1, 1, 1);
	PREPARE_SPRITE(sprite_game_over_trogdor, (rootDir + "graphics/game_over_trogdor.bmp").c_str(),
		-13, 75, 1, 1, 1);
	PREPARE_SPRITE(sprite_overlay_basement, (rootDir + "graphics/overlays/basement.bmp").c_str(),
		0, 0, 1, 1, 1);
	divider_level_beaten_rect = { 0, 25, gameWidth, 2 };
}

void InitializeSpritesPart2() {
	PREPARE_SPRITE(sprite_trogdor, (rootDir + "graphics/trogdor.bmp").c_str(),
		0, 0, 4, 2, 1);
	PREPARE_SPRITE(sprite_cottage, (rootDir + "graphics/cottage.bmp").c_str(),
		0, 0, 2, 4, 1);
	PREPARE_SPRITE(sprite_cottage_fire, (rootDir + "graphics/cottage_fire.bmp").c_str(),
		0, 0, 4, 2, 1);
	PREPARE_SPRITE(sprite_peasantometer_icon, (rootDir + "graphics/peasantometer.bmp").c_str(),
		0, 3, 2, 1, 1);
	sprite_peasantometer_icon_init_x = (Uint8)(gameWidth * 66 / gameWidth);
	PREPARE_SPRITE(sprite_archer, (rootDir + "graphics/archer.bmp").c_str(),
		0, 0, 2, 2, 1);
	PREPARE_SPRITE(sprite_arrow, (rootDir + "graphics/arrow.bmp").c_str(),
		0, 0, 1, 2, 1);
	PREPARE_SPRITE(sprite_trogdor_fire, (rootDir + "graphics/trogdor_fire.bmp").c_str(),
		0, 0, 4, 2, 1);
	PREPARE_SPRITE(sprite_trogdor_dead, (rootDir + "graphics/trogdor_dead.bmp").c_str(),
		0, 0, 2, 1, 1);
	PREPARE_SPRITE(sprite_knight, (rootDir + "graphics/knight.bmp").c_str(),
		0, 0, 3, 2, 1);
	PREPARE_SPRITE(sprite_peasant, (rootDir + "graphics/peasant.bmp").c_str(),
		0, 0, 2, 3, 1);
	if (gameHiResMult < 1.5) {
		PREPARE_SPRITE(sprite_end_of_level_trogdor, (rootDir + "graphics/end_of_level_trogdor_small.bmp").c_str(),
			OBJ_TO_SCREEN_AT_FRACTION_X(gameWidth, sprite_end_of_level_trogdor, 0.476), OBJ_TO_SCREEN_AT_FRACTION_Y(gameHeight, sprite_end_of_level_trogdor, 0.6), 1, 1, 2);
	} else { // TODO: this could be polished a bit further for (1.5 <= gameHiResMult < 2)
		PREPARE_SPRITE(sprite_end_of_level_trogdor, (rootDir + "graphics/end_of_level_trogdor_small.bmp").c_str(),
			OBJ_TO_SCREEN_AT_FRACTION_X(gameWidth, sprite_end_of_level_trogdor, 0.476), OBJ_TO_SCREEN_AT_FRACTION_Y(gameHeight, sprite_end_of_level_trogdor, 0.6), 1, 1, 1.5);
	}
	PREPARE_SPRITE(sprite_loot, (rootDir + "graphics/loot.bmp").c_str(),
		0, 0, 1, 1, 1);
}

void destroySprite(SpriteObject sprite) {
#if !defined(SDL1)
	SDL_DestroyTexture(sprite.texture);
#else
	SDL_FreeSurface(sprite.surface);
#endif
}

void destroyAllSprites() {
	destroySprite(sprite_videlectrix_logo);
	destroySprite(sprite_title_screen);
	destroySprite(sprite_trogdor_logo);
	destroySprite(sprite_level_background_1);
	destroySprite(sprite_level_background_2);
	destroySprite(sprite_level_background_3);
	destroySprite(sprite_level_background_4);
	destroySprite(sprite_level_background_th);
	destroySprite(sprite_burnination_meter_full);
	destroySprite(sprite_burnination_meter_empty);
	destroySprite(sprite_end_of_level_flash);
	destroySprite(sprite_death_message);
	destroySprite(sprite_burninate_text);
	destroySprite(sprite_burninate_fire);
	destroySprite(sprite_level_beaten_trogdor);
	destroySprite(sprite_game_over_trogdor);
	destroySprite(sprite_trogdor);
	destroySprite(sprite_cottage);
	destroySprite(sprite_cottage_fire);
	destroySprite(sprite_peasantometer_icon);
	destroySprite(sprite_archer);
	destroySprite(sprite_arrow);
	destroySprite(sprite_trogdor_fire);
	destroySprite(sprite_trogdor_dead);
	destroySprite(sprite_knight);
	destroySprite(sprite_peasant);
	destroySprite(sprite_end_of_level_trogdor);
	destroySprite(sprite_loot);
	destroySprite(sprite_overlay_basement);
}

void destroyTextChars(FontObject *fontObj) {
	for (i = 0; i < (126 + 1 - 32); i++) {
#if !defined(SDL1)
		if (fontObj->textChars[i].texture != NULL) {
			SDL_DestroyTexture(fontObj->textChars[i].texture);
			fontObj->textChars[i].texture = NULL;
		}
#else
		if (fontObj->textChars[i].surface != NULL) {
			SDL_FreeSurface(fontObj->textChars[i].surface);
			fontObj->textChars[i].surface = NULL;
		}
#endif
	}
}

void destroyAllTextChars() {
	//destroyTextChars(&font_serif_brown_6);
	//destroyTextChars(&font_serif_brown_8);
	//destroyTextChars(&font_serif_gray_6);
	//destroyTextChars(&font_serif_gray_12);
	//destroyTextChars(&font_serif_orange_6);
	destroyTextChars(&font_serif_red_6);
	destroyTextChars(&font_serif_red_6_mult);
	destroyTextChars(&font_serif_red_8);
	destroyTextChars(&font_serif_red_8_mult);
	//destroyTextChars(&font_serif_red_12);
	destroyTextChars(&font_serif_white_6);
	destroyTextChars(&font_serif_white_6_mult);
	destroyTextChars(&font_serif_white_9);
	destroyTextChars(&font_serif_white_10);
	destroyTextChars(&font_serif_white_14);
	destroyTextChars(&font_nokia_12);
	//destroyTextChars(&font_serif_2_bold_black_23);
	//destroyTextChars(&font_serif_2_bold_red_23);
	destroyTextChars(&font_serif_2_red_6);
	//destroyTextChars(&font_serif_2_red_13);
}

void closeAllFonts() {
	TTF_CloseFont(font_serif_brown_6.font);
	TTF_CloseFont(font_serif_brown_8.font);
	TTF_CloseFont(font_serif_gray_6.font);
	TTF_CloseFont(font_serif_gray_12.font);
	TTF_CloseFont(font_serif_orange_6.font);
	TTF_CloseFont(font_serif_red_6.font);
	TTF_CloseFont(font_serif_red_6_mult.font);
	TTF_CloseFont(font_serif_red_8.font);
	TTF_CloseFont(font_serif_red_8_mult.font);
	TTF_CloseFont(font_serif_red_12.font);
	TTF_CloseFont(font_serif_white_6.font);
	TTF_CloseFont(font_serif_white_6_mult.font);
	TTF_CloseFont(font_serif_white_9.font);
	TTF_CloseFont(font_serif_white_10.font);
	TTF_CloseFont(font_serif_white_14.font);
	TTF_CloseFont(font_nokia_12.font);
	//TTF_CloseFont(font_serif_2_bold_black_23.font);
	//TTF_CloseFont(font_serif_2_bold_red_23.font);
	TTF_CloseFont(font_serif_2_red_6.font);
	TTF_CloseFont(font_serif_2_red_13.font);
}