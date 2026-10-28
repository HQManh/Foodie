// rea decompile_all
// name: CakeOrder.InGame.UIInLevelHUDPuzzleStyle$$SetSpeedUp
// address: 0x42a4624
// body: available
// range: 0x42a4624-0x42a4777 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42a4740 to 0x42ab138 CakeOrder.InGame.UIInLevelHUDPuzzleStyle$$ApplySpeedUpFx (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_UIInLevelHUDPuzzleStyle__SetSpeedUp(long param_1,uint param_2)

{
  bool bVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  code *pcVar6;
  
  if ((DAT_09517277 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b4ad8);
    DAT_09517277 = 1;
  }
  uVar2 = FUN_05a8eda4(DAT_091b4ad8);
  if ((uVar2 & 1) == 0) {
    return;
  }
  CakeOrder_InGame_UIInLevelHUDPuzzleStyle__GetSpeedUpConfig();
  if ((param_2 & 1) == 0) {
    *(undefined1 *)(param_1 + 0x98) = 0;
    plVar3 = *(long **)(param_1 + 0x78);
    if (plVar3 != (long *)0x0) {
      pcVar6 = *(code **)(*plVar3 + 0x1b8);
      uVar4 = *(undefined8 *)(*plVar3 + 0x1c0);
      goto LAB_042a46c0;
    }
LAB_042a46f4:
    if (*(long *)(param_1 + 0x88) != 0) {
      CakeOrder_BaseUI_UIElementAbstract__Hide(0,*(long *)(param_1 + 0x88),0,0);
    }
  }
  else {
    if (*(float *)(param_1 + 0xa0) <= 0.01) {
      lVar5 = *(long *)(param_1 + 0xb0);
      if (lVar5 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x042a4764. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28));
      return;
    }
    *(undefined1 *)(param_1 + 0x98) = 1;
    plVar3 = *(long **)(param_1 + 0x78);
    if (plVar3 != (long *)0x0) {
      pcVar6 = *(code **)(*plVar3 + 0x188);
      uVar4 = *(undefined8 *)(*plVar3 + 400);
LAB_042a46c0:
      (*pcVar6)(0,plVar3,0,uVar4);
      if (*(char *)(param_1 + 0x98) == '\0') goto LAB_042a46f4;
    }
    if (*(long *)(param_1 + 0x88) != 0) {
      CakeOrder_BaseUI_UIElementAbstract__Show(0,*(long *)(param_1 + 0x88),0,0,0);
    }
  }
  CakeOrder_InGame_UIInLevelHUDPuzzleStyle__ApplySpeedUpTime(param_1,param_2 & 1);
  if ((param_2 & 1) == 0) {
    bVar1 = *(char *)(param_1 + 0x99) != '\0';
  }
  else {
    bVar1 = true;
  }
  CakeOrder_InGame_UIInLevelHUDPuzzleStyle__ApplySpeedUpFx(param_1,bVar1);
  return;
}

