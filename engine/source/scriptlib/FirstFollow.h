/*
 * OpenBOR - http://www.chronocrash.com
 * -----------------------------------------------------------------------
 * All rights reserved, see LICENSE in OpenBOR root for details.
 *
 * Copyright (c)  OpenBOR Team
 */

#ifndef FIRSTFOLLOW_H
#define FIRSTFOLLOW_H

#include "Lexer.h"
static MY_TOKEN_TYPE first[] =
{
    /*start*/ EPSILON, TOKEN_CONST, TOKEN_SIGNED, TOKEN_UNSIGNED, TOKEN_VOID, TOKEN_CHAR, TOKEN_SHORT, TOKEN_INT, TOKEN_LONG, TOKEN_FLOAT, TOKEN_DOUBLE, END_OF_TOKENS,
    /*external_decl*/ TOKEN_CONST, TOKEN_SIGNED, TOKEN_UNSIGNED, TOKEN_VOID, TOKEN_CHAR, TOKEN_SHORT, TOKEN_INT, TOKEN_LONG, TOKEN_FLOAT, TOKEN_DOUBLE, END_OF_TOKENS,
    /*decl_spec*/ TOKEN_CONST, TOKEN_SIGNED, TOKEN_UNSIGNED, TOKEN_VOID, TOKEN_CHAR, TOKEN_SHORT, TOKEN_INT, TOKEN_LONG, TOKEN_FLOAT, TOKEN_DOUBLE, END_OF_TOKENS,
    /*decl*/ TOKEN_CONST, TOKEN_SIGNED, TOKEN_UNSIGNED, TOKEN_VOID, TOKEN_CHAR, TOKEN_SHORT, TOKEN_INT, TOKEN_LONG, TOKEN_FLOAT, TOKEN_DOUBLE, END_OF_TOKENS,
    /*funcDecl*/ TOKEN_LPAREN, EPSILON, END_OF_TOKENS,
    /*funcDecl1*/ TOKEN_RPAREN, TOKEN_CONST, TOKEN_SIGNED, TOKEN_UNSIGNED, TOKEN_VOID, TOKEN_CHAR, TOKEN_SHORT, TOKEN_INT, TOKEN_LONG, TOKEN_FLOAT, TOKEN_DOUBLE, END_OF_TOKENS,
    /*initializer*/ TOKEN_ASSIGN, EPSILON, END_OF_TOKENS,
    /*parm_decl*/ TOKEN_CONST, TOKEN_SIGNED, TOKEN_UNSIGNED, TOKEN_VOID, TOKEN_CHAR, TOKEN_SHORT, TOKEN_INT, TOKEN_LONG, TOKEN_FLOAT, TOKEN_DOUBLE, END_OF_TOKENS,
    /*param_list*/ TOKEN_CONST, TOKEN_SIGNED, TOKEN_UNSIGNED, TOKEN_VOID, TOKEN_CHAR, TOKEN_SHORT, TOKEN_INT, TOKEN_LONG, TOKEN_FLOAT, TOKEN_DOUBLE, END_OF_TOKENS,
    /*param_list2*/ TOKEN_COMMA, EPSILON, END_OF_TOKENS,
    /*stmt_list*/ TOKEN_CONST, TOKEN_SIGNED, TOKEN_UNSIGNED, TOKEN_VOID, TOKEN_CHAR, TOKEN_SHORT, TOKEN_INT, TOKEN_LONG, TOKEN_FLOAT, TOKEN_DOUBLE, TOKEN_LCURLY, TOKEN_IF, TOKEN_SWITCH, TOKEN_WHILE, TOKEN_DO, TOKEN_FOR, TOKEN_BREAK, TOKEN_CONTINUE, TOKEN_RETURN, TOKEN_INC_OP, TOKEN_DEC_OP, TOKEN_ADD, TOKEN_SUB, TOKEN_BOOLEAN_NOT, TOKEN_IDENTIFIER, TOKEN_HEXCONSTANT, TOKEN_INTCONSTANT, TOKEN_FLOATCONSTANT, TOKEN_STRING_LITERAL, TOKEN_LPAREN, END_OF_TOKENS,
    /*stmt*/ TOKEN_LCURLY, TOKEN_IF, TOKEN_SWITCH, TOKEN_WHILE, TOKEN_DO, TOKEN_FOR, TOKEN_BREAK, TOKEN_CONTINUE, TOKEN_RETURN, TOKEN_INC_OP, TOKEN_DEC_OP, TOKEN_BITWISE_NOT, TOKEN_ADD, TOKEN_SUB, TOKEN_BOOLEAN_NOT, TOKEN_IDENTIFIER, TOKEN_HEXCONSTANT, TOKEN_INTCONSTANT, TOKEN_FLOATCONSTANT, TOKEN_STRING_LITERAL, TOKEN_LPAREN, END_OF_TOKENS,
    /*expr_stmt*/ TOKEN_INC_OP, TOKEN_DEC_OP, TOKEN_BITWISE_NOT, TOKEN_ADD, TOKEN_SUB, TOKEN_BOOLEAN_NOT, TOKEN_IDENTIFIER, TOKEN_HEXCONSTANT, TOKEN_INTCONSTANT, TOKEN_FLOATCONSTANT, TOKEN_STRING_LITERAL, TOKEN_LPAREN, END_OF_TOKENS,
    /*comp_stmt*/ TOKEN_LCURLY, END_OF_TOKENS,
    /*select_stmt*/ TOKEN_IF, TOKEN_SWITCH, END_OF_TOKENS,
    /*opt_else*/ TOKEN_ELSE, EPSILON, END_OF_TOKENS,
    /*switch_body*/ END_OF_TOKENS, END_OF_TOKENS,
    /*case_label*/ TOKEN_CASE, TOKEN_DEFAULT, END_OF_TOKENS,
    /*iter_stmt*/ TOKEN_WHILE, TOKEN_DO, TOKEN_FOR, END_OF_TOKENS,
    /*opt_expr_stmt*/ EPSILON, TOKEN_INC_OP, TOKEN_DEC_OP, TOKEN_BITWISE_NOT, TOKEN_ADD, TOKEN_SUB, TOKEN_BOOLEAN_NOT, TOKEN_IDENTIFIER, TOKEN_HEXCONSTANT, TOKEN_INTCONSTANT, TOKEN_FLOATCONSTANT, TOKEN_STRING_LITERAL, TOKEN_LPAREN, END_OF_TOKENS,
    /*defer_expr_stmt*/ EPSILON, TOKEN_INC_OP, TOKEN_DEC_OP, TOKEN_BITWISE_NOT, TOKEN_ADD, TOKEN_SUB, TOKEN_BOOLEAN_NOT, TOKEN_IDENTIFIER, TOKEN_HEXCONSTANT, TOKEN_INTCONSTANT, TOKEN_FLOATCONSTANT, TOKEN_STRING_LITERAL, TOKEN_LPAREN, END_OF_TOKENS,
    /*jump_stmt*/ TOKEN_BREAK, TOKEN_CONTINUE, TOKEN_RETURN, END_OF_TOKENS,
    /*opt_expr*/ EPSILON, TOKEN_INC_OP, TOKEN_DEC_OP, TOKEN_BITWISE_NOT, TOKEN_ADD, TOKEN_SUB, TOKEN_BOOLEAN_NOT, TOKEN_IDENTIFIER, TOKEN_HEXCONSTANT, TOKEN_INTCONSTANT, TOKEN_FLOATCONSTANT, TOKEN_STRING_LITERAL, TOKEN_LPAREN, END_OF_TOKENS,
    /*expr*/ TOKEN_INC_OP, TOKEN_DEC_OP, TOKEN_BITWISE_NOT, TOKEN_ADD, TOKEN_SUB, TOKEN_BOOLEAN_NOT, TOKEN_IDENTIFIER, TOKEN_HEXCONSTANT, TOKEN_INTCONSTANT, TOKEN_FLOATCONSTANT, TOKEN_STRING_LITERAL, TOKEN_LPAREN, END_OF_TOKENS,
    /*assignment_op*/ TOKEN_ASSIGN, TOKEN_MUL_ASSIGN, TOKEN_DIV_ASSIGN, TOKEN_MOD_ASSIGN, TOKEN_ADD_ASSIGN, TOKEN_SUB_ASSIGN, TOKEN_LEFT_ASSIGN, TOKEN_RIGHT_ASSIGN, TOKEN_AND_ASSIGN, TOKEN_XOR_ASSIGN, TOKEN_OR_ASSIGN, END_OF_TOKENS,
    /*assignment_expr*/ TOKEN_INC_OP, TOKEN_DEC_OP, TOKEN_BITWISE_NOT, TOKEN_ADD, TOKEN_SUB, TOKEN_BOOLEAN_NOT, TOKEN_IDENTIFIER, TOKEN_HEXCONSTANT, TOKEN_INTCONSTANT, TOKEN_FLOATCONSTANT, TOKEN_STRING_LITERAL, TOKEN_LPAREN, END_OF_TOKENS,
    /*assignment_expr2*/ TOKEN_ASSIGN, TOKEN_MUL_ASSIGN, TOKEN_DIV_ASSIGN, TOKEN_MOD_ASSIGN, TOKEN_ADD_ASSIGN, TOKEN_SUB_ASSIGN, TOKEN_LEFT_ASSIGN, TOKEN_RIGHT_ASSIGN, TOKEN_AND_ASSIGN, TOKEN_XOR_ASSIGN, TOKEN_OR_ASSIGN, EPSILON, END_OF_TOKENS,
    /*const_expr*/ TOKEN_INC_OP, TOKEN_DEC_OP, TOKEN_BITWISE_NOT, TOKEN_ADD, TOKEN_SUB, TOKEN_BOOLEAN_NOT, TOKEN_IDENTIFIER, TOKEN_HEXCONSTANT, TOKEN_INTCONSTANT, TOKEN_FLOATCONSTANT, TOKEN_STRING_LITERAL, TOKEN_LPAREN, END_OF_TOKENS,
    /*cond_expr*/ TOKEN_INC_OP, TOKEN_DEC_OP, TOKEN_BITWISE_NOT, TOKEN_ADD, TOKEN_SUB, TOKEN_BOOLEAN_NOT, TOKEN_IDENTIFIER, TOKEN_HEXCONSTANT, TOKEN_INTCONSTANT, TOKEN_FLOATCONSTANT, TOKEN_STRING_LITERAL, TOKEN_LPAREN, END_OF_TOKENS,
    /*cond_expr2*/ TOKEN_CONDITIONAL, END_OF_TOKENS,
    /*log_or_expr*/ TOKEN_INC_OP, TOKEN_DEC_OP, TOKEN_BITWISE_NOT, TOKEN_ADD, TOKEN_SUB, TOKEN_BOOLEAN_NOT, TOKEN_IDENTIFIER, TOKEN_HEXCONSTANT, TOKEN_INTCONSTANT, TOKEN_FLOATCONSTANT, TOKEN_STRING_LITERAL, TOKEN_LPAREN, END_OF_TOKENS,
    /*log_or_expr2*/ TOKEN_OR_OP, EPSILON, END_OF_TOKENS,
    /*log_and_expr*/ TOKEN_INC_OP, TOKEN_DEC_OP, TOKEN_BITWISE_NOT, TOKEN_ADD, TOKEN_SUB, TOKEN_BOOLEAN_NOT, TOKEN_IDENTIFIER, TOKEN_HEXCONSTANT, TOKEN_INTCONSTANT, TOKEN_FLOATCONSTANT, TOKEN_STRING_LITERAL, TOKEN_LPAREN, END_OF_TOKENS,
    /*log_and_expr2*/ TOKEN_AND_OP, EPSILON, END_OF_TOKENS,
    /*bit_or_expr*/ TOKEN_INC_OP, TOKEN_DEC_OP, TOKEN_BITWISE_NOT, TOKEN_ADD, TOKEN_SUB, TOKEN_BOOLEAN_NOT, TOKEN_IDENTIFIER, TOKEN_HEXCONSTANT, TOKEN_INTCONSTANT, TOKEN_FLOATCONSTANT, TOKEN_STRING_LITERAL, TOKEN_LPAREN, END_OF_TOKENS,
    /*bit_or_expr2*/ TOKEN_BITWISE_OR, EPSILON, END_OF_TOKENS,
    /*xor_expr*/ TOKEN_INC_OP, TOKEN_DEC_OP, TOKEN_BITWISE_NOT, TOKEN_ADD, TOKEN_SUB, TOKEN_BOOLEAN_NOT, TOKEN_IDENTIFIER, TOKEN_HEXCONSTANT, TOKEN_INTCONSTANT, TOKEN_FLOATCONSTANT, TOKEN_STRING_LITERAL, TOKEN_LPAREN, END_OF_TOKENS,
    /*xor_expr2*/ TOKEN_XOR, EPSILON, END_OF_TOKENS,
    /*bit_and_expr*/ TOKEN_INC_OP, TOKEN_DEC_OP, TOKEN_BITWISE_NOT, TOKEN_ADD, TOKEN_SUB, TOKEN_BOOLEAN_NOT, TOKEN_IDENTIFIER, TOKEN_HEXCONSTANT, TOKEN_INTCONSTANT, TOKEN_FLOATCONSTANT, TOKEN_STRING_LITERAL, TOKEN_LPAREN, END_OF_TOKENS,
    /*bit_and_expr2*/TOKEN_BITWISE_AND, EPSILON, END_OF_TOKENS,
    /*eq_op*/ TOKEN_EQ_OP, TOKEN_NE_OP, END_OF_TOKENS,
    /*equal_expr*/ TOKEN_INC_OP, TOKEN_DEC_OP, TOKEN_BITWISE_NOT, TOKEN_ADD, TOKEN_SUB, TOKEN_BOOLEAN_NOT, TOKEN_IDENTIFIER, TOKEN_HEXCONSTANT, TOKEN_INTCONSTANT, TOKEN_FLOATCONSTANT, TOKEN_STRING_LITERAL, TOKEN_LPAREN, END_OF_TOKENS,
    /*equal_expr2*/ TOKEN_EQ_OP, TOKEN_NE_OP, EPSILON, END_OF_TOKENS,
    /*rel_op*/ TOKEN_GE_OP, TOKEN_LE_OP, TOKEN_LT, TOKEN_GT, END_OF_TOKENS,
    /*rel_expr*/ TOKEN_INC_OP, TOKEN_DEC_OP, TOKEN_BITWISE_NOT, TOKEN_ADD, TOKEN_SUB, TOKEN_BOOLEAN_NOT, TOKEN_IDENTIFIER, TOKEN_HEXCONSTANT, TOKEN_INTCONSTANT, TOKEN_FLOATCONSTANT, TOKEN_STRING_LITERAL, TOKEN_LPAREN, END_OF_TOKENS,
    /*rel_expr2*/ TOKEN_GE_OP, TOKEN_LE_OP, TOKEN_LT, TOKEN_GT, EPSILON, END_OF_TOKENS,
    /*shift_op*/ TOKEN_LEFT_OP, TOKEN_RIGHT_OP, END_OF_TOKENS,
    /*shift_expr*/ TOKEN_INC_OP, TOKEN_DEC_OP, TOKEN_BITWISE_NOT, TOKEN_ADD, TOKEN_SUB, TOKEN_BOOLEAN_NOT, TOKEN_IDENTIFIER, TOKEN_HEXCONSTANT, TOKEN_INTCONSTANT, TOKEN_FLOATCONSTANT, TOKEN_STRING_LITERAL, TOKEN_LPAREN, END_OF_TOKENS,
    /*shift_expr2*/ TOKEN_LEFT_OP, TOKEN_RIGHT_OP, EPSILON, END_OF_TOKENS,
    /*add_op*/ TOKEN_ADD, TOKEN_SUB, END_OF_TOKENS,
    /*add_expr*/ TOKEN_INC_OP, TOKEN_DEC_OP, TOKEN_BITWISE_NOT, TOKEN_ADD, TOKEN_SUB, TOKEN_BOOLEAN_NOT, TOKEN_IDENTIFIER, TOKEN_HEXCONSTANT, TOKEN_INTCONSTANT, TOKEN_FLOATCONSTANT, TOKEN_STRING_LITERAL, TOKEN_LPAREN, END_OF_TOKENS,
    /*add_expr2*/ TOKEN_ADD, TOKEN_SUB, EPSILON, END_OF_TOKENS,
    /*mult_op*/ TOKEN_MUL, TOKEN_DIV, TOKEN_MOD, END_OF_TOKENS,
    /*mult_expr*/ TOKEN_INC_OP, TOKEN_DEC_OP, TOKEN_BITWISE_NOT, TOKEN_ADD, TOKEN_SUB, TOKEN_BOOLEAN_NOT, TOKEN_IDENTIFIER, TOKEN_HEXCONSTANT, TOKEN_INTCONSTANT, TOKEN_FLOATCONSTANT, TOKEN_STRING_LITERAL, TOKEN_LPAREN, END_OF_TOKENS,
    /*mult_expr2*/ TOKEN_MUL, TOKEN_DIV, TOKEN_MOD, EPSILON, END_OF_TOKENS,
    /*unary_expr*/ TOKEN_INC_OP, TOKEN_DEC_OP, TOKEN_BITWISE_NOT, TOKEN_ADD, TOKEN_SUB, TOKEN_BOOLEAN_NOT, TOKEN_IDENTIFIER, TOKEN_HEXCONSTANT, TOKEN_INTCONSTANT, TOKEN_FLOATCONSTANT, TOKEN_STRING_LITERAL, TOKEN_LPAREN, END_OF_TOKENS,
    /*postfix_expr*/ TOKEN_IDENTIFIER, TOKEN_HEXCONSTANT, TOKEN_INTCONSTANT, TOKEN_FLOATCONSTANT, TOKEN_STRING_LITERAL, TOKEN_LPAREN, END_OF_TOKENS,
    /*postfix_expr2*/ TOKEN_LPAREN, TOKEN_FIELD, TOKEN_INC_OP, TOKEN_DEC_OP, TOKEN_BITWISE_NOT, EPSILON, END_OF_TOKENS,
    /*arg_expr_list*/ EPSILON, TOKEN_INC_OP, TOKEN_DEC_OP, TOKEN_BITWISE_NOT, TOKEN_ADD, TOKEN_SUB, TOKEN_BOOLEAN_NOT, TOKEN_IDENTIFIER, TOKEN_HEXCONSTANT, TOKEN_INTCONSTANT, TOKEN_FLOATCONSTANT, TOKEN_STRING_LITERAL, TOKEN_LPAREN, END_OF_TOKENS,
    /*arg_expr_list2*/ TOKEN_COMMA, EPSILON, END_OF_TOKENS,
    /*primary_expr*/ TOKEN_IDENTIFIER, TOKEN_HEXCONSTANT, TOKEN_INTCONSTANT, TOKEN_FLOATCONSTANT, TOKEN_STRING_LITERAL, TOKEN_LPAREN, END_OF_TOKENS,
    /*constant*/ TOKEN_HEXCONSTANT, TOKEN_INTCONSTANT, TOKEN_FLOATCONSTANT, TOKEN_STRING_LITERAL, END_OF_TOKENS,
};




