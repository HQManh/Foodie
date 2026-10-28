// rea decompile_all
// name: FUN_04045464
// address: 0x4045464
// body: available
// range: 0x4045464-0x4045933 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4045910 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4045914 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4045918 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x404591c to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4045920 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4045924 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4045928 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x404592c to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4045930 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_04045464(long param_1,undefined8 *param_2)

{
  void *pvVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  size_t sVar8;
  long lVar9;
  bool bVar10;
  
  lVar4 = param_2[1];
  pvVar1 = (void *)*param_2;
  uVar7 = lVar4 + 1;
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
  if ((ulong)param_2[2] < uVar7) {
    sVar8 = param_2[2] * 2;
    uVar7 = lVar4 + 0x3e1;
    if (sVar8 < uVar7 || sVar8 - uVar7 == 0) {
      sVar8 = uVar7;
    }
    param_2[2] = sVar8;
    pvVar1 = realloc(pvVar1,sVar8);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar4 = param_2[1];
    uVar7 = lVar4 + 1;
  }
  param_2[1] = uVar7;
  *(undefined1 *)((long)pvVar1 + lVar4) = 0x28;
  lVar4 = param_2[1];
  if (*(long *)(param_1 + 0x28) != 0) {
    lVar9 = 0;
    bVar10 = true;
    do {
      while( true ) {
        lVar5 = lVar4;
        if (!bVar10) {
          pvVar1 = (void *)*param_2;
          if ((ulong)param_2[2] < lVar4 + 2U) {
            sVar8 = param_2[2] * 2;
            uVar7 = lVar4 + 0x3e2;
            if (sVar8 < uVar7 || sVar8 - uVar7 == 0) {
              sVar8 = uVar7;
            }
            param_2[2] = sVar8;
            pvVar1 = realloc(pvVar1,sVar8);
            *param_2 = pvVar1;
            if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            lVar5 = param_2[1];
          }
          *(undefined2 *)((long)pvVar1 + lVar5) = 0x202c;
          lVar5 = param_2[1] + 2;
          param_2[1] = lVar5;
        }
        FUN_0403bfcc(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar9 * 8),param_2,0x12,0);
        lVar6 = param_2[1];
        if (lVar5 == lVar6) break;
        bVar10 = false;
        lVar9 = lVar9 + 1;
        lVar4 = lVar6;
        if (lVar9 == *(long *)(param_1 + 0x28)) goto LAB_040455a0;
      }
      param_2[1] = lVar4;
      lVar9 = lVar9 + 1;
    } while (lVar9 != *(long *)(param_1 + 0x28));
  }
