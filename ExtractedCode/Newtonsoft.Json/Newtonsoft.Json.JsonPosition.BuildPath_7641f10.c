// rea decompile_all
// name: Newtonsoft.Json.JsonPosition$$BuildPath
// address: 0x7641f10
// body: available
// range: 0x7641f10-0x76421ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76421a8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_JsonPosition__BuildPath(long param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  int iVar5;
  undefined8 local_c8;
  undefined8 *puStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 *puStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_38;
  
  if ((DAT_095222d1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a3638);
    FUN_03f5c2a4(&DAT_091a3640);
    FUN_03f5c2a4(&DAT_091a3648);
    FUN_03f5c2a4(&DAT_09187398);
    FUN_03f5c2a4(&DAT_091ae030);
    FUN_03f5c2a4(&DAT_091ae040);
    FUN_03f5c2a4(&DAT_091ae048);
    FUN_03f5c2a4(&DAT_091b7018);
    FUN_03f5c2a4(&DAT_091b7020);
    FUN_03f5c2a4(&DAT_0918b348);
    DAT_095222d1 = 1;
  }
  local_38 = 0;
  local_50 = 0;
  local_48 = 0;
  local_60 = 0;
  puStack_58 = (undefined8 *)0x0;
  local_70 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  local_a0 = 0;
  if ((param_1 == 0) || (*(int *)(param_1 + 0x18) < 1)) {
    iVar5 = 0;
  }
  else {
    iVar5 = 0;
    iVar2 = 0;
    do {
      FUN_057aed3c(&local_c8,param_1,iVar2,DAT_091ae048);
      puStack_58 = puStack_c0;
      local_60 = local_c8;
      local_50 = local_b8;
      if (*(int *)(DAT_09187398 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      iVar1 = Newtonsoft_Json_JsonPosition__CalculateLength(&local_60);
      iVar2 = iVar2 + 1;
      iVar5 = iVar1 + iVar5;
    } while (iVar2 < *(int *)(param_1 + 0x18));
  }
  if (*param_2 != '\0') {
    puStack_58 = *(undefined8 **)(param_2 + 0x10);
    local_60 = *(undefined8 *)(param_2 + 8);
    local_50 = *(undefined8 *)(param_2 + 0x18);
    if (*(int *)(DAT_09187398 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    iVar2 = Newtonsoft_Json_JsonPosition__CalculateLength(&local_60);
    iVar5 = iVar2 + iVar5;
  }
  plVar3 = (long *)thunk_FUN_03f9944c(DAT_0918b348);
  System_Text_StringBuilder___ctor(plVar3,iVar5,0);
  local_38 = 0;
  local_48 = 0;
  if (param_1 != 0) {
    FUN_057aff08(&local_90,param_1,DAT_091ae030);
    local_c8 = 0;
    puStack_c0 = &local_90;
    while (uVar4 = FUN_071b2a44(&local_90,DAT_091a3640), (uVar4 & 1) != 0) {
      uStack_a8 = uStack_78;
      local_b0 = local_80;
      local_a0 = local_70;
      if (*(int *)(DAT_09187398 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      Newtonsoft_Json_JsonPosition__WriteTo(&local_b0,plVar3,&local_38,&local_48);
    }
    FUN_071b2a40(&local_90,DAT_091a3638);
  }
  if (*param_2 != '\0') {
    puStack_58 = *(undefined8 **)(param_2 + 0x10);
    local_60 = *(undefined8 *)(param_2 + 8);
    local_50 = *(undefined8 *)(param_2 + 0x18);
    if (*(int *)(DAT_09187398 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    Newtonsoft_Json_JsonPosition__WriteTo(&local_60,plVar3,&local_38,&local_48);
  }
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
  return;
}

