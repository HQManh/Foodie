// rea decompile_all
// name: FUN_03f9ca24
// address: 0x3f9ca24
// body: available
// range: 0x3f9ca24-0x3f9cbb7 inclusive
// range: 0x3f9cc44-0x3f9cc47 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3f9cbb4 to 0x3fa5c38 FUN_03fa5c38 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x3f9cc44 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_03f9ca24(undefined8 param_1,long param_2)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined ***pppuVar6;
  long lVar7;
  undefined **local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  long local_c8;
  undefined1 auStack_c0 [24];
  int local_a8;
  undefined1 auStack_a0 [16];
  long local_90 [4];
  long *local_70;
  undefined **local_60;
  long local_58;
  undefined ***local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  thunk_FUN_03fabe64(auStack_c0);
  if (local_a8 == 0) {
    uVar4 = 0;
  }
  else {
    if (param_2 == 0) {
      local_60 = &PTR_FUN_08fa9760;
    }
    else {
      local_60 = &PTR_FUN_08fa97a8;
      local_58 = param_2;
    }
    local_40 = &local_60;
    iVar3 = FUN_03f76348(auStack_c0,&local_60);
    if (iVar3 == 0) {
      uVar4 = 0;
    }
    else {
      FUN_03f76424(auStack_a0,auStack_c0,&local_60);
      local_d0 = 0;
      local_c8 = 0;
      local_e0 = &PTR_FUN_08fa9520;
      uStack_d8 = 0;
      bVar2 = FUN_03f76694(auStack_c0,auStack_a0,&local_e0,&local_c8);
      if ((bVar2 & local_c8 == 0) == 1) {
        uVar4 = FUN_03f76308(&local_e0,&local_c8);
      }
      else {
        uVar4 = 0;
      }
      if (local_c8 != 0) {
        if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* WARNING: Subroutine does not return */
          FUN_03fa5c38(local_c8,0);
        }
        goto LAB_03f9cc44;
      }
      plVar5 = local_90;
      if (local_70 == plVar5) {
        lVar7 = 4;
      }
      else {
        if (local_70 == (long *)0x0) goto LAB_03f9cb4c;
        lVar7 = 5;
        plVar5 = local_70;
      }
      (**(code **)(*plVar5 + lVar7 * 8))();
    }
LAB_03f9cb4c:
    if (local_40 == &local_60) {
      lVar7 = 4;
      pppuVar6 = &local_60;
    }
    else {
      if (local_40 == (undefined ***)0x0) goto LAB_03f9cb7c;
      lVar7 = 5;
      pppuVar6 = local_40;
    }
    (*(code *)(*pppuVar6)[lVar7])();
  }
LAB_03f9cb7c:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar4;
  }
LAB_03f9cc44:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

