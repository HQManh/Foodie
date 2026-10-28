// rea decompile_all
// name: Lean.Touch.LeanTouchSimulator$$OnGUI
// address: 0x7350814
// body: available
// range: 0x7350814-0x7350ae7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7350ad4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7350ad8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7350adc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7350ae0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7350ae4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Lean_Touch_LeanTouchSimulator__OnGUI(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  undefined8 local_98;
  undefined8 *puStack_90;
  long local_88;
  undefined8 local_80;
  undefined8 *puStack_78;
  long local_70;
  
  if ((DAT_09520775 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a36b0);
    FUN_03f5c2a4(&DAT_091a36b8);
    FUN_03f5c2a4(&DAT_091a36c0);
    FUN_03f5c2a4(&DAT_09184ac0);
    FUN_03f5c2a4(&DAT_09187728);
    FUN_03f5c2a4(&DAT_091ae168);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189c30);
    DAT_09520775 = 1;
  }
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  local_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_70 = 0;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar4 = UnityEngine_Object__op_Inequality(uVar7,0,0);
  if ((uVar4 & 1) != 0) {
    if (*(int *)(DAT_09187728 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar5 = *(long *)(*(long *)(DAT_09187728 + 0xb8) + 8);
    if (lVar5 == 0) {
LAB_07350ae4:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    FUN_057e185c(&local_98,lVar5,DAT_091ae168);
    iVar1 = 0;
    puStack_78 = puStack_90;
    local_80 = local_98;
    local_70 = local_88;
    local_98 = 0;
    puStack_90 = &local_80;
    while (uVar4 = FUN_071bd28c(&local_80,DAT_091a36b8), (uVar4 & 1) != 0) {
      if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(int *)(local_70 + 0x10) < 0 && *(int *)(local_70 + 0x10) != -0x2a) {
        iVar1 = iVar1 + 1;
      }
    }
    FUN_071bd288(&local_80,DAT_091a36b0);
    if (1 < iVar1) {
      if (*(int *)(DAT_09187728 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar5 = *(long *)(*(long *)(DAT_09187728 + 0xb8) + 8);
      if (lVar5 == 0) goto LAB_07350ae4;
      FUN_057e185c(&local_98,lVar5,DAT_091ae168);
      puStack_78 = puStack_90;
      local_80 = local_98;
      local_70 = local_88;
      local_98 = 0;
      puStack_90 = &local_80;
      while (uVar4 = FUN_071bd28c(&local_80,DAT_091a36b8), (uVar4 & 1) != 0) {
        if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(int *)(local_70 + 0x10) < 0) {
          plVar6 = *(long **)(param_1 + 0x30);
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          fVar8 = *(float *)(local_70 + 0x3c);
          fVar9 = *(float *)(local_70 + 0x40);
          iVar1 = (**(code **)(*plVar6 + 0x188))(plVar6,*(undefined8 *)(*plVar6 + 400));
          plVar6 = *(long **)(param_1 + 0x30);
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          iVar2 = (**(code **)(*plVar6 + 0x1a8))(plVar6,*(undefined8 *)(*plVar6 + 0x1b0));
          if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          iVar3 = UnityEngine_Screen__get_height(0);
          uVar7 = *(undefined8 *)(param_1 + 0x30);
          if (*(int *)(DAT_09184ac0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          UnityEngine_GUI__DrawTexture
                    (fVar8 - (float)iVar1 * 0.5,((float)iVar3 - fVar9) - (float)iVar2 * 0.5,uVar7,0)
          ;
        }
      }
      FUN_071bd288(&local_80,DAT_091a36b0);
    }
  }
  return;
}

