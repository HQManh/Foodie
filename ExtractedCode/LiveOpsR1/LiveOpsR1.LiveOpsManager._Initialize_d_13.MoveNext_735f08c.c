// rea decompile_all
// name: LiveOpsR1.LiveOpsManager.<Initialize>d__13$$MoveNext
// address: 0x735f08c
// body: available
// range: 0x735f08c-0x735f48f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x735f47c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x735f480 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x735f484 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x735f488 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x735f48c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void LiveOpsR1_LiveOpsManager_<Initialize>d__13__MoveNext(int *param_1)

{
  uint uVar1;
  long lVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  undefined1 (*pauVar8) [16];
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  int *piVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  undefined1 auVar17 [16];
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  
  if ((DAT_09520848 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c2098);
    FUN_03f5c2a4(&DAT_091b17f8);
    FUN_03f5c2a4(&DAT_091b17f0);
    FUN_03f5c2a4(&DAT_0917d000);
    FUN_03f5c2a4(&DAT_0918c610);
    DAT_09520848 = 1;
  }
  lVar14 = *(long *)(param_1 + 6);
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
    lVar7 = thunk_FUN_03f9944c(DAT_0917d000);
    FUN_058a14ac(lVar7,DAT_091b17f0);
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar15 = *(long *)(lVar14 + 0x28);
    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (0 < (int)*(ulong *)(lVar15 + 0x18)) {
      uVar16 = 0;
      uVar10 = *(ulong *)(lVar15 + 0x18) & 0xffffffff;
      do {
        if (uVar10 <= uVar16) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        auVar17 = LiveOpsR1_LiveOpsManager__LoadBehaviorControl
                            (lVar14,*(undefined8 *)(lVar15 + 0x20 + uVar16 * 8));
        lVar2 = DAT_091b17f8;
        if (lVar7 == 0) {
LAB_0735f47c:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar11 = *(long *)(lVar7 + 0x10);
        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
        if (lVar11 == 0) goto LAB_0735f47c;
        uVar1 = *(uint *)(lVar7 + 0x18);
        if (uVar1 < *(uint *)(lVar11 + 0x18)) {
          *(uint *)(lVar7 + 0x18) = uVar1 + 1;
          pauVar8 = (undefined1 (*) [16])(lVar11 + (long)(int)uVar1 * 0x10 + 0x20);
          *pauVar8 = auVar17;
          thunk_FUN_03f5d7b8(pauVar8,0);
        }
        else {
          FUN_058a1d58(lVar7,auVar17._0_8_,auVar17._8_8_,
                       *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
        uVar10 = (ulong)*(uint *)(lVar15 + 0x18);
        uVar16 = uVar16 + 1;
      } while ((long)uVar16 < (long)(int)*(uint *)(lVar15 + 0x18));
    }
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_50 = Cysharp_Threading_Tasks_UniTask__WhenAll(lVar7,0);
    thunk_FUN_03f5d7b8(local_50,0);
    uVar5 = local_50._8_8_;
    uVar4 = local_50._0_8_;
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
    if ((long *)uVar4 != (long *)0x0) {
      lVar7 = *(long *)uVar4;
      uVar16 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar16 != 0) {
        piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == DAT_091868c0) {
            puVar9 = (undefined8 *)(lVar7 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_0735f2e8;
          }
          uVar16 = uVar16 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar16 != 0);
      }
      puVar9 = (undefined8 *)FUN_03f95da8(uVar4,DAT_091868c0,0);
LAB_0735f2e8:
      iVar6 = (*(code *)*puVar9)(uVar4,uVar5 & 0xffffffff,puVar9[1]);
      if (iVar6 == 0) {
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 8) = local_60;
        thunk_FUN_03f5d7b8(param_1 + 8,0);
        FUN_049b1bfc(param_1 + 2,local_60,param_1,DAT_091c2098);
        return;
      }
    }
  }
  if (DAT_095162d6 == '\0') {
    FUN_03f5c2a4(&DAT_091868c0);
    DAT_095162d6 = '\x01';
  }
  uVar4 = local_60._0_8_;
  if ((long *)local_60._0_8_ != (long *)0x0) {
    lVar7 = *(long *)local_60._0_8_;
    uVar10 = local_60._8_8_ & 0xffff;
    uVar16 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar16 != 0) {
      piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == DAT_091868c0) {
          puVar9 = (undefined8 *)(lVar7 + (long)(*piVar12 + 2) * 0x10 + 0x138);
          goto LAB_0735f380;
        }
        uVar16 = uVar16 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar16 != 0);
    }
    puVar9 = (undefined8 *)FUN_03f95da8(local_60._0_8_,DAT_091868c0,2);
LAB_0735f380:
    (*(code *)*puVar9)(uVar4,uVar10,puVar9[1]);
  }
  cVar3 = DAT_095162d8;
  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  *(undefined1 *)(lVar14 + 0x50) = 1;
  *param_1 = -2;
  if (cVar3 == '\0') {
    FUN_03f5c2a4(&DAT_091866a8);
    DAT_095162d8 = '\x01';
  }
  plVar13 = *(long **)(param_1 + 2);
  if (plVar13 != (long *)0x0) {
    lVar14 = *plVar13;
    uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar16 != 0) {
      piVar12 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == DAT_091866a8) {
          puVar9 = (undefined8 *)(lVar14 + (long)(*piVar12 + 2) * 0x10 + 0x138);
          goto LAB_0735f420;
        }
        uVar16 = uVar16 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar16 != 0);
    }
    puVar9 = (undefined8 *)FUN_03f95da8(plVar13,DAT_091866a8,2);
LAB_0735f420:
    (*(code *)*puVar9)(plVar13,puVar9[1]);
  }
  return;
}

