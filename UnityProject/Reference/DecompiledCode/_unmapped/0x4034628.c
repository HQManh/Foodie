// rea decompile_all
// name: FUN_04034628
// address: 0x4034628
// body: available
// range: 0x4034628-0x4034783 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4034780 to 0x89db8a0 std::terminate (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_04034628(long param_1,ulong param_2)

{
  void *__src;
  void *pvVar1;
  undefined8 *puVar2;
  long lVar3;
  size_t __n;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  
  lVar5 = *(long *)(param_1 + 0x10);
  pvVar1 = *(void **)(param_1 + 0x18);
  uVar6 = (long)pvVar1 - lVar5 >> 3;
  if (uVar6 < param_2) {
    FUN_0402f618("%s:%d: %s","out/llvm-project/libcxxabi/src/demangle/ItaniumDemangle.h",0xaa1,
                 &DAT_01a45042);
  }
  else {
    __src = (void *)(lVar5 + param_2 * 8);
    puVar4 = *(undefined8 **)(param_1 + 0x1330);
    __n = (long)pvVar1 - (long)__src;
    lVar3 = puVar4[1];
    uVar7 = (ulong)((int)__n + 0xf) & 0xfffffff0;
    puVar2 = puVar4;
    if (lVar3 + uVar7 < 0xff0) {
LAB_040346d4:
      puVar2[1] = lVar3 + uVar7;
      puVar2 = (undefined8 *)((long)puVar2 + lVar3 + 0x10);
    }
    else {
      if (uVar7 < 0xff1) {
        puVar2 = malloc(0x1000);
        if (puVar2 == (undefined8 *)0x0) goto LAB_04034780;
        lVar3 = 0;
        *puVar2 = puVar4;
        puVar2[1] = 0;
        *(undefined8 **)(param_1 + 0x1330) = puVar2;
        goto LAB_040346d4;
      }
      puVar2 = malloc(uVar7 + 0x10);
      if (puVar2 == (undefined8 *)0x0) goto LAB_04034780;
      *puVar2 = *puVar4;
      puVar2[1] = 0;
      *puVar4 = puVar2;
      puVar2 = puVar2 + 2;
    }
    if (pvVar1 != __src) {
      memmove(puVar2,__src,__n);
      lVar5 = *(long *)(param_1 + 0x10);
      uVar6 = *(long *)(param_1 + 0x18) - lVar5 >> 3;
    }
    if (param_2 <= uVar6) {
      auVar8._8_8_ = (long)__n >> 3;
      *(ulong *)(param_1 + 0x18) = lVar5 + param_2 * 8;
      auVar8._0_8_ = puVar2;
      return auVar8;
    }
  }
  FUN_0402f618("%s:%d: %s","out/llvm-project/libcxxabi/src/demangle/ItaniumDemangle.h",0x88,
               "shrinkToSize() can\'t expand!");
LAB_04034780:
                    /* WARNING: Subroutine does not return */
  std::terminate();
}

