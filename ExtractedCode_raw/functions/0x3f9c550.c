// rea decompile_all
// name: FUN_03f9c550
// address: 0x3f9c550
// body: available
// range: 0x3f9c550-0x3f9c657 inclusive
// range: 0x3f9c6e0-0x3f9c6e3 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3f9c6e0 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_03f9c550(long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  undefined ***pppuVar4;
  long lVar5;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [16];
  long local_90 [4];
  long *local_70;
  undefined **local_60;
  long local_58;
  undefined ***local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (*(int *)(param_1 + 0x18) == 0) {
    uVar2 = 0;
    goto LAB_03f9c634;
  }
  if (param_2 == 0) {
    local_60 = &PTR_FUN_08fa9760;
  }
  else {
    local_60 = &PTR_FUN_08fa97a8;
    local_58 = param_2;
  }
  local_40 = &local_60;
  FUN_03f763e0(auStack_a0,param_1,&local_60);
  uVar2 = FUN_03f7643c(param_1,auStack_a8,auStack_a0);
  plVar3 = local_90;
  if (local_70 == plVar3) {
    lVar5 = 4;
LAB_03f9c5f8:
    (**(code **)(*plVar3 + lVar5 * 8))();
  }
  else if (local_70 != (long *)0x0) {
    lVar5 = 5;
    plVar3 = local_70;
    goto LAB_03f9c5f8;
  }
  if (local_40 == &local_60) {
    lVar5 = 4;
    pppuVar4 = &local_60;
  }
  else {
    if (local_40 == (undefined ***)0x0) goto LAB_03f9c634;
    lVar5 = 5;
    pppuVar4 = local_40;
  }
  (*(code *)(*pppuVar4)[lVar5])();
LAB_03f9c634:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

