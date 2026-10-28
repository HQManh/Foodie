// rea decompile_all
// name: System.IO.UnmanagedMemoryStream$$ReadAsync
// address: 0x7576678
// body: available
// range: 0x7576678-0x75768c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75767b8 to 0x75c7dec System.ThrowHelper$$ThrowArgumentNullException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16]
System_IO_UnmanagedMemoryStream__ReadAsync
          (long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  long local_a0;
  undefined8 uStack_98;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  undefined4 uStack_38;
  undefined2 uStack_34;
  undefined1 uStack_32;
  undefined1 uStack_31;
  
  local_58 = param_4;
  local_50 = param_2;
  uStack_48 = param_3;
  if ((DAT_09521a76 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091971c0);
    FUN_03f5c2a4(&DAT_091971c8);
    FUN_03f5c2a4(&DAT_091971d0);
    FUN_03f5c2a4(&DAT_09175040);
    FUN_03f5c2a4(&DAT_09182348);
    FUN_03f5c2a4(&DAT_091d3058);
    FUN_03f5c2a4(&DAT_091b4740);
    FUN_03f5c2a4(&DAT_091b4750);
    FUN_03f5c2a4(&DAT_091dad80);
    FUN_03f5c2a4(&DAT_0918b8c8);
    FUN_03f5c2a4(&DAT_091beb60);
    FUN_03f5c2a4(&DAT_091beb68);
    DAT_09521a76 = 1;
  }
  local_68 = 0;
  local_60 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  if (*(int *)(DAT_09182348 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = System_Threading_CancellationToken__get_IsCancellationRequested(&local_58,0);
  uVar1 = local_58;
  if ((uVar3 & 1) == 0) {
    auVar5 = FUN_05a49a78(param_2,param_3,DAT_091b4750);
    uVar3 = FUN_04c07544(auVar5._0_8_,auVar5._8_8_,&local_68,DAT_091d3058);
    if ((uVar3 & 1) == 0) {
      auVar5 = FUN_05a50b4c(&local_50,DAT_091b4740);
      uVar2 = (**(code **)(*param_1 + 0x378))
                        (param_1,auVar5._0_8_,auVar5._8_8_,*(undefined8 *)(*param_1 + 0x380));
    }
    else {
      if (*(int *)(DAT_09175040 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = (**(code **)(*param_1 + 0x368))
                        (param_1,local_68,local_60 & 0xffffffff,local_60._4_4_,
                         *(undefined8 *)(*param_1 + 0x370));
    }
    local_a0 = 0;
    uStack_98 = (ulong)uVar2;
    thunk_FUN_03f5d7b8(&local_a0,0);
    uStack_38 = (undefined4)uStack_98;
    uStack_31 = uStack_98._7_1_;
    local_40 = local_a0;
  }
  else {
    if (*(int *)(DAT_0918b8c8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar4 = FUN_04d7635c(uVar1,DAT_091dad80);
    local_40 = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    uStack_32 = 0;
    uStack_31 = 0;
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      System_ThrowHelper__ThrowArgumentNullException(0x26,0);
    }
    local_40 = lVar4;
    thunk_FUN_03f5d7b8(&local_40,lVar4);
    uStack_38 = 0;
  }
  auVar5._8_4_ = uStack_38;
  auVar5._0_8_ = local_40;
  auVar5._12_2_ = 0;
  auVar5[0xe] = 1;
  auVar5[0xf] = uStack_31;
  return auVar5;
}

