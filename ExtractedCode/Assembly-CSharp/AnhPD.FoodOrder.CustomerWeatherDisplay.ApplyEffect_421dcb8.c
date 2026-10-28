// rea decompile_all
// name: AnhPD.FoodOrder.CustomerWeatherDisplay$$ApplyEffect
// address: 0x421dcb8
// body: available
// range: 0x421dcb8-0x421df07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x421ddf4 to 0x865b360 UnityEngine.GameObject$$SetActive (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x421defc to 0x421df08 AnhPD.FoodOrder.CustomerWeatherDisplay$$StopEffect (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x421df00 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x421df04 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_CustomerWeatherDisplay__ApplyEffect(long param_1,uint param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined4 local_48;
  uint local_44;
  
  if ((DAT_09516d05 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918cf58);
    FUN_03f5c2a4(&DAT_09214500);
    FUN_03f5c2a4(&DAT_092264c0);
    DAT_09516d05 = 1;
  }
  if (param_2 == 0) {
    AnhPD_FoodOrder_CustomerWeatherDisplay__StopEffect(param_1);
    return;
  }
  lVar4 = *(long *)(param_1 + 0x20);
  if ((lVar4 == 0) || ((int)*(uint *)(lVar4 + 0x18) <= (int)param_2)) {
LAB_0421ddf8:
    uVar5 = UnityEngine_Object__GetName(param_1,0);
    local_44 = param_2;
    uVar2 = FUN_03f5c42c(DAT_0918cf58,&local_44);
    uVar2 = System_String__Format(DAT_09214500,uVar5,uVar2,0);
    uVar5 = DAT_092264c0;
    local_48 = 0;
    if (*(long *)(param_1 + 0x20) != 0) {
      local_48 = *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x18);
    }
    uVar3 = FUN_03f5c42c(DAT_09535420,&local_48);
    uVar5 = System_String__Format(uVar5,uVar3,0);
    uVar5 = System_String__Concat(uVar2,uVar5,0);
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_091835d0);
    }
    UnityEngine_Debug__LogWarning(uVar5,param_1,0);
    AnhPD_FoodOrder_CustomerWeatherDisplay__StopEffect(param_1);
    return;
  }
  if (*(uint *)(lVar4 + 0x18) <= param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
  lVar4 = *(long *)(lVar4 + (long)(int)param_2 * 8 + 0x20);
  if (lVar4 == 0) goto LAB_0421ddf8;
  uVar5 = *(undefined8 *)(lVar4 + 0x10);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar5,0);
  if ((uVar1 & 1) != 0) {
    plVar6 = (long *)(param_1 + 0x28);
    *plVar6 = *(long *)(lVar4 + 0x10);
    thunk_FUN_03f5d7b8(plVar6);
    if (*plVar6 == 0) goto LAB_0421df04;
    UnityEngine_ParticleSystem__Play(*plVar6,0);
  }
  uVar5 = *(undefined8 *)(lVar4 + 0x18);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar5,0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  plVar6 = (long *)(param_1 + 0x30);
  *plVar6 = *(long *)(lVar4 + 0x18);
  thunk_FUN_03f5d7b8(plVar6);
  if (*plVar6 != 0) {
    UnityEngine_GameObject__SetActive(*plVar6,1,0);
    return;
  }
LAB_0421df04:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

