// rea decompile_all
// name: MessagePack.Formatters.GuidFormatter$$Deserialize
// address: 0x73e7154
// body: available
// range: 0x73e7154-0x73e73e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73e73dc to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73e73e0 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void MessagePack_Formatters_GuidFormatter__Deserialize(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  char local_c0 [9];
  undefined7 uStack_b7;
  undefined1 uStack_b0;
  undefined7 uStack_af;
  undefined8 uStack_a8;
  undefined1 local_a0 [16];
  undefined8 local_90;
  undefined8 uStack_88;
  long local_80;
  long lStack_78;
  undefined8 local_70;
  undefined7 local_60;
  undefined1 uStack_59;
  undefined8 local_49;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((DAT_09520dc1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c4268);
    FUN_03f5c2a4(&DAT_091b6928);
    FUN_03f5c2a4(&DAT_091b6930);
    FUN_03f5c2a4(&DAT_091b9650);
    FUN_03f5c2a4(&DAT_091b9710);
    FUN_03f5c2a4(&DAT_091b9718);
    FUN_03f5c2a4(&DAT_091b9720);
    FUN_03f5c2a4(&DAT_0917e560);
    FUN_03f5c2a4(&DAT_091ba8e8);
    FUN_03f5c2a4(&DAT_091ba930);
    DAT_09520dc1 = 1;
  }
  local_80 = 0;
  lStack_78 = 0;
  local_70 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_a0._0_8_ = 0;
  local_a0._8_8_ = 0;
  MessagePack_MessagePackReader__ReadStringSequence(local_c0,param_2,0);
  local_60 = (undefined7)local_c0._1_8_;
  uStack_59 = SUB81(local_c0._1_8_,7);
  local_49 = uStack_a8;
  if (local_c0[0] == '\0') {
    thunk_FUN_03fc39d4(&DAT_091d35b0);
    uVar3 = thunk_FUN_04c106dc();
  }
  else {
    lStack_78 = CONCAT71(uStack_af,uStack_b0);
    local_80 = CONCAT71(uStack_b7,uStack_59);
    local_70 = uStack_a8;
    if (*(int *)(DAT_0917e560 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar2 = FUN_05fdc318(&local_80,DAT_091b9720);
    if (lVar2 == 0x24) {
      if (*(int *)(DAT_0917e560 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (local_80 == lStack_78) {
        if (*(int *)(DAT_0917e560 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        local_a0 = FUN_05fdc42c(&local_80,DAT_091b9710);
        auVar5 = FUN_04a6d544(local_a0,DAT_091b9650);
      }
      else {
        local_d0 = 0;
        uStack_e8 = 0;
        local_f0 = 0;
        uStack_d8 = 0;
        uStack_e0 = 0;
        FUN_04a6dbe8(&local_80,&local_f0,0x24,DAT_091c4268);
        auVar5 = FUN_06108530(&local_f0,0x24,DAT_091ba930);
      }
      MessagePack_Internal_GuidBits___ctor(&local_90,auVar5._0_8_,auVar5._8_8_,0);
      auVar5._8_8_ = uStack_88;
      auVar5._0_8_ = local_90;
      if (*(long *)(lVar1 + 0x28) == local_38) {
        return;
      }
      goto LAB_073e73e0;
    }
    thunk_FUN_03fc39d4(&DAT_09188180);
    uVar3 = thunk_FUN_03f9944c();
    uVar4 = thunk_FUN_03fc39d4(&DAT_09211da8);
    MessagePack_MessagePackSerializationException___ctor(uVar3,uVar4,0);
  }
  auVar5 = thunk_FUN_03fc39d4(&DAT_091ce4d8);
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar3,auVar5._0_8_);
  }
LAB_073e73e0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(auVar5._0_8_,auVar5._8_8_);
}

