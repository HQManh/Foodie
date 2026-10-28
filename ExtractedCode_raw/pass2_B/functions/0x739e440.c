// rea decompile_all
// name: MessagePack.MessagePackStreamReader.<ReadArrayAsync>d__1$$System.IAsyncDisposable.DisposeAsync
// address: 0x739e440
// body: available
// range: 0x739e440-0x739e557 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x739e554 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16]
MessagePack_MessagePackStreamReader_<ReadArrayAsync>d__1__System_IAsyncDisposable_DisposeAsync
          (long param_1)

{
  undefined2 uVar1;
  undefined1 auVar2 [16];
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long local_38;
  long local_30;
  undefined2 local_28;
  undefined1 local_26;
  undefined5 uStack_25;
  
  if ((DAT_09520b3e & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c1118);
    FUN_03f5c2a4(&DAT_091b46a0);
    FUN_03f5c2a4(&DAT_091b46b8);
    DAT_09520b3e = 1;
  }
  local_38 = 0;
  if (*(int *)(param_1 + 0x10) < -1) {
    if (*(int *)(param_1 + 0x10) == -2) {
      local_30 = 0;
      local_28 = 0;
      local_26 = 0;
      uStack_25 = 0;
    }
    else {
      *(undefined1 *)(param_1 + 0x80) = 1;
      FUN_05a22020(param_1 + 0x30,DAT_091b46a0);
      lVar3 = DAT_091c1118;
      lVar6 = *(long *)(DAT_091c1118 + 0x38);
      local_38 = param_1;
      if (lVar6 == 0) {
        FUN_03f95ac8(DAT_091c1118);
        lVar6 = *(long *)(lVar3 + 0x38);
      }
      FUN_0498b30c(&local_38,*(undefined8 *)(lVar6 + 8));
      uVar1 = *(undefined2 *)(param_1 + 0x60);
      local_28 = 0;
      local_26 = 0;
      uStack_25 = 0;
      local_30 = param_1;
      thunk_FUN_03f5d7b8(&local_30,param_1);
      local_26 = 1;
      local_28 = uVar1;
    }
    auVar2._8_2_ = local_28;
    auVar2._0_8_ = local_30;
    auVar2[10] = local_26;
    auVar2._11_5_ = uStack_25;
    return auVar2;
  }
  thunk_FUN_03fc39d4(&DAT_09188920);
  uVar4 = thunk_FUN_03f9944c();
  System_NotSupportedException___ctor(uVar4,0);
  uVar5 = thunk_FUN_03fc39d4(&DAT_091ecf50);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar4,uVar5);
}

