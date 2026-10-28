// rea decompile_all
// name: Datpt.Cook_Order.CreamOnBeach.CreamOnBeachOrder$$ResetOrder
// address: 0x41c573c
// body: available
// range: 0x41c573c-0x41c5927 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41c591c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41c5920 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41c5924 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Datpt_Cook_Order_CreamOnBeach_CreamOnBeachOrder__ResetOrder(long param_1)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 local_a8;
  undefined8 *puStack_a0;
  ulong local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long local_78;
  undefined8 local_70;
  undefined8 *puStack_68;
  ulong local_60;
  
  if ((DAT_095169cf & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a35c0);
    FUN_03f5c2a4(&DAT_091a2af8);
    FUN_03f5c2a4(&DAT_091a35c8);
    FUN_03f5c2a4(&DAT_091a2b00);
    FUN_03f5c2a4(&DAT_091a35d0);
    FUN_03f5c2a4(&DAT_091a2b08);
    FUN_03f5c2a4(&DAT_091a80b0);
    FUN_03f5c2a4(&DAT_091a80c0);
    FUN_03f5c2a4(&DAT_091adf08);
    DAT_095169cf = 1;
  }
  local_70 = 0;
  puStack_68 = (undefined8 *)0x0;
  local_60 = 0;
  uStack_88 = 0;
  local_90 = 0;
  local_78 = 0;
  uStack_80 = 0;
  Datpt_Cook_Order_Order__ResetOrder(param_1,0);
  if (*(long *)(param_1 + 0x78) != 0) {
    FUN_053dcb58(&local_a8,*(long *)(param_1 + 0x78),DAT_091a80c0);
    local_60 = local_98;
    puStack_68 = puStack_a0;
    local_70 = local_a8;
    local_a8 = 0;
    puStack_a0 = &local_70;
    while (uVar1 = FUN_071aecdc(&local_70,DAT_091a2b00), uVar3 = local_60, (uVar1 & 1) != 0) {
      plVar2 = (long *)Datpt_Cook_Order_LevelCreamOnBeach__get_LevelCreamOnBeachIns();
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      (**(code **)(*plVar2 + 0x348))
                (plVar2,uVar3 & 0xffffffff,0xffffffff,*(undefined8 *)(*plVar2 + 0x350));
    }
    FUN_071aecd8(&local_70,DAT_091a2af8);
    *(undefined4 *)(param_1 + 0x80) = 0;
    if (*(long *)(param_1 + 0x78) != 0) {
      FUN_053dc638(*(long *)(param_1 + 0x78),DAT_091a80b0);
      if (*(long *)(param_1 + 0x58) != 0) {
        FUN_057ad238(&local_90,*(long *)(param_1 + 0x58),DAT_091adf08);
        local_a8 = 0;
        puStack_a0 = &local_90;
        while( true ) {
          uVar3 = FUN_071b1a08(&local_90,DAT_091a35c8);
          if ((uVar3 & 1) == 0) {
            FUN_071b1a04(&local_90,DAT_091a35c0);
            return;
          }
          if (local_78 == 0) break;
          UnityEngine_GameObject__SetActive(local_78,0,0);
        }
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

