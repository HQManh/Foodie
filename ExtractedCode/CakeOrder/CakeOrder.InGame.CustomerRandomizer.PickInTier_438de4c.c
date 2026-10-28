// rea decompile_all
// name: CakeOrder.InGame.CustomerRandomizer$$PickInTier
// address: 0x438de4c
// body: available
// range: 0x438de4c-0x438e1a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x438e198 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x438e19c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x438e1a0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x438e1a4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_CustomerRandomizer__PickInTier(long *param_1,long param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 local_98;
  undefined8 *puStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 *puStack_78;
  undefined8 local_70;
  
  if ((DAT_095179ff & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a2480);
    FUN_03f5c2a4(&DAT_091a2488);
    FUN_03f5c2a4(&DAT_091a2490);
    FUN_03f5c2a4(&DAT_091ab790);
    FUN_03f5c2a4(&DAT_091ab788);
    FUN_03f5c2a4(&DAT_091ab7a0);
    FUN_03f5c2a4(&DAT_091ab780);
    FUN_03f5c2a4(&DAT_091ab7b8);
    FUN_03f5c2a4(&DAT_091ab7c0);
    FUN_03f5c2a4(&DAT_0917bdc8);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091b8b00);
    DAT_095179ff = 1;
  }
  local_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_70 = 0;
  if (param_2 != 0) {
    uVar4 = *(undefined4 *)(param_2 + 0x18);
    lVar5 = thunk_FUN_03f9944c(DAT_0917bdc8);
    FUN_057e0478(lVar5,uVar4,DAT_091ab780);
    FUN_057e185c(&local_98,param_2,DAT_091ab7a0);
    local_70 = local_88;
    puStack_78 = puStack_90;
    local_80 = local_98;
    local_98 = 0;
    puStack_90 = &local_80;
LAB_0438dfa8:
    uVar6 = FUN_071bd28c(&local_80,DAT_091a2488);
    uVar8 = local_70;
    if ((uVar6 & 1) != 0) {
      if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar6 = FUN_05e2d2ac(param_3,local_70,DAT_091b8b00);
      lVar2 = DAT_091ab788;
      if ((uVar6 & 1) == 0) {
        if (lVar5 != 0) {
          lVar9 = *(long *)(lVar5 + 0x10);
          *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
          if (lVar9 != 0) {
            uVar1 = *(uint *)(lVar5 + 0x18);
            if (uVar1 < *(uint *)(lVar9 + 0x18)) {
              *(uint *)(lVar5 + 0x18) = uVar1 + 1;
              puVar7 = (undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
              *puVar7 = uVar8;
              thunk_FUN_03f5d7b8(puVar7,uVar8);
            }
            else {
              FUN_057e0c68(lVar5,uVar8,
                           *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
            }
            goto LAB_0438dfa8;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      goto LAB_0438dfa8;
    }
    FUN_071bd288(&local_80,DAT_091a2480);
    if (lVar5 != 0) {
      if (*(int *)(lVar5 + 0x18) == 0) {
        uVar8 = CakeOrder_InGame_CustomerRandomizer__LastOf(param_3);
        FUN_057e185c(&local_98,param_2,DAT_091ab7a0);
        puStack_78 = puStack_90;
        local_80 = local_98;
        local_70 = local_88;
        local_98 = 0;
        puStack_90 = &local_80;
        while (uVar6 = FUN_071bd28c(&local_80,DAT_091a2488), uVar3 = local_70, (uVar6 & 1) != 0) {
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar6 = UnityEngine_Object__op_Inequality(uVar3,uVar8,0);
          lVar2 = DAT_091ab788;
          if ((uVar6 & 1) != 0) {
            lVar9 = *(long *)(lVar5 + 0x10);
            *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar1 = *(uint *)(lVar5 + 0x18);
            if (uVar1 < *(uint *)(lVar9 + 0x18)) {
              *(uint *)(lVar5 + 0x18) = uVar1 + 1;
              puVar7 = (undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
              *puVar7 = uVar3;
              thunk_FUN_03f5d7b8(puVar7,uVar3);
            }
            else {
              FUN_057e0c68(lVar5,uVar3,
                           *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
            }
          }
        }
        FUN_071bd288(&local_80,DAT_091a2480);
        if (*(int *)(lVar5 + 0x18) == 0) {
          FUN_057e0e78(lVar5,param_2,DAT_091ab790);
        }
      }
      if (param_1 != (long *)0x0) {
        uVar4 = (**(code **)(*param_1 + 0x1a8))
                          (param_1,*(undefined4 *)(lVar5 + 0x18),*(undefined8 *)(*param_1 + 0x1b0));
        FUN_057e0998(lVar5,uVar4,DAT_091ab7c0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

