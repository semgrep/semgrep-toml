(**
   Boilerplate to be used as a template when mapping the toml CST
   to another type of tree.
*)

module R = Tree_sitter_run.Raw_tree

(* Disable warnings against unused variables *)
[@@@warning "-26-27"]

(* Disable warning against unused 'rec' *)
[@@@warning "-39"]

type env = unit

let token (env : env) (tok : Tree_sitter_run.Token.t) =
  R.Token tok

let blank (env : env) () =
  R.Tuple []

let map_line_ending_or_eof (env : env) (tok : CST.line_ending_or_eof) =
  (* line_ending_or_eof *) token env tok

let map_multiline_basic_string_end (env : env) (tok : CST.multiline_basic_string_end) =
  (* multiline_basic_string_end *) token env tok

let map_imm_tok_rep1_pat_fee4e64 (env : env) (tok : CST.imm_tok_rep1_pat_fee4e64) =
  (* imm_tok_rep1_pat_fee4e64 *) token env tok

let map_imm_tok_squot (env : env) (tok : CST.imm_tok_squot) =
  (* "'" *) token env tok

let map_pat_13899e9 (env : env) (tok : CST.pat_13899e9) =
  (* pattern [+-]?(inf|nan) *) token env tok

let map_imm_tok_pat_509ec78 (env : env) (tok : CST.imm_tok_pat_509ec78) =
  (* pattern \r?\n *) token env tok

let map_escape_line_ending (env : env) (tok : CST.escape_line_ending) =
  (* escape_line_ending *) token env tok

let map_bare_key (env : env) (tok : CST.bare_key) =
  (* pattern [A-Za-z0-9_-]+ *) token env tok

let map_multiline_basic_string_content (env : env) (tok : CST.multiline_basic_string_content) =
  (* multiline_basic_string_content *) token env tok

let map_local_date_time (env : env) (tok : CST.local_date_time) =
  (* local_date_time *) token env tok

let map_pat_da2991f (env : env) (tok : CST.pat_da2991f) =
  (* pattern [+-]?(0|[1-9](_?[0-9])*\
  ) *) token env tok

let map_imm_tok_dquot (env : env) (tok : CST.imm_tok_dquot) =
  (* "\"" *) token env tok

let map_escape_sequence (env : env) (tok : CST.escape_sequence) =
  (* pattern "\\\\([btnfr\"\\\\]|u[0-9a-fA-F]{4}|U[0-9a-fA-F]{8})" *) token env tok

let map_imm_tok_rep1_pat_5e241f9 (env : env) (tok : CST.imm_tok_rep1_pat_5e241f9) =
  (* imm_tok_rep1_pat_5e241f9 *) token env tok

let map_pat_3a40bf7 (env : env) (tok : CST.pat_3a40bf7) =
  (* pattern 0x[0-9a-fA-F](_?[0-9a-fA-F])* *) token env tok

let map_multiline_literal_string_content (env : env) (tok : CST.multiline_literal_string_content) =
  (* multiline_literal_string_content *) token env tok

let map_pat_509ec78 (env : env) (tok : CST.pat_509ec78) =
  (* pattern \r?\n *) token env tok

let map_local_time (env : env) (tok : CST.local_time) =
  (* pattern ([01][0-9]|2[0-3]):([0-5][0-9]):([0-5][0-9]|60)([.][0-9]+)? *) token env tok

let map_multiline_literal_string_end (env : env) (tok : CST.multiline_literal_string_end) =
  (* multiline_literal_string_end *) token env tok

let map_boolean (env : env) (tok : CST.boolean) =
  (* pattern true|false *) token env tok

let map_pat_3b4bc24 (env : env) (tok : CST.pat_3b4bc24) =
  (* pattern 0o[0-7](_?[0-7])* *) token env tok

let map_tok_pat_da2991f_choice_pat_37ac644 (env : env) (tok : CST.tok_pat_da2991f_choice_pat_37ac644) =
  (* tok_pat_da2991f_choice_pat_37ac644 *) token env tok

let map_pat_c9267ca (env : env) (tok : CST.pat_c9267ca) =
  (* pattern 0b[01](_?[01])* *) token env tok

