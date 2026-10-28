// rea decompile_all
// name: System.Buffers.ArrayPoolEventSource$$BufferAllocated
// address: 0x7561d50
// body: available
// range: 0x7561d50-0x7561e7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7561e7c to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Buffers_ArrayPoolEventSource__BufferAllocated
               (undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6)

{
  long lVar1;
  undefined8 local_b0;
  ulong uStack_a8;
  undefined8 local_a0;
  ulong uStack_98;
  undefined8 local_90;
  ulong local_88;
  undefined8 local_80;
  ulong uStack_78;
  undefined8 local_70;
  ulong local_68;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_5c = param_6;
  local_58 = param_5;
  uStack_54 = param_4;
  local_50 = param_3;
  uStack_4c = param_2;
  if ((DAT_095219bb & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c0e50);
    DAT_095219bb = 1;
  }
  uStack_98 = 0;
  local_a0 = 0;
  local_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  local_68 = 0;
  local_70 = 0;
  local_b0 = 0;
  uStack_a8 = 4;
  local_b0 = System_IntPtr__op_Explicit(&uStack_4c,0);
  uStack_a8 = uStack_a8 & 0xffffffff;
  uStack_98 = CONCAT44(uStack_98._4_4_,4);
  local_a0 = System_IntPtr__op_Explicit(&local_50,0);
  uStack_98 = uStack_98 & 0xffffffff;
  local_88 = CONCAT44(local_88._4_4_,4);
  local_90 = System_IntPtr__op_Explicit(&uStack_54,0);
  local_88 = local_88 & 0xffffffff;
  uStack_78 = CONCAT44(uStack_78._4_4_,4);
  local_80 = System_IntPtr__op_Explicit(&local_58,0);
  uStack_78 = uStack_78 & 0xffffffff;
  local_68 = CONCAT44(local_68._4_4_,4);
  local_70 = System_IntPtr__op_Explicit(&local_5c,0);
  local_68 = local_68 & 0xffffffff;
  System_Diagnostics_Tracing_EventSource__WriteEventCore(param_1,2,5,&local_b0,0);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

