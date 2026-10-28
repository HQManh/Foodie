// rea decompile_all
// name: FUN_0404751c
// address: 0x404751c
// body: available
// range: 0x404751c-0x404798f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x404796c to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4047970 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4047974 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4047978 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x404797c to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4047980 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4047984 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4047988 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x404798c to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0404751c(long param_1,undefined8 *param_2)

{
  void *pvVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  size_t sVar7;
  long *plVar8;
  long lVar9;
  bool bVar10;
  
  lVar3 = param_2[1];
  pvVar1 = (void *)*param_2;
  uVar6 = lVar3 + 1;
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
  if ((ulong)param_2[2] < uVar6) {
    sVar7 = param_2[2] * 2;
    uVar6 = lVar3 + 0x3e1;
    if (sVar7 < uVar6 || sVar7 - uVar6 == 0) {
      sVar7 = uVar6;
    }
    param_2[2] = sVar7;
    pvVar1 = realloc(pvVar1,sVar7);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar3 = param_2[1];
    uVar6 = lVar3 + 1;
  }
  param_2[1] = uVar6;
  *(undefined1 *)((long)pvVar1 + lVar3) = 0x28;
  lVar3 = param_2[1];
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar9 = 0;
    bVar10 = true;
    do {
      while( true ) {
        lVar4 = lVar3;
        if (!bVar10) {
          pvVar1 = (void *)*param_2;
          if ((ulong)param_2[2] < lVar3 + 2U) {
            sVar7 = param_2[2] * 2;
            uVar6 = lVar3 + 0x3e2;
            if (sVar7 < uVar6 || sVar7 - uVar6 == 0) {
              sVar7 = uVar6;
            }
            param_2[2] = sVar7;
            pvVar1 = realloc(pvVar1,sVar7);
            *param_2 = pvVar1;
            if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            lVar4 = param_2[1];
          }
          *(undefined2 *)((long)pvVar1 + lVar4) = 0x202c;
          lVar4 = param_2[1] + 2;
          param_2[1] = lVar4;
        }
        FUN_0403bfcc(*(undefined8 *)(*(long *)(param_1 + 0x18) + lVar9 * 8),param_2,0x12,0);
        lVar5 = param_2[1];
        if (lVar4 == lVar5) break;
        bVar10 = false;
        lVar9 = lVar9 + 1;
        lVar3 = lVar5;
        if (lVar9 == *(long *)(param_1 + 0x20)) goto LAB_04047658;
      }
      param_2[1] = lVar3;
      lVar9 = lVar9 + 1;
    } while (lVar9 != *(long *)(param_1 + 0x20));
  }
