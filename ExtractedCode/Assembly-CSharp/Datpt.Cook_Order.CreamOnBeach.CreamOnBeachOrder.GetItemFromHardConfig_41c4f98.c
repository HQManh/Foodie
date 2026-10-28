// rea decompile_all
// name: Datpt.Cook_Order.CreamOnBeach.CreamOnBeachOrder$$GetItemFromHardConfig
// address: 0x41c4f98
// body: available
// range: 0x41c4f98-0x41c51db inclusive
// range: 0x41c51e0-0x41c51e3 inclusive
// range: 0x41c51e8-0x41c51eb inclusive
// range: 0x41c5238-0x41c5283 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41c51d8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41c51e0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41c51e8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41c5270 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41c5274 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41c5278 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41c5280 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x041c51d4) */

void Datpt_Cook_Order_CreamOnBeach_CreamOnBeachOrder__GetItemFromHardConfig(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  undefined1 auVar7 [16];
  undefined8 local_d0;
  undefined8 *puStack_c8;
  ulong local_c0;
  long lStack_b8;
  long local_b0;
  undefined8 *local_a8;
  undefined8 local_a0;
  undefined8 *puStack_98;
  ulong local_90;
  long local_88;
  undefined8 local_80;
  undefined8 *puStack_78;
  ulong local_70;
  
  if ((DAT_095169cd & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a2b10);
    FUN_03f5c2a4(&DAT_091a35c0);
    FUN_03f5c2a4(&DAT_091a2b18);
    FUN_03f5c2a4(&DAT_091a35c8);
    FUN_03f5c2a4(&DAT_091a2b20);
    FUN_03f5c2a4(&DAT_091a35d0);
    FUN_03f5c2a4(&DAT_091a80a8);
    FUN_03f5c2a4(&DAT_091adf08);
    FUN_03f5c2a4(&DAT_091ac7f8);
    FUN_03f5c2a4(&DAT_091ac1a0);
    DAT_095169cd = 1;
  }
  local_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_70 = 0;
  puStack_98 = (undefined8 *)0x0;
  local_a0 = 0;
  local_88 = 0;
  local_90 = 0;
  lVar3 = Datpt_Cook_Order_LevelCreamOnBeach__get_LevelCreamOnBeachIns();
  if (lVar3 != 0) {
    lVar6 = *(long *)(lVar3 + 0x1d8);
    lVar3 = Datpt_Cook_Order_LevelCreamOnBeach__get_LevelCreamOnBeachIns();
    if ((lVar3 != 0) && (lVar6 != 0)) {
      auVar7 = FUN_0574d6bc(lVar6,*(undefined4 *)(lVar3 + 0x1a4),DAT_091ac1a0);
      Datpt_Cook_Order_CreamOnBeach_CreamOnBeachOrder__ShowMainCreamType
                (param_1,auVar7._0_8_ & 0xffffffff);
      plVar4 = (long *)Datpt_Cook_Order_LevelCreamOnBeach__get_LevelCreamOnBeachIns();
      if ((plVar4 != (long *)0x0) &&
         ((**(code **)(*plVar4 + 0x348))
                    (plVar4,auVar7._0_8_ & 0xffffffff,1,*(undefined8 *)(*plVar4 + 0x350)),
         auVar7._8_8_ != 0)) {
        FUN_0579a6a8(&local_d0,auVar7._8_8_,DAT_091ac7f8);
        local_70 = local_c0;
        local_a8 = &local_80;
        puStack_78 = puStack_c8;
        local_80 = local_d0;
        local_b0 = 0;
        do {
          uVar5 = FUN_071aef5c(&local_80,DAT_091a2b18);
          uVar2 = local_70;
          lVar3 = local_b0;
          if ((uVar5 & 1) == 0) {
            FUN_071aef58(local_a8,DAT_091a2b10);
            if (lVar3 != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c548(lVar3);
            }
            return;
          }
          if (*(long *)(param_1 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          iVar1 = (int)local_70;
          FUN_057ad238(&local_d0,*(long *)(param_1 + 0x58),DAT_091adf08);
          local_a0 = local_d0;
          local_d0 = 0;
          puStack_98 = puStack_c8;
          local_88 = lStack_b8;
          local_90 = local_c0;
          puStack_c8 = &local_a0;
          while (uVar5 = FUN_071b1a08(&local_a0,DAT_091a35c8), lVar3 = local_88, (uVar5 & 1) != 0) {
            if (iVar1 == (int)local_90) {
              if (*(long *)(param_1 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              FUN_053dd1d4(*(long *)(param_1 + 0x78),uVar2 & 0xffffffff,DAT_091a80a8);
              if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              UnityEngine_GameObject__SetActive(lVar3,1,0);
              plVar4 = (long *)Datpt_Cook_Order_LevelCreamOnBeach__get_LevelCreamOnBeachIns();
              if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              (**(code **)(*plVar4 + 0x348))
                        (plVar4,uVar2 & 0xffffffff,1,*(undefined8 *)(*plVar4 + 0x350));
            }
          }
          FUN_071b1a04(&local_a0,DAT_091a35c0);
        } while( true );
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

