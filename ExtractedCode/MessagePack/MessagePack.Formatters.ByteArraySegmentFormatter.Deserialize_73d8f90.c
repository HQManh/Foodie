// rea decompile_all
// name: MessagePack.Formatters.ByteArraySegmentFormatter$$Deserialize
// address: 0x73d8f90
// body: available
// range: 0x73d8f90-0x73d908f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73d908c to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void MessagePack_Formatters_ByteArraySegmentFormatter__Deserialize
               (undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  char local_a0 [9];
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined7 local_50;
  undefined1 uStack_49;
  undefined8 local_39;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if ((DAT_09520cff & 1) == 0) {
    FUN_03f5c2a4(&DAT_091971b0);
    FUN_03f5c2a4(&DAT_091c4278);
    FUN_03f5c2a4(&DAT_091b6928);
    FUN_03f5c2a4(&DAT_091b6930);
    DAT_09520cff = 1;
  }
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  MessagePack_MessagePackReader__ReadBytes(local_a0,param_2,0);
  local_50 = (undefined7)local_a0._1_8_;
  uStack_49 = SUB81(local_a0._1_8_,7);
  local_39 = uStack_88;
  if (local_a0[0] == '\0') {
    local_60 = 0;
    uStack_58 = 0;
  }
  else {
    uStack_78 = CONCAT71(uStack_8f,uStack_90);
    local_80 = CONCAT71(uStack_97,uStack_49);
    local_70 = uStack_88;
    uVar2 = FUN_04a58db0(&local_80,DAT_091c4278);
    local_60 = 0;
    uStack_58 = 0;
    FUN_050c5f34(&local_60,uVar2,DAT_091971b0);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_60,uStack_58);
}

