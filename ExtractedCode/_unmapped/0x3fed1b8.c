// rea decompile_all
// name: std::__ndk1::ios_base::copyfmt
// address: 0x3fed1b8
// body: available
// range: 0x3fed1b8-0x3fed45b inclusive
// range: 0x3fed464-0x3fed473 inclusive
// range: 0x3fed478-0x3fed487 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fed40c to 0x89dbdd0 <EXTERNAL>::free (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x3fed448 to 0x404c2dc FUN_0404c2dc (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x3fed484 to 0x404c2dc FUN_0404c2dc (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::ios_base::copyfmt(std::__ndk1::ios_base const&) */

void __thiscall std::__ndk1::ios_base::copyfmt(ios_base *this,ios_base *param_1)

{
  ulong uVar1;
  void *__ptr;
  void *__ptr_00;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  void *unaff_x19;
  void *pvVar6;
  void *unaff_x23;
  void *__ptr_01;
  undefined8 uVar7;
  
  pvVar6 = *(void **)(param_1 + 0x48);
  if (*(void **)(this + 0x50) < pvVar6) {
    __ptr = malloc((long)pvVar6 << 3);
    if (__ptr == (void *)0x0) {
      __throw_bad_alloc();
    }
    else {
      __ptr_00 = malloc((long)pvVar6 << 2);
      unaff_x19 = __ptr;
      if (__ptr_00 != (void *)0x0) {
        uVar2 = *(ulong *)(param_1 + 0x60);
        if (uVar2 <= *(ulong *)(this + 0x68)) goto LAB_03fed218;
        goto LAB_03fed238;
      }
    }
    __throw_bad_alloc();
LAB_03fed430:
    uVar3 = __throw_bad_alloc();
    if (unaff_x23 != (void *)0x0) {
      free(unaff_x23);
    }
    if (pvVar6 != (void *)0x0) {
      free(pvVar6);
    }
    if (unaff_x19 != (void *)0x0) {
      free(unaff_x19);
                    /* WARNING: Subroutine does not return */
      FUN_0404c2dc(uVar3);
    }
                    /* WARNING: Subroutine does not return */
    FUN_0404c2dc(uVar3);
  }
  __ptr_00 = (void *)0x0;
  __ptr = (void *)0x0;
  uVar2 = *(ulong *)(param_1 + 0x60);
  if (*(ulong *)(this + 0x68) < uVar2) {
LAB_03fed238:
    __ptr_01 = malloc(uVar2 << 3);
    unaff_x23 = (void *)0x0;
    unaff_x19 = __ptr;
    pvVar6 = __ptr_00;
    if (__ptr_01 == (void *)0x0) goto LAB_03fed430;
  }
  else {
LAB_03fed218:
    __ptr_01 = (void *)0x0;
  }
  if (*(ulong *)(this + 0x80) < *(ulong *)(param_1 + 0x78)) {
    pvVar6 = malloc(*(ulong *)(param_1 + 0x78) << 3);
    if (pvVar6 != (void *)0x0) goto LAB_03fed270;
    __throw_bad_alloc();
  }
  pvVar6 = (void *)0x0;
LAB_03fed270:
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined8 *)(this + 0x18) = uVar7;
  *(undefined8 *)(this + 0x10) = uVar3;
  locale::operator=((locale *)(this + 0x30),(locale *)(param_1 + 0x30));
  if (*(ulong *)(this + 0x50) < *(ulong *)(param_1 + 0x48)) {
    free(*(void **)(this + 0x38));
    *(void **)(this + 0x38) = __ptr;
    free(*(void **)(this + 0x40));
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    __ptr = (void *)0x0;
    *(void **)(this + 0x40) = __ptr_00;
    __ptr_00 = (void *)0x0;
    *(undefined8 *)(this + 0x50) = uVar3;
  }
  *(undefined8 *)(this + 0x48) = 0;
  if (*(long *)(param_1 + 0x48) != 0) {
    uVar2 = 0;
    do {
      lVar4 = uVar2 * 8;
      lVar5 = uVar2 * 4;
      uVar2 = uVar2 + 1;
      uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x38) + lVar4);
      *(ulong *)(this + 0x48) = uVar2;
      *(undefined8 *)(*(long *)(this + 0x38) + lVar4) = uVar3;
      uVar1 = *(ulong *)(param_1 + 0x48);
      *(undefined4 *)(*(long *)(this + 0x40) + lVar5) =
           *(undefined4 *)(*(long *)(param_1 + 0x40) + lVar5);
    } while (uVar2 < uVar1);
  }
  if (*(ulong *)(this + 0x68) < *(ulong *)(param_1 + 0x60)) {
    free(*(void **)(this + 0x58));
    uVar3 = *(undefined8 *)(param_1 + 0x60);
    *(void **)(this + 0x58) = __ptr_01;
    __ptr_01 = (void *)0x0;
    *(undefined8 *)(this + 0x68) = uVar3;
  }
  *(undefined8 *)(this + 0x60) = 0;
  if (*(long *)(param_1 + 0x60) != 0) {
    lVar4 = *(long *)(param_1 + 0x58);
    lVar5 = *(long *)(this + 0x58);
    uVar2 = 0;
    do {
      *(undefined8 *)(lVar5 + uVar2 * 8) = *(undefined8 *)(lVar4 + uVar2 * 8);
      uVar2 = *(long *)(this + 0x60) + 1;
      *(ulong *)(this + 0x60) = uVar2;
    } while (uVar2 < *(ulong *)(param_1 + 0x60));
  }
  if (*(ulong *)(this + 0x80) < *(ulong *)(param_1 + 0x78)) {
    free(*(void **)(this + 0x70));
    uVar3 = *(undefined8 *)(param_1 + 0x78);
    *(void **)(this + 0x70) = pvVar6;
    pvVar6 = (void *)0x0;
    *(undefined8 *)(this + 0x80) = uVar3;
  }
  *(undefined8 *)(this + 0x78) = 0;
  if (*(long *)(param_1 + 0x78) != 0) {
    uVar2 = 0;
    do {
      lVar4 = uVar2 * 8;
      uVar2 = uVar2 + 1;
      *(ulong *)(this + 0x78) = uVar2;
      uVar1 = *(ulong *)(param_1 + 0x78);
      *(undefined8 *)(*(long *)(this + 0x70) + lVar4) =
           *(undefined8 *)(*(long *)(param_1 + 0x70) + lVar4);
    } while (uVar2 < uVar1);
  }
  if (pvVar6 != (void *)0x0) {
    free(pvVar6);
  }
  if (__ptr_01 != (void *)0x0) {
    free(__ptr_01);
  }
  if (__ptr_00 != (void *)0x0) {
    free(__ptr_00);
  }
  if (__ptr == (void *)0x0) {
    return;
  }
  free(__ptr);
  return;
}

