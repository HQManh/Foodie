// rea decompile_all
// name: FUN_04043c6c
// address: 0x4043c6c
// body: available
// range: 0x4043c6c-0x4043ea7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4043e94 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4043e98 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4043e9c to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4043ea0 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4043ea4 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_04043c6c(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  int iVar2;
  void *pvVar3;
  size_t __size;
  long lVar4;
  long lVar5;
  size_t sVar6;
  undefined1 auVar7 [16];
  
  lVar4 = param_2[1];
  pvVar3 = (void *)*param_2;
  if ((ulong)param_2[2] < lVar4 + 5U) {
    sVar6 = param_2[2] * 2;
    uVar1 = lVar4 + 0x3e5;
    if (sVar6 < uVar1 || sVar6 - uVar1 == 0) {
      sVar6 = uVar1;
    }
    param_2[2] = sVar6;
    pvVar3 = realloc(pvVar3,sVar6);
    *param_2 = pvVar3;
    if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar4 = param_2[1];
  }
  *(undefined1 *)((undefined4 *)((long)pvVar3 + lVar4) + 1) = 0x3a;
  *(undefined4 *)((long)pvVar3 + lVar4) = 0x3a647473;
  lVar4 = *param_1;
  param_2[1] = param_2[1] + 5;
  auVar7 = (**(code **)(lVar4 + 0x30))(param_1);
  sVar6 = auVar7._8_8_;
  if (sVar6 != 0) {
    lVar4 = param_2[1];
    pvVar3 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar4 + sVar6) {
      __size = param_2[2] * 2;
      uVar1 = lVar4 + sVar6 + 0x3e0;
      if (__size < uVar1 || __size - uVar1 == 0) {
        __size = uVar1;
      }
      param_2[2] = __size;
      pvVar3 = realloc(pvVar3,__size);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar4 = param_2[1];
    }
    memcpy((void *)((long)pvVar3 + lVar4),auVar7._0_8_,sVar6);
    param_2[1] = param_2[1] + sVar6;
  }
  if (1 < *(uint *)((long)param_1 + 0xc)) {
    lVar4 = param_2[1];
    pvVar3 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar4 + 0x1dU) {
      sVar6 = param_2[2] * 2;
      uVar1 = lVar4 + 0x3fd;
      if (sVar6 < uVar1 || sVar6 - uVar1 == 0) {
        sVar6 = uVar1;
      }
      param_2[2] = sVar6;
      pvVar3 = realloc(pvVar3,sVar6);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar4 = param_2[1];
    }
    builtin_strncpy((char *)((long)pvVar3 + lVar4),"<char, std::char_traits<char>",0x1d);
    lVar5 = param_2[1];
    iVar2 = *(int *)((long)param_1 + 0xc);
    lVar4 = lVar5 + 0x1d;
    param_2[1] = lVar4;
    if (iVar2 == 2) {
      pvVar3 = (void *)*param_2;
      if ((ulong)param_2[2] < lVar5 + 0x33U) {
        sVar6 = param_2[2] * 2;
        uVar1 = lVar5 + 0x413;
        if (sVar6 < uVar1 || sVar6 - uVar1 == 0) {
          sVar6 = uVar1;
        }
        param_2[2] = sVar6;
        pvVar3 = realloc(pvVar3,sVar6);
        *param_2 = pvVar3;
        if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        lVar4 = param_2[1];
      }
      builtin_strncpy((char *)((long)pvVar3 + lVar4),", std::allocator<char>",0x16);
      lVar4 = param_2[1] + 0x16;
      param_2[1] = lVar4;
    }
    pvVar3 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar4 + 1U) {
      sVar6 = param_2[2] * 2;
      uVar1 = lVar4 + 0x3e1;
      if (sVar6 < uVar1 || sVar6 - uVar1 == 0) {
        sVar6 = uVar1;
      }
      param_2[2] = sVar6;
      pvVar3 = realloc(pvVar3,sVar6);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar4 = param_2[1];
    }
    *(undefined1 *)((long)pvVar3 + lVar4) = 0x3e;
    param_2[1] = param_2[1] + 1;
  }
  return;
}

