// rea decompile_all
// name: IapAdsSystem.OfflineNotification$$Schedule
// address: 0x7323bc4
// body: available
// range: 0x7323bc4-0x7323db7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7323db4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void IapAdsSystem_OfflineNotification__Schedule
               (undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  local_84 = param_2;
  if ((DAT_095205bf & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c0270);
    FUN_03f5c2a4(&DAT_09188ba0);
    FUN_03f5c2a4(&DAT_0918b890);
    FUN_03f5c2a4(&DAT_09209040);
    FUN_03f5c2a4(&DAT_0921ffe0);
    DAT_095205bf = 1;
  }
  plVar1 = (long *)UnityEngine_Localization_Settings_LocalizationSettings__get_StringDatabase(0);
  if (*(int *)(DAT_0918b890 + 0xe4) == 0) {
    FUN_03f5c424(DAT_0918b890);
  }
  UnityEngine_Localization_Tables_TableReference__op_Implicit(&local_a8,DAT_09209040,0);
  if (*(int *)(DAT_09188ba0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = IapAdsSystem_OfflineNotification__GetKeyNoti(param_2);
  UnityEngine_Localization_Tables_TableEntryReference__op_Implicit(&local_c0,uVar2,0);
  lVar3 = DAT_091c0270;
  lVar5 = *(long *)(DAT_091c0270 + 0x38);
  if (lVar5 == 0) {
    FUN_03f95ac8(DAT_091c0270);
    lVar5 = *(long *)(lVar3 + 0x38);
  }
  lVar5 = *(long *)(lVar5 + 0x10);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03f95a6c();
  }
  if (*(int *)(lVar5 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03f95a6c();
  }
  if (plVar1 != (long *)0x0) {
    uStack_58 = uStack_a0;
    local_60 = local_a8;
    uStack_48 = uStack_90;
    uStack_50 = local_98;
    uStack_78 = uStack_b8;
    local_80 = local_c0;
    local_70 = local_b0;
    uVar2 = (**(code **)(*plVar1 + 0x278))
                      (plVar1,&local_60,&local_80,0,0,**(undefined8 **)(lVar3 + 0xb8),
                       *(undefined8 *)(*plVar1 + 0x280));
    uVar4 = System_Int32__ToString(&local_84,0);
    uVar4 = System_String__Concat(DAT_0921ffe0,uVar4,0);
    uVar2 = IapAdsSystem_OfflineNotification__Decorate(local_84,uVar2);
    IapAdsSystem_OfflineNotification__Send(param_1,uVar4,uVar2,param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