static MY_TOKEN_TYPE follow[] =
{
    /*start*/ TOKEN_EOF, END_OF_TOKENS,
    /*external_decl*/ EPSILON, TOKEN_CONST, TOKEN_SIGNED, TOKEN_UNSIGNED, TOKEN_VOID, TOKEN_CHAR, TOKEN_SHORT, TOKEN_INT, TOKEN_LONG, TOKEN_FLOAT, TOKEN_DOUBLE, TOKEN_EOF, END_OF_TOKENS,
    /*decl_spec*/ TOKEN_IDENTIFIER, TOKEN_COMMA, EPSILON, TOKEN_RPAREN, END_OF_TOKENS,
    /*decl*/ TOKEN_CONST, TOKEN_SIGNED, TOKEN_UNSIGNED, TOKEN_VOID, TOKEN_CHAR, TOKEN_SHORT, TOKEN_INT, TOKEN_LONG, TOKEN_FLOAT, TOKEN_DOUBLE, EPSILON, TOKEN_LCURLY, TOKEN_IF, TOKEN_SWITCH, TOKEN_WHILE, TOKEN_DO, TOKEN_FOR, TOKEN_BREAK, TOKEN_CONTINUE, TOKEN_RETURN, TOKEN_INC_OP, TOKEN_DEC_OP, TOKEN_BITWISE_NOT, TOKEN_ADD, TOKEN_SUB, TOKEN_BOOLEAN_NOT, TOKEN_IDENTIFIER, TOKEN_HEXCONSTANT, TOKEN_INTCONSTANT, TOKEN_FLOATCONSTANT, TOKEN_STRING_LITERAL, TOKEN_LPAREN, TOKEN_RCURLY, END_OF_TOKENS,
    /*funcDecl*/ TOKEN_LCURLY, END_OF_TOKENS,
    /*funcDecl1*/ TOKEN_LCURLY, END_OF_TOKENS,
    /*initializer*/ TOKEN_SEMICOLON, END_OF_TOKENS,
    /*parm_decl*/ TOKEN_COMMA, EPSILON, TOKEN_RPAREN, END_OF_TOKENS,
    /*param_list*/ TOKEN_RPAREN, END_OF_TOKENS,
    /*param_list2*/ TOKEN_RPAREN, END_OF_TOKENS,
    /*stmt_list*/ TOKEN_RCURLY, TOKEN_CASE, TOKEN_DEFAULT, END_OF_TOKENS,
    /*stmt*/ EPSILON, TOKEN_LCURLY, TOKEN_IF, TOKEN_SWITCH, TOKEN_WHILE, TOKEN_DO, TOKEN_FOR, TOKEN_BREAK, TOKEN_CONTINUE, TOKEN_RETURN, TOKEN_INC_OP, TOKEN_DEC_OP, TOKEN_BITWISE_NOT, TOKEN_ADD, TOKEN_SUB, TOKEN_BOOLEAN_NOT, TOKEN_IDENTIFIER, TOKEN_HEXCONSTANT, TOKEN_INTCONSTANT, TOKEN_FLOATCONSTANT, TOKEN_STRING_LITERAL, TOKEN_LPAREN, TOKEN_RCURLY, TOKEN_ELSE, END_OF_TOKENS,
    /*expr_stmt*/ EPSILON, TOKEN_LCURLY, TOKEN_IF, TOKEN_SWITCH, TOKEN_WHILE, TOKEN_DO, TOKEN_FOR, TOKEN_BREAK, TOKEN_CONTINUE, TOKEN_RETURN, TOKEN_INC_OP, TOKEN_DEC_OP, TOKEN_BITWISE_NOT, TOKEN_ADD, TOKEN_SUB, TOKEN_BOOLEAN_NOT, TOKEN_IDENTIFIER, TOKEN_HEXCONSTANT, TOKEN_INTCONSTANT, TOKEN_FLOATCONSTANT, TOKEN_STRING_LITERAL, TOKEN_LPAREN, TOKEN_RCURLY, TOKEN_ELSE, TOKEN_RPAREN, END_OF_TOKENS,
    /*comp_stmt*/ EPSILON, TOKEN_LCURLY, TOKEN_IF, TOKEN_SWITCH, TOKEN_WHILE, TOKEN_DO, TOKEN_FOR, TOKEN_BREAK, TOKEN_CONTINUE, TOKEN_RETURN, TOKEN_INC_OP, TOKEN_DEC_OP, TOKEN_BITWISE_NOT, TOKEN_ADD, TOKEN_SUB, TOKEN_BOOLEAN_NOT, TOKEN_IDENTIFIER, TOKEN_HEXCONSTANT, TOKEN_INTCONSTANT, TOKEN_FLOATCONSTANT, TOKEN_STRING_LITERAL, TOKEN_LPAREN, TOKEN_RCURLY, TOKEN_CASE, TOKEN_DEFAULT, TOKEN_ELSE, TOKEN_CONST, TOKEN_SIGNED, TOKEN_UNSIGNED, TOKEN_VOID, TOKEN_CHAR, TOKEN_SHORT, TOKEN_INT, TOKEN_LONG, TOKEN_FLOAT, TOKEN_DOUBLE, TOKEN_EOF, END_OF_TOKENS,
    /*select_stmt*/ EPSILON, TOKEN_LCURLY, TOKEN_IF, TOKEN_SWITCH, TOKEN_WHILE, TOKEN_DO, TOKEN_FOR, TOKEN_BREAK, TOKEN_CONTINUE, TOKEN_RETURN, TOKEN_INC_OP, TOKEN_DEC_OP, TOKEN_BITWISE_NOT, TOKEN_ADD, TOKEN_SUB, TOKEN_BOOLEAN_NOT, TOKEN_IDENTIFIER, TOKEN_HEXCONSTANT, TOKEN_INTCONSTANT, TOKEN_FLOATCONSTANT, TOKEN_STRING_LITERAL, TOKEN_LPAREN, TOKEN_RCURLY, TOKEN_ELSE, END_OF_TOKENS,
    /*opt_else*/ EPSILON, TOKEN_LCURLY, TOKEN_IF, TOKEN_SWITCH, TOKEN_WHILE, TOKEN_DO, TOKEN_FOR, TOKEN_BREAK, TOKEN_CONTINUE, TOKEN_RETURN, TOKEN_INC_OP, TOKEN_DEC_OP, TOKEN_BITWISE_NOT, TOKEN_ADD, TOKEN_SUB, TOKEN_BOOLEAN_NOT, TOKEN_IDENTIFIER, TOKEN_HEXCONSTANT, TOKEN_INTCONSTANT, TOKEN_FLOATCONSTANT, TOKEN_STRING_LITERAL, TOKEN_LPAREN, TOKEN_RCURLY, TOKEN_ELSE, TOKEN_INT, TOKEN_FLOAT, TOKEN_CHAR, TOKEN_VOID, END_OF_TOKENS,
    /*switch_body*/ TOKEN_RCURLY, END_OF_TOKENS,
    /*case_label*/ END_OF_TOKENS, END_OF_TOKENS,
    /*iter_stmt*/ EPSILON, TOKEN_LCURLY, TOKEN_IF, TOKEN_SWITCH, TOKEN_WHILE, TOKEN_DO, TOKEN_FOR, TOKEN_BREAK, TOKEN_CONTINUE, TOKEN_RETURN, TOKEN_INC_OP, TOKEN_DEC_OP, TOKEN_BITWISE_NOT, TOKEN_ADD, TOKEN_SUB, TOKEN_BOOLEAN_NOT, TOKEN_IDENTIFIER, TOKEN_HEXCONSTANT, TOKEN_INTCONSTANT, TOKEN_FLOATCONSTANT, TOKEN_STRING_LITERAL, TOKEN_LPAREN, TOKEN_RCURLY, TOKEN_ELSE, END_OF_TOKENS,
    /*opt_expr_stmt*/ EPSILON, TOKEN_INC_OP, TOKEN_DEC_OP, TOKEN_BITWISE_NOT, TOKEN_ADD, TOKEN_SUB, TOKEN_BOOLEAN_NOT, TOKEN_IDENTIFIER, TOKEN_HEXCONSTANT, TOKEN_INTCONSTANT, TOKEN_FLOATCONSTANT, TOKEN_STRING_LITERAL, TOKEN_LPAREN, TOKEN_RPAREN, END_OF_TOKENS,
    /*defer_expr_stmt*/ TOKEN_RPAREN, END_OF_TOKENS,
    /*jump_stmt*/ EPSILON, TOKEN_LCURLY, TOKEN_IF, TOKEN_SWITCH, TOKEN_WHILE, TOKEN_DO, TOKEN_FOR, TOKEN_BREAK, TOKEN_CONTINUE, TOKEN_RETURN, TOKEN_INC_OP, TOKEN_DEC_OP, TOKEN_BITWISE_NOT, TOKEN_ADD, TOKEN_SUB, TOKEN_BOOLEAN_NOT, TOKEN_IDENTIFIER, TOKEN_HEXCONSTANT, TOKEN_INTCONSTANT, TOKEN_FLOATCONSTANT, TOKEN_STRING_LITERAL, TOKEN_LPAREN, TOKEN_RCURLY, TOKEN_ELSE, END_OF_TOKENS,
    /*opt_expr*/ TOKEN_SEMICOLON, END_OF_TOKENS,
    /*expr*/ TOKEN_SEMICOLON, TOKEN_RPAREN, TOKEN_COLON, END_OF_TOKENS,
    /*assignment_op*/ TOKEN_INC_OP, TOKEN_DEC_OP, TOKEN_BITWISE_NOT, TOKEN_ADD, TOKEN_SUB, TOKEN_BOOLEAN_NOT, TOKEN_IDENTIFIER, TOKEN_HEXCONSTANT, TOKEN_INTCONSTANT, TOKEN_FLOATCONSTANT, TOKEN_STRING_LITERAL, TOKEN_LPAREN, END_OF_TOKENS,
    /*assignment_expr*/ TOKEN_SEMICOLON, TOKEN_RPAREN, TOKEN_COLON, TOKEN_COMMA, EPSILON, END_OF_TOKENS,
    /*assignment_expr2*/ TOKEN_SEMICOLON, TOKEN_RPAREN, TOKEN_COLON, TOKEN_COMMA, EPSILON, END_OF_TOKENS,
    /*const_expr*/ END_OF_TOKENS, END_OF_TOKENS,
    /*cond_expr*/ TOKEN_ASSIGN, TOKEN_MUL_ASSIGN, TOKEN_DIV_ASSIGN, TOKEN_MOD_ASSIGN, TOKEN_ADD_ASSIGN, TOKEN_SUB_ASSIGN, TOKEN_LEFT_ASSIGN, TOKEN_RIGHT_ASSIGN, TOKEN_AND_ASSIGN, TOKEN_XOR_ASSIGN, TOKEN_OR_ASSIGN, EPSILON, TOKEN_SEMICOLON, TOKEN_RPAREN, TOKEN_COLON, TOKEN_COMMA, END_OF_TOKENS,
    /*cond_expr2*/ TOKEN_ASSIGN, TOKEN_MUL_ASSIGN, TOKEN_DIV_ASSIGN, TOKEN_MOD_ASSIGN, TOKEN_ADD_ASSIGN, TOKEN_SUB_ASSIGN, TOKEN_LEFT_ASSIGN, TOKEN_RIGHT_ASSIGN, TOKEN_AND_ASSIGN, TOKEN_XOR_ASSIGN, TOKEN_OR_ASSIGN, EPSILON, TOKEN_SEMICOLON, TOKEN_RPAREN, TOKEN_COLON, TOKEN_COMMA, END_OF_TOKENS,
    /*log_or_expr*/ TOKEN_CONDITIONAL, EPSILON, TOKEN_SEMICOLON, TOKEN_RPAREN, TOKEN_COLON, TOKEN_COMMA, TOKEN_ASSIGN, TOKEN_MUL_ASSIGN, TOKEN_DIV_ASSIGN, TOKEN_MOD_ASSIGN, TOKEN_ADD_ASSIGN, TOKEN_SUB_ASSIGN, TOKEN_LEFT_ASSIGN, TOKEN_RIGHT_ASSIGN, TOKEN_AND_ASSIGN, TOKEN_XOR_ASSIGN, TOKEN_OR_ASSIGN, END_OF_TOKENS,
    /*log_or_expr2*/ TOKEN_CONDITIONAL, EPSILON, TOKEN_SEMICOLON, TOKEN_RPAREN, TOKEN_COLON, TOKEN_COMMA, TOKEN_ASSIGN, TOKEN_MUL_ASSIGN, TOKEN_DIV_ASSIGN, TOKEN_MOD_ASSIGN, TOKEN_ADD_ASSIGN, TOKEN_SUB_ASSIGN, TOKEN_LEFT_ASSIGN, TOKEN_RIGHT_ASSIGN, TOKEN_AND_ASSIGN, TOKEN_XOR_ASSIGN, TOKEN_OR_ASSIGN, END_OF_TOKENS,
    /*log_and_expr*/ TOKEN_OR_OP, EPSILON, TOKEN_SEMICOLON, TOKEN_RPAREN, TOKEN_COLON, TOKEN_COMMA, TOKEN_ASSIGN, TOKEN_MUL_ASSIGN, TOKEN_DIV_ASSIGN, TOKEN_MOD_ASSIGN, TOKEN_ADD_ASSIGN, TOKEN_SUB_ASSIGN, TOKEN_LEFT_ASSIGN, TOKEN_RIGHT_ASSIGN, TOKEN_AND_ASSIGN, TOKEN_XOR_ASSIGN, TOKEN_OR_ASSIGN, TOKEN_CONDITIONAL, END_OF_TOKENS,
    /*log_and_expr2*/ TOKEN_OR_OP, EPSILON, TOKEN_SEMICOLON, TOKEN_RPAREN, TOKEN_COLON, TOKEN_COMMA, TOKEN_ASSIGN, TOKEN_MUL_ASSIGN, TOKEN_DIV_ASSIGN, TOKEN_MOD_ASSIGN, TOKEN_ADD_ASSIGN, TOKEN_SUB_ASSIGN, TOKEN_LEFT_ASSIGN, TOKEN_RIGHT_ASSIGN, TOKEN_AND_ASSIGN, TOKEN_XOR_ASSIGN, TOKEN_OR_ASSIGN, TOKEN_CONDITIONAL, END_OF_TOKENS,
    /*bit_or_expr*/ TOKEN_AND_OP, EPSILON, TOKEN_SEMICOLON, TOKEN_RPAREN, TOKEN_COLON, TOKEN_COMMA, TOKEN_ASSIGN, TOKEN_MUL_ASSIGN, TOKEN_DIV_ASSIGN, TOKEN_MOD_ASSIGN, TOKEN_ADD_ASSIGN, TOKEN_SUB_ASSIGN, TOKEN_LEFT_ASSIGN, TOKEN_RIGHT_ASSIGN, TOKEN_AND_ASSIGN, TOKEN_XOR_ASSIGN, TOKEN_OR_ASSIGN, TOKEN_CONDITIONAL, TOKEN_OR_OP, END_OF_TOKENS,
    /*bit_or_expr2*/ TOKEN_AND_OP, EPSILON, TOKEN_SEMICOLON, TOKEN_RPAREN, TOKEN_COLON, TOKEN_COMMA, TOKEN_ASSIGN, TOKEN_MUL_ASSIGN, TOKEN_DIV_ASSIGN, TOKEN_MOD_ASSIGN, TOKEN_ADD_ASSIGN, TOKEN_SUB_ASSIGN, TOKEN_LEFT_ASSIGN, TOKEN_RIGHT_ASSIGN, TOKEN_AND_ASSIGN, TOKEN_XOR_ASSIGN, TOKEN_OR_ASSIGN, TOKEN_CONDITIONAL, TOKEN_OR_OP, END_OF_TOKENS,
    /*xor_expr*/ TOKEN_BITWISE_OR, EPSILON, TOKEN_SEMICOLON, TOKEN_RPAREN, TOKEN_COLON, TOKEN_COMMA, TOKEN_ASSIGN, TOKEN_MUL_ASSIGN, TOKEN_DIV_ASSIGN, TOKEN_MOD_ASSIGN, TOKEN_ADD_ASSIGN, TOKEN_SUB_ASSIGN, TOKEN_LEFT_ASSIGN, TOKEN_RIGHT_ASSIGN, TOKEN_AND_ASSIGN, TOKEN_XOR_ASSIGN, TOKEN_OR_ASSIGN, TOKEN_CONDITIONAL, TOKEN_OR_OP, TOKEN_AND_OP, END_OF_TOKENS,
    /*xor_expr2*/ TOKEN_BITWISE_OR, EPSILON, TOKEN_SEMICOLON, TOKEN_RPAREN, TOKEN_COLON, TOKEN_COMMA, TOKEN_ASSIGN, TOKEN_MUL_ASSIGN, TOKEN_DIV_ASSIGN, TOKEN_MOD_ASSIGN, TOKEN_ADD_ASSIGN, TOKEN_SUB_ASSIGN, TOKEN_LEFT_ASSIGN, TOKEN_RIGHT_ASSIGN, TOKEN_AND_ASSIGN, TOKEN_XOR_ASSIGN, TOKEN_OR_ASSIGN, TOKEN_CONDITIONAL, TOKEN_OR_OP, TOKEN_AND_OP, END_OF_TOKENS,
    /*bit_and_expr*/ TOKEN_XOR, EPSILON, TOKEN_SEMICOLON, TOKEN_RPAREN, TOKEN_COLON, TOKEN_COMMA, TOKEN_ASSIGN, TOKEN_MUL_ASSIGN, TOKEN_DIV_ASSIGN, TOKEN_MOD_ASSIGN, TOKEN_ADD_ASSIGN, TOKEN_SUB_ASSIGN, TOKEN_LEFT_ASSIGN, TOKEN_RIGHT_ASSIGN, TOKEN_AND_ASSIGN, TOKEN_XOR_ASSIGN, TOKEN_OR_ASSIGN, TOKEN_CONDITIONAL, TOKEN_OR_OP, TOKEN_AND_OP, TOKEN_BITWISE_OR, END_OF_TOKENS,
    /*bit_and_expr2*/ TOKEN_XOR, EPSILON, TOKEN_SEMICOLON, TOKEN_RPAREN, TOKEN_COLON, TOKEN_COMMA, TOKEN_ASSIGN, TOKEN_MUL_ASSIGN, TOKEN_DIV_ASSIGN, TOKEN_MOD_ASSIGN, TOKEN_ADD_ASSIGN, TOKEN_SUB_ASSIGN, TOKEN_LEFT_ASSIGN, TOKEN_RIGHT_ASSIGN, TOKEN_AND_ASSIGN, TOKEN_XOR_ASSIGN, TOKEN_OR_ASSIGN, TOKEN_CONDITIONAL, TOKEN_OR_OP, TOKEN_AND_OP, TOKEN_BITWISE_OR, END_OF_TOKENS,
    /*eq_op*/ TOKEN_INC_OP, TOKEN_DEC_OP, TOKEN_BITWISE_NOT, TOKEN_ADD, TOKEN_SUB, TOKEN_BOOLEAN_NOT, TOKEN_IDENTIFIER, TOKEN_HEXCONSTANT, TOKEN_INTCONSTANT, TOKEN_FLOATCONSTANT, TOKEN_STRING_LITERAL, TOKEN_LPAREN, END_OF_TOKENS,
    /*equal_expr*/ TOKEN_BITWISE_AND, EPSILON, TOKEN_SEMICOLON, TOKEN_RPAREN, TOKEN_COLON, TOKEN_COMMA, TOKEN_ASSIGN, TOKEN_MUL_ASSIGN, TOKEN_DIV_ASSIGN, TOKEN_MOD_ASSIGN, TOKEN_ADD_ASSIGN, TOKEN_SUB_ASSIGN, TOKEN_LEFT_ASSIGN, TOKEN_RIGHT_ASSIGN, TOKEN_AND_ASSIGN, TOKEN_XOR_ASSIGN, TOKEN_OR_ASSIGN, TOKEN_CONDITIONAL, TOKEN_OR_OP, TOKEN_AND_OP, TOKEN_BITWISE_OR, TOKEN_XOR, END_OF_TOKENS,
    /*equal_expr2*/ TOKEN_BITWISE_AND, EPSILON, TOKEN_SEMICOLON, TOKEN_RPAREN, TOKEN_COLON, TOKEN_COMMA, TOKEN_ASSIGN, TOKEN_MUL_ASSIGN, TOKEN_DIV_ASSIGN, TOKEN_MOD_ASSIGN, TOKEN_ADD_ASSIGN, TOKEN_SUB_ASSIGN, TOKEN_LEFT_ASSIGN, TOKEN_RIGHT_ASSIGN, TOKEN_AND_ASSIGN, TOKEN_XOR_ASSIGN, TOKEN_OR_ASSIGN, TOKEN_CONDITIONAL, TOKEN_OR_OP, TOKEN_AND_OP, TOKEN_BITWISE_OR, TOKEN_XOR, END_OF_TOKENS,
    /*rel_op*/ TOKEN_INC_OP, TOKEN_DEC_OP, TOKEN_BITWISE_NOT, TOKEN_ADD, TOKEN_SUB, TOKEN_BOOLEAN_NOT, TOKEN_IDENTIFIER, TOKEN_HEXCONSTANT, TOKEN_INTCONSTANT, TOKEN_FLOATCONSTANT, TOKEN_STRING_LITERAL, TOKEN_LPAREN, END_OF_TOKENS,
    /*rel_expr*/ TOKEN_EQ_OP, TOKEN_NE_OP, EPSILON, TOKEN_SEMICOLON, TOKEN_RPAREN, TOKEN_COLON, TOKEN_COMMA, TOKEN_ASSIGN, TOKEN_MUL_ASSIGN, TOKEN_DIV_ASSIGN, TOKEN_MOD_ASSIGN, TOKEN_ADD_ASSIGN, TOKEN_SUB_ASSIGN, TOKEN_LEFT_ASSIGN, TOKEN_RIGHT_ASSIGN, TOKEN_AND_ASSIGN, TOKEN_XOR_ASSIGN, TOKEN_OR_ASSIGN, TOKEN_CONDITIONAL, TOKEN_OR_OP, TOKEN_AND_OP, TOKEN_BITWISE_OR, TOKEN_XOR, TOKEN_BITWISE_AND, END_OF_TOKENS,
    /*rel_expr2*/ TOKEN_EQ_OP, TOKEN_NE_OP, EPSILON, TOKEN_SEMICOLON, TOKEN_RPAREN, TOKEN_COLON, TOKEN_COMMA, TOKEN_ASSIGN, TOKEN_MUL_ASSIGN, TOKEN_DIV_ASSIGN, TOKEN_MOD_ASSIGN, TOKEN_ADD_ASSIGN, TOKEN_SUB_ASSIGN, TOKEN_LEFT_ASSIGN, TOKEN_RIGHT_ASSIGN, TOKEN_AND_ASSIGN, TOKEN_XOR_ASSIGN, TOKEN_OR_ASSIGN, TOKEN_CONDITIONAL, TOKEN_OR_OP, TOKEN_AND_OP, TOKEN_BITWISE_OR, TOKEN_XOR, TOKEN_BITWISE_AND, END_OF_TOKENS,
    /*shift_op*/ TOKEN_INC_OP, TOKEN_DEC_OP, TOKEN_BITWISE_NOT, TOKEN_ADD, TOKEN_SUB, TOKEN_BOOLEAN_NOT, TOKEN_IDENTIFIER, TOKEN_HEXCONSTANT, TOKEN_INTCONSTANT, TOKEN_FLOATCONSTANT, TOKEN_STRING_LITERAL, TOKEN_LPAREN, END_OF_TOKENS,
    /*shift_expr*/ TOKEN_GE_OP, TOKEN_LE_OP, TOKEN_LT, TOKEN_GT, EPSILON, TOKEN_SEMICOLON, TOKEN_RPAREN, TOKEN_COLON, TOKEN_COMMA, TOKEN_ASSIGN, TOKEN_MUL_ASSIGN, TOKEN_DIV_ASSIGN, TOKEN_MOD_ASSIGN, TOKEN_ADD_ASSIGN, TOKEN_SUB_ASSIGN, TOKEN_LEFT_ASSIGN, TOKEN_RIGHT_ASSIGN, TOKEN_AND_ASSIGN, TOKEN_XOR_ASSIGN, TOKEN_OR_ASSIGN, TOKEN_CONDITIONAL, TOKEN_OR_OP, TOKEN_AND_OP, TOKEN_BITWISE_OR, TOKEN_XOR, TOKEN_BITWISE_AND, TOKEN_EQ_OP, TOKEN_NE_OP, END_OF_TOKENS,
    /*shift_expr2*/ TOKEN_GE_OP, TOKEN_LE_OP, TOKEN_LT, TOKEN_GT, EPSILON, TOKEN_SEMICOLON, TOKEN_RPAREN, TOKEN_COLON, TOKEN_COMMA, TOKEN_ASSIGN, TOKEN_MUL_ASSIGN, TOKEN_MOD_ASSIGN, TOKEN_DIV_ASSIGN, TOKEN_ADD_ASSIGN, TOKEN_SUB_ASSIGN, TOKEN_LEFT_ASSIGN, TOKEN_RIGHT_ASSIGN, TOKEN_AND_ASSIGN, TOKEN_XOR_ASSIGN, TOKEN_OR_ASSIGN, TOKEN_CONDITIONAL, TOKEN_OR_OP, TOKEN_AND_OP, TOKEN_BITWISE_OR, TOKEN_XOR, TOKEN_BITWISE_AND, TOKEN_EQ_OP, TOKEN_NE_OP, END_OF_TOKENS,
    /*add_op*/ TOKEN_INC_OP, TOKEN_DEC_OP, TOKEN_BITWISE_NOT, TOKEN_ADD, TOKEN_SUB, TOKEN_BOOLEAN_NOT, TOKEN_IDENTIFIER, TOKEN_HEXCONSTANT, TOKEN_INTCONSTANT, TOKEN_FLOATCONSTANT, TOKEN_STRING_LITERAL, TOKEN_LPAREN, END_OF_TOKENS,
    /*add_expr*/ TOKEN_LEFT_OP, TOKEN_RIGHT_OP, EPSILON, TOKEN_SEMICOLON, TOKEN_RPAREN, TOKEN_COLON, TOKEN_COMMA, TOKEN_ASSIGN, TOKEN_MUL_ASSIGN, TOKEN_DIV_ASSIGN, TOKEN_MOD_ASSIGN, TOKEN_ADD_ASSIGN, TOKEN_SUB_ASSIGN, TOKEN_LEFT_ASSIGN, TOKEN_RIGHT_ASSIGN, TOKEN_AND_ASSIGN, TOKEN_XOR_ASSIGN, TOKEN_OR_ASSIGN, TOKEN_CONDITIONAL, TOKEN_OR_OP, TOKEN_AND_OP, TOKEN_BITWISE_OR, TOKEN_XOR, TOKEN_BITWISE_AND, TOKEN_EQ_OP, TOKEN_NE_OP, TOKEN_GE_OP, TOKEN_LE_OP, TOKEN_LT, TOKEN_GT, END_OF_TOKENS,
    /*add_expr2*/ TOKEN_LEFT_OP, TOKEN_RIGHT_OP, EPSILON, TOKEN_SEMICOLON, TOKEN_RPAREN, TOKEN_COLON, TOKEN_COMMA, TOKEN_ASSIGN, TOKEN_MUL_ASSIGN, TOKEN_MOD_ASSIGN, TOKEN_DIV_ASSIGN, TOKEN_ADD_ASSIGN, TOKEN_SUB_ASSIGN, TOKEN_LEFT_ASSIGN, TOKEN_RIGHT_ASSIGN, TOKEN_AND_ASSIGN, TOKEN_XOR_ASSIGN, TOKEN_OR_ASSIGN, TOKEN_CONDITIONAL, TOKEN_OR_OP, TOKEN_AND_OP, TOKEN_BITWISE_OR, TOKEN_XOR, TOKEN_BITWISE_AND, TOKEN_EQ_OP, TOKEN_NE_OP, TOKEN_GE_OP, TOKEN_LE_OP, TOKEN_LT, TOKEN_GT, END_OF_TOKENS,
    /*mult_op*/ TOKEN_INC_OP, TOKEN_DEC_OP, TOKEN_BITWISE_NOT, TOKEN_ADD, TOKEN_SUB, TOKEN_BOOLEAN_NOT, TOKEN_IDENTIFIER, TOKEN_HEXCONSTANT, TOKEN_INTCONSTANT, TOKEN_FLOATCONSTANT, TOKEN_STRING_LITERAL, TOKEN_LPAREN, END_OF_TOKENS,
    /*mult_expr*/ TOKEN_ADD, TOKEN_SUB, EPSILON, TOKEN_SEMICOLON, TOKEN_RPAREN, TOKEN_COLON, TOKEN_COMMA, TOKEN_ASSIGN, TOKEN_MUL_ASSIGN, TOKEN_DIV_ASSIGN, TOKEN_MOD_ASSIGN, TOKEN_ADD_ASSIGN, TOKEN_SUB_ASSIGN, TOKEN_LEFT_ASSIGN, TOKEN_RIGHT_ASSIGN, TOKEN_AND_ASSIGN, TOKEN_XOR_ASSIGN, TOKEN_OR_ASSIGN, TOKEN_CONDITIONAL, TOKEN_OR_OP, TOKEN_AND_OP, TOKEN_BITWISE_OR, TOKEN_XOR, TOKEN_BITWISE_AND, TOKEN_EQ_OP, TOKEN_NE_OP, TOKEN_GE_OP, TOKEN_LE_OP, TOKEN_LT, TOKEN_GT, TOKEN_LEFT_OP, TOKEN_RIGHT_OP, END_OF_TOKENS,
    /*mult_expr2*/ TOKEN_ADD, TOKEN_SUB, EPSILON, TOKEN_SEMICOLON, TOKEN_RPAREN, TOKEN_COLON, TOKEN_COMMA, TOKEN_ASSIGN, TOKEN_MUL_ASSIGN, TOKEN_DIV_ASSIGN, TOKEN_MOD_ASSIGN, TOKEN_ADD_ASSIGN, TOKEN_SUB_ASSIGN, TOKEN_LEFT_ASSIGN, TOKEN_RIGHT_ASSIGN, TOKEN_AND_ASSIGN, TOKEN_XOR_ASSIGN, TOKEN_OR_ASSIGN, TOKEN_CONDITIONAL, TOKEN_OR_OP, TOKEN_AND_OP, TOKEN_BITWISE_OR, TOKEN_XOR, TOKEN_BITWISE_AND, TOKEN_EQ_OP, TOKEN_NE_OP, TOKEN_GE_OP, TOKEN_LE_OP, TOKEN_LT, TOKEN_GT, TOKEN_LEFT_OP, TOKEN_RIGHT_OP, END_OF_TOKENS,
    /*unary_expr*/ TOKEN_MUL, TOKEN_DIV, TOKEN_MOD, EPSILON, TOKEN_SEMICOLON, TOKEN_RPAREN, TOKEN_COLON, TOKEN_COMMA, TOKEN_ASSIGN, TOKEN_MUL_ASSIGN, TOKEN_DIV_ASSIGN, TOKEN_MOD_ASSIGN, TOKEN_ADD_ASSIGN, TOKEN_SUB_ASSIGN, TOKEN_LEFT_ASSIGN, TOKEN_RIGHT_ASSIGN, TOKEN_AND_ASSIGN, TOKEN_XOR_ASSIGN, TOKEN_OR_ASSIGN, TOKEN_CONDITIONAL, TOKEN_OR_OP, TOKEN_AND_OP, TOKEN_BITWISE_OR, TOKEN_XOR, TOKEN_BITWISE_AND, TOKEN_EQ_OP, TOKEN_NE_OP, TOKEN_GE_OP, TOKEN_LE_OP, TOKEN_LT, TOKEN_GT, TOKEN_LEFT_OP, TOKEN_RIGHT_OP, TOKEN_ADD, TOKEN_SUB, END_OF_TOKENS,
    /*postfix_expr*/ TOKEN_MUL, TOKEN_DIV, TOKEN_MOD, EPSILON, TOKEN_SEMICOLON, TOKEN_RPAREN, TOKEN_COLON, TOKEN_COMMA, TOKEN_ASSIGN, TOKEN_MUL_ASSIGN, TOKEN_DIV_ASSIGN, TOKEN_MOD_ASSIGN, TOKEN_ADD_ASSIGN, TOKEN_SUB_ASSIGN, TOKEN_LEFT_ASSIGN, TOKEN_RIGHT_ASSIGN, TOKEN_AND_ASSIGN, TOKEN_XOR_ASSIGN, TOKEN_OR_ASSIGN, TOKEN_CONDITIONAL, TOKEN_OR_OP, TOKEN_AND_OP, TOKEN_BITWISE_OR, TOKEN_XOR, TOKEN_BITWISE_AND, TOKEN_EQ_OP, TOKEN_NE_OP, TOKEN_GE_OP, TOKEN_LE_OP, TOKEN_LT, TOKEN_GT, TOKEN_LEFT_OP, TOKEN_RIGHT_OP, TOKEN_ADD, TOKEN_SUB, END_OF_TOKENS,
    /*postfix_expr2*/ TOKEN_MUL, TOKEN_DIV, TOKEN_MOD, EPSILON, TOKEN_SEMICOLON, TOKEN_RPAREN, TOKEN_COLON, TOKEN_COMMA, TOKEN_ASSIGN, TOKEN_MUL_ASSIGN, TOKEN_DIV_ASSIGN, TOKEN_MOD_ASSIGN, TOKEN_ADD_ASSIGN, TOKEN_SUB_ASSIGN, TOKEN_LEFT_ASSIGN, TOKEN_RIGHT_ASSIGN, TOKEN_AND_ASSIGN, TOKEN_XOR_ASSIGN, TOKEN_OR_ASSIGN, TOKEN_CONDITIONAL, TOKEN_OR_OP, TOKEN_AND_OP, TOKEN_BITWISE_OR, TOKEN_XOR, TOKEN_BITWISE_AND, TOKEN_EQ_OP, TOKEN_NE_OP, TOKEN_GE_OP, TOKEN_LE_OP, TOKEN_LT, TOKEN_GT, TOKEN_LEFT_OP, TOKEN_RIGHT_OP, TOKEN_ADD, TOKEN_SUB, END_OF_TOKENS,
    /*arg_expr_list*/ TOKEN_RPAREN, END_OF_TOKENS,
    /*arg_expr_list2*/ TOKEN_RPAREN, END_OF_TOKENS,
    /*primary_expr*/ TOKEN_LPAREN, TOKEN_FIELD, TOKEN_INC_OP, TOKEN_DEC_OP, TOKEN_BITWISE_NOT, EPSILON, TOKEN_SEMICOLON, TOKEN_RPAREN, TOKEN_COLON, TOKEN_COMMA, TOKEN_ASSIGN, TOKEN_MUL_ASSIGN, TOKEN_DIV_ASSIGN, TOKEN_MOD_ASSIGN, TOKEN_ADD_ASSIGN, TOKEN_SUB_ASSIGN, TOKEN_LEFT_ASSIGN, TOKEN_RIGHT_ASSIGN, TOKEN_AND_ASSIGN, TOKEN_XOR_ASSIGN, TOKEN_OR_ASSIGN, TOKEN_CONDITIONAL, TOKEN_OR_OP, TOKEN_AND_OP, TOKEN_BITWISE_OR, TOKEN_XOR, TOKEN_BITWISE_AND, TOKEN_EQ_OP, TOKEN_NE_OP, TOKEN_GE_OP, TOKEN_LE_OP, TOKEN_LT, TOKEN_GT, TOKEN_LEFT_OP, TOKEN_RIGHT_OP, TOKEN_ADD, TOKEN_SUB, TOKEN_MUL, TOKEN_DIV, TOKEN_MOD, END_OF_TOKENS,
    /*constant*/ TOKEN_LPAREN, TOKEN_FIELD, TOKEN_INC_OP, TOKEN_DEC_OP, TOKEN_BITWISE_NOT, EPSILON, TOKEN_SEMICOLON, TOKEN_RPAREN, TOKEN_COLON, TOKEN_COMMA, TOKEN_ASSIGN, TOKEN_MUL_ASSIGN, TOKEN_DIV_ASSIGN, TOKEN_MOD_ASSIGN, TOKEN_ADD_ASSIGN, TOKEN_SUB_ASSIGN, TOKEN_LEFT_ASSIGN, TOKEN_RIGHT_ASSIGN, TOKEN_AND_ASSIGN, TOKEN_XOR_ASSIGN, TOKEN_OR_ASSIGN, TOKEN_CONDITIONAL, TOKEN_OR_OP, TOKEN_AND_OP, TOKEN_BITWISE_OR, TOKEN_XOR, TOKEN_BITWISE_AND, TOKEN_EQ_OP, TOKEN_NE_OP, TOKEN_GE_OP, TOKEN_LE_OP, TOKEN_LT, TOKEN_GT, TOKEN_LEFT_OP, TOKEN_RIGHT_OP, TOKEN_ADD, TOKEN_SUB, TOKEN_MUL, TOKEN_DIV, TOKEN_MOD, END_OF_TOKENS,
};
#endif