LAB_040455a0:
  uVar7 = lVar4 + 1;
  pvVar1 = (void *)*param_2;
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + -1;
  if ((ulong)param_2[2] < uVar7) {
    sVar8 = param_2[2] * 2;
    uVar7 = lVar4 + 0x3e1;
    if (sVar8 < uVar7 || sVar8 - uVar7 == 0) {
      sVar8 = uVar7;
    }
    param_2[2] = sVar8;
    pvVar1 = realloc(pvVar1,sVar8);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar4 = param_2[1];
    uVar7 = lVar4 + 1;
  }
  param_2[1] = uVar7;
  *(undefined1 *)((long)pvVar1 + lVar4) = 0x29;
  plVar2 = *(long **)(param_1 + 0x10);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2,param_2);
  }
  uVar3 = *(uint *)(param_1 + 0x40);
  if ((uVar3 & 1) != 0) {
    lVar4 = param_2[1];
    pvVar1 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar4 + 6U) {
      sVar8 = param_2[2] * 2;
      uVar7 = lVar4 + 0x3e6;
      if (sVar8 < uVar7 || sVar8 - uVar7 == 0) {
        sVar8 = uVar7;
      }
      param_2[2] = sVar8;
      pvVar1 = realloc(pvVar1,sVar8);
      *param_2 = pvVar1;
      if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar4 = param_2[1];
    }
    *(undefined2 *)((undefined4 *)((long)pvVar1 + lVar4) + 1) = 0x7473;
    *(undefined4 *)((long)pvVar1 + lVar4) = 0x6e6f6320;
    uVar3 = *(uint *)(param_1 + 0x40);
    param_2[1] = param_2[1] + 6;
  }
  if ((uVar3 >> 1 & 1) != 0) {
    lVar4 = param_2[1];
    pvVar1 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar4 + 9U) {
      sVar8 = param_2[2] * 2;
      uVar7 = lVar4 + 0x3e9;
      if (sVar8 < uVar7 || sVar8 - uVar7 == 0) {
        sVar8 = uVar7;
      }
      param_2[2] = sVar8;
      pvVar1 = realloc(pvVar1,sVar8);
      *param_2 = pvVar1;
      if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar4 = param_2[1];
    }
    builtin_strncpy((char *)((long)pvVar1 + lVar4)," volatile",9);
    uVar3 = *(uint *)(param_1 + 0x40);
    param_2[1] = param_2[1] + 9;
  }
  if ((uVar3 >> 2 & 1) != 0) {
    lVar4 = param_2[1];
    pvVar1 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar4 + 9U) {
      sVar8 = param_2[2] * 2;
      uVar7 = lVar4 + 0x3e9;
      if (sVar8 < uVar7 || sVar8 - uVar7 == 0) {
        sVar8 = uVar7;
      }
      param_2[2] = sVar8;
      pvVar1 = realloc(pvVar1,sVar8);
      *param_2 = pvVar1;
      if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar4 = param_2[1];
    }
    builtin_strncpy((char *)((long)pvVar1 + lVar4)," restrict",9);
    param_2[1] = param_2[1] + 9;
  }
  if (*(char *)(param_1 + 0x44) == '\x02') {
    lVar4 = param_2[1];
    pvVar1 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar4 + 3U) {
      sVar8 = param_2[2] * 2;
      uVar7 = lVar4 + 0x3e3;
      if (sVar8 < uVar7 || sVar8 - uVar7 == 0) {
        sVar8 = uVar7;
      }
      param_2[2] = sVar8;
      pvVar1 = realloc(pvVar1,sVar8);
      *param_2 = pvVar1;
      if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar4 = param_2[1];
    }
    *(undefined1 *)((undefined2 *)((long)pvVar1 + lVar4) + 1) = 0x26;
    *(undefined2 *)((long)pvVar1 + lVar4) = 0x2620;
    lVar4 = 3;
  }
  else {
    if (*(char *)(param_1 + 0x44) != '\x01') goto LAB_040457f8;
    lVar4 = param_2[1];
    pvVar1 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar4 + 2U) {
      sVar8 = param_2[2] * 2;
      uVar7 = lVar4 + 0x3e2;
      if (sVar8 < uVar7 || sVar8 - uVar7 == 0) {
        sVar8 = uVar7;
      }
      param_2[2] = sVar8;
      pvVar1 = realloc(pvVar1,sVar8);
      *param_2 = pvVar1;
      if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar4 = param_2[1];
    }
    *(undefined2 *)((long)pvVar1 + lVar4) = 0x2620;
    lVar4 = 2;
  }
  param_2[1] = param_2[1] + lVar4;
LAB_040457f8:
  plVar2 = *(long **)(param_1 + 0x30);
  if ((plVar2 != (long *)0x0) &&
     ((**(code **)(*plVar2 + 0x20))(plVar2,param_2), (*(ushort *)((long)plVar2 + 9) & 0xc0) != 0x40)
     ) {
    (**(code **)(*plVar2 + 0x28))(plVar2,param_2);
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    lVar4 = param_2[1];
    pvVar1 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar4 + 10U) {
      sVar8 = param_2[2] * 2;
      uVar7 = lVar4 + 0x3ea;
      if (sVar8 < uVar7 || sVar8 - uVar7 == 0) {
        sVar8 = uVar7;
      }
      param_2[2] = sVar8;
      pvVar1 = realloc(pvVar1,sVar8);
      *param_2 = pvVar1;
      if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar4 = param_2[1];
    }
    builtin_strncpy((char *)((long)pvVar1 + lVar4)," requires ",10);
    plVar2 = *(long **)(param_1 + 0x38);
    lVar4 = *plVar2;
    param_2[1] = param_2[1] + 10;
    (**(code **)(lVar4 + 0x20))(plVar2,param_2);
    if ((*(ushort *)((long)plVar2 + 9) & 0xc0) != 0x40) {
                    /* WARNING: Could not recover jumptable at 0x0404590c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x28))(plVar2,param_2);
      return;
    }
  }
  return;
}

