// rea decompile_all
// name: FUN_03fc0d18
// address: 0x3fc0d18
// body: available
// range: 0x3fc0d18-0x3fc0e4f inclusive
// range: 0x3fc0e80-0x3fc0e83 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fc0e80 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fc0d18(long param_1,undefined8 param_2)

{
  ulong __n;
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined1 *__s;
  undefined1 auStack_70 [8];
  undefined8 local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((*(ushort *)(param_1 + 0x135) >> 5 & 1) == 0) {
    uVar2 = FUN_03f5da68();
    *(undefined8 *)(param_1 + 8) = uVar2;
  }
  else {
    local_60 = (undefined1 *)0x0;
    local_58 = (undefined1 *)0x0;
    local_50 = 0;
    uVar3 = (ulong)((*(uint *)(param_1 + 0xf8) >> 6) + 1) & 0x7fffff8;
    __n = uVar3 + 8;
    if ((uint)uVar3 < 0x3f9) {
      __s = auStack_70 + -((ulong)((int)__n + 0xf) & 0x1ffffff0);
    }
    else {
      FUN_03fc3cd4(&local_60,__n >> 3);
      __s = local_60;
    }
    memset(__s,0,__n);
    local_68 = 0;
    FUN_03fc1780(param_1,__s,&local_68,0,param_2);
    if (DAT_09535468 == param_1) {
      uVar2 = FUN_03f5da68();
    }
    else if (*(char *)(param_1 + 0x132) == '\0') {
      uVar2 = FUN_03f5da44(__s,(int)local_68 + 1);
    }
    else {
      uVar2 = FUN_03f5da68();
    }
    *(undefined8 *)(param_1 + 8) = uVar2;
    if (local_60 != (undefined1 *)0x0) {
      local_58 = local_60;
      operator_delete(local_60);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

