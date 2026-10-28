// rea decompile_all
// name: System.String$$SplitInternal
// address: 0x74329ec
// body: available
// range: 0x74329ec-0x7432d53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7432d24 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7432d38 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7432d4c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7432d50 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_String__SplitInternal
               (long param_1,undefined8 param_2,undefined8 param_3,int param_4,uint param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auVar7 [16];
  undefined1 auStack_290 [524];
  uint local_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if ((DAT_09521025 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c0310);
    FUN_03f5c2a4(&DAT_091b9890);
    FUN_03f5c2a4(&DAT_091baae0);
    FUN_03f5c2a4(&DAT_091805f8);
    FUN_03f5c2a4(&DAT_091beb20);
    FUN_03f5c2a4(&DAT_091beb28);
    FUN_03f5c2a4(&DAT_091beb10);
    DAT_09521025 = 1;
  }
  lVar2 = DAT_091c0310;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  if (param_4 < 0) {
    thunk_FUN_03fc39d4(&DAT_09181558);
    uVar5 = thunk_FUN_03f9944c();
    uVar3 = thunk_FUN_03fc39d4(&DAT_09219b28);
    uVar4 = thunk_FUN_03fc39d4(&DAT_091ff7a0);
    System_ArgumentOutOfRangeException___ctor(uVar5,uVar3,uVar4,0);
    if (*(long *)(lVar1 + 0x28) == local_58) {
      uVar3 = thunk_FUN_03fc39d4(&DAT_091da370);
LAB_07432d1c:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar5,uVar3);
    }
    goto LAB_07432d50;
  }
  if (1 < param_5) {
    local_84 = param_5;
    uVar3 = thunk_FUN_03fc39d4(&DAT_0918b3f0);
    uVar3 = FUN_03f5c42c(uVar3,&local_84);
    uVar4 = thunk_FUN_03fc39d4(&DAT_09204750);
    uVar3 = SR__Format(uVar4,uVar3,0);
    thunk_FUN_03fc39d4(&DAT_09181548);
    uVar5 = thunk_FUN_03f9944c();
    System_ArgumentException___ctor(uVar5,uVar3,0);
    uVar3 = thunk_FUN_03fc39d4(&DAT_091da370);
    if (*(long *)(lVar1 + 0x28) == local_58) goto LAB_07432d1c;
    goto LAB_07432d50;
  }
  if ((param_4 == 0) || ((param_5 == 1 && (*(int *)(param_1 + 0x10) == 0)))) {
    lVar6 = *(long *)(DAT_091c0310 + 0x38);
    if (lVar6 == 0) {
      FUN_03f95ac8(DAT_091c0310);
      lVar6 = *(long *)(lVar2 + 0x38);
    }
    lVar6 = *(long *)(lVar6 + 0x10);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03f95a6c();
    }
    if (*(int *)(lVar6 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0x38) + 0x10);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03f95a6c();
    }
    lVar2 = **(long **)(lVar2 + 0xb8);
  }
  else {
    if (param_4 != 1) {
      memset(auStack_290,0,0x200);
      FUN_0655f144(&local_80,auStack_290,0x80,DAT_091beb10);
      System_String__MakeSeparatorList(param_1,param_2,param_3,&local_80);
      auVar7 = FUN_0655f1ec(&local_80,DAT_091beb20);
      if (auVar7._8_4_ != 0) {
        if (param_5 == 1) {
          lVar2 = System_String__SplitOmitEmptyEntries();
        }
        else {
          lVar2 = System_String__SplitKeepEmptyEntries
                            (param_1,auVar7._0_8_,auVar7._8_8_,0,0,1,param_4);
        }
        FUN_074366bc(&local_80,DAT_091beb28);
        goto LAB_07432c14;
      }
    }
    lVar2 = FUN_03f5c394(DAT_091805f8,1);
    if (lVar2 == 0) {
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      goto LAB_07432d50;
    }
    if (*(int *)(lVar2 + 0x18) == 0) {
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      goto LAB_07432d50;
    }
    *(long *)(lVar2 + 0x20) = param_1;
    thunk_FUN_03f5d7b8((long *)(lVar2 + 0x20),param_1);
  }
LAB_07432c14:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return lVar2;
  }
LAB_07432d50:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

