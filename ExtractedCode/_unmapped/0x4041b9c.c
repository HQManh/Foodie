// rea decompile_all
// name: FUN_04041b9c
// address: 0x4041b9c
// body: available
// range: 0x4041b9c-0x4041e7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4041e68 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4041e6c to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4041e70 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4041e74 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4041e78 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4041e7c to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_04041b9c(long param_1,undefined8 *param_2)

{
  char cVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  size_t sVar6;
  long *plVar7;
  
  lVar3 = param_2[1];
  pvVar2 = (void *)*param_2;
  if ((ulong)param_2[2] < lVar3 + 1U) {
    sVar6 = param_2[2] * 2;
    uVar5 = lVar3 + 0x3e1;
    if (sVar6 < uVar5 || sVar6 - uVar5 == 0) {
      sVar6 = uVar5;
    }
    param_2[2] = sVar6;
    pvVar2 = realloc(pvVar2,sVar6);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar3 = param_2[1];
  }
  *(undefined1 *)((long)pvVar2 + lVar3) = 0x20;
  lVar4 = param_2[1];
  cVar1 = *(char *)(param_1 + 0x18);
  lVar3 = lVar4 + 1;
  param_2[1] = lVar3;
  if ((cVar1 != '\0') || (*(long *)(param_1 + 0x20) != 0)) {
    uVar5 = lVar4 + 2;
    pvVar2 = (void *)*param_2;
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
    if ((ulong)param_2[2] < uVar5) {
      sVar6 = param_2[2] * 2;
      uVar5 = lVar4 + 0x3e2;
      if (sVar6 < uVar5 || sVar6 - uVar5 == 0) {
        sVar6 = uVar5;
      }
      param_2[2] = sVar6;
      pvVar2 = realloc(pvVar2,sVar6);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar3 = param_2[1];
      uVar5 = lVar3 + 1;
    }
    param_2[1] = uVar5;
    *(undefined1 *)((long)pvVar2 + lVar3) = 0x7b;
  }
  plVar7 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar7 + 0x20))(plVar7,param_2);
  if ((*(ushort *)((long)plVar7 + 9) & 0xc0) != 0x40) {
    (**(code **)(*plVar7 + 0x28))(plVar7,param_2);
  }
  if ((*(char *)(param_1 + 0x18) != '\0') || (*(long *)(param_1 + 0x20) != 0)) {
    lVar3 = param_2[1];
    pvVar2 = (void *)*param_2;
    uVar5 = lVar3 + 1;
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + -1;
    if ((ulong)param_2[2] < uVar5) {
      sVar6 = param_2[2] * 2;
      uVar5 = lVar3 + 0x3e1;
      if (sVar6 < uVar5 || sVar6 - uVar5 == 0) {
        sVar6 = uVar5;
      }
      param_2[2] = sVar6;
      pvVar2 = realloc(pvVar2,sVar6);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar3 = param_2[1];
      uVar5 = lVar3 + 1;
    }
    param_2[1] = uVar5;
    *(undefined1 *)((long)pvVar2 + lVar3) = 0x7d;
    if (*(char *)(param_1 + 0x18) != '\0') {
      lVar3 = param_2[1];
      pvVar2 = (void *)*param_2;
      if ((ulong)param_2[2] < lVar3 + 9U) {
        sVar6 = param_2[2] * 2;
        uVar5 = lVar3 + 0x3e9;
        if (sVar6 < uVar5 || sVar6 - uVar5 == 0) {
          sVar6 = uVar5;
        }
        param_2[2] = sVar6;
        pvVar2 = realloc(pvVar2,sVar6);
        *param_2 = pvVar2;
        if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        lVar3 = param_2[1];
      }
      builtin_strncpy((char *)((long)pvVar2 + lVar3)," noexcept",9);
      param_2[1] = param_2[1] + 9;
    }
    if (*(long *)(param_1 + 0x20) != 0) {
      lVar3 = param_2[1];
      pvVar2 = (void *)*param_2;
      if ((ulong)param_2[2] < lVar3 + 4U) {
        sVar6 = param_2[2] * 2;
        uVar5 = lVar3 + 0x3e4;
        if (sVar6 < uVar5 || sVar6 - uVar5 == 0) {
          sVar6 = uVar5;
        }
        param_2[2] = sVar6;
        pvVar2 = realloc(pvVar2,sVar6);
        *param_2 = pvVar2;
        if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        lVar3 = param_2[1];
      }
      *(undefined4 *)((long)pvVar2 + lVar3) = 0x203e2d20;
      plVar7 = *(long **)(param_1 + 0x20);
      lVar3 = *plVar7;
      param_2[1] = param_2[1] + 4;
      (**(code **)(lVar3 + 0x20))(plVar7,param_2);
      if ((*(ushort *)((long)plVar7 + 9) & 0xc0) != 0x40) {
        (**(code **)(*plVar7 + 0x28))(plVar7,param_2);
      }
    }
  }
  lVar3 = param_2[1];
  pvVar2 = (void *)*param_2;
  uVar5 = lVar3 + 1;
  if ((ulong)param_2[2] < uVar5) {
    sVar6 = param_2[2] * 2;
    uVar5 = lVar3 + 0x3e1;
    if (sVar6 < uVar5 || sVar6 - uVar5 == 0) {
      sVar6 = uVar5;
    }
    param_2[2] = sVar6;
    pvVar2 = realloc(pvVar2,sVar6);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar3 = param_2[1];
    uVar5 = lVar3 + 1;
  }
  param_2[1] = uVar5;
  *(undefined1 *)((long)pvVar2 + lVar3) = 0x3b;
  return;
}

