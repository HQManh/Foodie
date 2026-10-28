// rea decompile_all
// name: CakeOrder.Home.HomeControllerCookOrder.<WaitSelectedMapReady>d__66$$MoveNext
// address: 0x430ec90
// body: available
// range: 0x430ec90-0x430f077 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x430ee7c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x430f074 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_HomeControllerCookOrder_<WaitSelectedMapReady>d__66__MoveNext(int *param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  int *piVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  float fVar12;
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  
  if ((DAT_095175b8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c1fd0);
    FUN_03f5c2a4(&DAT_09177ab8);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091eb1c8);
    FUN_03f5c2a4(&DAT_09191328);
    FUN_03f5c2a4(&DAT_0918c610);
    DAT_095175b8 = 1;
  }
  local_50._0_8_ = 0;
  local_50._8_8_ = 0;
  if (*param_1 == 0) {
    local_50 = *(undefined1 (*) [16])(param_1 + 10);
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    *param_1 = -1;
  }
  else {
    lVar9 = *(long *)(param_1 + 6);
    lVar3 = thunk_FUN_03f9944c(DAT_09191328);
    CakeOrder_Home_HomeControllerCookOrder_<>c__DisplayClass66_0___ctor(lVar3,0);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar9 = CakeOrder_Home_HomeControllerCookOrder__GetTabPageMain(lVar9,0);
    if (lVar9 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined8 *)(lVar9 + 200);
    }
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    puVar10 = (undefined8 *)(lVar3 + 0x10);
    *puVar10 = uVar5;
    thunk_FUN_03f5d7b8(puVar10);
    uVar5 = *puVar10;
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = UnityEngine_Object__op_Equality(uVar5,0,0);
    if ((uVar4 & 1) != 0) goto LAB_0430ef94;
    fVar12 = (float)UnityEngine_Time__get_unscaledTime(0);
    uVar5 = DAT_09177ab8;
    *(float *)(lVar3 + 0x18) = fVar12 + 10.0;
    uVar5 = thunk_FUN_03f9944c(uVar5);
    FUN_053007d8(uVar5,lVar3,DAT_091eb1c8,0);
    uVar8 = *(undefined8 *)(param_1 + 8);
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_40 = Cysharp_Threading_Tasks_UniTask__WaitUntil(uVar5,8,uVar8,0,0);
    thunk_FUN_03f5d7b8(local_40,0);
    uVar8 = local_40._8_8_;
    uVar5 = local_40._0_8_;
    local_50 = local_40;
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
    if ((long *)uVar5 != (long *)0x0) {
      lVar3 = *(long *)uVar5;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == DAT_091868c0) {
            puVar10 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_0430eeec;
          }
          uVar4 = uVar4 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar4 != 0);
      }
      puVar10 = (undefined8 *)FUN_03f95da8(uVar5,DAT_091868c0,0);
LAB_0430eeec:
      iVar2 = (*(code *)*puVar10)(uVar5,uVar8 & 0xffffffff,puVar10[1]);
      if (iVar2 == 0) {
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 10) = local_50;
        thunk_FUN_03f5d7b8(param_1 + 10,0);
        FUN_04323cf4(param_1 + 2,local_50,param_1,DAT_091c1fd0);
        return;
      }
    }
  }
  if (DAT_095162d6 == '\0') {
    FUN_03f5c2a4(&DAT_091868c0);
    DAT_095162d6 = '\x01';
  }
  uVar5 = local_50._0_8_;
  if ((long *)local_50._0_8_ != (long *)0x0) {
    lVar3 = *(long *)local_50._0_8_;
    uVar11 = local_50._8_8_ & 0xffff;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == DAT_091868c0) {
          puVar10 = (undefined8 *)(lVar3 + (long)(*piVar6 + 2) * 0x10 + 0x138);
          goto LAB_0430ef84;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar4 != 0);
    }
    puVar10 = (undefined8 *)FUN_03f95da8(local_50._0_8_,DAT_091868c0,2);
LAB_0430ef84:
    (*(code *)*puVar10)(uVar5,uVar11,puVar10[1]);
  }
LAB_0430ef94:
  cVar1 = DAT_095162d8;
  *param_1 = -2;
  if (cVar1 == '\0') {
    FUN_03f5c2a4(&DAT_091866a8);
    DAT_095162d8 = '\x01';
  }
  plVar7 = *(long **)(param_1 + 2);
  if (plVar7 != (long *)0x0) {
    lVar3 = *plVar7;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == DAT_091866a8) {
          puVar10 = (undefined8 *)(lVar3 + (long)(*piVar6 + 2) * 0x10 + 0x138);
          goto LAB_0430f01c;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar4 != 0);
    }
    puVar10 = (undefined8 *)FUN_03f95da8(plVar7,DAT_091866a8,2);
LAB_0430f01c:
    (*(code *)*puVar10)(plVar7,puVar10[1]);
  }
  return;
}