let map_offset_date_time (env : env) (tok : CST.offset_date_time) =
  (* offset_date_time *) token env tok

let map_local_date (env : env) (tok : CST.local_date) =
  (* pattern ([0-9]+)-(0[1-9]|1[012])-(0[1-9]|[12][0-9]|3[01]) *) token env tok

let map_literal_string (env : env) ((v1, v2, v3) : CST.literal_string) =
  let v1 = (* "'" *) token env v1 in
  let v2 =
    (match v2 with
    | Some x -> R.Option (Some (
        map_imm_tok_rep1_pat_fee4e64 env x
      ))
    | None -> R.Option None)
  in
  let v3 = map_imm_tok_squot env v3 in
  R.Tuple [v1; v2; v3]

let map_basic_string (env : env) ((v1, v2, v3) : CST.basic_string) =
  let v1 = (* "\"" *) token env v1 in
  let v2 =
    R.List (List.map (fun x ->
      (match x with
      | `Imm_tok_rep1_pat_5e241f9 x -> R.Case ("Imm_tok_rep1_pat_5e241f9",
          map_imm_tok_rep1_pat_5e241f9 env x
        )
      | `Esc_seq tok -> R.Case ("Esc_seq",
          (* pattern "\\\\([btnfr\"\\\\]|u[0-9a-fA-F]{4}|U[0-9a-fA-F]{8})" *) token env tok
        )
      )
    ) v2)
  in
  let v3 = map_imm_tok_dquot env v3 in
  R.Tuple [v1; v2; v3]

let map_float_ (env : env) (x : CST.float_) =
  (match x with
  | `Tok_pat_da2991f_choice_pat_37ac644 x -> R.Case ("Tok_pat_da2991f_choice_pat_37ac644",
      map_tok_pat_da2991f_choice_pat_37ac644 env x
    )
  | `Pat_13899e9 x -> R.Case ("Pat_13899e9",
      map_pat_13899e9 env x
    )
  )

let map_integer (env : env) (x : CST.integer) =
  (match x with
  | `Pat_da2991f x -> R.Case ("Pat_da2991f",
      map_pat_da2991f env x
    )
  | `Pat_3a40bf7 x -> R.Case ("Pat_3a40bf7",
      map_pat_3a40bf7 env x
    )
  | `Pat_3b4bc24 x -> R.Case ("Pat_3b4bc24",
      map_pat_3b4bc24 env x
    )
  | `Pat_c9267ca x -> R.Case ("Pat_c9267ca",
      map_pat_c9267ca env x
    )
  )

let map_quoted_key (env : env) (x : CST.quoted_key) =
  (match x with
  | `Basic_str x -> R.Case ("Basic_str",
      map_basic_string env x
    )
  | `Lit_str x -> R.Case ("Lit_str",
      map_literal_string env x
    )
  )

let map_string_ (env : env) (x : CST.string_) =
  (match x with
  | `Basic_str x -> R.Case ("Basic_str",
      map_basic_string env x
    )
  | `Mult_basic_str (v1, v2, v3) -> R.Case ("Mult_basic_str",
      let v1 = (* "\"\"\"" *) token env v1 in
      let v2 =
        R.List (List.map (fun x ->
          (match x with
          | `Imm_tok_rep1_pat_5e241f9 x -> R.Case ("Imm_tok_rep1_pat_5e241f9",
              map_imm_tok_rep1_pat_5e241f9 env x
            )
          | `Mult_basic_str_content tok -> R.Case ("Mult_basic_str_content",
              (* multiline_basic_string_content *) token env tok
            )
          | `Imm_tok_pat_509ec78 x -> R.Case ("Imm_tok_pat_509ec78",
              map_imm_tok_pat_509ec78 env x
            )
          | `Esc_seq tok -> R.Case ("Esc_seq",
              (* pattern "\\\\([btnfr\"\\\\]|u[0-9a-fA-F]{4}|U[0-9a-fA-F]{8})" *) token env tok
            )
          | `Esc_line_ending tok -> R.Case ("Esc_line_ending",
              (* escape_line_ending *) token env tok
            )
          )
        ) v2)
      in
      let v3 = (* multiline_basic_string_end *) token env v3 in
      R.Tuple [v1; v2; v3]
    )
  | `Lit_str x -> R.Case ("Lit_str",
      map_literal_string env x
    )
  | `Mult_lit_str (v1, v2, v3) -> R.Case ("Mult_lit_str",
      let v1 = (* "'''" *) token env v1 in
      let v2 =
        R.List (List.map (fun x ->
          (match x with
          | `Imm_tok_rep1_pat_fee4e64 x -> R.Case ("Imm_tok_rep1_pat_fee4e64",
              map_imm_tok_rep1_pat_fee4e64 env x
            )
          | `Mult_lit_str_content tok -> R.Case ("Mult_lit_str_content",
              (* multiline_literal_string_content *) token env tok
            )
          | `Imm_tok_pat_509ec78 x -> R.Case ("Imm_tok_pat_509ec78",
              map_imm_tok_pat_509ec78 env x
            )
          )
        ) v2)
      in
      let v3 = (* multiline_literal_string_end *) token env v3 in
      R.Tuple [v1; v2; v3]
    )
  )

