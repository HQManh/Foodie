// rea decompile_all
// name: FUN_0403fd38
// address: 0x403fd38
// body: available
// range: 0x403fd38-0x403ff13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x403ff08 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x403ff0c to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x403ff10 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0403fd38(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  size_t sVar7;
  long lVar8;
  bool bVar9;
  
  lVar4 = param_2[1];
  pvVar3 = (void *)*param_2;
  uVar2 = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_2 + 4) = 0;
  if ((ulong)param_2[2] < lVar4 + 9U) {
    sVar7 = param_2[2] * 2;
    uVar1 = lVar4 + 0x3e9;
    if (sVar7 < uVar1 || sVar7 - uVar1 == 0) {
      sVar7 = uVar1;
    }
    param_2[2] = sVar7;
    pvVar3 = realloc(pvVar3,sVar7);
    *param_2 = pvVar3;
    if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar4 = param_2[1];
  }
  builtin_strncpy((char *)((long)pvVar3 + lVar4),"template<",9);
  lVar8 = *(long *)(param_1 + 0x20);
  lVar4 = param_2[1] + 9;
  param_2[1] = lVar4;
  if (lVar8 != 0) {
    lVar8 = 0;
    bVar9 = true;
    do {
      while( true ) {
        lVar5 = lVar4;
        if (!bVar9) {
          pvVar3 = (void *)*param_2;
          if ((ulong)param_2[2] < lVar4 + 2U) {
            sVar7 = param_2[2] * 2;
            uVar1 = lVar4 + 0x3e2;
            if (sVar7 < uVar1 || sVar7 - uVar1 == 0) {
              sVar7 = uVar1;
            }
            param_2[2] = sVar7;
            pvVar3 = realloc(pvVar3,sVar7);
            *param_2 = pvVar3;
            if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            lVar5 = param_2[1];
          }
          *(undefined2 *)((long)pvVar3 + lVar5) = 0x202c;
          lVar5 = param_2[1] + 2;
          param_2[1] = lVar5;
        }
        FUN_0403bfcc(*(undefined8 *)(*(long *)(param_1 + 0x18) + lVar8 * 8),param_2,0x12,0);
        lVar6 = param_2[1];
        if (lVar5 == lVar6) break;
        bVar9 = false;
        lVar8 = lVar8 + 1;
        lVar4 = lVar6;
        if (lVar8 == *(long *)(param_1 + 0x20)) goto LAB_0403fe84;
      }
      param_2[1] = lVar4;
      lVar8 = lVar8 + 1;
    } while (lVar8 != *(long *)(param_1 + 0x20));
  }
LAB_0403fe84:
  pvVar3 = (void *)*param_2;
  if ((ulong)param_2[2] < lVar4 + 0xbU) {
    sVar7 = param_2[2] * 2;
    uVar1 = lVar4 + 0x3eb;
    if (sVar7 < uVar1 || sVar7 - uVar1 == 0) {
      sVar7 = uVar1;
    }
    param_2[2] = sVar7;
    pvVar3 = realloc(pvVar3,sVar7);
    *param_2 = pvVar3;
    if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar4 = param_2[1];
  }
  builtin_strncpy((char *)((long)pvVar3 + lVar4),"> typename ",0xb);
  param_2[1] = param_2[1] + 0xb;
  *(undefined4 *)(param_2 + 4) = uVar2;
  return;
}

