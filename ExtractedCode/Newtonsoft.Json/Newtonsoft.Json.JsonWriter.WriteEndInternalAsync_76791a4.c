// rea decompile_all
// name: Newtonsoft.Json.JsonWriter$$WriteEndInternalAsync
// address: 0x76791a4
// body: available
// range: 0x76791a4-0x7679317 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7679314 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_JsonWriter__WriteEndInternalAsync(long *param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 local_40;
  undefined8 uStack_38;
  int local_30;
  undefined8 local_28;
  
  local_28 = param_2;
  if ((DAT_095224c1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091817a0);
    FUN_03f5c2a4(&DAT_09182348);
    DAT_095224c1 = 1;
  }
  iVar1 = (int)param_1[3];
  if (iVar1 == 3) {
    uVar4 = *(undefined8 *)(*param_1 + 0x220);
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x218);
  }
  else if (iVar1 == 2) {
    uVar4 = *(undefined8 *)(*param_1 + 0x210);
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x208);
  }
  else {
    if (iVar1 != 1) {
      if (*(int *)(DAT_09182348 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = System_Threading_CancellationToken__get_IsCancellationRequested(&local_28,0);
      uVar4 = local_28;
      if ((uVar2 & 1) != 0) {
        if (*(int *)(DAT_091817a0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        Newtonsoft_Json_Utilities_AsyncUtils__FromCanceled(uVar4,0);
        return;
      }
      local_40 = thunk_FUN_03fc39d4(&DAT_091872f8);
      uStack_38 = 0xffffffffffffffff;
      local_30 = iVar1;
      uVar4 = System_Enum__ToString(&local_40,0);
      uVar3 = thunk_FUN_03fc39d4(&DAT_09211f60);
      uVar4 = System_String__Concat(uVar3,uVar4,0);
      uVar4 = Newtonsoft_Json_JsonWriterException__Create(param_1,uVar4,0,0);
      uVar3 = thunk_FUN_03fc39d4(&DAT_091d1fb0);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar4,uVar3);
    }
    uVar4 = *(undefined8 *)(*param_1 + 0x230);
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x228);
  }
                    /* WARNING: Could not recover jumptable at 0x07679244. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,uVar4);
  return;
}

