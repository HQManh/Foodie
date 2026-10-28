// rea decompile_all
// name: CakeOrder.BaseUI.SceneMainUI$$ShowPopupInStack
// address: 0x42d0b98
// body: available
// range: 0x42d0b98-0x42d1067 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42d0f04 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42d0fe4 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_BaseUI_SceneMainUI__ShowPopupInStack
               (long *param_1,long *param_2,long param_3,long param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 local_a8;
  undefined8 *puStack_a0;
  undefined8 local_98;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 *puStack_78;
  undefined8 local_70;
  
  if ((DAT_095173a0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174a48);
    FUN_03f5c2a4(&DAT_091a4a78);
    FUN_03f5c2a4(&DAT_091a4a80);
    FUN_03f5c2a4(&DAT_091a4a88);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091d85e8);
    FUN_03f5c2a4(&DAT_091d85f0);
    FUN_03f5c2a4(&DAT_091bb490);
    FUN_03f5c2a4(&DAT_091bb498);
    FUN_03f5c2a4(&DAT_091bb4a0);
    FUN_03f5c2a4(&DAT_091bb4a8);
    FUN_03f5c2a4(&DAT_091bb488);
    FUN_03f5c2a4(&DAT_091bb4b0);
    FUN_03f5c2a4(&DAT_0917e970);
    DAT_095173a0 = 1;
  }
  lVar2 = param_1[0xb];
  local_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_70 = 0;
  local_88 = 0;
  if (lVar2 == 0) goto LAB_042d0f04;
  if (0 < *(int *)(lVar2 + 0x18)) {
    uVar3 = FUN_061a18a4(lVar2,DAT_091bb498);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    uVar4 = UnityEngine_Object__op_Equality(uVar3,param_2,0);
    lVar2 = param_1[0xb];
    if ((uVar4 & 1) != 0) {
      if (lVar2 != 0) {
        FUN_061a18e8(lVar2,DAT_091bb4a0);
LAB_042d0ea0:
        if (param_2 == (long *)0x0) goto LAB_042d0f04;
        iVar1 = (**(code **)(*param_2 + 0x218))(param_2,*(undefined8 *)(*param_2 + 0x220));
        lVar2 = param_1[0xb];
        if (iVar1 == 1) {
          *(undefined1 *)((long)param_1 + 0x61) = 1;
          while (lVar2 != 0) {
            if (*(int *)(lVar2 + 0x18) < 1) {
              *(undefined1 *)((long)param_1 + 0x61) = 0;
              goto LAB_042d0f14;
            }
            lVar2 = FUN_061a18e8(lVar2,DAT_091bb4a0);
            if (lVar2 == 0) break;
            CakeOrder_BaseUI_UIElementAbstract__Hide(0,lVar2,0);
            lVar2 = param_1[0xb];
          }
          goto LAB_042d0f04;
        }
        if (lVar2 == 0) goto LAB_042d0f04;
LAB_042d0f14:
        FUN_061a19e4(lVar2,param_2,DAT_091bb4a8);
        lVar2 = thunk_FUN_03f9944c(DAT_09174a48);
        FUN_070a8c30(lVar2,param_1,DAT_091d85e8,0);
        if (param_3 != 0) {
          lVar5 = System_Delegate__Combine(param_3,lVar2,0);
          uVar3 = DAT_09174a48;
          if (lVar5 == 0) {
            lVar2 = 0;
          }
          else {
            lVar2 = thunk_FUN_03f99350(lVar5,DAT_09174a48);
            if (lVar2 == 0) goto LAB_042d0fe0;
          }
        }
        lVar6 = thunk_FUN_03f9944c(DAT_09174a48);
        FUN_070a8c30(lVar6,0,DAT_091d85f0,0);
        if (param_4 != 0) {
          lVar5 = System_Delegate__Combine(param_4,lVar6,0);
          uVar3 = DAT_09174a48;
          if (lVar5 == 0) {
            lVar6 = 0;
          }
          else {
            lVar6 = thunk_FUN_03f99350(lVar5,DAT_09174a48);
            if (lVar6 == 0) {
LAB_042d0fe0:
                    /* WARNING: Subroutine does not return */
              FUN_03f5c8d0(lVar5,uVar3);
            }
          }
        }
        lVar5 = UnityEngine_Component__get_transform(param_2,0);
        if (lVar5 != 0) {
          UnityEngine_Transform__SetAsLastSibling(lVar5,0);
          CakeOrder_BaseUI_UIElementAbstract__Show(0,param_2,lVar2,lVar6);
          CakeOrder_BaseUI_SceneMainUI__RefreshAudioDuck(param_1);
          CakeOrder_BaseUI_SceneMainUI__RefreshPopupStack(param_1);
          (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0));
          (**(code **)(*param_1 + 0x1d8))(param_1,*(undefined8 *)(*param_1 + 0x1e0));
          return;
        }
      }
      goto LAB_042d0f04;
    }
    if (lVar2 == 0) goto LAB_042d0f04;
  }
  FUN_061a17cc(&local_a8,lVar2,DAT_091bb490);
  local_70 = local_98;
  puStack_78 = puStack_a0;
  local_80 = local_a8;
  local_a8 = 0;
  puStack_a0 = &local_80;
  do {
    uVar4 = FUN_071bec70(&local_80,DAT_091a4a80);
    if ((uVar4 & 1) == 0) {
      FUN_071bec64(&local_80,DAT_091a4a78);
      goto LAB_042d0ea0;
    }
    uVar3 = FUN_071bed54(&local_80,DAT_091a4a88);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = UnityEngine_Object__op_Equality(uVar3,param_2,0);
  } while ((uVar4 & 1) == 0);
  FUN_071bec64(&local_80,DAT_091a4a78);
  lVar5 = thunk_FUN_03f9944c(DAT_0917e970);
  FUN_061a1268(lVar5,DAT_091bb488);
  lVar6 = thunk_FUN_03f9944c(DAT_0917e970);
  FUN_061a1268(lVar6,DAT_091bb488);
  lVar2 = param_1[0xb];
  while (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) < 1) {
      if (lVar6 != 0) {
        iVar1 = *(int *)(lVar6 + 0x18);
        goto joined_r0x042d0e70;
      }
      break;
    }
    uVar3 = FUN_061a18e8(lVar2,DAT_091bb4a0);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    uVar4 = UnityEngine_Object__op_Inequality(uVar3,param_2,0);
    if ((uVar4 & 1) != 0) {
      if (lVar6 == 0) break;
      FUN_061a19e4(lVar6,uVar3,DAT_091bb4a8);
    }
    lVar2 = param_1[0xb];
  }
LAB_042d0f04:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
joined_r0x042d0e70:
  if (iVar1 < 1) goto LAB_042d0ea0;
  uVar3 = FUN_061a18e8(lVar6,DAT_091bb4a0);
  if (lVar5 == 0) goto LAB_042d0f04;
  FUN_061a19e4(lVar5,uVar3,DAT_091bb4a8);
  iVar1 = *(int *)(lVar6 + 0x18);
  goto joined_r0x042d0e70;
}

