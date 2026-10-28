// rea decompile_all
// name: FUN_03f9c788
// address: 0x3f9c788
// body: available
// range: 0x3f9c788-0x3f9c957 inclusive
// range: 0x3f9c9f0-0x3f9c9f3 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3f9c954 to 0x3fa5c38 FUN_03fa5c38 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x3f9c9f0 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_03f9c788(long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined ***pppuVar7;
  long lVar8;
  undefined **local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  long local_d8;
  undefined1 auStack_d0 [16];
  long local_c0 [4];
  long *local_a0;
  undefined **local_90;
  long local_88;
  undefined ***local_70;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (*(int *)(param_1 + 0x18) == 0) {
    lVar4 = 0;
    goto LAB_03f9c910;
  }
  if (param_2 == 0) {
    local_90 = &PTR_FUN_08fa9760;
  }
  else {
    local_90 = &PTR_FUN_08fa97a8;
    local_88 = param_2;
  }
  local_70 = &local_90;
  uVar2 = FUN_03f76348(param_1,&local_90);
  if (uVar2 == 0) {
    lVar4 = 0;
  }
  else {
    uVar3 = FUN_03fbe820(DAT_09535590,1);
    lVar4 = FUN_03f984e4(uVar3,(ulong)uVar2);
    FUN_03f76424(auStack_d0,param_1,&local_90);
    lVar8 = 0;
    do {
      local_d8 = 0;
      local_e8 = 0;
      uStack_e0 = 0;
      local_f0 = &PTR_FUN_08fa9520;
      uVar5 = FUN_03f76694(param_1,auStack_d0,&local_f0,&local_d8);
      if ((uVar5 & 1) != 0) {
        uVar3 = FUN_03f76308(&local_f0,&local_d8);
        *(undefined8 *)(lVar4 + 0x20 + lVar8) = uVar3;
        FUN_03f5d7b8(lVar4 + 0x20 + lVar8);
      }
      if (local_d8 != 0) {
        if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
          FUN_03fa5c38(local_d8,0);
        }
        goto LAB_03f9c9f0;
      }
      lVar8 = lVar8 + 8;
    } while ((ulong)uVar2 * 8 - lVar8 != 0);
    plVar6 = local_c0;
    if (local_a0 == plVar6) {
      lVar8 = 4;
    }
    else {
      if (local_a0 == (long *)0x0) goto LAB_03f9c8e0;
      lVar8 = 5;
      plVar6 = local_a0;
    }
    (**(code **)(*plVar6 + lVar8 * 8))();
  }
LAB_03f9c8e0:
  if (local_70 == &local_90) {
    lVar8 = 4;
    pppuVar7 = &local_90;
  }
  else {
    if (local_70 == (undefined ***)0x0) goto LAB_03f9c910;
    lVar8 = 5;
    pppuVar7 = local_70;
  }
  (*(code *)(*pppuVar7)[lVar8])();
LAB_03f9c910:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return lVar4;
  }
LAB_03f9c9f0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

