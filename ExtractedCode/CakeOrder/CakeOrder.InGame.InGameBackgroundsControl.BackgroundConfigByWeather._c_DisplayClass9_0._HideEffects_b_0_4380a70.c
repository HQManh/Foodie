// rea decompile_all
// name: CakeOrder.InGame.InGameBackgroundsControl.BackgroundConfigByWeather.<>c__DisplayClass9_0$$<HideEffects>b__0
// address: 0x4380a70
// body: available
// range: 0x4380a70-0x4380be3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4380bc8 to 0x7e15bb8 UnityEngine.AddressableAssets.Addressables$$ReleaseInstance (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4380be0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_InGameBackgroundsControl_BackgroundConfigByWeather_<>c__DisplayClass9_0__<HideEffects>b__0
               (long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  if ((DAT_0951796f & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180f88);
    FUN_03f5c2a4(&DAT_091977b8);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_0951796f = 1;
  }
  uVar1 = FUN_0640f598(param_1 + 0x10,DAT_091977b8);
  if ((uVar1 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = UnityEngine_Object__op_Inequality(uVar2,0,0);
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x28) != 0) {
        uVar2 = UnityEngine_Component__get_gameObject(*(long *)(param_1 + 0x28),0);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09188ad0);
        }
        uVar1 = UnityEngine_Object__op_Inequality(uVar2,0,0);
        if ((uVar1 & 1) == 0) {
          return;
        }
        if (*(long *)(param_1 + 0x28) != 0) {
          uVar2 = UnityEngine_Component__get_gameObject(*(long *)(param_1 + 0x28),0);
          if (*(int *)(DAT_09180f88 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09180f88);
          }
          UnityEngine_AddressableAssets_Addressables__ReleaseInstance(uVar2,0);
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  else {
    uStack_48 = *(undefined8 *)(param_1 + 0x18);
    local_50 = *(undefined8 *)(param_1 + 0x10);
    local_40 = *(undefined8 *)(param_1 + 0x20);
    if (*(int *)(DAT_09180f88 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uStack_68 = uStack_48;
    local_70 = local_50;
    local_60 = local_40;
    UnityEngine_AddressableAssets_Addressables__ReleaseInstance(&local_70,0);
  }
  return;
}

