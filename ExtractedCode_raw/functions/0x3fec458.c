// rea decompile_all
// name: std::__ndk1::promise<void>::set_value_at_thread_exit
// address: 0x3fec458
// body: available
// range: 0x3fec458-0x3fec47b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fec464 to 0x89dcf50 std::__ndk1::__assoc_sub_state::set_value_at_thread_exit (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::promise<void>::set_value_at_thread_exit() */

void __thiscall std::__ndk1::promise<void>::set_value_at_thread_exit(promise<void> *this)

{
  undefined8 uVar1;
  __assoc_sub_state *p_Var2;
  undefined1 auVar3 [16];
  exception_ptr aeStack_18 [8];
  
  if (*(__assoc_sub_state **)this != (__assoc_sub_state *)0x0) {
    __assoc_sub_state::set_value_at_thread_exit(*(__assoc_sub_state **)this);
    return;
  }
  auVar3 = FUN_03febaa4(3);
  p_Var2 = (__assoc_sub_state *)*auVar3._0_8_;
  if (p_Var2 != (__assoc_sub_state *)0x0) {
    exception_ptr::exception_ptr(aeStack_18,auVar3._8_8_);
    __assoc_sub_state::set_exception_at_thread_exit(p_Var2,aeStack_18);
    exception_ptr::~exception_ptr(aeStack_18);
    return;
  }
  uVar1 = FUN_03febaa4(3);
  exception_ptr::~exception_ptr(aeStack_18);
                    /* WARNING: Subroutine does not return */
  FUN_0404c2dc(uVar1);
}