LAB_04047658:
  uVar6 = lVar3 + 1;
  pvVar1 = (void *)*param_2;
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + -1;
  if ((ulong)param_2[2] < uVar6) {
    sVar7 = param_2[2] * 2;
    uVar6 = lVar3 + 0x3e1;
    if (sVar7 < uVar6 || sVar7 - uVar6 == 0) {
      sVar7 = uVar6;
    }
    param_2[2] = sVar7;
    pvVar1 = realloc(pvVar1,sVar7);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar3 = param_2[1];
    uVar6 = lVar3 + 1;
  }
  param_2[1] = uVar6;
  *(undefined1 *)((long)pvVar1 + lVar3) = 0x29;
  (**(code **)(**(long **)(param_1 + 0x10) + 0x28))(*(long **)(param_1 + 0x10),param_2);
  uVar2 = *(uint *)(param_1 + 0x28);
  if ((uVar2 & 1) != 0) {
    lVar3 = param_2[1];
    pvVar1 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar3 + 6U) {
      sVar7 = param_2[2] * 2;
      uVar6 = lVar3 + 0x3e6;
      if (sVar7 < uVar6 || sVar7 - uVar6 == 0) {
        sVar7 = uVar6;
      }
      param_2[2] = sVar7;
      pvVar1 = realloc(pvVar1,sVar7);
      *param_2 = pvVar1;
      if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar3 = param_2[1];
    }
    *(undefined2 *)((undefined4 *)((long)pvVar1 + lVar3) + 1) = 0x7473;
    *(undefined4 *)((long)pvVar1 + lVar3) = 0x6e6f6320;
    uVar2 = *(uint *)(param_1 + 0x28);
    param_2[1] = param_2[1] + 6;
  }
  if ((uVar2 >> 1 & 1) != 0) {
    lVar3 = param_2[1];
    pvVar1 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar3 + 9U) {
      sVar7 = param_2[2] * 2;
      uVar6 = lVar3 + 0x3e9;
      if (sVar7 < uVar6 || sVar7 - uVar6 == 0) {
        sVar7 = uVar6;
      }
      param_2[2] = sVar7;
      pvVar1 = realloc(pvVar1,sVar7);
      *param_2 = pvVar1;
      if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar3 = param_2[1];
    }
    builtin_strncpy((char *)((long)pvVar1 + lVar3)," volatile",9);
    uVar2 = *(uint *)(param_1 + 0x28);
    param_2[1] = param_2[1] + 9;
  }
  if ((uVar2 >> 2 & 1) != 0) {
    lVar3 = param_2[1];
    pvVar1 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar3 + 9U) {
      sVar7 = param_2[2] * 2;
      uVar6 = lVar3 + 0x3e9;
      if (sVar7 < uVar6 || sVar7 - uVar6 == 0) {
        sVar7 = uVar6;
      }
      param_2[2] = sVar7;
      pvVar1 = realloc(pvVar1,sVar7);
      *param_2 = pvVar1;
      if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar3 = param_2[1];
    }
    builtin_strncpy((char *)((long)pvVar1 + lVar3)," restrict",9);
    param_2[1] = param_2[1] + 9;
  }
  if (*(char *)(param_1 + 0x2c) == '\x02') {
    lVar3 = param_2[1];
    pvVar1 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar3 + 3U) {
      sVar7 = param_2[2] * 2;
      uVar6 = lVar3 + 0x3e3;
      if (sVar7 < uVar6 || sVar7 - uVar6 == 0) {
        sVar7 = uVar6;
      }
      param_2[2] = sVar7;
      pvVar1 = realloc(pvVar1,sVar7);
      *param_2 = pvVar1;
      if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar3 = param_2[1];
    }
    *(undefined1 *)((undefined2 *)((long)pvVar1 + lVar3) + 1) = 0x26;
    *(undefined2 *)((long)pvVar1 + lVar3) = 0x2620;
    lVar3 = 3;
  }
  else {
    if (*(char *)(param_1 + 0x2c) != '\x01') goto LAB_040478ac;
    lVar3 = param_2[1];
    pvVar1 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar3 + 2U) {
      sVar7 = param_2[2] * 2;
      uVar6 = lVar3 + 0x3e2;
      if (sVar7 < uVar6 || sVar7 - uVar6 == 0) {
        sVar7 = uVar6;
      }
      param_2[2] = sVar7;
      pvVar1 = realloc(pvVar1,sVar7);
      *param_2 = pvVar1;
      if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar3 = param_2[1];
    }
    *(undefined2 *)((long)pvVar1 + lVar3) = 0x2620;
    lVar3 = 2;
  }
  param_2[1] = param_2[1] + lVar3;
LAB_040478ac:
  if (*(long *)(param_1 + 0x30) != 0) {
    lVar3 = param_2[1];
    pvVar1 = (void *)*param_2;
    uVar6 = lVar3 + 1;
    if ((ulong)param_2[2] < uVar6) {
      sVar7 = param_2[2] * 2;
      uVar6 = lVar3 + 0x3e1;
      if (sVar7 < uVar6 || sVar7 - uVar6 == 0) {
        sVar7 = uVar6;
      }
      param_2[2] = sVar7;
      pvVar1 = realloc(pvVar1,sVar7);
      *param_2 = pvVar1;
      if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar3 = param_2[1];
      uVar6 = lVar3 + 1;
    }
    param_2[1] = uVar6;
    *(undefined1 *)((long)pvVar1 + lVar3) = 0x20;
    plVar8 = *(long **)(param_1 + 0x30);
    (**(code **)(*plVar8 + 0x20))(plVar8,param_2);
    if ((*(ushort *)((long)plVar8 + 9) & 0xc0) != 0x40) {
                    /* WARNING: Could not recover jumptable at 0x04047968. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar8 + 0x28))(plVar8,param_2);
      return;
    }
  }
  return;
}

