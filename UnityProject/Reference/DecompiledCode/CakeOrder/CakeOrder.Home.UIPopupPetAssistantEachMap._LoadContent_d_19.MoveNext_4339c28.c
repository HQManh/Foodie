// rea decompile_all
// name: CakeOrder.Home.UIPopupPetAssistantEachMap.<LoadContent>d__19$$MoveNext
// address: 0x4339c28
// body: available
// range: 0x4339c28-0x433a0df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x433a0c8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x433a0cc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x433a0d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x433a0d4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x433a0d8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x433a0dc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_UIPopupPetAssistantEachMap_<LoadContent>d__19__MoveNext(int *param_1)

{
  uint uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined1 (*pauVar8) [16];
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long *plVar13;
  ulong uVar14;
  int iVar15;
  long lVar16;
  undefined1 auVar17 [16];
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  
  if ((DAT_0951770f & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c2208);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091b17f8);
    FUN_03f5c2a4(&DAT_091b17f0);
    FUN_03f5c2a4(&DAT_091b15d0);
    FUN_03f5c2a4(&DAT_0917d000);
    FUN_03f5c2a4(&DAT_091b4b60);
    FUN_03f5c2a4(&DAT_0918c610);
    FUN_03f5c2a4(&DAT_092144d0);
    DAT_0951770f = 1;
  }
  lVar16 = *(long *)(param_1 + 6);
  local_60._0_8_ = 0;
  local_60._8_8_ = 0;
  if (*param_1 == 0) {
    local_60 = *(undefined1 (*) [16])(param_1 + 8);
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    *param_1 = -1;
  }
  else {
    if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(int *)(lVar16 + 0xe8) != 0) {
      if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      UnityEngine_Debug__LogWarning(DAT_092144d0,0);
      goto LAB_04339fc4;
    }
    lVar6 = *(long *)(DAT_091b4b60 + 0x20);
    *(undefined4 *)(lVar16 + 0xe8) = 1;
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03f95a6c();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03f95a6c();
    }
    if (**(long **)(lVar6 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    iVar5 = CakeOrder_DataSO_CakeOrderDatabaseSO__get_NumMaps(**(long **)(lVar6 + 0xb8),0);
    lVar6 = thunk_FUN_03f9944c(DAT_0917d000);
    FUN_058a14ac(lVar6,DAT_091b17f0);
    if (0 < iVar5) {
      iVar15 = 0;
      do {
        if (*(long *)(lVar16 + 0xe0) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar7 = FUN_057e0998(*(long *)(lVar16 + 0xe0),iVar15,DAT_091b15d0);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        auVar17 = CakeOrder_Home_UIListPetAssistantInMap__LoadContent();
        lVar7 = DAT_091b17f8;
        if (lVar6 == 0) {
LAB_0433a0c8:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar10 = *(long *)(lVar6 + 0x10);
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        if (lVar10 == 0) goto LAB_0433a0c8;
        uVar1 = *(uint *)(lVar6 + 0x18);
        if (uVar1 < *(uint *)(lVar10 + 0x18)) {
          *(uint *)(lVar6 + 0x18) = uVar1 + 1;
          pauVar8 = (undefined1 (*) [16])(lVar10 + (long)(int)uVar1 * 0x10 + 0x20);
          *pauVar8 = auVar17;
          thunk_FUN_03f5d7b8(pauVar8,0);
        }
        else {
          FUN_058a1d58(lVar6,auVar17._0_8_,auVar17._8_8_,
                       *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
        }
        iVar15 = iVar15 + 1;
      } while (iVar5 != iVar15);
    }
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_50 = Cysharp_Threading_Tasks_UniTask__WhenAll(lVar6,0);
    thunk_FUN_03f5d7b8(local_50,0);
    uVar4 = local_50._8_8_;
    uVar3 = local_50._0_8_;
    local_60 = local_50;
    if (DAT_095162d4 == '\0') {
      FUN_03f5c2a4(&DAT_0918c610);
      DAT_095162d4 = '\x01';
    }
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (DAT_095162d5 == '\0') {
      FUN_03f5c2a4(&DAT_091868c0);
      DAT_095162d5 = '\x01';
    }
    if ((long *)uVar3 != (long *)0x0) {
      lVar6 = *(long *)uVar3;
      uVar11 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == DAT_091868c0) {
            puVar9 = (undefined8 *)(lVar6 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_0433a07c;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar9 = (undefined8 *)FUN_03f95da8(uVar3,DAT_091868c0,0);
LAB_0433a07c:
      iVar5 = (*(code *)*puVar9)(uVar3,uVar4 & 0xffffffff,puVar9[1]);
      if (iVar5 == 0) {
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 8) = local_60;
        thunk_FUN_03f5d7b8(param_1 + 8,0);
        FUN_04341a88(param_1 + 2,local_60,param_1,DAT_091c2208);
        return;
      }
    }
  }
  if (DAT_095162d6 == '\0') {
    FUN_03f5c2a4(&DAT_091868c0);
    DAT_095162d6 = '\x01';
  }
  uVar3 = local_60._0_8_;
  if ((long *)local_60._0_8_ != (long *)0x0) {
    lVar6 = *(long *)local_60._0_8_;
    uVar14 = local_60._8_8_ & 0xffff;
    uVar11 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == DAT_091868c0) {
          puVar9 = (undefined8 *)(lVar6 + (long)(*piVar12 + 2) * 0x10 + 0x138);
          goto LAB_04339fa8;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar9 = (undefined8 *)FUN_03f95da8(local_60._0_8_,DAT_091868c0,2);
LAB_04339fa8:
    (*(code *)*puVar9)(uVar3,uVar14,puVar9[1]);
  }
  if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  *(undefined4 *)(lVar16 + 0xe8) = 2;
LAB_04339fc4:
  cVar2 = DAT_095162d8;
  *param_1 = -2;
  if (cVar2 == '\0') {
    FUN_03f5c2a4(&DAT_091866a8);
    DAT_095162d8 = '\x01';
  }
  plVar13 = *(long **)(param_1 + 2);
  if (plVar13 != (long *)0x0) {
    lVar16 = *plVar13;
    uVar11 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == DAT_091866a8) {
          puVar9 = (undefined8 *)(lVar16 + (long)(*piVar12 + 2) * 0x10 + 0x138);
          goto LAB_0433a04c;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar9 = (undefined8 *)FUN_03f95da8(plVar13,DAT_091866a8,2);
LAB_0433a04c:
    (*(code *)*puVar9)(plVar13,puVar9[1]);
  }
  return;
}

