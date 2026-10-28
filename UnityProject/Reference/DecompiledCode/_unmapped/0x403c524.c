// rea decompile_all
// name: FUN_0403c524
// address: 0x403c524
// body: available
// range: 0x403c524-0x403ca03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x403c9dc to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x403c9e0 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x403c9e4 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x403c9e8 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x403c9ec to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x403c9f0 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x403c9f4 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x403c9f8 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x403c9fc to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x403ca00 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not or
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void FUN_0403c524(long param_1,undefined8 *param_2)

{
  char cVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  size_t sVar7;
  long lVar8;
  long *plVar9;
  bool bVar10;
  
  lVar3 = param_2[1];
  if (*(char *)(param_1 + 0x38) != '\0') {
    pvVar2 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar3 + 2U) {
      sVar7 = param_2[2] * 2;
      uVar6 = lVar3 + 0x3e2;
      if (sVar7 < uVar6 || sVar7 - uVar6 == 0) {
        sVar7 = uVar6;
      }
      param_2[2] = sVar7;
      pvVar2 = realloc(pvVar2,sVar7);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar3 = param_2[1];
    }
    *(undefined2 *)((long)pvVar2 + lVar3) = 0x3a3a;
    lVar3 = param_2[1] + 2;
    param_2[1] = lVar3;
  }
  pvVar2 = (void *)*param_2;
  if ((ulong)param_2[2] < lVar3 + 3U) {
    sVar7 = param_2[2] * 2;
    uVar6 = lVar3 + 0x3e3;
    if (sVar7 < uVar6 || sVar7 - uVar6 == 0) {
      sVar7 = uVar6;
    }
    param_2[2] = sVar7;
    pvVar2 = realloc(pvVar2,sVar7);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar3 = param_2[1];
  }
  *(undefined1 *)((undefined2 *)((long)pvVar2 + lVar3) + 1) = 0x77;
  *(undefined2 *)((long)pvVar2 + lVar3) = 0x656e;
  lVar8 = param_2[1];
  cVar1 = *(char *)(param_1 + 0x39);
  lVar3 = lVar8 + 3;
  param_2[1] = lVar3;
  if (cVar1 != '\0') {
    pvVar2 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar8 + 5U) {
      sVar7 = param_2[2] * 2;
      uVar6 = lVar8 + 0x3e5;
      if (sVar7 < uVar6 || sVar7 - uVar6 == 0) {
        sVar7 = uVar6;
      }
      param_2[2] = sVar7;
      pvVar2 = realloc(pvVar2,sVar7);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar3 = param_2[1];
    }
    *(undefined2 *)((long)pvVar2 + lVar3) = 0x5d5b;
    lVar3 = param_2[1] + 2;
    param_2[1] = lVar3;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar6 = lVar3 + 1;
    pvVar2 = (void *)*param_2;
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
    if ((ulong)param_2[2] < uVar6) {
      sVar7 = param_2[2] * 2;
      uVar6 = lVar3 + 0x3e1;
      if (sVar7 < uVar6 || sVar7 - uVar6 == 0) {
        sVar7 = uVar6;
      }
      param_2[2] = sVar7;
      pvVar2 = realloc(pvVar2,sVar7);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar3 = param_2[1];
      uVar6 = lVar3 + 1;
    }
    param_2[1] = uVar6;
    *(undefined1 *)((long)pvVar2 + lVar3) = 0x28;
    lVar3 = param_2[1];
    if (*(long *)(param_1 + 0x18) != 0) {
      lVar8 = 0;
      bVar10 = true;
      do {
        while( true ) {
          lVar5 = lVar3;
          if (!bVar10) {
            pvVar2 = (void *)*param_2;
            if ((ulong)param_2[2] < lVar3 + 2U) {
              sVar7 = param_2[2] * 2;
              uVar6 = lVar3 + 0x3e2;
              if (sVar7 < uVar6 || sVar7 - uVar6 == 0) {
                sVar7 = uVar6;
              }
              param_2[2] = sVar7;
              pvVar2 = realloc(pvVar2,sVar7);
              *param_2 = pvVar2;
              if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
              lVar5 = param_2[1];
            }
            *(undefined2 *)((long)pvVar2 + lVar5) = 0x202c;
            lVar5 = param_2[1] + 2;
            param_2[1] = lVar5;
          }
          FUN_0403bfcc(*(undefined8 *)(*(long *)(param_1 + 0x10) + lVar8 * 8),param_2,0x12,0);
          lVar4 = param_2[1];
          if (lVar5 == lVar4) break;
          bVar10 = false;
          lVar8 = lVar8 + 1;
          lVar3 = lVar4;
          if (lVar8 == *(long *)(param_1 + 0x18)) goto LAB_0403c76c;
        }
        param_2[1] = lVar3;
        lVar8 = lVar8 + 1;
      } while (lVar8 != *(long *)(param_1 + 0x18));
    }
