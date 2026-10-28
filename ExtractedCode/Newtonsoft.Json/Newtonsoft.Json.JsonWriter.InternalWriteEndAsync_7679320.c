// rea decompile_all
// name: Newtonsoft.Json.JsonWriter$$InternalWriteEndAsync
// address: 0x7679320
// body: available
// range: 0x7679320-0x7679577 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
Newtonsoft_Json_JsonWriter__InternalWriteEndAsync
          (long *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined8 local_38;
  
  local_38 = param_3;
  if ((DAT_095224c2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091817a0);
    FUN_03f5c2a4(&DAT_09182348);
    DAT_095224c2 = 1;
  }
  if (*(int *)(DAT_09182348 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = System_Threading_CancellationToken__get_IsCancellationRequested(&local_38,0);
  uVar4 = local_38;
  if ((uVar3 & 1) == 0) {
    iVar1 = Newtonsoft_Json_JsonWriter__CalculateLevelsToComplete(param_1,param_2);
    if (0 < iVar1) {
      uVar5 = iVar1 + 1;
      do {
        uVar2 = Newtonsoft_Json_JsonWriter__Pop(param_1);
        uVar2 = Newtonsoft_Json_JsonWriter__GetCloseTokenForType(param_1,uVar2);
        if ((int)param_1[6] == 1) {
          uVar4 = (**(code **)(*param_1 + 0x238))
                            (param_1,local_38,*(undefined8 *)(*param_1 + 0x240));
          if (*(int *)(DAT_091817a0 + 0xe4) == 0) {
            FUN_03f5c424(DAT_091817a0);
          }
          uVar3 = Newtonsoft_Json_Utilities_AsyncUtils__IsCompletedSuccessfully(uVar4,0);
          if ((uVar3 & 1) == 0) {
            uVar4 = Newtonsoft_Json_JsonWriter__<InternalWriteEndAsync>g__AwaitProperty_11_0
                              (param_1,uVar4,uVar5 - 2,uVar2,local_38);
            return uVar4;
          }
        }
        if (((*(int *)((long)param_1 + 0x34) == 1) && ((int)param_1[6] != 2)) &&
           ((int)param_1[6] != 4)) {
          uVar4 = (**(code **)(*param_1 + 0x1b8))
                            (param_1,local_38,*(undefined8 *)(*param_1 + 0x1c0));
          if (*(int *)(DAT_091817a0 + 0xe4) == 0) {
            FUN_03f5c424(DAT_091817a0);
          }
          uVar3 = Newtonsoft_Json_Utilities_AsyncUtils__IsCompletedSuccessfully(uVar4,0);
          if ((uVar3 & 1) == 0) {
            uVar4 = Newtonsoft_Json_JsonWriter__<InternalWriteEndAsync>g__AwaitIndent_11_1
                              (param_1,uVar4,uVar5 - 2,uVar2,local_38);
            return uVar4;
          }
        }
        uVar4 = (**(code **)(*param_1 + 0x1a8))
                          (param_1,uVar2,local_38,*(undefined8 *)(*param_1 + 0x1b0));
        if (*(int *)(DAT_091817a0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_091817a0);
        }
        uVar3 = Newtonsoft_Json_Utilities_AsyncUtils__IsCompletedSuccessfully(uVar4,0);
        if ((uVar3 & 1) == 0) {
          uVar4 = Newtonsoft_Json_JsonWriter__<InternalWriteEndAsync>g__AwaitEnd_11_2
                            (param_1,uVar4,uVar5 - 2,local_38);
          return uVar4;
        }
        Newtonsoft_Json_JsonWriter__UpdateCurrentState(param_1);
        uVar5 = uVar5 - 1;
      } while (1 < uVar5);
    }
    if (*(int *)(DAT_091817a0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = *(undefined8 *)(*(long *)(DAT_091817a0 + 0xb8) + 0x10);
  }
  else {
    if (*(int *)(DAT_091817a0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = Newtonsoft_Json_Utilities_AsyncUtils__FromCanceled(uVar4,0);
  }
  return uVar4;
}