let map_key (env : env) (x : CST.key) =
  (match x with
  | `Bare_key tok -> R.Case ("Bare_key",
      (* pattern [A-Za-z0-9_-]+ *) token env tok
    )
  | `Quoted_key x -> R.Case ("Quoted_key",
      map_quoted_key env x
    )
  )

let rec map_anon_choice_dotted_key_32f7558 (env : env) (x : CST.anon_choice_dotted_key_32f7558) =
  (match x with
  | `Dotted_key (v1, v2, v3) -> R.Case ("Dotted_key",
      let v1 = map_anon_choice_dotted_key_32f7558 env v1 in
      let v2 = (* "." *) token env v2 in
      let v3 = map_key env v3 in
      R.Tuple [v1; v2; v3]
    )
  | `Key x -> R.Case ("Key",
      map_key env x
    )
  )

let rec map_inline_pair (env : env) ((v1, v2, v3) : CST.inline_pair) =
  let v1 = map_anon_choice_dotted_key_32f7558 env v1 in
  let v2 = (* "=" *) token env v2 in
  let v3 = map_inline_value env v3 in
  R.Tuple [v1; v2; v3]

and map_inline_value (env : env) (x : CST.inline_value) =
  (match x with
  | `Str x -> R.Case ("Str",
      map_string_ env x
    )
  | `Int x -> R.Case ("Int",
      map_integer env x
    )
  | `Float x -> R.Case ("Float",
      map_float_ env x
    )
  | `Bool tok -> R.Case ("Bool",
      (* pattern true|false *) token env tok
    )
  | `Offset_date_time tok -> R.Case ("Offset_date_time",
      (* offset_date_time *) token env tok
    )
  | `Local_date_time tok -> R.Case ("Local_date_time",
      (* local_date_time *) token env tok
    )
  | `Local_date tok -> R.Case ("Local_date",
      (* pattern ([0-9]+)-(0[1-9]|1[012])-(0[1-9]|[12][0-9]|3[01]) *) token env tok
    )
  | `Local_time tok -> R.Case ("Local_time",
      (* pattern ([01][0-9]|2[0-3]):([0-5][0-9]):([0-5][0-9]|60)([.][0-9]+)? *) token env tok
    )
  | `Array (v1, v2, v3, v4) -> R.Case ("Array",
      let v1 = (* "[" *) token env v1 in
      let v2 =
        R.List (List.map (fun x ->
          map_pat_509ec78 env x
        ) v2)
      in
      let v3 =
        (match v3 with
        | Some (v1, v2, v3, v4) -> R.Option (Some (
            let v1 = map_inline_value env v1 in
            let v2 =
              R.List (List.map (fun x ->
                map_pat_509ec78 env x
              ) v2)
            in
            let v3 =
              R.List (List.map (fun (v1, v2, v3, v4) ->
                let v1 = (* "," *) token env v1 in
                let v2 =
                  R.List (List.map (fun x ->
                    map_pat_509ec78 env x
                  ) v2)
                in
                let v3 = map_inline_value env v3 in
                let v4 =
                  R.List (List.map (fun x ->
                    map_pat_509ec78 env x
                  ) v4)
                in
                R.Tuple [v1; v2; v3; v4]
              ) v3)
            in
            let v4 =
              (match v4 with
              | Some (v1, v2) -> R.Option (Some (
                  let v1 = (* "," *) token env v1 in
                  let v2 =
                    R.List (List.map (fun x ->
                      map_pat_509ec78 env x
                    ) v2)
                  in
                  R.Tuple [v1; v2]
                ))
              | None -> R.Option None)
            in
            R.Tuple [v1; v2; v3; v4]
          ))
        | None -> R.Option None)
      in
      let v4 = (* "]" *) token env v4 in
      R.Tuple [v1; v2; v3; v4]
    )
  | `Inline_table (v1, v2, v3) -> R.Case ("Inline_table",
      let v1 = (* "{" *) token env v1 in
      let v2 =
        (match v2 with
        | Some (v1, v2) -> R.Option (Some (
            let v1 = map_inline_pair env v1 in
            let v2 =
              R.List (List.map (fun (v1, v2) ->
                let v1 = (* "," *) token env v1 in
                let v2 = map_inline_pair env v2 in
                R.Tuple [v1; v2]
              ) v2)
            in
            R.Tuple [v1; v2]
          ))
        | None -> R.Option None)
      in
      let v3 = (* "}" *) token env v3 in
      R.Tuple [v1; v2; v3]
    )
  )

