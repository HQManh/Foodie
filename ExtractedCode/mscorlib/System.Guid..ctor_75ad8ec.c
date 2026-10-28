// rea decompile_all
// name: System.Guid$$.ctor
// address: 0x75ad8ec
// body: available
// range: 0x75ad8ec-0x75ad9db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75ad9d8 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Guid___ctor(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  local_40 = 0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_68 = 0;
  local_70 = 0;
  if (param_2 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar3 = thunk_FUN_03f9944c();
    uVar1 = thunk_FUN_03fc39d4(&DAT_0921bc38);
    System_ArgumentNullException___ctor(uVar3,uVar1,0);
  }
  else {
    local_40 = 0;
    uStack_58 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    local_70 = 0;
    local_60 = 1;
    if (DAT_09519f66 == '\0') {
      FUN_03f5c2a4(&DAT_091b97b8);
      DAT_09519f66 = '\x01';
    }
    uVar1 = System_String__GetRawStringData(param_2,0);
    uVar2 = System_Guid__TryParseGuid(uVar1,*(undefined4 *)(param_2 + 0x10),0xf,&local_70);
    if ((uVar2 & 1) != 0) {
      param_1[1] = uStack_68;
      *param_1 = local_70;
      return;
    }
    uVar3 = System_Guid_GuidResult__GetGuidParseException(&local_70);
  }
  uVar1 = thunk_FUN_03fc39d4(&DAT_091ce480);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar3,uVar1);
}

