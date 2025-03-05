(* Generated by ocaml-tree-sitter. *)
(*
   toml grammar

   entrypoint: document
*)

open! Sexplib.Conv
open Tree_sitter_run

type line_ending_or_eof = Token.t

type multiline_basic_string_end = Token.t

type imm_tok_rep1_pat_fee4e64 = Token.t

type imm_tok_squot = Token.t (* "'" *)

type pat_13899e9 = Token.t (* pattern [+-]?(inf|nan) *)

type imm_tok_pat_509ec78 = Token.t (* pattern \r?\n *)

type escape_line_ending = Token.t

type bare_key = Token.t (* pattern [A-Za-z0-9_-]+ *)

type multiline_basic_string_content = Token.t

type local_date_time = Token.t

type pat_da2991f = Token.t (* pattern [+-]?(0|[1-9](_?[0-9])*\
  ) *)

type imm_tok_dquot = Token.t (* "\"" *)

type escape_sequence =
  Token.t (* pattern "\\\\([btnfr\"\\\\]|u[0-9a-fA-F]{4}|U[0-9a-fA-F]{8})" *)

type imm_tok_rep1_pat_5e241f9 = Token.t

type pat_3a40bf7 = Token.t (* pattern 0x[0-9a-fA-F](_?[0-9a-fA-F])* *)

type multiline_literal_string_content = Token.t

type pat_509ec78 = Token.t (* pattern \r?\n *)

type local_time =
  Token.t (* pattern ([01][0-9]|2[0-3]):([0-5][0-9]):([0-5][0-9]|60)([.][0-9]+)? *)

type multiline_literal_string_end = Token.t

type boolean = Token.t (* pattern true|false *)

type pat_3b4bc24 = Token.t (* pattern 0o[0-7](_?[0-7])* *)

type tok_pat_da2991f_choice_pat_37ac644 = Token.t

type pat_c9267ca = Token.t (* pattern 0b[01](_?[01])* *)

type offset_date_time = Token.t

type local_date =
  Token.t (* pattern ([0-9]+)-(0[1-9]|1[012])-(0[1-9]|[12][0-9]|3[01]) *)

type literal_string = (
    Token.t (* "'" *)
  * imm_tok_rep1_pat_fee4e64 option
  * imm_tok_squot (*tok*)
)

type basic_string = (
    Token.t (* "\"" *)
  * [
        `Imm_tok_rep1_pat_5e241f9 of imm_tok_rep1_pat_5e241f9
      | `Esc_seq of escape_sequence (*tok*)
    ]
      list (* zero or more *)
  * imm_tok_dquot (*tok*)
)

type float_ = [
    `Tok_pat_da2991f_choice_pat_37ac644 of tok_pat_da2991f_choice_pat_37ac644
  | `Pat_13899e9 of pat_13899e9
]

type integer = [
    `Pat_da2991f of pat_da2991f
  | `Pat_3a40bf7 of pat_3a40bf7
  | `Pat_3b4bc24 of pat_3b4bc24
  | `Pat_c9267ca of pat_c9267ca
]

type quoted_key = [ `Basic_str of basic_string | `Lit_str of literal_string ]

type string_ = [
    `Basic_str of basic_string
  | `Mult_basic_str of (
        Token.t (* "\"\"\"" *)
      * [
            `Imm_tok_rep1_pat_5e241f9 of imm_tok_rep1_pat_5e241f9
          | `Mult_basic_str_content of multiline_basic_string_content (*tok*)
          | `Imm_tok_pat_509ec78 of imm_tok_pat_509ec78
          | `Esc_seq of escape_sequence (*tok*)
          | `Esc_line_ending of escape_line_ending (*tok*)
        ]
          list (* zero or more *)
      * multiline_basic_string_end (*tok*)
    )
  | `Lit_str of literal_string
  | `Mult_lit_str of (
        Token.t (* "'''" *)
      * [
            `Imm_tok_rep1_pat_fee4e64 of imm_tok_rep1_pat_fee4e64
          | `Mult_lit_str_content of multiline_literal_string_content (*tok*)
          | `Imm_tok_pat_509ec78 of imm_tok_pat_509ec78
        ]
          list (* zero or more *)
      * multiline_literal_string_end (*tok*)
    )
]

type key = [ `Bare_key of bare_key (*tok*) | `Quoted_key of quoted_key ]

