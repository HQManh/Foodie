// rea decompile_all
// name: CakeOrder.InGame.UICakePauseMenuInGame$$DrawLevelSelectMapDropdown
// address: 0x42978f8
// body: available
// range: 0x42978f8-0x4297d83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4297d7c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4297d80 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 CakeOrder_InGame_UICakePauseMenuInGame__DrawLevelSelectMapDropdown(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  if ((DAT_095171cc & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c01c8);
    FUN_03f5c2a4(&DAT_091c0558);
    FUN_03f5c2a4(&DAT_09184ac0);
    FUN_03f5c2a4(&DAT_091b4b60);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091805f8);
    FUN_03f5c2a4(&DAT_09226e58);
    FUN_03f5c2a4(&DAT_09226e50);
    FUN_03f5c2a4(&DAT_09207268);
    FUN_03f5c2a4(&DAT_091f5aa8);
    DAT_095171cc = 1;
  }
  lVar3 = *(long *)(DAT_091b4b60 + 0x20);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03f95a6c();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03f95a6c();
  }
  lVar3 = **(long **)(lVar3 + 0xb8);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar4 = UnityEngine_Object__op_Inequality(lVar3,0,0);
  if ((uVar4 & 1) != 0) {
    if (lVar3 == 0) {
LAB_04297d7c:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar1 = CakeOrder_DataSO_CakeOrderDatabaseSO__get_NumMaps(lVar3,0);
    if (1 < (int)uVar1) {
      if (*(int *)(DAT_09184ac0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      UnityEngine_GUI__set_backgroundColor(0x3f1eb852,0x3f5c28f6,0x3f800000,0x3f800000,0);
      puVar9 = &DAT_09226e58;
      if (*(char *)(param_1 + 0x230) != '\0') {
        puVar9 = &DAT_09226e50;
      }
      uVar5 = System_String__Concat
                        (DAT_09207268,*(undefined8 *)(param_1 + 0x228),DAT_091f5aa8,*puVar9,0);
      uVar6 = CakeOrder_InGame_UICakePauseMenuInGame__CheatPanelActionButtonStyle();
      lVar7 = DAT_091c01c8;
      lVar8 = *(long *)(DAT_091c01c8 + 0x38);
      if (lVar8 == 0) {
        FUN_03f95ac8(DAT_091c01c8);
        lVar8 = *(long *)(lVar7 + 0x38);
      }
      lVar8 = *(long *)(lVar8 + 0x10);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_03f95a6c();
      }
      if (*(int *)(lVar8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_03f95a6c();
      }
      uVar4 = UnityEngine_GUILayout__Button(uVar5,uVar6,**(undefined8 **)(lVar7 + 0xb8),0);
      if ((uVar4 & 1) != 0) {
        *(byte *)(param_1 + 0x230) = *(byte *)(param_1 + 0x230) ^ 1;
      }
      if (*(int *)(DAT_09184ac0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      UnityEngine_GUI__set_backgroundColor(0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
      if (*(char *)(param_1 + 0x230) != '\0') {
        lVar7 = FUN_03f5c394(DAT_091805f8,(ulong)uVar1);
        uVar4 = 0;
        puVar9 = (undefined8 *)(lVar7 + 0x20);
        while (uVar5 = CakeOrder_DataSO_CakeOrderDatabaseSO__GetMapId(lVar3,uVar4 & 0xffffffff,0),
              lVar7 != 0) {
          if (*(uint *)(lVar7 + 0x18) <= uVar4) goto LAB_04297d80;
          *puVar9 = uVar5;
          thunk_FUN_03f5d7b8(puVar9,uVar5);
          lVar8 = DAT_091c01c8;
          uVar4 = uVar4 + 1;
          puVar9 = puVar9 + 1;
          if (uVar1 == uVar4) {
            uVar10 = *(undefined4 *)(param_1 + 0x21c);
            uVar11 = *(undefined4 *)(param_1 + 0x220);
            lVar3 = *(long *)(DAT_091c01c8 + 0x38);
            if (lVar3 == 0) {
              FUN_03f95ac8(DAT_091c01c8);
              lVar3 = *(long *)(lVar8 + 0x38);
            }
            lVar3 = *(long *)(lVar3 + 0x10);
            if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
              lVar3 = FUN_03f95a6c();
            }
            if (*(int *)(lVar3 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            lVar3 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
            if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
              lVar3 = FUN_03f95a6c();
            }
            uVar10 = UnityEngine_GUILayout__BeginScrollView
                               (uVar10,**(undefined8 **)(lVar3 + 0xb8),0);
            *(undefined4 *)(param_1 + 0x21c) = uVar10;
            *(undefined4 *)(param_1 + 0x220) = uVar11;
            uVar1 = FUN_04ee582c(lVar7,*(undefined8 *)(param_1 + 0x228),DAT_091c0558);
            uVar5 = CakeOrder_InGame_UICakePauseMenuInGame__CheatPanelButtonStyle();
            lVar3 = DAT_091c01c8;
            lVar8 = *(long *)(DAT_091c01c8 + 0x38);
            if (lVar8 == 0) {
              FUN_03f95ac8(DAT_091c01c8);
              lVar8 = *(long *)(lVar3 + 0x38);
            }
            lVar8 = *(long *)(lVar8 + 0x10);
            if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
              lVar8 = FUN_03f95a6c();
            }
            if (*(int *)(lVar8 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            lVar3 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
            if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
              lVar3 = FUN_03f95a6c();
            }
            uVar2 = UnityEngine_GUILayout__SelectionGrid
                              (uVar1,lVar7,2,uVar5,**(undefined8 **)(lVar3 + 0xb8),0);
            UnityEngine_GUILayout__EndScrollView(0);
            uVar5 = 1;
            if (uVar2 == uVar1) {
              return 1;
            }
            if ((int)uVar2 < 0) {
              return 1;
            }
            if (uVar2 < *(uint *)(lVar7 + 0x18)) {
              *(undefined8 *)(param_1 + 0x228) = *(undefined8 *)(lVar7 + (ulong)uVar2 * 8 + 0x20);
              thunk_FUN_03f5d7b8(param_1 + 0x228);
              *(undefined1 *)(param_1 + 0x230) = 0;
              if (DAT_09515ce8 == '\0') {
                FUN_03f5c2a4(&DAT_0918cb68);
                DAT_09515ce8 = '\x01';
              }
              *(undefined8 *)(param_1 + 0x21c) = **(undefined8 **)(DAT_0918cb68 + 0xb8);
              return 1;
            }
LAB_04297d80:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558(uVar5);
          }
        }
        goto LAB_04297d7c;
      }
    }
  }
  return 0;
}

