// rea decompile_all
// name: FUN_0403bcf4
// address: 0x403bcf4
// body: available
// range: 0x403bcf4-0x403bfc3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x403bfb0 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x403bfb4 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x403bfb8 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x403bfbc to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x403bfc0 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0403bcf4(long param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  void *pvVar5;
  undefined8 uVar6;
  size_t __size;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  size_t sVar10;
  char *__src;
  
  if (*(int *)(param_2 + 4) == 0) {
    if (*(long *)(param_1 + 0x20) == 2) {
      if (**(short **)(param_1 + 0x18) == 0x3e3e) goto LAB_0403bf58;
      goto LAB_0403bd1c;
    }
    if ((*(long *)(param_1 + 0x20) != 1) || ((char)**(short **)(param_1 + 0x18) != '>'))
    goto LAB_0403bd1c;
LAB_0403bf58:
    lVar7 = param_2[1];
    pvVar5 = (void *)*param_2;
    *(undefined4 *)(param_2 + 4) = 1;
    uVar9 = lVar7 + 1;
    if ((ulong)param_2[2] < uVar9) {
      sVar10 = param_2[2] * 2;
      uVar9 = lVar7 + 0x3e1;
      if (sVar10 < uVar9 || sVar10 - uVar9 == 0) {
        sVar10 = uVar9;
      }
      param_2[2] = sVar10;
      pvVar5 = realloc(pvVar5,sVar10);
      *param_2 = pvVar5;
      if (pvVar5 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar7 = param_2[1];
      uVar9 = lVar7 + 1;
    }
    bVar3 = true;
    param_2[1] = uVar9;
    *(undefined1 *)((long)pvVar5 + lVar7) = 0x28;
  }
  else {
LAB_0403bd1c:
    bVar3 = false;
  }
  uVar2 = (uint)*(ushort *)(param_1 + 9) << 10;
  bVar4 = (uVar2 & 0xfc00) != 0x4400;
  iVar1 = 0xf;
  if (bVar4) {
    iVar1 = (int)((uint)*(ushort *)(param_1 + 9) << 0x1a) >> 0x1a;
  }
  FUN_0403bfcc(*(undefined8 *)(param_1 + 0x10),param_2,iVar1,bVar4);
  if ((*(long *)(param_1 + 0x20) == 1) && (__src = *(char **)(param_1 + 0x18), *__src == ',')) {
    sVar10 = 1;
    lVar7 = param_2[1];
    uVar8 = param_2[2];
    pvVar5 = (void *)*param_2;
    uVar9 = lVar7 + 1;
    if (uVar8 < uVar9) {
LAB_0403bdf4:
      __size = uVar8 * 2;
      uVar9 = uVar9 + 0x3e0;
      if (__size < uVar9 || __size - uVar9 == 0) {
        __size = uVar9;
      }
      param_2[2] = __size;
      pvVar5 = realloc(pvVar5,__size);
      *param_2 = pvVar5;
      if (pvVar5 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar7 = param_2[1];
    }
LAB_0403be18:
    memcpy((void *)((long)pvVar5 + lVar7),__src,sVar10);
    uVar9 = param_2[2];
    lVar7 = param_2[1] + sVar10;
    param_2[1] = lVar7;
    pvVar5 = (void *)*param_2;
    if (lVar7 + 1U <= uVar9) goto LAB_0403bea4;
  }
  else {
    lVar7 = param_2[1];
    pvVar5 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar7 + 1U) {
      sVar10 = param_2[2] * 2;
      uVar9 = lVar7 + 0x3e1;
      if (sVar10 < uVar9 || sVar10 - uVar9 == 0) {
        sVar10 = uVar9;
      }
      param_2[2] = sVar10;
      pvVar5 = realloc(pvVar5,sVar10);
      *param_2 = pvVar5;
      if (pvVar5 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar7 = param_2[1];
    }
    *(undefined1 *)((long)pvVar5 + lVar7) = 0x20;
    param_2[1] = param_2[1] + 1;
    sVar10 = *(size_t *)(param_1 + 0x20);
    if (sVar10 != 0) {
      __src = *(char **)(param_1 + 0x18);
      lVar7 = param_2[1];
      uVar8 = param_2[2];
      pvVar5 = (void *)*param_2;
      uVar9 = lVar7 + sVar10;
      if (uVar8 < uVar9) goto LAB_0403bdf4;
      goto LAB_0403be18;
    }
    lVar7 = param_2[1];
    uVar9 = param_2[2];
    pvVar5 = (void *)*param_2;
    if (lVar7 + 1U <= uVar9) goto LAB_0403bea4;
  }
  sVar10 = uVar9 * 2;
  uVar9 = lVar7 + 0x3e1;
  if (sVar10 < uVar9 || sVar10 - uVar9 == 0) {
    sVar10 = uVar9;
  }
  param_2[2] = sVar10;
  pvVar5 = realloc(pvVar5,sVar10);
  *param_2 = pvVar5;
  if (pvVar5 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar7 = param_2[1];
LAB_0403bea4:
  *(undefined1 *)((long)pvVar5 + lVar7) = 0x20;
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  param_2[1] = param_2[1] + 1;
  FUN_0403bfcc(uVar6,param_2,(int)((uint)*(ushort *)(param_1 + 9) << 0x1a) >> 0x1a,
               (uVar2 & 0xffff) == 0x4400);
  if (bVar3) {
    lVar7 = param_2[1];
    pvVar5 = (void *)*param_2;
    uVar9 = lVar7 + 1;
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + -1;
    if ((ulong)param_2[2] < uVar9) {
      sVar10 = param_2[2] * 2;
      uVar9 = lVar7 + 0x3e1;
      if (sVar10 < uVar9 || sVar10 - uVar9 == 0) {
        sVar10 = uVar9;
      }
      param_2[2] = sVar10;
      pvVar5 = realloc(pvVar5,sVar10);
      *param_2 = pvVar5;
      if (pvVar5 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar7 = param_2[1];
      uVar9 = lVar7 + 1;
    }
    param_2[1] = uVar9;
    *(undefined1 *)((long)pvVar5 + lVar7) = 0x29;
  }
  return;
}

