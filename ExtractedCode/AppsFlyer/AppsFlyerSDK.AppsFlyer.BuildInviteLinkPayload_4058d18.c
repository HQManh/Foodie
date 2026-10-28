// rea decompile_all
// name: AppsFlyerSDK.AppsFlyer$$BuildInviteLinkPayload
// address: 0x4058d18
// body: available
// range: 0x4058d18-0x4058ebf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4058ebc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long AppsFlyerSDK_AppsFlyer__BuildInviteLinkPayload(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  if ((DAT_09515b7c & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919fed0);
    FUN_03f5c2a4(&DAT_0919fb58);
    FUN_03f5c2a4(&DAT_0919fbc8);
    FUN_03f5c2a4(&DAT_09176b80);
    FUN_03f5c2a4(&DAT_091a6888);
    FUN_03f5c2a4(&DAT_091a6890);
    FUN_03f5c2a4(&DAT_091a6898);
    FUN_03f5c2a4(&DAT_091a98e8);
    FUN_03f5c2a4(&DAT_091a98f0);
    FUN_03f5c2a4(&DAT_09221700);
    FUN_03f5c2a4(&DAT_0921a048);
    DAT_09515b7c = 1;
  }
  local_60 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  local_70 = 0;
  lVar4 = thunk_FUN_03f9944c(DAT_09176b80);
  FUN_06fd76bc(lVar4,DAT_0919fb58);
  if (param_1 != 0) {
    FUN_06fd8888(&local_80,param_1,DAT_0919fed0);
    while (uVar5 = FUN_072753d4(&local_80,DAT_091a6890), uVar3 = uStack_68, uVar2 = local_70,
          (uVar5 & 1) != 0) {
      uVar5 = System_String__op_Equality(local_70,DAT_09221700,0);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar1 = DAT_0921a048;
      if ((uVar5 & 1) == 0) {
        uVar1 = uVar2;
      }
      FUN_06fd8440(lVar4,uVar1,uVar3,DAT_0919fbc8);
    }
    FUN_072754f4(&local_80,DAT_091a6888);
  }
  return lVar4;
}

