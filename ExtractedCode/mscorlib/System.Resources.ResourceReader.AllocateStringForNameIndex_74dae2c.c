// rea decompile_all
// name: System.Resources.ResourceReader$$AllocateStringForNameIndex
// address: 0x74dae2c
// body: available
// range: 0x74dae2c-0x74db477 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74db130 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74db168 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74db1a4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74db1ac to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74db1b0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74db1b4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74db1b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74db208 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74db244 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74db248 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74db24c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74db284 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x074db1a8) */

undefined8
System_Resources_ResourceReader__AllocateStringForNameIndex(long param_1,uint param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  uint uVar9;
  uint local_64 [3];
  char *pcStack_58;
  long *local_50;
  char local_44 [4];
  long local_38;
  
  if ((DAT_0952157b & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fc88);
    DAT_0952157b = 1;
  }
  local_38 = 0;
  local_44[0] = '\0';
  iVar1 = System_Resources_ResourceReader__GetNamePosition(param_1,param_2);
  pcStack_58 = local_44;
  local_64[1] = 0;
  local_64[2] = 0;
  local_50 = &local_38;
  local_44[0] = '\0';
  local_38 = param_1;
  System_Threading_Monitor__Enter(param_1,local_44,0);
  plVar3 = *(long **)(param_1 + 0x10);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  plVar3 = (long *)(**(code **)(*plVar3 + 0x188))(plVar3,*(undefined8 *)(*plVar3 + 400));
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  (**(code **)(*plVar3 + 0x348))
            (plVar3,*(long *)(param_1 + 0x20) + (long)iVar1,0,*(undefined8 *)(*plVar3 + 0x350));
  if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar2 = System_IO_BinaryReader__Read7BitEncodedInt(*(long *)(param_1 + 0x10),0);
  uVar8 = (ulong)uVar2;
  if ((int)uVar2 < 0) {
    uVar6 = thunk_FUN_03fc39d4(&DAT_091ff338);
    uVar6 = System_Environment__GetResourceString(uVar6,0);
    thunk_FUN_03fc39d4(&DAT_091819f8);
    uVar7 = thunk_FUN_03f9944c();
    System_BadImageFormatException___ctor(uVar7,uVar6,0);
    uVar6 = thunk_FUN_03fc39d4(&DAT_091d7ca8);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar7,uVar6);
  }
  plVar3 = *(long **)(param_1 + 0x70);
  local_64[0] = param_2;
  if (plVar3 != (long *)0x0) {
    lVar4 = (**(code **)(*plVar3 + 0x208))(plVar3,*(undefined8 *)(*plVar3 + 0x210));
    plVar3 = *(long **)(param_1 + 0x70);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar5 = (**(code **)(*plVar3 + 0x1f8))(plVar3,*(undefined8 *)(*plVar3 + 0x200));
    if ((long)(lVar5 - uVar8) < lVar4) {
      uVar6 = thunk_FUN_03fc39d4(&DAT_09180318);
      lVar4 = FUN_03f5c394(uVar6,1);
      uVar6 = FUN_03f5c42c(DAT_09535420,local_64);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      FUN_039b0da0(lVar4,uVar6);
      FUN_039af17c(lVar4,0,uVar6);
      uVar6 = thunk_FUN_03fc39d4(&DAT_091ff330);
      uVar6 = System_Environment__GetResourceString(uVar6,lVar4,0);
      thunk_FUN_03fc39d4(&DAT_091819f8);
      uVar7 = thunk_FUN_03f9944c();
      System_BadImageFormatException___ctor(uVar7,uVar6,0);
      uVar6 = thunk_FUN_03fc39d4(&DAT_091d7ca8);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar7,uVar6);
    }
    if (*(long *)(param_1 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar6 = System_IO_UnmanagedMemoryStream__get_PositionPointer(*(long *)(param_1 + 0x70),0);
    uVar7 = System_String__CreateString(0,uVar6,0,uVar2 >> 1,0);
    plVar3 = *(long **)(param_1 + 0x70);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar4 = (**(code **)(*plVar3 + 0x208))(plVar3,*(undefined8 *)(*plVar3 + 0x210));
    (**(code **)(*plVar3 + 0x218))(plVar3,lVar4 + uVar8,*(undefined8 *)(*plVar3 + 0x220));
    plVar3 = *(long **)(param_1 + 0x10);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar2 = (**(code **)(*plVar3 + 0x228))(plVar3,*(undefined8 *)(*plVar3 + 0x230));
    *param_3 = uVar2;
    if (-1 < (int)uVar2) {
      plVar3 = *(long **)(param_1 + 0x10);
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      plVar3 = (long *)(**(code **)(*plVar3 + 0x188))(plVar3,*(undefined8 *)(*plVar3 + 400));
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar4 = (**(code **)(*plVar3 + 0x1f8))(plVar3,*(undefined8 *)(*plVar3 + 0x200));
      if ((long)(ulong)uVar2 < lVar4 - *(long *)(param_1 + 0x28)) {
        uVar6 = 0;
        iVar1 = 0x14;
LAB_074db0bc:
        if (local_44[0] != '\0') {
          System_Threading_Monitor__Exit(*local_50,0);
        }
        if ((iVar1 == 0x1e) || (iVar1 == 0)) {
          plVar3 = (long *)System_Text_Encoding__get_Unicode(0);
          if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar7 = (**(code **)(*plVar3 + 0x378))
                            (plVar3,uVar6,0,uVar8,*(undefined8 *)(*plVar3 + 0x380));
        }
        return uVar7;
      }
    }
    uVar6 = thunk_FUN_03fc39d4(&DAT_09180318);
    lVar4 = FUN_03f5c394(uVar6,1);
    local_64[0] = *param_3;
    uVar6 = FUN_03f5c42c(DAT_09535420,local_64);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    FUN_039b0da0(lVar4,uVar6);
    FUN_039af17c(lVar4,0,uVar6);
    uVar6 = thunk_FUN_03fc39d4(&DAT_091ff318);
    uVar6 = System_Environment__GetResourceString(uVar6,lVar4,0);
    thunk_FUN_03fc39d4(&DAT_09184908);
    uVar7 = thunk_FUN_03f9944c();
    System_FormatException___ctor(uVar7,uVar6,0);
    uVar6 = thunk_FUN_03fc39d4(&DAT_091d7ca8);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar7,uVar6);
  }
  uVar6 = FUN_03f5c394(DAT_0917fc88,uVar8);
  uVar9 = uVar2;
  if (uVar2 != 0) {
    do {
      plVar3 = *(long **)(param_1 + 0x10);
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      iVar1 = (**(code **)(*plVar3 + 0x2b8))
                        (plVar3,uVar6,uVar2 - uVar9,uVar9,*(undefined8 *)(*plVar3 + 0x2c0));
      if (iVar1 == 0) {
        uVar6 = thunk_FUN_03fc39d4(&DAT_09180318);
        lVar4 = FUN_03f5c394(uVar6,1);
        uVar6 = FUN_03f5c42c(DAT_09535420,local_64);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        FUN_039b0da0(lVar4,uVar6);
        FUN_039af17c(lVar4,0,uVar6);
        uVar6 = thunk_FUN_03fc39d4(&DAT_091ff340);
        uVar6 = System_Environment__GetResourceString(uVar6,lVar4,0);
        thunk_FUN_03fc39d4(&DAT_09183fe0);
        uVar7 = thunk_FUN_03f9944c();
        System_IO_EndOfStreamException___ctor(uVar7,uVar6,0);
        uVar6 = thunk_FUN_03fc39d4(&DAT_091d7ca8);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar7,uVar6);
      }
      uVar9 = uVar9 - iVar1;
    } while (0 < (int)uVar9);
  }
  plVar3 = *(long **)(param_1 + 0x10);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar2 = (**(code **)(*plVar3 + 0x228))(plVar3,*(undefined8 *)(*plVar3 + 0x230));
  *param_3 = uVar2;
  if (-1 < (int)uVar2) {
    plVar3 = *(long **)(param_1 + 0x10);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    plVar3 = (long *)(**(code **)(*plVar3 + 0x188))(plVar3,*(undefined8 *)(*plVar3 + 400));
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar4 = (**(code **)(*plVar3 + 0x1f8))(plVar3,*(undefined8 *)(*plVar3 + 0x200));
    if ((long)(ulong)uVar2 < lVar4 - *(long *)(param_1 + 0x28)) {
      uVar7 = 0;
      iVar1 = 0x1e;
      goto LAB_074db0bc;
    }
  }
  uVar6 = thunk_FUN_03fc39d4(&DAT_09180318);
  lVar4 = FUN_03f5c394(uVar6,1);
  local_64[0] = *param_3;
  uVar6 = FUN_03f5c42c(DAT_09535420,local_64);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  FUN_039b0da0(lVar4,uVar6);
  FUN_039af17c(lVar4,0,uVar6);
  uVar6 = thunk_FUN_03fc39d4(&DAT_091ff318);
  uVar6 = System_Environment__GetResourceString(uVar6,lVar4,0);
  thunk_FUN_03fc39d4(&DAT_09184908);
  uVar7 = thunk_FUN_03f9944c();
  System_FormatException___ctor(uVar7,uVar6,0);
  uVar6 = thunk_FUN_03fc39d4(&DAT_091d7ca8);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar7,uVar6);
}

