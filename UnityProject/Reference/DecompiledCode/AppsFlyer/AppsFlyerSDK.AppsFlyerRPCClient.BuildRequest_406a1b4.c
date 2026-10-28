// rea decompile_all
// name: AppsFlyerSDK.AppsFlyerRPCClient$$BuildRequest
// address: 0x406a1b4
// body: available
// range: 0x406a1b4-0x406a39b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x406a398 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AppsFlyerSDK_AppsFlyerRPCClient__BuildRequest
               (long param_1,undefined8 param_2,long param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_68;
  
  if ((DAT_09515c1d & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919fb70);
    FUN_03f5c2a4(&DAT_0919fb58);
    FUN_03f5c2a4(&DAT_09176b80);
    FUN_03f5c2a4(&DAT_09221fc0);
    FUN_03f5c2a4(&DAT_091f9790);
    FUN_03f5c2a4(&DAT_091f8a38);
    FUN_03f5c2a4(&DAT_0921f5b0);
    FUN_03f5c2a4(&DAT_09220a40);
    FUN_03f5c2a4(&DAT_0921d180);
    DAT_09515c1d = 1;
  }
  local_68 = 0;
  local_68 = thunk_FUN_03f95744(param_1 + 0x10,0);
  uVar1 = System_Int64__ToString(&local_68,0);
  uVar1 = System_String__Concat(param_2,DAT_091f8a38,uVar1,0);
  *param_4 = uVar1;
  thunk_FUN_03f5d7b8(param_4,uVar1);
  lVar2 = thunk_FUN_03f9944c(DAT_09176b80);
  FUN_06fd76bc(lVar2,DAT_0919fb58);
  if (lVar2 != 0) {
    FUN_06fd8454(lVar2,DAT_0921d180,*param_4,DAT_0919fb70);
    FUN_06fd8454(lVar2,DAT_0921f5b0,param_2,DAT_0919fb70);
    uVar1 = DAT_09220a40;
    if (param_3 == 0) {
      param_3 = thunk_FUN_03f9944c(DAT_09176b80);
      FUN_06fd76bc(param_3,DAT_0919fb58);
    }
    FUN_06fd8454(lVar2,uVar1,param_3,DAT_0919fb70);
    FUN_06fd8454(lVar2,DAT_09221fc0,DAT_091f9790,DAT_0919fb70);
    AFMiniJSON_Json_Serializer__Serialize(lVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