type anon_choice_dotted_key_32f7558 = [
    `Dotted_key of (anon_choice_dotted_key_32f7558 * Token.t (* "." *) * key)
  | `Key of key
]

type inline_pair = (
    anon_choice_dotted_key_32f7558 * Token.t (* "=" *) * inline_value
)

and inline_value = [
    `Str of string_
  | `Int of integer
  | `Float of float_
  | `Bool of boolean (*tok*)
  | `Offset_date_time of offset_date_time (*tok*)
  | `Local_date_time of local_date_time (*tok*)
  | `Local_date of local_date (*tok*)
  | `Local_time of local_time (*tok*)
  | `Array of (
        Token.t (* "[" *)
      * pat_509ec78 list (* zero or more *)
      * (
            inline_value
          * pat_509ec78 list (* zero or more *)
          * (
                Token.t (* "," *)
              * pat_509ec78 list (* zero or more *)
              * inline_value
              * pat_509ec78 list (* zero or more *)
            )
              list (* zero or more *)
          * (Token.t (* "," *) * pat_509ec78 list (* zero or more *)) option
        )
          option
      * Token.t (* "]" *)
    )
  | `Inline_table of (
        Token.t (* "{" *)
      * (
            inline_pair
          * (Token.t (* "," *) * inline_pair) list (* zero or more *)
        )
          option
      * Token.t (* "}" *)
    )
]

type anon_choice_pair_0ac91a1 = [
    `Pair of (inline_pair * line_ending_or_eof (*tok*))
  | `Pat_509ec78 of pat_509ec78
]

type table_array_element = (
    Token.t (* "[[" *)
  * anon_choice_dotted_key_32f7558
  * Token.t (* "]]" *)
  * line_ending_or_eof (*tok*)
  * anon_choice_pair_0ac91a1 list (* zero or more *)
)

type table = (
    Token.t (* "[" *)
  * anon_choice_dotted_key_32f7558
  * Token.t (* "]" *)
  * line_ending_or_eof (*tok*)
  * anon_choice_pair_0ac91a1 list (* zero or more *)
)

type document = (
    anon_choice_pair_0ac91a1 list (* zero or more *)
  * [ `Table of table | `Table_array_elem of table_array_element ]
      list (* zero or more *)
)

type comment (* inlined *) = Token.t

type multiline_basic_string (* inlined *) = (
    Token.t (* "\"\"\"" *)
  * [
        `Imm_tok_rep1_pat_5e241f9 of imm_tok_rep1_pat_5e241f9
      | `Mult_basic_str_content of multiline_basic_string_content (*tok*)
      | `Imm_tok_pat_509ec78 of imm_tok_pat_509ec78
      | `Esc_seq of escape_sequence (*tok*)
      | `Esc_line_ending of escape_line_ending (*tok*)
    ]
      list (* zero or more *)
  * multiline_basic_string_end (*tok*)
)

type multiline_literal_string (* inlined *) = (
    Token.t (* "'''" *)
  * [
        `Imm_tok_rep1_pat_fee4e64 of imm_tok_rep1_pat_fee4e64
      | `Mult_lit_str_content of multiline_literal_string_content (*tok*)
      | `Imm_tok_pat_509ec78 of imm_tok_pat_509ec78
    ]
      list (* zero or more *)
  * multiline_literal_string_end (*tok*)
)

type dotted_key (* inlined *) = (
    anon_choice_dotted_key_32f7558 * Token.t (* "." *) * key
)

type array_ (* inlined *) = (
    Token.t (* "[" *)
  * pat_509ec78 list (* zero or more *)
  * (
        inline_value
      * pat_509ec78 list (* zero or more *)
      * (
            Token.t (* "," *)
          * pat_509ec78 list (* zero or more *)
          * inline_value
          * pat_509ec78 list (* zero or more *)
        )
          list (* zero or more *)
      * (Token.t (* "," *) * pat_509ec78 list (* zero or more *)) option
    )
      option
  * Token.t (* "]" *)
)

type inline_table (* inlined *) = (
    Token.t (* "{" *)
  * (inline_pair * (Token.t (* "," *) * inline_pair) list (* zero or more *))
      option
  * Token.t (* "}" *)
)

type pair (* inlined *) = (inline_pair * line_ending_or_eof (*tok*))

type extra = [ `Comment of Loc.t * comment ]

type extras = extra list
