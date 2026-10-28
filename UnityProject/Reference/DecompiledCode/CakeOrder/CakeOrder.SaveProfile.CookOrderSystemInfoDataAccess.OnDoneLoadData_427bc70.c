// rea decompile_all
// name: CakeOrder.SaveProfile.CookOrderSystemInfoDataAccess$$OnDoneLoadData
// address: 0x427bc70
// body: available
// range: 0x427bc70-0x427bf5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_SaveProfile_CookOrderSystemInfoDataAccess__OnDoneLoadData(undefined8 param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 local_58;
  undefined8 local_48;
  
  if ((DAT_095170a9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091814b0);
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_09188c20);
    FUN_03f5c2a4(&DAT_09219b60);
    FUN_03f5c2a4(&DAT_09210d38);
    FUN_03f5c2a4(&DAT_09210d28);
    FUN_03f5c2a4(&DAT_0921b740);
    FUN_03f5c2a4(&DAT_09219b68);
    FUN_03f5c2a4(&DAT_09210d30);
    FUN_03f5c2a4(&DAT_09225458);
    FUN_03f5c2a4(&DAT_0921e210);
    DAT_095170a9 = 1;
  }
  local_48 = 0;
  local_58 = 0;
  uVar2 = CakeOrder_SaveProfile_CookOrderSystemInfoDataAccess__HaveKey(param_1,DAT_0921b740);
  if ((uVar2 & 1) == 0) {
    if (*(int *)(DAT_09188c20 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = EssentialSystemR1_OnlineTimeCheck__get_Now(0);
    CakeOrder_SaveProfile_CookOrderSystemInfoDataAccess__SetDateTime(param_1,DAT_0921b740,uVar3);
    CakeOrder_SaveProfile_CookOrderSystemInfoDataAccess__SetInt(param_1,DAT_09219b68,1);
    CakeOrder_SaveProfile_CookOrderSystemInfoDataAccess__SetInt(param_1,DAT_09219b60,1);
    uVar3 = EssentialSystemR1_OnlineTimeCheck__get_Now(0);
    CakeOrder_SaveProfile_CookOrderSystemInfoDataAccess__SetDateTime(param_1,DAT_0921e210,uVar3);
    if (*(int *)(DAT_091814b0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = UnityEngine_Application__get_version(0);
    CakeOrder_SaveProfile_CookOrderSystemInfoDataAccess__SetString(param_1,DAT_09225458,uVar3);
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    UnityEngine_Debug__Log(DAT_09210d28,0);
  }
  else {
    if (*(int *)(DAT_09188c20 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = EssentialSystemR1_OnlineTimeCheck__get_Now(0);
    local_48 = CakeOrder_SaveProfile_CookOrderSystemInfoDataAccess__GetDateTime
                         (param_1,DAT_0921e210,uVar3);
    CakeOrder_SaveProfile_CookOrderSystemInfoDataAccess__ChangeInt(param_1,DAT_09219b60,1);
    if (*(int *)(DAT_09183548 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = System_DateTime__get_Date(&local_48,0);
    local_58 = EssentialSystemR1_OnlineTimeCheck__get_Now(0);
    uVar4 = System_DateTime__get_Date(&local_58,0);
    uVar2 = System_DateTime__op_Inequality(uVar3,uVar4,0);
    if ((uVar2 & 1) == 0) {
      iVar1 = *(int *)(DAT_091835d0 + 0xe4);
      puVar5 = &DAT_09210d38;
    }
    else {
      CakeOrder_SaveProfile_CookOrderSystemInfoDataAccess__ChangeInt(param_1,DAT_09219b68,1);
      iVar1 = *(int *)(DAT_091835d0 + 0xe4);
      puVar5 = &DAT_09210d30;
    }
    if (iVar1 == 0) {
      FUN_03f5c424();
    }
    UnityEngine_Debug__Log(*puVar5,0);
    if (*(int *)(DAT_09188c20 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = EssentialSystemR1_OnlineTimeCheck__get_Now(0);
    CakeOrder_SaveProfile_CookOrderSystemInfoDataAccess__SetDateTime(param_1,DAT_0921e210,uVar3);
  }
  CakeOrder_SaveProfile_CookOrderSystemInfoDataAccess__SaveData(param_1);
  return;
}

