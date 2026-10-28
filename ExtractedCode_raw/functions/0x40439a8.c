// rea decompile_all
// name: FUN_040439a8
// address: 0x40439a8
// body: available
// range: 0x40439a8-0x4043b87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4043b80 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4043b84 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_040439a8(long param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  long lVar3;
  size_t __size;
  long lVar4;
  ulong uVar5;
  size_t sVar6;
  ulong uVar7;
  char *pcVar8;
  
  lVar4 = param_2[1];
  pvVar2 = (void *)*param_2;
  if ((ulong)param_2[2] < lVar4 + 5U) {
    sVar6 = param_2[2] * 2;
    uVar5 = lVar4 + 0x3e5;
    if (sVar6 < uVar5 || sVar6 - uVar5 == 0) {
      sVar6 = uVar5;
    }
    param_2[2] = sVar6;
    pvVar2 = realloc(pvVar2,sVar6);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) goto LAB_04043b80;
    lVar4 = param_2[1];
  }
  *(undefined1 *)((undefined4 *)((long)pvVar2 + lVar4) + 1) = 0x3a;
  *(undefined4 *)((long)pvVar2 + lVar4) = 0x3a647473;
  lVar3 = param_2[1];
  iVar1 = *(int *)(param_1 + 0xc);
  lVar4 = lVar3 + 5;
  param_2[1] = lVar4;
  if (iVar1 < 3) {
    if (iVar1 == 0) {
      pcVar8 = "allocator";
      sVar6 = 9;
      uVar7 = param_2[2];
      uVar5 = lVar3 + 0xe;
      pvVar2 = (void *)*param_2;
      if (uVar5 <= uVar7) goto LAB_04043b30;
    }
    else {
      if (iVar1 != 1) {
        pcVar8 = "basic_string";
        sVar6 = 6;
        goto LAB_04043ad4;
      }
      pcVar8 = "basic_string";
      sVar6 = 0xc;
      uVar7 = param_2[2];
      uVar5 = lVar3 + 0x11;
      pvVar2 = (void *)*param_2;
      if (uVar5 <= uVar7) goto LAB_04043b30;
    }
  }
  else {
    if (iVar1 == 3) {
      pcVar8 = "basic_istream";
      sVar6 = 7;
    }
    else if (iVar1 == 4) {
      pcVar8 = "basic_ostream";
      sVar6 = 7;
    }
    else {
      pcVar8 = "basic_iostream";
      sVar6 = 8;
    }
LAB_04043ad4:
    if (*(int *)pcVar8 != 0x69736162 || (short)*(int *)((long)pcVar8 + 4) != 0x5f63) {
      FUN_0402f618("%s:%d: %s","out/llvm-project/libcxxabi/src/demangle/ItaniumDemangle.h",0x6aa,
                   &DAT_01a45042);
LAB_04043b80:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    pcVar8 = (char *)((long)pcVar8 + 6);
    uVar7 = param_2[2];
    uVar5 = lVar4 + sVar6;
    pvVar2 = (void *)*param_2;
    if (uVar5 <= uVar7) goto LAB_04043b30;
  }
  __size = uVar7 * 2;
  uVar5 = uVar5 + 0x3e0;
  if (__size < uVar5 || __size - uVar5 == 0) {
    __size = uVar5;
  }
  param_2[2] = __size;
  pvVar2 = realloc(pvVar2,__size);
  *param_2 = pvVar2;
  if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar4 = param_2[1];
LAB_04043b30:
  memcpy((void *)((long)pvVar2 + lVar4),pcVar8,sVar6);
  param_2[1] = param_2[1] + sVar6;
  return;
}

