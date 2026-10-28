// rea decompile_all
// name: FUN_040420d0
// address: 0x40420d0
// body: available
// range: 0x40420d0-0x40424eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40424c8 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40424cc to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40424d0 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40424d4 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40424d8 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40424dc to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40424e0 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40424e4 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40424e8 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_040420d0(long param_1,undefined8 *param_2)

{
  void *pvVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  size_t sVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  bool bVar10;
  
  lVar4 = param_2[1];
  pvVar1 = (void *)*param_2;
  if ((ulong)param_2[2] < lVar4 + 8U) {
    sVar6 = param_2[2] * 2;
    uVar3 = lVar4 + 1000;
    if (sVar6 < uVar3 || sVar6 - uVar3 == 0) {
      sVar6 = uVar3;
    }
    param_2[2] = sVar6;
    pvVar1 = realloc(pvVar1,sVar6);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar4 = param_2[1];
  }
  *(undefined8 *)((long)pvVar1 + lVar4) = 0x7365726975716572;
  lVar5 = param_2[1];
  lVar7 = *(long *)(param_1 + 0x18);
  lVar4 = lVar5 + 8;
  param_2[1] = lVar4;
  if (lVar7 != 0) {
    uVar3 = lVar5 + 9;
    pvVar1 = (void *)*param_2;
    if ((ulong)param_2[2] < uVar3) {
      sVar6 = param_2[2] * 2;
      uVar3 = lVar5 + 0x3e9;
      if (sVar6 < uVar3 || sVar6 - uVar3 == 0) {
        sVar6 = uVar3;
      }
      param_2[2] = sVar6;
      pvVar1 = realloc(pvVar1,sVar6);
      *param_2 = pvVar1;
      if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar4 = param_2[1];
      uVar3 = lVar4 + 1;
    }
    param_2[1] = uVar3;
    *(undefined1 *)((long)pvVar1 + lVar4) = 0x20;
    lVar4 = param_2[1];
    pvVar1 = (void *)*param_2;
    uVar3 = lVar4 + 1;
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
    if ((ulong)param_2[2] < uVar3) {
      sVar6 = param_2[2] * 2;
      uVar3 = lVar4 + 0x3e1;
      if (sVar6 < uVar3 || sVar6 - uVar3 == 0) {
        sVar6 = uVar3;
      }
      param_2[2] = sVar6;
      pvVar1 = realloc(pvVar1,sVar6);
      *param_2 = pvVar1;
      if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar4 = param_2[1];
      uVar3 = lVar4 + 1;
    }
    param_2[1] = uVar3;
    *(undefined1 *)((long)pvVar1 + lVar4) = 0x28;
    lVar4 = param_2[1];
    if (*(long *)(param_1 + 0x18) != 0) {
      lVar5 = 0;
      bVar10 = true;
      do {
        while( true ) {
          lVar7 = lVar4;
          if (!bVar10) {
            pvVar1 = (void *)*param_2;
            if ((ulong)param_2[2] < lVar4 + 2U) {
              sVar6 = param_2[2] * 2;
              uVar3 = lVar4 + 0x3e2;
              if (sVar6 < uVar3 || sVar6 - uVar3 == 0) {
                sVar6 = uVar3;
              }
              param_2[2] = sVar6;
              pvVar1 = realloc(pvVar1,sVar6);
              *param_2 = pvVar1;
              if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
              lVar7 = param_2[1];
            }
            *(undefined2 *)((long)pvVar1 + lVar7) = 0x202c;
            lVar7 = param_2[1] + 2;
            param_2[1] = lVar7;
          }
          FUN_0403bfcc(*(undefined8 *)(*(long *)(param_1 + 0x10) + lVar5 * 8),param_2,0x12,0);
          lVar2 = param_2[1];
          if (lVar7 == lVar2) break;
          bVar10 = false;
          lVar5 = lVar5 + 1;
          lVar4 = lVar2;
          if (lVar5 == *(long *)(param_1 + 0x18)) goto LAB_040422bc;
        }
        param_2[1] = lVar4;
        lVar5 = lVar5 + 1;
      } while (lVar5 != *(long *)(param_1 + 0x18));
    }
LAB_040422bc:
    uVar3 = lVar4 + 1;
    pvVar1 = (void *)*param_2;
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + -1;
    if ((ulong)param_2[2] < uVar3) {
      sVar6 = param_2[2] * 2;
      uVar3 = lVar4 + 0x3e1;
      if (sVar6 < uVar3 || sVar6 - uVar3 == 0) {
        sVar6 = uVar3;
      }
      param_2[2] = sVar6;
      pvVar1 = realloc(pvVar1,sVar6);
      *param_2 = pvVar1;
      if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar4 = param_2[1];
      uVar3 = lVar4 + 1;
    }
    param_2[1] = uVar3;
    *(undefined1 *)((long)pvVar1 + lVar4) = 0x29;
    lVar4 = param_2[1];
  }
  uVar3 = lVar4 + 1;
  pvVar1 = (void *)*param_2;
  if ((ulong)param_2[2] < uVar3) {
    sVar6 = param_2[2] * 2;
    uVar3 = lVar4 + 0x3e1;
    if (sVar6 < uVar3 || sVar6 - uVar3 == 0) {
      sVar6 = uVar3;
    }
    param_2[2] = sVar6;
    pvVar1 = realloc(pvVar1,sVar6);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar4 = param_2[1];
    uVar3 = lVar4 + 1;
  }
  param_2[1] = uVar3;
  *(undefined1 *)((long)pvVar1 + lVar4) = 0x20;
  lVar4 = param_2[1];
  pvVar1 = (void *)*param_2;
  uVar3 = lVar4 + 1;
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
  if ((ulong)param_2[2] < uVar3) {
    sVar6 = param_2[2] * 2;
    uVar3 = lVar4 + 0x3e1;
    if (sVar6 < uVar3 || sVar6 - uVar3 == 0) {
      sVar6 = uVar3;
    }
    param_2[2] = sVar6;
    pvVar1 = realloc(pvVar1,sVar6);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar4 = param_2[1];
    uVar3 = lVar4 + 1;
  }
  param_2[1] = uVar3;
  *(undefined1 *)((long)pvVar1 + lVar4) = 0x7b;
  if (*(long *)(param_1 + 0x28) != 0) {
    puVar9 = *(undefined8 **)(param_1 + 0x20);
    lVar4 = *(long *)(param_1 + 0x28) << 3;
    do {
      plVar8 = (long *)*puVar9;
      (**(code **)(*plVar8 + 0x20))(plVar8,param_2);
      if ((*(ushort *)((long)plVar8 + 9) & 0xc0) != 0x40) {
        (**(code **)(*plVar8 + 0x28))(plVar8,param_2);
      }
      lVar4 = lVar4 + -8;
      puVar9 = puVar9 + 1;
    } while (lVar4 != 0);
  }
  lVar4 = param_2[1];
  pvVar1 = (void *)*param_2;
  uVar3 = lVar4 + 1;
  if ((ulong)param_2[2] < uVar3) {
    sVar6 = param_2[2] * 2;
    uVar3 = lVar4 + 0x3e1;
    if (sVar6 < uVar3 || sVar6 - uVar3 == 0) {
      sVar6 = uVar3;
    }
    param_2[2] = sVar6;
    pvVar1 = realloc(pvVar1,sVar6);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar4 = param_2[1];
    uVar3 = lVar4 + 1;
  }
  param_2[1] = uVar3;
  *(undefined1 *)((long)pvVar1 + lVar4) = 0x20;
  lVar4 = param_2[1];
  pvVar1 = (void *)*param_2;
  uVar3 = lVar4 + 1;
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + -1;
  if ((ulong)param_2[2] < uVar3) {
    sVar6 = param_2[2] * 2;
    uVar3 = lVar4 + 0x3e1;
    if (sVar6 < uVar3 || sVar6 - uVar3 == 0) {
      sVar6 = uVar3;
    }
    param_2[2] = sVar6;
    pvVar1 = realloc(pvVar1,sVar6);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar4 = param_2[1];
    uVar3 = lVar4 + 1;
  }
  param_2[1] = uVar3;
  *(undefined1 *)((long)pvVar1 + lVar4) = 0x7d;
  return;
}

