// rea decompile_all
// name: CakeOrder.Home.UIItemPetAssistant.<SetUp>d__32$$MoveNext
// address: 0x4333f28
// body: available
// range: 0x4333f28-0x433427f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4334274 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4334278 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x433427c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_UIItemPetAssistant_<SetUp>d__32__MoveNext(int *param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  
  if ((DAT_095176e9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c21e8);
    FUN_03f5c2a4(&DAT_0918c610);
    DAT_095176e9 = 1;
  }
  lVar10 = *(long *)(param_1 + 6);
  local_60._0_8_ = 0;
  local_60._8_8_ = 0;
  if (*param_1 == 0) {
    local_60 = *(undefined1 (*) [16])(param_1 + 0x10);
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    *param_1 = -1;
  }
  else {
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(undefined8 *)(lVar10 + 0xa0) = *(undefined8 *)(param_1 + 8);
    thunk_FUN_03f5d7b8();
    *(undefined8 *)(lVar10 + 0x50) = *(undefined8 *)(param_1 + 10);
    thunk_FUN_03f5d7b8();
    if (*(long *)(param_1 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(undefined8 *)(lVar10 + 0x48) = *(undefined8 *)(*(long *)(param_1 + 10) + 0x18);
    thunk_FUN_03f5d7b8();
    *(char *)(lVar10 + 0xb0) = (char)param_1[0xc];
    local_50 = CakeOrder_Home_UIItemPetAssistant__SpawnAvatar(lVar10);
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    thunk_FUN_03f5d7b8(local_50,0);
    uVar3 = local_50._8_8_;
    uVar2 = local_50._0_8_;
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
    if ((long *)uVar2 != (long *)0x0) {
      lVar6 = *(long *)uVar2;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == DAT_091868c0) {
            puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_043340cc;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(uVar2,DAT_091868c0,0);
LAB_043340cc:
      iVar4 = (*(code *)*puVar5)(uVar2,uVar3 & 0xffffffff,puVar5[1]);
      if (iVar4 == 0) {
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 0x10) = local_60;
        thunk_FUN_03f5d7b8(param_1 + 0x10,0);
        FUN_0434111c(param_1 + 2,local_60,param_1,DAT_091c21e8);
        return;
      }
    }
  }
  if (DAT_095162d6 == '\0') {
    FUN_03f5c2a4(&DAT_091868c0);
    DAT_095162d6 = '\x01';
  }
  uVar2 = local_60._0_8_;
  if ((long *)local_60._0_8_ != (long *)0x0) {
    lVar6 = *(long *)local_60._0_8_;
    uVar11 = local_60._8_8_ & 0xffff;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == DAT_091868c0) {
          puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138);
          goto LAB_04334164;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(local_60._0_8_,DAT_091868c0,2);
LAB_04334164:
    (*(code *)*puVar5)(uVar2,uVar11,puVar5[1]);
  }
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  CakeOrder_Home_UIItemPetAssistant__ApplyOwnedVisual(lVar10);
  CakeOrder_Home_UIItemPetAssistant__OnAssignPet
            (lVar10,*(undefined8 *)(lVar10 + 0x48),*(undefined8 *)(param_1 + 0xe));
  cVar1 = DAT_095162d8;
  *param_1 = -2;
  if (cVar1 == '\0') {
    FUN_03f5c2a4(&DAT_091866a8);
    DAT_095162d8 = '\x01';
  }
  plVar9 = *(long **)(param_1 + 2);
  if (plVar9 != (long *)0x0) {
    lVar10 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == DAT_091866a8) {
          puVar5 = (undefined8 *)(lVar10 + (long)(*piVar8 + 2) * 0x10 + 0x138);
          goto LAB_04334218;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(plVar9,DAT_091866a8,2);
LAB_04334218:
    (*(code *)*puVar5)(plVar9,puVar5[1]);
  }
  return;
}

