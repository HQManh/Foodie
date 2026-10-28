// rea decompile_all
// name: CakeOrder.DataSO.MapUpgradeConfig$$WarnAboutPartsWithoutConfig
// address: 0x42fc3cc
// body: available
// range: 0x42fc3cc-0x42fc797 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42fc6d4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42fc76c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42fc770 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42fc774 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42fc778 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42fc77c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42fc780 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42fc784 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42fc788 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42fc78c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42fc794 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertio
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x042fc790) */

void CakeOrder_DataSO_MapUpgradeConfig__WarnAboutPartsWithoutConfig(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  
  if ((DAT_09517525 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a378);
    FUN_03f5c2a4(&DAT_0917aa18);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091805f8);
    FUN_03f5c2a4(&DAT_09213eb0);
    FUN_03f5c2a4(&DAT_091f7388);
    FUN_03f5c2a4(&DAT_091f7610);
    DAT_09517525 = 1;
  }
  plVar1 = (long *)CakeOrder_DataSO_MapUpgradeConfig__EnumerateAllParts(param_1);
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar5 = *plVar1;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == DAT_0917a378) {
        puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_042fc4d4;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar2 = (undefined8 *)FUN_03f95da8(plVar1,DAT_0917a378,0);
LAB_042fc4d4:
  plVar1 = (long *)(*(code *)*puVar2)(plVar1,puVar2[1]);
  do {
    if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar5 = *plVar1;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_09185b10) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_042fc578;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_03f95da8(plVar1,DAT_09185b10,0);
LAB_042fc578:
    uVar6 = (*(code *)*puVar2)(plVar1,puVar2[1]);
    if ((uVar6 & 1) == 0) {
      if (plVar1 == (long *)0x0) {
        return;
      }
      lVar5 = *plVar1;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 == 0) goto LAB_042fc720;
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar5 = *plVar1;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_0917aa18) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_042fc5dc;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_03f95da8(plVar1,DAT_0917aa18,0);
LAB_042fc5dc:
    lVar5 = (*(code *)*puVar2)(plVar1,puVar2[1]);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar3 = CakeOrder_DataSO_MapUpgradeConfig__GetItemConfigById
                      (param_1,*(undefined8 *)(lVar5 + 0x18));
    if (lVar3 == 0) {
      lVar3 = FUN_03f5c394(DAT_091805f8,5);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(int *)(lVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      *(undefined8 *)(lVar3 + 0x20) = DAT_09213eb0;
      thunk_FUN_03f5d7b8();
      if ((*(uint *)(lVar3 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)(param_1 + 0x40);
      thunk_FUN_03f5d7b8();
      if (*(uint *)(lVar3 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      *(undefined8 *)(lVar3 + 0x30) = DAT_091f7610;
      thunk_FUN_03f5d7b8();
      if ((*(uint *)(lVar3 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      *(undefined8 *)(lVar3 + 0x38) = *(undefined8 *)(lVar5 + 0x18);
      thunk_FUN_03f5d7b8();
      if (*(uint *)(lVar3 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      *(undefined8 *)(lVar3 + 0x40) = DAT_091f7388;
      thunk_FUN_03f5d7b8();
      uVar4 = System_String__Concat(lVar3,0);
      if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      UnityEngine_Debug__LogWarning(uVar4,param_1,0);
    }
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
    if (*(long *)(piVar7 + -2) == DAT_09185a58) {
      puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_042fc73c;
    }
  }
LAB_042fc720:
  puVar2 = (undefined8 *)FUN_03f95da8(plVar1,DAT_09185a58,0);
LAB_042fc73c:
  (*(code *)*puVar2)(plVar1,puVar2[1]);
  return;
}

