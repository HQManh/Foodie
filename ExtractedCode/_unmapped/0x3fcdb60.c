// rea decompile_all
// name: FUN_03fcdb60
// address: 0x3fcdb60
// body: available
// range: 0x3fcdb60-0x3fcdc4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fcdc28 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fcdb60(long param_1,long param_2,long param_3,long param_4)

{
  ulong uVar1;
  void *pvVar2;
  void *__addr;
  size_t __len;
  int iVar3;
  undefined4 *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar1 = param_1 + param_2;
  uVar6 = (DAT_09748110 + param_1) - 1;
  uVar5 = -DAT_09748110;
  pvVar2 = (void *)(uVar6 & uVar5);
  uVar7 = (long)pvVar2 + DAT_09748110;
  __addr = (void *)0x0;
  if (uVar7 <= uVar1 + param_4) {
    __addr = pvVar2;
  }
  if ((uVar6 & uVar5) != 0 && uVar7 <= uVar1) {
    __addr = (void *)(uVar5 & uVar1);
  }
  if (__addr != (void *)0x0) {
    uVar7 = (param_3 + DAT_09748110) - 1U & uVar5;
    uVar1 = uVar5 & uVar1 + param_4;
    if (uVar7 + DAT_09748110 <= (ulong)(param_3 + param_4) && uVar7 != 0) {
      uVar1 = uVar7;
    }
    __len = uVar1 - (long)__addr;
    if (__len != 0) {
      iVar3 = madvise(__addr,__len,4);
      if (iVar3 == -1) {
        if (DAT_09535be0 != 0) {
          puVar4 = (undefined4 *)__errno();
          FUN_03fcb51c("unmap_gap: madvise failed at %p (length %lu), errcode= %d\n",__addr,__len,
                       *puVar4);
        }
        (*(code *)PTR_FUN_09515620)("unmap_gap: madvise failed");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      DAT_09535c88 = DAT_09535c88 + __len;
    }
  }
  return;
}

