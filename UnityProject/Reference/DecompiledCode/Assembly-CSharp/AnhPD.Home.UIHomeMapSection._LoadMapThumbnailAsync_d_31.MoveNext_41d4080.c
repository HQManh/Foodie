// rea decompile_all
// name: AnhPD.Home.UIHomeMapSection.<LoadMapThumbnailAsync>d__31$$MoveNext
// address: 0x41d4080
// body: available
// range: 0x41d4080-0x41d4543 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41d4530 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41d4534 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41d4538 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41d453c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41d4540 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_Home_UIHomeMapSection_<LoadMapThumbnailAsync>d__31__MoveNext(int *param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  long lVar11;
  long *local_d8;
  undefined8 uStack_d0;
  ulong local_c8;
  long *local_c0;
  undefined8 uStack_b8;
  ulong local_b0;
  undefined4 local_98;
  long *local_90;
  undefined8 uStack_88;
  ulong local_80;
  long *local_70;
  undefined8 uStack_68;
  ulong local_60;
  long *local_50;
  undefined8 uStack_48;
  ulong local_40;
  
  if ((DAT_09516a4f & 1) == 0) {
    FUN_03f5c2a4(&DAT_091bf720);
    FUN_03f5c2a4(&DAT_09197a18);
    FUN_03f5c2a4(&DAT_09197a20);
    FUN_03f5c2a4(&DAT_091c1e90);
    FUN_03f5c2a4(&DAT_0919a700);
    FUN_03f5c2a4(&DAT_0919a708);
    FUN_03f5c2a4(&DAT_091b4b60);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091dbc90);
    FUN_03f5c2a4(&DAT_091dbff0);
    FUN_03f5c2a4(&DAT_091bdf10);
    DAT_09516a4f = 1;
  }
  lVar11 = *(long *)(param_1 + 6);
  local_70 = (long *)0x0;
  uStack_68 = 0;
  local_60 = 0;
  local_90 = (long *)0x0;
  uStack_88 = 0;
  local_80 = 0;
  local_98 = 0;
  if (*param_1 == 0) {
    local_60 = *(ulong *)(param_1 + 0xc);
    uStack_68 = *(undefined8 *)(param_1 + 10);
    local_70 = *(long **)(param_1 + 8);
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    *param_1 = -1;
  }
  else {
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    Utilities_GraphicExtension__SetA(0,*(undefined8 *)(lVar11 + 0x48),0);
    lVar3 = *(long *)(DAT_091b4b60 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c();
    }
    if (**(long **)(lVar3 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar4 = CakeOrder_DataSO_CakeOrderDatabaseSO__GetMapId
                      (**(long **)(lVar3 + 0xb8),*(undefined4 *)(lVar11 + 0xa0),0);
    CakeOrder_MapDataAssetCategory__LoadThumbnail(&local_50,uVar4,0);
    local_b0 = local_40;
    uStack_b8 = uStack_48;
    local_c0 = local_50;
    *(undefined8 *)(lVar11 + 200) = uStack_48;
    *(long **)(lVar11 + 0xc0) = local_50;
    *(ulong *)(lVar11 + 0xd0) = local_40;
    thunk_FUN_03f5d7b8(lVar11 + 0xc0,0);
    uStack_48 = *(undefined8 *)(lVar11 + 200);
    local_50 = *(long **)(lVar11 + 0xc0);
    local_40 = *(undefined8 *)(lVar11 + 0xd0);
    FUN_04b722fc(&local_d8,&local_50,0,8,0,0,0,DAT_091bf720);
    uStack_48 = 0;
    local_40 = 0;
    uStack_88 = uStack_d0;
    local_90 = local_d8;
    local_80 = local_c8;
    local_50 = (long *)0x0;
    if ((*(byte *)(*(long *)(DAT_091bdf10 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    uStack_48 = uStack_88;
    local_50 = local_90;
    local_40 = local_80;
    thunk_FUN_03f5d7b8(&local_50,0);
    uStack_68 = uStack_48;
    local_70 = local_50;
    local_60 = local_40;
    uVar5 = FUN_041e5390(&local_70,DAT_0919a708);
    if ((uVar5 & 1) == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 10) = uStack_68;
      *(long **)(param_1 + 8) = local_70;
      *(ulong *)(param_1 + 0xc) = local_60;
      thunk_FUN_03f5d7b8(param_1 + 8,0);
      FUN_041e5478(param_1 + 2,&local_70,param_1,DAT_091c1e90);
      return;
    }
  }
  plVar10 = local_70;
  if (local_70 != (long *)0x0) {
    uVar5 = local_60 & 0xffff;
    lVar3 = *(long *)(DAT_0919a700 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x28);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c(lVar3);
    }
    lVar7 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar3) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_041d438c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_03f95da8(plVar10,lVar3,0);
LAB_041d438c:
    (*(code *)*puVar6)(plVar10,uVar5,puVar6[1]);
  }
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  iVar2 = FUN_0640f818(lVar11 + 0xc0,DAT_09197a20);
  if (iVar2 == 1) {
    uVar4 = FUN_0640f7ac(lVar11 + 0xc0,DAT_09197a18);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = UnityEngine_Object__op_Implicit(uVar4,0);
    if ((uVar5 & 1) != 0) {
      lVar3 = *(long *)(lVar11 + 0x48);
      uVar4 = FUN_0640f7ac(lVar11 + 0xc0,DAT_09197a18);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550(uVar4,uVar4);
      }
      UnityEngine_UI_Image__set_sprite(lVar3,uVar4,0);
      lVar3 = UnityEngine_Component__get_gameObject(lVar11,0);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar5 = UnityEngine_GameObject__get_activeInHierarchy(lVar3,0);
      if ((uVar5 & 1) == 0) {
        Utilities_GraphicExtension__SetA(0x3f800000,*(undefined8 *)(lVar11 + 0x48),0);
      }
      else {
        uVar4 = DG_Tweening_DOTweenModuleUI__DOFade
                          (0x3f800000,0x3e800000,*(undefined8 *)(lVar11 + 0x48),0);
        uVar4 = FUN_04d9656c(uVar4,1,DAT_091dbff0);
        FUN_04d8dd74(uVar4,DAT_091dbc90);
      }
    }
  }
  cVar1 = DAT_095162d8;
  *param_1 = -2;
  if (cVar1 == '\0') {
    FUN_03f5c2a4(&DAT_091866a8);
    DAT_095162d8 = '\x01';
  }
  plVar10 = *(long **)(param_1 + 2);
  if (plVar10 != (long *)0x0) {
    lVar11 = *plVar10;
    uVar5 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar5 != 0) {
      piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == DAT_091866a8) {
          puVar6 = (undefined8 *)(lVar11 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_041d4510;
        }
        uVar5 = uVar5 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar5 != 0);
    }
    puVar6 = (undefined8 *)FUN_03f95da8(plVar10,DAT_091866a8,2);
LAB_041d4510:
    (*(code *)*puVar6)(plVar10,puVar6[1]);
  }
  return;
}

