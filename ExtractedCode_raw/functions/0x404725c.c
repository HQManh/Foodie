// rea decompile_all
// name: FUN_0404725c
// address: 0x404725c
// body: available
// range: 0x404725c-0x4047477 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4047468 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x404746c to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4047470 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4047474 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0404725c(long param_1,undefined8 *param_2)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  size_t sVar6;
  long lVar7;
  bool bVar8;
  
  lVar5 = param_2[1];
  pvVar1 = (void *)*param_2;
  if ((ulong)param_2[2] < lVar5 + 5U) {
    sVar6 = param_2[2] * 2;
    uVar4 = lVar5 + 0x3e5;
    if (sVar6 < uVar4 || sVar6 - uVar4 == 0) {
      sVar6 = uVar4;
    }
    param_2[2] = sVar6;
    pvVar1 = realloc(pvVar1,sVar6);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar5 = param_2[1];
  }
  *(undefined1 *)((undefined4 *)((long)pvVar1 + lVar5) + 1) = 0x77;
  *(undefined4 *)((long)pvVar1 + lVar5) = 0x6f726874;
  lVar7 = param_2[1];
  pvVar1 = (void *)*param_2;
  uVar4 = lVar7 + 6;
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
  lVar5 = lVar7 + 5;
  param_2[1] = lVar5;
  if ((ulong)param_2[2] < uVar4) {
    sVar6 = param_2[2] * 2;
    uVar4 = lVar7 + 0x3e6;
    if (sVar6 < uVar4 || sVar6 - uVar4 == 0) {
      sVar6 = uVar4;
    }
    param_2[2] = sVar6;
    pvVar1 = realloc(pvVar1,sVar6);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar5 = param_2[1];
    uVar4 = lVar5 + 1;
  }
  param_2[1] = uVar4;
  *(undefined1 *)((long)pvVar1 + lVar5) = 0x28;
  lVar5 = param_2[1];
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar7 = 0;
    bVar8 = true;
    do {
      while( true ) {
        lVar2 = lVar5;
        if (!bVar8) {
          pvVar1 = (void *)*param_2;
          if ((ulong)param_2[2] < lVar5 + 2U) {
            sVar6 = param_2[2] * 2;
            uVar4 = lVar5 + 0x3e2;
            if (sVar6 < uVar4 || sVar6 - uVar4 == 0) {
              sVar6 = uVar4;
            }
            param_2[2] = sVar6;
            pvVar1 = realloc(pvVar1,sVar6);
            *param_2 = pvVar1;
            if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            lVar2 = param_2[1];
          }
          *(undefined2 *)((long)pvVar1 + lVar2) = 0x202c;
          lVar2 = param_2[1] + 2;
          param_2[1] = lVar2;
        }
        FUN_0403bfcc(*(undefined8 *)(*(long *)(param_1 + 0x10) + lVar7 * 8),param_2,0x12,0);
        lVar3 = param_2[1];
        if (lVar2 == lVar3) break;
        bVar8 = false;
        lVar7 = lVar7 + 1;
        lVar5 = lVar3;
        if (lVar7 == *(long *)(param_1 + 0x18)) goto LAB_040473f8;
      }
      param_2[1] = lVar5;
      lVar7 = lVar7 + 1;
    } while (lVar7 != *(long *)(param_1 + 0x18));
  }
LAB_040473f8:
  uVar4 = lVar5 + 1;
  pvVar1 = (void *)*param_2;
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + -1;
  if ((ulong)param_2[2] < uVar4) {
    sVar6 = param_2[2] * 2;
    uVar4 = lVar5 + 0x3e1;
    if (sVar6 < uVar4 || sVar6 - uVar4 == 0) {
      sVar6 = uVar4;
    }
    param_2[2] = sVar6;
    pvVar1 = realloc(pvVar1,sVar6);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar5 = param_2[1];
    uVar4 = lVar5 + 1;
  }
  param_2[1] = uVar4;
  *(undefined1 *)((long)pvVar1 + lVar5) = 0x29;
  return;
}

