// rea decompile_all
// name: AnhPD.FoodOrder.Autoplay.CookingBotRunner$$Run
// address: 0x4176638
// body: available
// range: 0x4176638-0x417687b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4176824 to 0x85f7650 UnityEngine.Debug$$LogWarning (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_Autoplay_CookingBotRunner__Run(long param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 local_34;
  
  if ((DAT_095165f9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182280);
    FUN_03f5c2a4(&DAT_09182cc0);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091f5d18);
    FUN_03f5c2a4(&DAT_09213b70);
    FUN_03f5c2a4(&DAT_091f5700);
    FUN_03f5c2a4(&DAT_091fa700);
    DAT_095165f9 = 1;
  }
  uVar2 = AnhPD_FoodOrder_Autoplay_CookingBotRunner__EnsureInitialized(param_1);
  if ((uVar2 & 1) == 0) {
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    UnityEngine_Debug__LogWarning(DAT_09213b70,param_1,0);
    return;
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  lVar4 = DAT_09182280;
  *(undefined1 *)(param_1 + 0x3b) = 1;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  CakeOrder_CakeOrderDataTracking__MarkBotControlled(0);
  if (((*(char *)(param_1 + 0x38) != '\0') && (*(long *)(param_1 + 0x58) != 0)) &&
     (lVar4 = *(long *)(*(long *)(param_1 + 0x58) + 0x38), lVar4 != 0)) {
    uVar5 = *(undefined8 *)(lVar4 + 0x10);
    uVar1 = *(undefined4 *)(lVar4 + 0x1c);
    if (*(int *)(DAT_09182cc0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    CakeOrder_InGame_CookingBotAutoRetry__Begin(uVar5,uVar1,0);
  }
  if (*(int *)(DAT_09182cc0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  CakeOrder_InGame_CookingBotAutoRetry__ApplyTimeScale(0);
  uVar5 = DAT_091fa700;
  uVar3 = DAT_091f5700;
  if (*(char *)(param_1 + 0x38) != '\0') {
    if (*(int *)(DAT_09182cc0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (DAT_09516606 == '\0') {
      FUN_03f5c2a4(&DAT_09182cc0);
      DAT_09516606 = '\x01';
    }
    if (*(int *)(DAT_09182cc0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_34 = *(undefined4 *)(*(long *)(DAT_09182cc0 + 0xb8) + 0xc);
    uVar3 = FUN_03f5c42c(DAT_09535420,&local_34);
    uVar3 = System_String__Format(DAT_091f5d18,uVar3,0);
  }
  uVar5 = System_String__Concat(uVar5,uVar3,0);
  if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_091835d0);
  }
  UnityEngine_Debug__Log(uVar5,param_1,0);
  return;
}