LAB_0403c76c:
    uVar6 = lVar3 + 1;
    pvVar2 = (void *)*param_2;
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + -1;
    if ((ulong)param_2[2] < uVar6) {
      sVar7 = param_2[2] * 2;
      uVar6 = lVar3 + 0x3e1;
      if (sVar7 < uVar6 || sVar7 - uVar6 == 0) {
        sVar7 = uVar6;
      }
      param_2[2] = sVar7;
      pvVar2 = realloc(pvVar2,sVar7);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar3 = param_2[1];
      uVar6 = lVar3 + 1;
    }
    param_2[1] = uVar6;
    *(undefined1 *)((long)pvVar2 + lVar3) = 0x29;
    lVar3 = param_2[1];
  }
  pvVar2 = (void *)*param_2;
  if ((ulong)param_2[2] < lVar3 + 1U) {
    sVar7 = param_2[2] * 2;
    uVar6 = lVar3 + 0x3e1;
    if (sVar7 < uVar6 || sVar7 - uVar6 == 0) {
      sVar7 = uVar6;
    }
    param_2[2] = sVar7;
    pvVar2 = realloc(pvVar2,sVar7);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar3 = param_2[1];
  }
  *(undefined1 *)((long)pvVar2 + lVar3) = 0x20;
  plVar9 = *(long **)(param_1 + 0x20);
  lVar3 = *plVar9;
  param_2[1] = param_2[1] + 1;
  (**(code **)(lVar3 + 0x20))(plVar9,param_2);
  if ((*(ushort *)((long)plVar9 + 9) & 0xc0) != 0x40) {
    (**(code **)(*plVar9 + 0x28))(plVar9,param_2);
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    lVar3 = param_2[1];
    pvVar2 = (void *)*param_2;
    uVar6 = lVar3 + 1;
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
    if ((ulong)param_2[2] < uVar6) {
      sVar7 = param_2[2] * 2;
      uVar6 = lVar3 + 0x3e1;
      if (sVar7 < uVar6 || sVar7 - uVar6 == 0) {
        sVar7 = uVar6;
      }
      param_2[2] = sVar7;
      pvVar2 = realloc(pvVar2,sVar7);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar3 = param_2[1];
      uVar6 = lVar3 + 1;
    }
    param_2[1] = uVar6;
    *(undefined1 *)((long)pvVar2 + lVar3) = 0x28;
    lVar3 = param_2[1];
    if (*(long *)(param_1 + 0x30) != 0) {
      lVar8 = 0;
      bVar10 = true;
      do {
        while( true ) {
          lVar5 = lVar3;
          if (!bVar10) {
            pvVar2 = (void *)*param_2;
            if ((ulong)param_2[2] < lVar3 + 2U) {
              sVar7 = param_2[2] * 2;
              uVar6 = lVar3 + 0x3e2;
              if (sVar7 < uVar6 || sVar7 - uVar6 == 0) {
                sVar7 = uVar6;
              }
              param_2[2] = sVar7;
              pvVar2 = realloc(pvVar2,sVar7);
              *param_2 = pvVar2;
              if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
              lVar5 = param_2[1];
            }
            *(undefined2 *)((long)pvVar2 + lVar5) = 0x202c;
            lVar5 = param_2[1] + 2;
            param_2[1] = lVar5;
          }
          FUN_0403bfcc(*(undefined8 *)(*(long *)(param_1 + 0x28) + lVar8 * 8),param_2,0x12,0);
          lVar4 = param_2[1];
          if (lVar5 == lVar4) break;
          bVar10 = false;
          lVar8 = lVar8 + 1;
          lVar3 = lVar4;
          if (lVar8 == *(long *)(param_1 + 0x30)) goto LAB_0403c96c;
        }
        param_2[1] = lVar3;
        lVar8 = lVar8 + 1;
      } while (lVar8 != *(long *)(param_1 + 0x30));
    }
LAB_0403c96c:
    uVar6 = lVar3 + 1;
    pvVar2 = (void *)*param_2;
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + -1;
    if ((ulong)param_2[2] < uVar6) {
      sVar7 = param_2[2] * 2;
      uVar6 = lVar3 + 0x3e1;
      if (sVar7 < uVar6 || sVar7 - uVar6 == 0) {
        sVar7 = uVar6;
      }
      param_2[2] = sVar7;
      pvVar2 = realloc(pvVar2,sVar7);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar3 = param_2[1];
      uVar6 = lVar3 + 1;
    }
    param_2[1] = uVar6;
    *(undefined1 *)((long)pvVar2 + lVar3) = 0x29;
  }
  return;
}

