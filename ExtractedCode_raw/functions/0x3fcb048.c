// rea decompile_all
// name: FUN_03fcb048
// address: 0x3fcb048
// body: available
// range: 0x3fcb048-0x3fcb12b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fcb124 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x3fcb128 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fcb048(char *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined1 auStack_4b0 [8];
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  undefined8 local_498;
  undefined8 uStack_490;
  undefined8 local_488;
  undefined8 uStack_480;
  undefined8 local_478;
  undefined1 *local_470;
  undefined1 **ppuStack_468;
  undefined1 *puStack_460;
  undefined8 uStack_458;
  char acStack_429 [1024];
  char local_29;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  ppuStack_468 = &local_470;
  puStack_460 = auStack_4b0;
  local_29 = '\x15';
  uStack_458 = 0xffffff80ffffffc8;
  local_4a8 = param_2;
  uStack_4a0 = param_3;
  local_498 = param_4;
  uStack_490 = param_5;
  local_488 = param_6;
  uStack_480 = param_7;
  local_478 = param_8;
  local_470 = (undefined1 *)register0x00000008;
  vsnprintf(acStack_429,0x400,param_1,&local_470);
  if (local_29 == '\x15') {
    FUN_03fd66a4(acStack_429);
    if (*(long *)(lVar1 + 0x28) == local_28) {
      return;
    }
  }
  else {
    (*(code *)PTR_FUN_09515620)("GC_printf clobbered stack");
    if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

