// rea decompile_all
// name: CakeOrder.BaseUI.SceneMainUI$$RefreshAudioDuck
// address: 0x42d1204
// body: available
// range: 0x42d1204-0x42d14ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42d14f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42d14f8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42d14fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_BaseUI_SceneMainUI__RefreshAudioDuck(long param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined8 local_88;
  undefined8 *puStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 *puStack_68;
  undefined8 local_60;
  
  if ((DAT_095173a1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a4a78);
    FUN_03f5c2a4(&DAT_091a4a80);
    FUN_03f5c2a4(&DAT_091a4a88);
    FUN_03f5c2a4(&DAT_091b48d0);
    FUN_03f5c2a4(&DAT_091b48d8);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091bb490);
    DAT_095173a1 = 1;
  }
  local_70 = 0;
  puStack_68 = (undefined8 *)0x0;
  local_60 = 0;
  uVar3 = FUN_05a8eda4(DAT_091b48d8);
  if ((uVar3 & 1) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    FUN_061a17cc(&local_88,*(long *)(param_1 + 0x58),DAT_091bb490);
    puStack_68 = puStack_80;
    local_70 = local_88;
    iVar2 = 0;
    puStack_80 = &local_70;
    local_60 = local_78;
    local_88 = 0;
    while (uVar3 = FUN_071bec70(&local_70,DAT_091a4a80), (uVar3 & 1) != 0) {
      plVar4 = (long *)FUN_071bed54(&local_70,DAT_091a4a88);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = UnityEngine_Object__op_Inequality(plVar4,0,0);
      if ((uVar3 & 1) != 0) {
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        iVar1 = (**(code **)(*plVar4 + 0x228))(plVar4,*(undefined8 *)(*plVar4 + 0x230));
        if (iVar2 < iVar1) {
          iVar2 = (**(code **)(*plVar4 + 0x228))(plVar4,*(undefined8 *)(*plVar4 + 0x230));
        }
      }
    }
    FUN_071bec64(&local_70,DAT_091a4a78);
    lVar5 = *(long *)(DAT_091b48d0 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03f95a6c();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03f95a6c();
    }
    if (**(long **)(lVar5 + 0xb8) != 0) {
      CakeOrder_AudioManagerCakeOrder__SetDuck(**(long **)(lVar5 + 0xb8),iVar2,0,0);
      *(undefined1 *)(param_1 + 0x62) = 0;
      if (*(long *)(param_1 + 0x58) != 0) {
        FUN_061a17cc(&local_88,*(long *)(param_1 + 0x58),DAT_091bb490);
        local_60 = local_78;
        puStack_68 = puStack_80;
        local_70 = local_88;
        local_88 = 0;
        puStack_80 = &local_70;
        while (uVar3 = FUN_071bec70(&local_70,DAT_091a4a80), (uVar3 & 1) != 0) {
          plVar4 = (long *)FUN_071bed54(&local_70,DAT_091a4a88);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar3 = UnityEngine_Object__op_Inequality(plVar4,0,0);
          if ((uVar3 & 1) != 0) {
            if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar3 = (**(code **)(*plVar4 + 0x238))(plVar4,*(undefined8 *)(*plVar4 + 0x240));
            if ((uVar3 & 1) != 0) {
              *(undefined1 *)(param_1 + 0x62) = 1;
            }
          }
        }
        FUN_071bec64(&local_70,DAT_091a4a78);
        lVar5 = *(long *)(DAT_091b48d0 + 0x20);
        if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_03f95a6c();
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
        if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_03f95a6c();
        }
        if (**(long **)(lVar5 + 0xb8) != 0) {
          CakeOrder_AudioManagerCakeOrder__SetGameplaySfxMuted
                    (**(long **)(lVar5 + 0xb8),*(undefined1 *)(param_1 + 0x62),0,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

