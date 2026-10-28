// rea decompile_all
// name: System.IO.MemoryStream$$WriteAsync
// address: 0x7569eac
// body: available
// range: 0x7569eac-0x756a08b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7569fb4 to 0x75c7dec System.ThrowHelper$$ThrowArgumentNullException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16]
System_IO_MemoryStream__WriteAsync
          (long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulong local_40;
  undefined2 uStack_38;
  undefined1 uStack_36;
  undefined5 uStack_35;
  
  local_58 = param_4;
  local_50 = param_2;
  uStack_48 = param_3;
  if ((DAT_095219ff & 1) == 0) {
    FUN_03f5c2a4(&DAT_091971c0);
    FUN_03f5c2a4(&DAT_091971c8);
    FUN_03f5c2a4(&DAT_091971d0);
    FUN_03f5c2a4(&DAT_09175040);
    FUN_03f5c2a4(&DAT_09182348);
    FUN_03f5c2a4(&DAT_091d3058);
    FUN_03f5c2a4(&DAT_091b9650);
    FUN_03f5c2a4(&DAT_0918b8c8);
    DAT_095219ff = 1;
  }
  local_68 = 0;
  local_60 = 0;
  if (*(int *)(DAT_09182348 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = System_Threading_CancellationToken__get_IsCancellationRequested(&local_58,0);
  uVar1 = local_58;
  if ((uVar2 & 1) == 0) {
    uVar2 = FUN_04c07544(param_2,param_3,&local_68,DAT_091d3058);
    if ((uVar2 & 1) == 0) {
      auVar3 = FUN_04a6d544(&local_50,DAT_091b9650);
      (**(code **)(*param_1 + 0x3a8))
                (param_1,auVar3._0_8_,auVar3._8_8_,*(undefined8 *)(*param_1 + 0x3b0));
    }
    else {
      if (*(int *)(DAT_09175040 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      (**(code **)(*param_1 + 0x398))
                (param_1,local_68,local_60 & 0xffffffff,local_60._4_4_,
                 *(undefined8 *)(*param_1 + 0x3a0));
    }
    uStack_36 = 0;
    uStack_35 = 0;
    local_40 = 0;
  }
  else {
    if (*(int *)(DAT_0918b8c8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = System_Threading_Tasks_Task__FromCanceled(uVar1,0);
    local_40 = 0;
    uStack_38 = 0;
    uStack_36 = 0;
    uStack_35 = 0;
    if (uVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      System_ThrowHelper__ThrowArgumentNullException(0x26,0);
    }
    local_40 = uVar2;
    thunk_FUN_03f5d7b8(&local_40,uVar2);
    uStack_36 = 1;
  }
  auVar3._8_2_ = 0;
  auVar3._0_8_ = local_40;
  auVar3[10] = uStack_36;
  auVar3._11_5_ = uStack_35;
  return auVar3;
}

