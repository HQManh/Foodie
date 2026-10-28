// rea decompile_all
// name: FUN_03f8ec50
// address: 0x3f8ec50
// body: available
// range: 0x3f8ec50-0x3f8edab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3f8ecac to 0x3f5d0a4 FUN_03f5d0a4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03f8ec50(ulong *param_1)

{
  ulong uVar1;
  void *pvVar2;
  int iVar3;
  byte local_50 [16];
  void *local_40;
  undefined2 local_38;
  undefined6 uStack_36;
  ulong uStack_30;
  void *local_28;
  
  if (((DAT_09534d70 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_09534d70), iVar3 != 0)) {
    _DAT_09534d58 = 0;
    DAT_09534d60 = 0;
    DAT_09534d68 = (void *)0x0;
    __cxa_atexit(std::__ndk1::
                 basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                 ~basic_string,&DAT_09534d58,&PTR_LOOP_089e1d70);
    __cxa_guard_release(&DAT_09534d70);
  }
  uVar1 = _DAT_09534d58 >> 1 & 0x7f;
  if ((_DAT_09534d58 & 1) != 0) {
    uVar1 = DAT_09534d60;
  }
  if (uVar1 == 0) {
    FUN_03f6321c(local_50,&DAT_01a72ee6);
    FUN_03f8eb1c(&local_38,local_50);
    if ((_DAT_09534d58 & 1) != 0) {
      operator_delete(DAT_09534d68);
    }
    _DAT_09534d58 = CONCAT62(uStack_36,local_38);
    local_38 = 0;
    DAT_09534d60 = uStack_30;
    DAT_09534d68 = local_28;
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
    uVar1 = _DAT_09534d58 >> 1 & 0x7f;
    if ((_DAT_09534d58 & 1) != 0) {
      uVar1 = DAT_09534d60;
    }
    if (uVar1 == 0) {
      FUN_03f6321c(param_1,&DAT_01a42576);
      return;
    }
    if ((_DAT_09534d58 & 1) != 0) {
      FUN_03f5d0a4(param_1,DAT_09534d68);
      return;
    }
  }
  else if ((_DAT_09534d58 & 1) != 0) {
    FUN_03f5d0a4(param_1,DAT_09534d68);
    return;
  }
  pvVar2 = DAT_09534d68;
  uVar1 = _DAT_09534d58;
  param_1[1] = DAT_09534d60;
  *param_1 = uVar1;
  param_1[2] = (ulong)pvVar2;
  return;
}

