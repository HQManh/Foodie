// rea decompile_all
// name: FUN_03fcb51c
// address: 0x3fcb51c
// body: available
// range: 0x3fcb51c-0x3fcb677 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fcb61c to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x3fcb670 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x3fcb674 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fcb51c(char *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  int __fd;
  size_t sVar2;
  ssize_t sVar3;
  int iVar4;
  undefined1 auStack_4d0 [8];
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  undefined8 local_498;
  undefined1 *local_490;
  undefined1 **ppuStack_488;
  undefined1 *puStack_480;
  undefined8 uStack_478;
  char acStack_449 [1024];
  char local_49;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  ppuStack_488 = &local_490;
  puStack_480 = auStack_4d0;
  local_49 = '\x15';
  uStack_478 = 0xffffff80ffffffc8;
  local_4c8 = param_2;
  uStack_4c0 = param_3;
  local_4b8 = param_4;
  uStack_4b0 = param_5;
  local_4a8 = param_6;
  uStack_4a0 = param_7;
  local_498 = param_8;
  local_490 = (undefined1 *)register0x00000008;
  vsnprintf(acStack_449,0x400,param_1,&local_490);
  __fd = DAT_095158f0;
  if (local_49 == '\x15') {
    sVar2 = strlen(acStack_449);
    iVar4 = 0;
    do {
      if (sVar2 <= (ulong)(long)iVar4) {
        if (-1 < iVar4) {
          if (*(long *)(lVar1 + 0x28) == local_48) {
            return;
          }
          goto LAB_03fcb674;
        }
        break;
      }
      sVar3 = write(__fd,acStack_449 + iVar4,sVar2 - (long)iVar4);
      iVar4 = iVar4 + (int)sVar3;
    } while ((int)sVar3 != -1);
    (*(code *)PTR_FUN_09515620)("write to GC log failed");
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  else {
    (*(code *)PTR_FUN_09515620)("GC_printf clobbered stack");
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
LAB_03fcb674:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