let map_anon_choice_pair_0ac91a1 (env : env) (x : CST.anon_choice_pair_0ac91a1) =
  (match x with
  | `Pair (v1, v2) -> R.Case ("Pair",
      let v1 = map_inline_pair env v1 in
      let v2 = (* line_ending_or_eof *) token env v2 in
      R.Tuple [v1; v2]
    )
  | `Pat_509ec78 x -> R.Case ("Pat_509ec78",
      map_pat_509ec78 env x
    )
  )

let map_table_array_element (env : env) ((v1, v2, v3, v4, v5) : CST.table_array_element) =
  let v1 = (* "[[" *) token env v1 in
  let v2 = map_anon_choice_dotted_key_32f7558 env v2 in
  let v3 = (* "]]" *) token env v3 in
  let v4 = (* line_ending_or_eof *) token env v4 in
  let v5 =
    R.List (List.map (map_anon_choice_pair_0ac91a1 env) v5)
  in
  R.Tuple [v1; v2; v3; v4; v5]

let map_table (env : env) ((v1, v2, v3, v4, v5) : CST.table) =
  let v1 = (* "[" *) token env v1 in
  let v2 = map_anon_choice_dotted_key_32f7558 env v2 in
  let v3 = (* "]" *) token env v3 in
  let v4 = (* line_ending_or_eof *) token env v4 in
  let v5 =
    R.List (List.map (map_anon_choice_pair_0ac91a1 env) v5)
  in
  R.Tuple [v1; v2; v3; v4; v5]

let map_document (env : env) ((v1, v2) : CST.document) =
  let v1 =
    R.List (List.map (map_anon_choice_pair_0ac91a1 env) v1)
  in
  let v2 =
    R.List (List.map (fun x ->
      (match x with
      | `Table x -> R.Case ("Table",
          map_table env x
        )
      | `Table_array_elem x -> R.Case ("Table_array_elem",
          map_table_array_element env x
        )
      )
    ) v2)
  in
  R.Tuple [v1; v2]

let map_comment (env : env) (tok : CST.comment) =
  (* comment *) token env tok

let dump_tree root =
  map_document () root
  |> Tree_sitter_run.Raw_tree.to_channel stdout

let map_extra (env : env) (x : CST.extra) =
  match x with
  | `Comment (_loc, x) -> ("comment", "comment", map_comment env x)

let dump_extras (extras : CST.extras) =
  List.iter (fun extra ->
    let ts_rule_name, ocaml_type_name, raw_tree = map_extra () extra in
    let details =
      if ocaml_type_name <> ts_rule_name then
        Printf.sprintf " (OCaml type '%s')" ocaml_type_name
      else
        ""
    in
    Printf.printf "%s%s:\n" ts_rule_name details;
    Tree_sitter_run.Raw_tree.to_channel stdout raw_tree
  ) extras
