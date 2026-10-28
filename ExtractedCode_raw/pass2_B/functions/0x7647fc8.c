// rea decompile_all
// name: Newtonsoft.Json.JsonReader.<ReadArrayIntoByteArrayAsync>d__5$$MoveNext
// address: 0x7647fc8
// body: available
// range: 0x7647fc8-0x76480eb inclusive
// range: 0x76480f4-0x7648283 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76480d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7648144 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7648278 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x764827c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7648280 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_JsonReader_<ReadArrayIntoByteArrayAsync>d__5__MoveNext(int *param_1)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined4 uVar4;
  long *plVar5;
  long *plVar6;
  undefined1 auVar7 [16];
  undefined1 local_50 [16];
  
  if ((DAT_09522318 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091982f0);
    FUN_03f5c2a4(&DAT_09198358);
    FUN_03f5c2a4(&DAT_091751b8);
    FUN_03f5c2a4(&DAT_0919b908);
    FUN_03f5c2a4(&DAT_0919b9d8);
    FUN_03f5c2a4(&DAT_0919b9e0);
    FUN_03f5c2a4(&DAT_091ab740);
    FUN_03f5c2a4(&DAT_091ab710);
    FUN_03f5c2a4(&DAT_0917bdb8);
    FUN_03f5c2a4(&DAT_091bcba0);
    DAT_09522318 = 1;
  }
  plVar5 = *(long **)(param_1 + 8);
  local_50._0_8_ = 0;
  local_50._8_8_ = 0;
  if (*param_1 == 0) {
    local_50 = *(undefined1 (*) [16])(param_1 + 0xe);
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    *param_1 = -1;
    goto LAB_07648130;
  }
  uVar1 = thunk_FUN_03f9944c(DAT_0917bdb8);
  FUN_05720f1c(uVar1,DAT_091ab710);
  *(undefined8 *)(param_1 + 0xc) = uVar1;
  thunk_FUN_03f5d7b8(param_1 + 0xc,uVar1);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  do {
    lVar2 = (**(code **)(*plVar5 + 0x188))
                      (plVar5,*(undefined8 *)(param_1 + 10),*(undefined8 *)(*plVar5 + 400));
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    auVar7 = FUN_062e82b0(lVar2,0,DAT_091bcba0);
    local_50 = auVar7;
    uVar3 = FUN_06daadec(local_50,DAT_0919b9e0);
    if ((uVar3 & 1) == 0) {
      *param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 0xe) = local_50;
      thunk_FUN_03f5d7b8(param_1 + 0xe,0);
      if (*(int *)(DAT_091751b8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      FUN_045ded48(param_1 + 2,local_50,param_1,DAT_091982f0);
      return;
    }
LAB_07648130:
    uVar3 = FUN_06daae34(local_50,DAT_0919b9d8);
    if ((uVar3 & 1) == 0) {
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      plVar5[3] = 0;
      *(undefined4 *)(plVar5 + 2) = 0;
      thunk_FUN_03f5d7b8(plVar5 + 3,0);
    }
    else if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    plVar6 = (long *)(param_1 + 0xc);
    uVar3 = Newtonsoft_Json_JsonReader__ReadArrayElementIntoByteArrayReportDone(plVar5,*plVar6);
  } while ((uVar3 & 1) == 0);
  if (*plVar6 != 0) {
    lVar2 = FUN_05723350(*plVar6,DAT_091ab740);
    plVar5[3] = lVar2;
    *(undefined4 *)(plVar5 + 2) = 0x11;
    thunk_FUN_03f5d7b8(plVar5 + 3,lVar2);
    uVar4 = 8;
    if (((int)plVar5[5] == 0) && (uVar4 = 0xc, *(char *)((long)plVar5 + 0x71) != '\0')) {
      uVar4 = 8;
    }
    *(undefined4 *)((long)plVar5 + 0x24) = uVar4;
    *param_1 = -2;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    thunk_FUN_03f5d7b8(plVar6,0);
    if (*(int *)(DAT_091751b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    FUN_069f7d10(param_1 + 2,lVar2,DAT_09198358);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

