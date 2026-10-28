// rea decompile_all
// name: CakeOrder.Home.UIListToolUpgrade$$SetUp
// address: 0x4349dcc
// body: available
// range: 0x4349dcc-0x434a167 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x434a154 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x434a158 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x434a164 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_UIListToolUpgrade__SetUp
               (long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  undefined8 uVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  
  if ((DAT_09517788 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174aa0);
    FUN_03f5c2a4(&DAT_0917b2f0);
    FUN_03f5c2a4(&DAT_0917b4a0);
    FUN_03f5c2a4(&DAT_091d4cd8);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09180790);
    FUN_03f5c2a4(&DAT_091dcde8);
    DAT_09517788 = 1;
  }
  *(undefined8 *)(param_1 + 0x88) = param_2;
  thunk_FUN_03f5d7b8();
  plVar14 = (long *)(param_1 + 0x60);
  *plVar14 = param_3;
  thunk_FUN_03f5d7b8(plVar14,param_3);
  *(undefined8 *)(param_1 + 0x48) = param_4;
  thunk_FUN_03f5d7b8();
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar4 = UnityEngine_Object__op_Inequality(param_5,0,0);
  if ((uVar4 & 1) == 0) {
    plVar13 = (long *)0x0;
LAB_04349f18:
    uVar3 = 0;
    bVar2 = true;
  }
  else {
    if (param_5 == 0) goto LAB_0434a154;
    plVar13 = *(long **)(param_5 + 0x20);
    if (plVar13 == (long *)0x0) goto LAB_04349f18;
    lVar9 = *plVar13;
    uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar4 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == DAT_0917b2f0) {
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_04349f30;
        }
        uVar4 = uVar4 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(plVar13,DAT_0917b2f0,0);
LAB_04349f30:
    uVar3 = (*(code *)*puVar5)(plVar13,puVar5[1]);
    bVar2 = false;
  }
  if (*plVar14 != 0) {
    CakeOrder_SaveProfile_PlayerMapLevelProgressDataAccess__GetHighestMapAndLevelIndexPlayable
              (*plVar14,0);
    plVar14 = (long *)FUN_03f5c394(DAT_09180790,uVar3);
    if (0 < (int)uVar3) {
      if (bVar2) goto LAB_0434a154;
      uVar4 = 0;
      do {
        lVar9 = *plVar13;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == DAT_0917b4a0) {
              puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_04349fd8;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar5 = (undefined8 *)FUN_03f95da8(plVar13,DAT_0917b4a0,0);
LAB_04349fd8:
        lVar9 = (*(code *)*puVar5)(plVar13,uVar4 & 0xffffffff,puVar5[1]);
        if ((lVar9 == 0) || (param_5 == 0)) goto LAB_0434a154;
        uVar6 = CakeOrder_MapToolConfig__GetToolData(param_5,*(undefined8 *)(lVar9 + 0x18),0);
        uVar8 = *(undefined8 *)(param_1 + 0x50);
        uVar1 = *(undefined8 *)(param_1 + 0x58);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09188ad0);
        }
        lVar7 = FUN_04c35338(uVar1,uVar8,DAT_091d4cd8);
        if ((lVar7 == 0) ||
           (CakeOrder_Home_UIItemToolUpgrade__SetUp(lVar7,param_2,param_4,lVar9,uVar6,1),
           plVar14 == (long *)0x0)) goto LAB_0434a154;
        lVar9 = thunk_FUN_03f99350(lVar7,*(undefined8 *)(*plVar14 + 0x40));
        if (lVar9 == 0) {
          uVar8 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar8,0);
        }
        if (*(uint *)(plVar14 + 3) <= uVar4) goto LAB_0434a158;
        plVar14[uVar4 + 4] = lVar7;
        thunk_FUN_03f5d7b8(plVar14 + uVar4 + 4,lVar7);
        uVar4 = uVar4 + 1;
      } while (uVar4 != uVar3);
    }
    plVar13 = (long *)(param_1 + 0x68);
    *plVar13 = (long)plVar14;
    thunk_FUN_03f5d7b8(plVar13,plVar14);
    lVar9 = *plVar13;
    if (lVar9 != 0) {
      uVar3 = *(uint *)(lVar9 + 0x18);
      if (0 < (int)uVar3) {
        lVar7 = 0;
        do {
          if (uVar3 <= (uint)lVar7) {
LAB_0434a158:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          lVar12 = *(long *)(lVar9 + 0x20 + lVar7 * 8);
          uVar8 = thunk_FUN_03f9944c(DAT_09174aa0);
          FUN_070a8c30(uVar8,param_1,DAT_091dcde8,0);
          if (lVar12 == 0) goto LAB_0434a154;
          CakeOrder_Home_UIItemToolUpgrade__add_onSelected(lVar12,uVar8);
          CakeOrder_BaseUI_UIElementAbstract__HideImmediate(lVar12,0);
          uVar3 = *(uint *)(lVar9 + 0x18);
          lVar7 = lVar7 + 1;
        } while ((int)lVar7 < (int)uVar3);
      }
      return;
    }
  }
LAB_0434a154:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

