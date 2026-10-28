// rea decompile_all
// name: System.Security.SecurityDocument$$GetString
// address: 0x7453114
// body: available
// range: 0x7453114-0x74533ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7453370 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7453374 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7453378 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x745337c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7453380 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7453384 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7453388 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x745338c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7453390 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7453394 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7453398 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x745339c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x074533a0) */

undefined8 System_Security_SecurityDocument__GetString(long param_1,uint *param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  undefined2 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  long local_58;
  
  if ((DAT_09521108 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918ab50);
    FUN_03f5c2a4(&DAT_0918b348);
    DAT_09521108 = 1;
  }
  lVar5 = *(long *)(param_1 + 0x10);
  local_58 = 0;
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar1 = *(uint *)(lVar5 + 0x18);
  for (uVar8 = *param_2; (int)uVar8 < (int)(uVar1 - 1); uVar8 = uVar8 + 2) {
    if (uVar1 <= uVar8) {
LAB_07453370:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    if (*(char *)(lVar5 + (int)uVar8 + 0x20) == '\0') {
      if (uVar1 <= uVar8 + 1) goto LAB_07453370;
      if (*(char *)(lVar5 + (int)(uVar8 + 1) + 0x20) == '\0') break;
    }
  }
  if (*(int *)(DAT_0918ab50 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  local_58 = System_SharedStatics__GetSharedStringMaker(0);
  if ((param_3 & 1) == 0) {
    uVar4 = 0;
    *param_2 = uVar8 + 2;
  }
  else {
    if (local_58 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(undefined8 *)(local_58 + 0x20) = 0;
    thunk_FUN_03f5d7b8((undefined8 *)(local_58 + 0x20),0);
    if (local_58 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(undefined4 *)(local_58 + 0x30) = 0;
    lVar5 = local_58;
    for (uVar1 = *param_2; (int)uVar1 < (int)uVar8; uVar1 = uVar1 + 2) {
      lVar6 = *(long *)(param_1 + 0x10);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(uint *)(lVar6 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      if (*(uint *)(lVar6 + 0x18) <= uVar1 + 1) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      uVar2 = *(uint *)(lVar5 + 0x30);
      uVar3 = CONCAT11(*(undefined1 *)(lVar6 + 0x20 + (long)(int)uVar1),
                       *(undefined1 *)(lVar6 + 0x20 + (long)(int)(uVar1 + 1)));
      if ((int)uVar2 < 0x200) {
        lVar6 = *(long *)(lVar5 + 0x28);
        *(uint *)(lVar5 + 0x30) = uVar2 + 1;
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(uint *)(lVar6 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        *(undefined2 *)(lVar6 + (long)(int)uVar2 * 2 + 0x20) = uVar3;
      }
      else {
        plVar7 = (long *)(lVar5 + 0x20);
        if (*plVar7 == 0) {
          lVar5 = thunk_FUN_03f9944c(DAT_0918b348);
          System_Text_StringBuilder___ctor(lVar5,0);
          *plVar7 = lVar5;
          thunk_FUN_03f5d7b8(plVar7,lVar5);
          lVar5 = local_58;
          if (local_58 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
        }
        if (*(long *)(lVar5 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        System_Text_StringBuilder__Append
                  (*(long *)(lVar5 + 0x20),*(undefined8 *)(lVar5 + 0x28),0,0x200,0);
        if (local_58 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar5 = *(long *)(local_58 + 0x28);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(int *)(lVar5 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        *(undefined2 *)(lVar5 + 0x20) = uVar3;
        *(undefined4 *)(local_58 + 0x30) = 1;
        lVar5 = local_58;
      }
    }
    *param_2 = uVar8 + 2;
    uVar4 = System_Security_Util_Tokenizer_StringMaker__MakeString();
  }
  if (*(int *)(DAT_0918ab50 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  System_SharedStatics__ReleaseSharedStringMaker(&local_58,0);
  return uVar4;
}

