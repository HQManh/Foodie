// rea decompile_all
// name: TrungKien.UI.NewFearther.UIPopupNewFeather$$TestFeather
// address: 0x4089300
// body: available
// range: 0x4089300-0x408959f inclusive
// range: 0x40895e0-0x408971b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4089580 to 0x85f70f4 UnityEngine.Debug$$LogError (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x408959c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4089718 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void TrungKien_UI_NewFearther_UIPopupNewFeather__TestFeather(long param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 local_70;
  undefined8 *puStack_68;
  long local_60;
  long local_58;
  undefined8 local_50;
  undefined8 *puStack_48;
  long local_40;
  
  if ((DAT_09515caa & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_0919fb38);
    FUN_03f5c2a4(&DAT_0919fb40);
    FUN_03f5c2a4(&DAT_0919fb50);
    FUN_03f5c2a4(&DAT_091a67f8);
    FUN_03f5c2a4(&DAT_091a6800);
    FUN_03f5c2a4(&DAT_091a6808);
    FUN_03f5c2a4(&DAT_091ae9c0);
    FUN_03f5c2a4(&DAT_091ae9c8);
    FUN_03f5c2a4(&DAT_091ae9d0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091bea18);
    FUN_03f5c2a4(&DAT_092144c0);
    FUN_03f5c2a4(&DAT_092144c8);
    DAT_09515caa = 1;
  }
  uVar8 = *(undefined8 *)(param_1 + 0xc0);
  local_50 = 0;
  puStack_48 = (undefined8 *)0x0;
  local_40 = 0;
  local_58 = 0;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = UnityEngine_Object__op_Equality(uVar8,0,0);
  if ((uVar3 & 1) != 0) {
LAB_04089550:
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    UnityEngine_Debug__LogError(DAT_092144c0,0);
    return;
  }
  if (*(long *)(param_1 + 0xc0) == 0) goto LAB_04089718;
  lVar4 = *(long *)(*(long *)(param_1 + 0xc0) + 0x58);
  if ((lVar4 == 0) || (iVar2 = FUN_06fd810c(lVar4,DAT_0919fb40), iVar2 == 0)) goto LAB_04089550;
  lVar4 = *(long *)(param_1 + 0x118);
  if (lVar4 == 0) goto LAB_04089718;
  iVar2 = *(int *)(lVar4 + 0x18);
  *(undefined4 *)(lVar4 + 0x18) = 0;
  *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
  if (0 < iVar2) {
    System_Array__Clear(*(undefined8 *)(lVar4 + 0x10),0,iVar2,0);
  }
  uVar3 = System_String__IsNullOrEmpty(param_2,0);
  if ((uVar3 & 1) == 0) {
    if ((*(long *)(param_1 + 0xc0) == 0) ||
       (lVar4 = *(long *)(*(long *)(param_1 + 0xc0) + 0x58), lVar4 == 0)) goto LAB_04089718;
    uVar3 = FUN_06fd9fbc(lVar4,param_2,&local_58,DAT_0919fb38);
    lVar4 = DAT_091ae9c0;
    if (((uVar3 & 1) != 0) && (local_58 != 0)) {
      lVar5 = *(long *)(param_1 + 0x118);
      if (lVar5 == 0) goto LAB_04089718;
      lVar6 = *(long *)(lVar5 + 0x10);
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (lVar6 == 0) goto LAB_04089718;
      uVar1 = *(uint *)(lVar5 + 0x18);
      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
        plVar7 = (long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
        *plVar7 = local_58;
        thunk_FUN_03f5d7b8(plVar7);
      }
      else {
        FUN_057e0c68(lVar5,local_58,
                     *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
      }
    }
  }
  else {
    if (((*(long *)(param_1 + 0xc0) == 0) ||
        (lVar4 = *(long *)(*(long *)(param_1 + 0xc0) + 0x58), lVar4 == 0)) ||
       (lVar4 = FUN_06fd8278(lVar4,DAT_0919fb50), lVar4 == 0)) goto LAB_04089718;
    FUN_06544014(&local_70,lVar4,DAT_091bea18);
    puStack_48 = puStack_68;
    local_50 = local_70;
    local_40 = local_60;
    local_70 = 0;
    puStack_68 = &local_50;
LAB_040894d8:
    uVar3 = FUN_072759a8(&local_50,DAT_091a6800);
    lVar4 = DAT_091ae9c0;
    if ((uVar3 & 1) != 0) {
      if (local_40 != 0) {
        lVar5 = *(long *)(param_1 + 0x118);
        if (lVar5 != 0) {
          lVar6 = *(long *)(lVar5 + 0x10);
          *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
          if (lVar6 != 0) {
            uVar1 = *(uint *)(lVar5 + 0x18);
            if (uVar1 < *(uint *)(lVar6 + 0x18)) {
              *(uint *)(lVar5 + 0x18) = uVar1 + 1;
              plVar7 = (long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
              *plVar7 = local_40;
              thunk_FUN_03f5d7b8(plVar7);
            }
            else {
              FUN_057e0c68(lVar5,local_40,
                           *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
            }
            goto LAB_040894d8;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      goto LAB_040894d8;
    }
    FUN_072759a4(&local_50,DAT_091a67f8);
  }
  if (*(long *)(param_1 + 0x118) != 0) {
    if (*(int *)(*(long *)(param_1 + 0x118) + 0x18) == 0) {
      uVar8 = System_String__Concat(DAT_092144c8,param_2,0);
      if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_091835d0);
      }
      UnityEngine_Debug__LogError(uVar8,0);
    }
    else {
      *(undefined1 *)(param_1 + 0x124) = 1;
      TrungKien_UI_NewFearther_UIPopupNewFeather__ShowFeatherAt(param_1,0);
      uVar3 = CakeOrder_BaseUI_UIElementAbstract__get_IsShowing(param_1,0);
      if ((uVar3 & 1) == 0) {
        CakeOrder_BaseUI_UIElementAbstract__Show(0,param_1,0,0,0);
      }
    }
    return;
  }
LAB_04089718:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

